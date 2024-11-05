import os
import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image
from arucosrvmsg.srv import ArucoMarkers
from cv_bridge import CvBridge
import cv2
import time  # For adding delay

class ArucoMarkerClient(Node):
    def __init__(self):
        super().__init__('aruco_marker_client')
        self.cli = self.create_client(ArucoMarkers, 'detect_aruco')
        while not self.cli.wait_for_service(timeout_sec=0.2):
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


def capture_and_send_images(interval=0.2, num_images=100):
    print("Opening webcam...")
    cam = cv2.VideoCapture(0)  # 0 to capture from the default webcam

    if not cam.isOpened():
        print("Could not open the webcam.")
        return

    try:
        # Create a folder for saving images
        if not os.path.exists('data'):
            os.makedirs('data')
    except OSError:
        print('Error: Unable to create directory for images.')

    # Initialize ROS2 node for the ArucoMarkerClient
    rclpy.init()
    node = ArucoMarkerClient()

    currentframe = 0
    #while currentframe < num_images:
    while True:
        result, image = cam.read()

        if result:
            image_path = f"/home/shridhar/Workspaces/mrt_ws/Task2/data/webcamframe_{currentframe}.jpg"
            cv2.imwrite(image_path, image)
            print(f"Image {currentframe} captured and saved at {image_path}")

            # Send the image to the server
            node.get_logger().info(f"Processing image: {image_path}")
            node.send_request(image_path)

            while rclpy.ok():
                rclpy.spin_once(node)
                if node.future.done():
                    try:
                        response = node.future.result()
                        node.get_logger().info(f"Detected IDs: {response.ids}")
                        for bbox in response.bounding_boxes:
                            node.get_logger().info(f"Bounding Box: {bbox}")
                        print("")
                    except Exception as e:
                        node.get_logger().info(f'Service call failed {e}')

                    # Delete the image after processing
                    try:
                        os.remove(image_path)
                        #node.get_logger().info(f"Deleted image file: {image_path}")
                    except Exception as e:
                        print("",end = '')
                        #node.get_logger().error(f"Failed to delete image {image_path}: {e}")
                    break

            currentframe += 1

            # Sleep for the specified interval before capturing the next image
            time.sleep(interval)

        else:
            print("No image detected from the webcam.")

    #print("Done with scanning "+ str(num_images)+" at intervals of "+str(interval))

    cam.release()
    cv2.destroyAllWindows()
    rclpy.shutdown()

if __name__ == '__main__':
    capture_and_send_images(interval=0.2, num_images=100)  #dosent matter since entry point is capture_and_send_images
