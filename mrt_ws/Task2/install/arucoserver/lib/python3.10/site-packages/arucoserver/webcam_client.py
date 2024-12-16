#! usr/bin/env python3



import rclpy
from rclpy.node import Node

from sensor_msgs.msg import Image
from arucosrvmsg.srv import Service

import cv2
from cv_bridge import CvBridge

class WebcamNode(Node):
    def __init__(self, camera):

        self.cam = camera
        super().__init__('WebcamNode')
        self.client = self.create_client(Service,'DetectionService')

        self.bridge = CvBridge()

        self.request = Service.Request()

    def sendRequests(self):

        
        self.webcam = cv2.VideoCapture(int(self.cam)) # 0 for default, 1,2,3... for external

        success, frame = self.webcam.read()

        if not success:
            print("Unable to access camera")

        else:

            while success:

                self.request.image = self.bridge.cv2_to_imgmsg(frame, encoding='bgr8')

                self.future = self.client.call_async(self.request)

                rclpy.spin_until_future_complete(self,self.future)

                response = self.future.result()

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
                
            

                success, frame = self.webcam.read()

def main(args = None):

    Lcam = []

    # Test multiple indices to find connected webcams
    for i in range(10):  # Check indices
        cap = cv2.VideoCapture(i)
        if cap.isOpened():
            Lcam.append(i)
            cap.release()

    if len(Lcam) == 0:
        print("No Cameras found")


    else: 
        print("Cameras found at index:", Lcam)

        print("Camera to use: ")

        camindex = int(input())

        rclpy.init(args = args)

        webcam_node = WebcamNode(camindex)

        webcam_node.sendRequests()

    rclpy.shutdown()

    webcam_node.destroy_node()

if __name__ == "__main__":
    main()