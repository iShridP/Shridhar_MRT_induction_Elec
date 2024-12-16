// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from arucosrvmsg:srv/Service.idl
// generated code does not contain a copyright notice

#ifndef ARUCOSRVMSG__SRV__DETAIL__SERVICE__STRUCT_H_
#define ARUCOSRVMSG__SRV__DETAIL__SERVICE__STRUCT_H_

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

/// Struct defined in srv/Service in the package arucosrvmsg.
typedef struct arucosrvmsg__srv__Service_Request
{
  sensor_msgs__msg__Image image;
} arucosrvmsg__srv__Service_Request;

// Struct for a sequence of arucosrvmsg__srv__Service_Request.
typedef struct arucosrvmsg__srv__Service_Request__Sequence
{
  arucosrvmsg__srv__Service_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} arucosrvmsg__srv__Service_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'markers'
#include "arucosrvmsg/msg/detail/markers__struct.h"

/// Struct defined in srv/Service in the package arucosrvmsg.
typedef struct arucosrvmsg__srv__Service_Response
{
  arucosrvmsg__msg__Markers markers;
} arucosrvmsg__srv__Service_Response;

// Struct for a sequence of arucosrvmsg__srv__Service_Response.
typedef struct arucosrvmsg__srv__Service_Response__Sequence
{
  arucosrvmsg__srv__Service_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} arucosrvmsg__srv__Service_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ARUCOSRVMSG__SRV__DETAIL__SERVICE__STRUCT_H_
