#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from sensor_msgs.msg import LaserScan
from geometry_msgs.msg import Twist
import time

class ObstacleAvoidanceNode(Node):
    def __init__(self):
        super().__init__('obstacle_avoidance_exploration')

        # Publisher for velocity commands
        self.cmd_vel_pub = self.create_publisher(Twist, '/cmd_vel', 10)

        # Subscriber for LiDAR scan data
        self.scan_sub = self.create_subscription(LaserScan, '/lidar', self.lidar_callback, 10)

        # Initialize control variables
        self.safe_distance = 1.2  # Minimum safe distance from obstacles
        self.twist = Twist()  # Velocity command

        self.get_logger().info("Obstacle Avoidance Node Initialized")

        self.linear_speed = 1.0  # Linear velocity for motion
        self.angular_speed = 1.2  # Angular velocity for turning

        self.delayElement = 0

    def lidar_callback(self, scan_data):
        
        self.delayElement += 1

        if self.delayElement%5 != 0:
            return

        # Get the minimum distance readings from LiDAR data
        left_side = min(scan_data.ranges[0:45])  # Left side (90° to 135°)
        right_side = min(scan_data.ranges[315:360])  # Right side (225° to 270°)
        front = min(scan_data.ranges[90:270])  # Front (90° to 270°)

        if front < self.safe_distance and left_side < self.safe_distance and right_side < self.safe_distance:
            # If all directions are blocked, move backward slightly
            self.get_logger().info("All directions blocked. Moving backward!")
            self.twist.linear.x = -self.linear_speed
            self.twist.angular.z = self.angular_speed*2
        elif front < self.safe_distance:
            # If front is blocked, check the left and right
            if left_side > right_side:
                self.get_logger().info("Obstacle in front. Turning left.")
                self.twist.angular.z = -self.angular_speed  
            else:
                self.get_logger().info("Obstacle in front. Turning right.")
                self.twist.angular.z = self.angular_speed  
            self.twist.linear.x = 0.0  # Stop moving forward
        else:
            # Path is clear, move forward
            self.twist.linear.x = self.linear_speed 
            self.twist.angular.z = 0.0

        # Publish the velocity command
        self.cmd_vel_pub.publish(self.twist)

def main(args=None):
    rclpy.init(args=args)
    node = ObstacleAvoidanceNode()  
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()

if __name__ == "__main__":
    main()