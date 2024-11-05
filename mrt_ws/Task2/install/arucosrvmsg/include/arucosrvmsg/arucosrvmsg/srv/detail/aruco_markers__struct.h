// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from arucosrvmsg:srv/ArucoMarkers.idl
// generated code does not contain a copyright notice

#ifndef ARUCOSRVMSG__SRV__DETAIL__ARUCO_MARKERS__STRUCT_H_
#define ARUCOSRVMSG__SRV__DETAIL__ARUCO_MARKERS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'image'
#include "sensor_msgs/msg/detail/image__struct.h"

/// Struct defined in srv/ArucoMarkers in the package arucosrvmsg.
typedef struct arucosrvmsg__srv__ArucoMarkers_Request
{
  sensor_msgs__msg__Image image;
} arucosrvmsg__srv__ArucoMarkers_Request;

// Struct for a sequence of arucosrvmsg__srv__ArucoMarkers_Request.
typedef struct arucosrvmsg__srv__ArucoMarkers_Request__Sequence
{
  arucosrvmsg__srv__ArucoMarkers_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} arucosrvmsg__srv__ArucoMarkers_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'ids'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'bounding_boxes'
#include "geometry_msgs/msg/detail/polygon__struct.h"

/// Struct defined in srv/ArucoMarkers in the package arucosrvmsg.
typedef struct arucosrvmsg__srv__ArucoMarkers_Response
{
  rosidl_runtime_c__int32__Sequence ids;
  geometry_msgs__msg__Polygon__Sequence bounding_boxes;
} arucosrvmsg__srv__ArucoMarkers_Response;

// Struct for a sequence of arucosrvmsg__srv__ArucoMarkers_Response.
typedef struct arucosrvmsg__srv__ArucoMarkers_Response__Sequence
{
  arucosrvmsg__srv__ArucoMarkers_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} arucosrvmsg__srv__ArucoMarkers_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ARUCOSRVMSG__SRV__DETAIL__ARUCO_MARKERS__STRUCT_H_
