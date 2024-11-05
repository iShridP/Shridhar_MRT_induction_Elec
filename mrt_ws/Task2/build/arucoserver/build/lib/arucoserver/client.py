import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image
from arucosrvmsg.srv import ArucoMarkers
from cv_bridge import CvBridge
import cv2

#/home/shridhar/Workspaces/mrt_ws/Task2

class ArucoMarkerClient(Node):
    def __init__(self):
        super().__init__('aruco_marker_client')
        self.client = self.create_client(ArucoMarkers, 'detect_aruco')
        while not self.client.wait_for_service(timeout_sec=0.2):
            self.get_logger().info('Service not available, waiting...')
        self.bridge = CvBridge()

        # Load or capture an image (You can replace this with image capture logic)
        self.image_path = '/home/shridhar/Workspaces/mrt_ws/Task2/src/arucoserver/requests/Aruco1.jpg'  # Example image file
        self.image = cv2.imread(self.image_path)
        
        # Convert image to a ROS message
        self.ros_image = self.bridge.cv2_to_imgmsg(self.image, 'bgr8')

    def send_request(self):
        # Create a request and set the image
        request = ArucoMarkers.Request()
        request.image = self.ros_image

        # Send the request and wait for a response
        future = self.client.call_async(request)
        rclpy.spin_until_future_complete(self, future)
        
        if future.result() is not None:
            response = future.result()
            self.process_response(response)
        else:
            self.get_logger().error('Service call failed')

    def process_response(self, response):
        # Process and log the response (detected marker IDs and bounding boxes)
        self.get_logger().info(f'Detected {len(response.ids)} markers')
        for i, marker_id in enumerate(response.ids):
            self.get_logger().info(f'Marker ID: {marker_id}')
            bounding_box = response.bounding_boxes[i]
            corners = [(pt.x, pt.y) for pt in bounding_box.points]
            self.get_logger().info(f'Bounding Box: {corners}')

def main(args=None):
    rclpy.init(args=args)
    client = ArucoMarkerClient()
    client.send_request()
    rclpy.shutdown()

if __name__ == '__main__':
    main()

