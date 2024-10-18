#!/usr/bin/env python
import rclpy
from std_msgs.msg import String



def listener_callback(msg):
    print(msg.data)


def main(args=None):
    # Initialize the ROS 2 system
    rclpy.init(args=args)

    # Create a ROS 2 node named 'Sauron_subscriber'
    node = rclpy.create_node('Sauron_Subscriber')

    # Create a subscription to the 'listen_1' and 'listen_2' with a message type of String
    subscription1 = node.create_subscription(String, 'listen_1', listener_callback, 10)
    subscription2 = node.create_subscription(String, 'listen_2', listener_callback, 10)
    # Prevent unused variable warning
    subscription1
    subscription2

    try:
        # Start spinning the ROS 2 node
        rclpy.spin(node)
    finally:
        # Destroy the node explicitly when done spinning
        # (optional - otherwise it will be done automatically
        # when the garbage collector destroys the node object)
        node.destroy_node()

        # Shutdown the ROS 2 system
        rclpy.shutdown()

# Entry point to the script
if __name__ == '__main__':
    # Call the main function if this script is the main module
    main()
