import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image
from arucosrvmsg.srv import ArucoMarkers
from cv_bridge import CvBridge
import cv2

class ArucoMarkerClient(Node):
    def __init__(self):
        super().__init__('aruco_marker_client')
        self.cli = self.create_client(ArucoMarkers, 'detect_aruco')
        while not self.cli.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('Service not available, waiting...')
        self.req = ArucoMarkers.Request()
        self.bridge = CvBridge()

    def send_request(self, image_path):
        # Read the image and convert it to a ROS Image message
        cv_image = cv2.imread(image_path)

        if cv_image is None:
            self.get_logger().error(f"Failed to load image at {image_path}. Check the path.")
            return

        self.req.image = self.bridge.cv2_to_imgmsg(cv_image, 'bgr8')

        self.future = self.cli.call_async(self.req)

def main(args=None):
    rclpy.init(args=args)
    node = ArucoMarkerClient()
    node.send_request('/home/shridhar/Workspaces/mrt_ws/Task2/src/arucoserver/requests/Aruco1.jpg')

    while rclpy.ok():
        rclpy.spin_once(node)
        if node.future.done():
            try:
                response = node.future.result()
                node.get_logger().info(f"Detected IDs: {response.ids}")
                for bbox in response.bounding_boxes:
                    node.get_logger().info(f"Bounding Box: {bbox}")
            except Exception as e:
                node.get_logger().info(f'Service call failed {e}')
            break

    rclpy.shutdown()

if __name__ == '__main__':
    main()

