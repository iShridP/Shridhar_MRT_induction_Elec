import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image
from arucosrvmsg.srv import ArucoMarkers
from cv_bridge import CvBridge
import cv2
import os


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

currentframe = 0

def createImagePath():

    global currentframe

    print("Creating path...")
    cam = cv2.VideoCapture("/home/shridhar/Workspaces/mrt_ws/Task2/src/arucoserver/requests/Aruco_1.MOV")

    try:
        # Create a folder for data from the video
        if not os.path.exists('data'):
            os.makedirs('data')

    except OSError:
        print('Error: Unable to make Directory for images.')


    ret,frame = cam.read()
    
    while ret:

        # If the video has frames left, continue creating images
        name = f'./data/frame{currentframe}.jpg'
        print(f'Creating... {name}')
        cv2.imwrite(name, frame)
        currentframe += 1  # Increment the frame counter

        ret, frame = cam.read()


    cam.release()
    cv2.destroyAllWindows()
    

i = 1

def main():
    createImagePath()
    rclpy.init()
    send_all_images()
    rclpy.shutdown()

def send_all_images():
    global i

    global currentframe

    image_directory = "/home/shridhar/Workspaces/mrt_ws/Task2/data/"
    #images = [os.path.join(image_directory, f) for f in os.listdir(image_directory) if f.endswith('.jpg')]

    while i < currentframe:
        image_path = "/home/shridhar/Workspaces/mrt_ws/Task2/data/frame"+str(i)+".jpg"

        i += 1

        # Ensure the directory contains images
        if not image_path:
            print("No images found in the directory.")
            return


        node = ArucoMarkerClient()

        
        node.get_logger().info(f"Processing image: {image_path}")
        node.send_request(image_path)
        
        while rclpy.ok():
            rclpy.spin_once(node)
            if node.future.done():
                try:
                    response = node.future.result()
                    node.get_logger().info(f"Detected IDs: {response.ids}")
                    print("")
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
                    #node.get_logger().error(f"Failed to delete image {image_path}: {e}")
                    print("",end='')
                break

   



if __name__ == '__main__':
    createImagePath()  # Start the process of creating and sending images
