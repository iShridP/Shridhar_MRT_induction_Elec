// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from arucosrvmsg:msg/ArucoMarkers.idl
// generated code does not contain a copyright notice

#ifndef ARUCOSRVMSG__MSG__DETAIL__ARUCO_MARKERS__STRUCT_H_
#define ARUCOSRVMSG__MSG__DETAIL__ARUCO_MARKERS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'ids'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'bounding_boxes'
#include "geometry_msgs/msg/detail/polygon__struct.h"

/// Struct defined in msg/ArucoMarkers in the package arucosrvmsg.
typedef struct arucosrvmsg__msg__ArucoMarkers
{
  rosidl_runtime_c__int32__Sequence ids;
  geometry_msgs__msg__Polygon__Sequence bounding_boxes;
} arucosrvmsg__msg__ArucoMarkers;

// Struct for a sequence of arucosrvmsg__msg__ArucoMarkers.
typedef struct arucosrvmsg__msg__ArucoMarkers__Sequence
{
  arucosrvmsg__msg__ArucoMarkers * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} arucosrvmsg__msg__ArucoMarkers__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ARUCOSRVMSG__MSG__DETAIL__ARUCO_MARKERS__STRUCT_H_
