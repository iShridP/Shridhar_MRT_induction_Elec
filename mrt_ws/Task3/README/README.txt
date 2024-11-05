***************************

EDIT the robot.launch.py present in Task3/src/bobthebot/launch directory. Ensure that the directory location of the main.urdf.xacro file as matching your directory location path.

Run the launch file inside the launch directory with:

ros2 launch robot.launch.py


run rviz2 (ros2 run rviz2 rviz2) and select the fixed frame, add displays for tf and for robot body.

IMPORTANT:
sometimes there will be given an error in which some links in the robot will not be connected to base link. In this case, edit the main.urdf.xacro file joint definitions by following:
	i) keep rviz2 and launch file running in the terimal
	ii) change each joint type to fixed, save the file.
	iii) ctrl+c the launch file terminal and launch the file again immediately.
	iv) rviz2 will now miraculously detect the joints and links.
	v) now edit the main.urdf.xacro file again and undo all joint changes by restoring them to their original type.
	vi) save the file.
	vii) ctrl+c the launch file terminal and launch the file again immediately.
	viii) rviz2 will now detect all links properly.
	ix) ensure rviz2 was running for the entire duration of these changes. Each time rviz2 is turned on again, this error comes back. idk why this happens to me nor why this fix works.

	x) change the joint variables with:
	ros2 run joint_state_publisher_gui joint_state_publisher_gui
	this has to be installed beforehand.


