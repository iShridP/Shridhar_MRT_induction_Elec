import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image
from arucosrvmsg.srv import ArucoMarkers  # Import the correct service type
from cv_bridge import CvBridge
import cv2
import cv2.aruco as aruco
from geometry_msgs.msg import Polygon, Point32


class ArucoMarkerService(Node):
    def __init__(self):
        super().__init__('aruco_marker_service')
        
        # Create service with the correct service type (ArucoMarkers from srv, not msg)
        self.service = self.create_service(ArucoMarkers, 'detect_aruco', self.detect_aruco_callback)
        self.bridge = CvBridge()
        self.get_logger().info('Aruco Marker Service is ready')

    def detect_aruco_callback(self, request, response):
        # Convert the image from ROS message to OpenCV format
        cv_image = self.bridge.imgmsg_to_cv2(request.image, 'bgr8')

        # Load the predefined dictionary for 6x6 ArUco markers
        aruco_dict = aruco.getPredefinedDictionary(aruco.DICT_4X4_250)  # Corrected function call

        # Create detector parameters object (using DetectorParameters instead of DetectorParameters_create)
        parameters = aruco.DetectorParameters()

        # Detect the markers in the image
        corners, ids, _ = aruco.detectMarkers(cv_image, aruco_dict, parameters=parameters)

        # If markers are detected, fill in the response
        if ids is not None:
            response.ids = ids.flatten().tolist()

            # For each detected marker, get the bounding box
            for marker_corners in corners:
                polygon = Polygon()
                for corner in marker_corners[0]:
                    point = Point32()
                    point.x = float(corner[0])  # Explicit conversion to float
                    point.y = float(corner[1])  # Explicit conversion to float
                    polygon.points.append(point)
                response.bounding_boxes.append(polygon)

            self.get_logger().info(f'Detected {len(response.ids)} markers')
        else:
            self.get_logger().info('No markers detected')
        
        return response

def main(args=None):
    rclpy.init(args=args)
    node = ArucoMarkerService()
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == '__main__':
    main()
