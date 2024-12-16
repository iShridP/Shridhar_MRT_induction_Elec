#! urv/env/bin python3

import os

import rclpy
from rclpy.node import Node

from arucosrvmsg.srv import Service
from arucosrvmsg.msg import Markers

from sensor_msgs.msg import Image

import cv2
from cv_bridge import CvBridge

class VideoClient(Node):
    def __init__(self):
        super().__init__('VideoClient')

        self.client = self.create_client(Service, 'DetectionService')

        while not self.client.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('Waiting for service DetectionService...')


        self.bridge = CvBridge()

        self.request = Service.Request()


    def sendRequest(self):
        
        script_path = os.path.abspath(__file__)
        script_dir = os.path.dirname(script_path)


        video_path = f"/home/shridhar/Workspaces/mrt_ws/Task3/src/arucoserver/arucoserver/Requests/Aruco_1.MOV"

        print(video_path)

        if not os.path.exists(video_path):
            raise FileNotFoundError(f"Video file not found at {video_path}")

        video = cv2.VideoCapture(video_path)


        success, frame = video.read()

        while success:

            image_msg = self.bridge.cv2_to_imgmsg(frame, encoding='bgr8')

            self.request.image = image_msg

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
            
        

            success, frame = video.read()


        print("Finished With Video")

def main(args = None):

    rclpy.init(args = args)

    video_client = VideoClient()

    video_client.sendRequest()

    rclpy.shutdown()

    video_client.destroy_node()


if __name__ == "__main__":
    main()

    
