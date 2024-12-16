#! usr/env/bin python3

import rclpy
from rclpy.node import Node

from sensor_msgs.msg import Image
from arucosrvmsg.msg import Markers
from arucosrvmsg.srv import Service

from cv_bridge import CvBridge
import cv2

import numpy


class ArucoService(Node):
    def __init__(self):
        super().__init__('ArucoService')

        self.bridge = CvBridge()

        self.aruco_dict = cv2.aruco.getPredefinedDictionary(cv2.aruco.DICT_4X4_250)
        self.parameters = cv2.aruco.DetectorParameters()

        self.detector = cv2.aruco.ArucoDetector(self.aruco_dict, self.parameters)

        self.arucoservice = self.create_service(Service,'DetectionService',self.generateResponse)
        
        
    def generateResponse(self, request, response):
        cv_image = self.bridge.imgmsg_to_cv2(request.image, desired_encoding="bgr8")

        corners, ids, rejected = self.detector.detectMarkers(cv_image)

        idsL = []

        if ids is not None :
        
            ids = ids.flatten()

            for k in ids:
                idsL.append(int(k))
            #corners = corners.flatten()

            L = []

            for i in corners:
                Point = i.flatten()
                tempL = []
                for m in Point:
                    tempL.append(float(m))
                L.extend(tempL)


            response.markers.ids = idsL
    
            response.markers.corners = L
        
        else:
            response.markers.ids = []

            response.markers.corners = []

        print(f"Detected {len(idsL)} ArUco Markers")


        return response


def main(args = None):
    rclpy.init(args=args)
    ArucoServiceNode = ArucoService()
    rclpy.spin(ArucoServiceNode)
    rclpy.shutdown()
    ArucoServiceNode.destroy_node()

if __name__ == "__main__":
    main()
        

        


