cmake_minimum_required(VERSION 3.8)
project(arucosrvmsg)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# Find dependencies
find_package(ament_cmake REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(sensor_msgs REQUIRED)
find_package(rosidl_default_generators REQUIRED)
find_package(cv_bridge REQUIRED)  
find_package(OpenCV REQUIRED)     

# Generate ROS interfaces (messages and services)
rosidl_generate_interfaces(${PROJECT_NAME}
  "msg/ArucoMarkers.msg"
  "srv/ArucoMarkers.srv"
  DEPENDENCIES sensor_msgs geometry_msgs
)

# Include directories (necessary for using OpenCV and cv_bridge)
include_directories(
  ${OpenCV_INCLUDE_DIRS}
  ${cv_bridge_INCLUDE_DIRS}
)

# Build testing section
if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  set(ament_cmake_copyright_FOUND TRUE)
  set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

# Finalize the package
ament_package()

