#! usr/env/bin python3

import rclpy
from rclpy.node import Node

from sensor_msgs.msg import Image
import cv2
from cv_bridge import CvBridge

import os

from arucosrvmsg.srv import Service

class ImageClient(Node):
    def __init__(self):
        super().__init__('ImageClient')

        self.bridge = CvBridge()

        script_path = os.path.abspath(__file__)
        script_dir = os.path.dirname(script_path)

        self.cv_image = cv2.imread(f'/home/shridhar/Workspaces/mrt_ws/Task2/src/arucoserver/arucoserver/Requests/ArucoImage.jpg')

        if self.cv_image is None:
            print("Cannot load image")
        
        else:

            self.image_msg = self.bridge.cv2_to_imgmsg(self.cv_image, encoding='bgr8')

            self.imageClient = self.create_client(Service,'DetectionService')

            self.request = Service.Request()

    def sendRequest(self):
        self.request.image = self.image_msg

        self.future = self.imageClient.call_async(self.request)

        rclpy.spin_until_future_complete(self,self.future)

        return self.future.result()

def main(args = None):
    rclpy.init(args=args)
    ImageClientNode = ImageClient()
    response = ImageClientNode.sendRequest()
    #response.markers.corners

    print(f"Detected {len(response.markers.ids)} ArUco Markers.")
    print("Ids: ", end = '')
    for k in response.markers.ids:
        if k != 'i':
            print(k, end = ' ')
    print()
    
    corners = []
    i = 0
    temp_point = []
    for point in response.markers.corners:
        if i%2 == 0:
            temp_point = [point]
        else:
            temp_point.append(point)
            corners.append(temp_point)

        if i%8 == 7:
            print(corners)
            corners = []
        
        i += 1
    
    print()

if __name__ == "__main__":
    main()


