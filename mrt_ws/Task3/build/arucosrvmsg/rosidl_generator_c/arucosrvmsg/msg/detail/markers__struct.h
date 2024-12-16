// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from arucosrvmsg:msg/Markers.idl
// generated code does not contain a copyright notice

#ifndef ARUCOSRVMSG__MSG__DETAIL__MARKERS__STRUCT_H_
#define ARUCOSRVMSG__MSG__DETAIL__MARKERS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'corners'
// Member 'ids'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/Markers in the package arucosrvmsg.
typedef struct arucosrvmsg__msg__Markers
{
  rosidl_runtime_c__float__Sequence corners;
  rosidl_runtime_c__int32__Sequence ids;
} arucosrvmsg__msg__Markers;

// Struct for a sequence of arucosrvmsg__msg__Markers.
typedef struct arucosrvmsg__msg__Markers__Sequence
{
  arucosrvmsg__msg__Markers * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} arucosrvmsg__msg__Markers__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ARUCOSRVMSG__MSG__DETAIL__MARKERS__STRUCT_H_
