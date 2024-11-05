import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image
from arucosrvmsg.srv import ArucoMarkers  
from geometry_msgs.msg import Polygon, Point32
from cv_bridge import CvBridge
import cv2
import cv2.aruco as aruco

class ArucoMarkerService(Node):
    def __init__(self):
        super().__init__('aruco_marker_service')
        
        
        self.service = self.create_service(ArucoMarkers, 'detect_aruco', self.detect_aruco_callback)
        self.bridge = CvBridge()
        self.get_logger().info('Aruco Marker Service is ready')

    def detect_aruco_callback(self, request, response):
        
        cv_image = self.bridge.imgmsg_to_cv2(request.image, 'bgr8')

        
        aruco_dict = aruco.getPredefinedDictionary(aruco.DICT_4X4_250)  

     
        parameters = aruco.DetectorParameters()

       
        corners, ids, ignored = aruco.detectMarkers(cv_image, aruco_dict, parameters=parameters)

     
        if ids is not None:
            response.ids = ids.flatten().tolist()

           
            for marker_corners in corners:
                polygon = Polygon()
                for corner in marker_corners[0]:
                    point = Point32()
                    point.x = float(corner[0])  #x 
                    point.y = float(corner[1])  #y
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
