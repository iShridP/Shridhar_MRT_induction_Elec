***************************

EDIT the robot.launch.py present in Task3/src/bobthebot/launch directory. Ensure that the directory location of the main.urdf.xacro file as matching your directory location path.

Run the launch file inside the launch directory with:

ros2 launch robot.launch.py


run rviz2 (ros2 run rviz2 rviz2) and select the fixed frame, add displays for tf and for robot body.

run:
	ros2 run joint_state_publisher_gui joint_state_publisher_gui
	Edit variables
	this has to be installed beforehand.


