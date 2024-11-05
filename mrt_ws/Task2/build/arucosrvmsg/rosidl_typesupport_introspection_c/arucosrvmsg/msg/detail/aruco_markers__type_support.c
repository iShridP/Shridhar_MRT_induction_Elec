// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from arucosrvmsg:msg/ArucoMarkers.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "arucosrvmsg/msg/detail/aruco_markers__rosidl_typesupport_introspection_c.h"
#include "arucosrvmsg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "arucosrvmsg/msg/detail/aruco_markers__functions.h"
#include "arucosrvmsg/msg/detail/aruco_markers__struct.h"


// Include directives for member types
// Member `ids`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `bounding_boxes`
#include "geometry_msgs/msg/polygon.h"
// Member `bounding_boxes`
#include "geometry_msgs/msg/detail/polygon__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void arucosrvmsg__msg__ArucoMarkers__rosidl_typesupport_introspection_c__ArucoMarkers_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  arucosrvmsg__msg__ArucoMarkers__init(message_memory);
}

void arucosrvmsg__msg__ArucoMarkers__rosidl_typesupport_introspection_c__ArucoMarkers_fini_function(void * message_memory)
{
  arucosrvmsg__msg__ArucoMarkers__fini(message_memory);
}

size_t arucosrvmsg__msg__ArucoMarkers__rosidl_typesupport_introspection_c__size_function__ArucoMarkers__ids(
  const void * untyped_member)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return member->size;
}

const void * arucosrvmsg__msg__ArucoMarkers__rosidl_typesupport_introspection_c__get_const_function__ArucoMarkers__ids(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * arucosrvmsg__msg__ArucoMarkers__rosidl_typesupport_introspection_c__get_function__ArucoMarkers__ids(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void arucosrvmsg__msg__ArucoMarkers__rosidl_typesupport_introspection_c__fetch_function__ArucoMarkers__ids(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int32_t * item =
    ((const int32_t *)
    arucosrvmsg__msg__ArucoMarkers__rosidl_typesupport_introspection_c__get_const_function__ArucoMarkers__ids(untyped_member, index));
  int32_t * value =
    (int32_t *)(untyped_value);
  *value = *item;
}

void arucosrvmsg__msg__ArucoMarkers__rosidl_typesupport_introspection_c__assign_function__ArucoMarkers__ids(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int32_t * item =
    ((int32_t *)
    arucosrvmsg__msg__ArucoMarkers__rosidl_typesupport_introspection_c__get_function__ArucoMarkers__ids(untyped_member, index));
  const int32_t * value =
    (const int32_t *)(untyped_value);
  *item = *value;
}

bool arucosrvmsg__msg__ArucoMarkers__rosidl_typesupport_introspection_c__resize_function__ArucoMarkers__ids(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  rosidl_runtime_c__int32__Sequence__fini(member);
  return rosidl_runtime_c__int32__Sequence__init(member, size);
}

size_t arucosrvmsg__msg__ArucoMarkers__rosidl_typesupport_introspection_c__size_function__ArucoMarkers__bounding_boxes(
  const void * untyped_member)
{
  const geometry_msgs__msg__Polygon__Sequence * member =
    (const geometry_msgs__msg__Polygon__Sequence *)(untyped_member);
  return member->size;
}

const void * arucosrvmsg__msg__ArucoMarkers__rosidl_typesupport_introspection_c__get_const_function__ArucoMarkers__bounding_boxes(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__Polygon__Sequence * member =
    (const geometry_msgs__msg__Polygon__Sequence *)(untyped_member);
  return &member->data[index];
}

void * arucosrvmsg__msg__ArucoMarkers__rosidl_typesupport_introspection_c__get_function__ArucoMarkers__bounding_boxes(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__Polygon__Sequence * member =
    (geometry_msgs__msg__Polygon__Sequence *)(untyped_member);
  return &member->data[index];
}

void arucosrvmsg__msg__ArucoMarkers__rosidl_typesupport_introspection_c__fetch_function__ArucoMarkers__bounding_boxes(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const geometry_msgs__msg__Polygon * item =
    ((const geometry_msgs__msg__Polygon *)
    arucosrvmsg__msg__ArucoMarkers__rosidl_typesupport_introspection_c__get_const_function__ArucoMarkers__bounding_boxes(untyped_member, index));
  geometry_msgs__msg__Polygon * value =
    (geometry_msgs__msg__Polygon *)(untyped_value);
  *value = *item;
}

void arucosrvmsg__msg__ArucoMarkers__rosidl_typesupport_introspection_c__assign_function__ArucoMarkers__bounding_boxes(
  void * untyped_member, size_t index, const void * untyped_value)
{
  geometry_msgs__msg__Polygon * item =
    ((geometry_msgs__msg__Polygon *)
    arucosrvmsg__msg__ArucoMarkers__rosidl_typesupport_introspection_c__get_function__ArucoMarkers__bounding_boxes(untyped_member, index));
  const geometry_msgs__msg__Polygon * value =
    (const geometry_msgs__msg__Polygon *)(untyped_value);
  *item = *value;
}

bool arucosrvmsg__msg__ArucoMarkers__rosidl_typesupport_introspection_c__resize_function__ArucoMarkers__bounding_boxes(
  void * untyped_member, size_t size)
{
  geometry_msgs__msg__Polygon__Sequence * member =
    (geometry_msgs__msg__Polygon__Sequence *)(untyped_member);
  geometry_msgs__msg__Polygon__Sequence__fini(member);
  return geometry_msgs__msg__Polygon__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember arucosrvmsg__msg__ArucoMarkers__rosidl_typesupport_introspection_c__ArucoMarkers_message_member_array[2] = {
  {
    "ids",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(arucosrvmsg__msg__ArucoMarkers, ids),  // bytes offset in struct
    NULL,  // default value
    arucosrvmsg__msg__ArucoMarkers__rosidl_typesupport_introspection_c__size_function__ArucoMarkers__ids,  // size() function pointer
    arucosrvmsg__msg__ArucoMarkers__rosidl_typesupport_introspection_c__get_const_function__ArucoMarkers__ids,  // get_const(index) function pointer
    arucosrvmsg__msg__ArucoMarkers__rosidl_typesupport_introspection_c__get_function__ArucoMarkers__ids,  // get(index) function pointer
    arucosrvmsg__msg__ArucoMarkers__rosidl_typesupport_introspection_c__fetch_function__ArucoMarkers__ids,  // fetch(index, &value) function pointer
    arucosrvmsg__msg__ArucoMarkers__rosidl_typesupport_introspection_c__assign_function__ArucoMarkers__ids,  // assign(index, value) function pointer
    arucosrvmsg__msg__ArucoMarkers__rosidl_typesupport_introspection_c__resize_function__ArucoMarkers__ids  // resize(index) function pointer
  },
  {
    "bounding_boxes",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(arucosrvmsg__msg__ArucoMarkers, bounding_boxes),  // bytes offset in struct
    NULL,  // default value
    arucosrvmsg__msg__ArucoMarkers__rosidl_typesupport_introspection_c__size_function__ArucoMarkers__bounding_boxes,  // size() function pointer
    arucosrvmsg__msg__ArucoMarkers__rosidl_typesupport_introspection_c__get_const_function__ArucoMarkers__bounding_boxes,  // get_const(index) function pointer
    arucosrvmsg__msg__ArucoMarkers__rosidl_typesupport_introspection_c__get_function__ArucoMarkers__bounding_boxes,  // get(index) function pointer
    arucosrvmsg__msg__ArucoMarkers__rosidl_typesupport_introspection_c__fetch_function__ArucoMarkers__bounding_boxes,  // fetch(index, &value) function pointer
    arucosrvmsg__msg__ArucoMarkers__rosidl_typesupport_introspection_c__assign_function__ArucoMarkers__bounding_boxes,  // assign(index, value) function pointer
    arucosrvmsg__msg__ArucoMarkers__rosidl_typesupport_introspection_c__resize_function__ArucoMarkers__bounding_boxes  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers arucosrvmsg__msg__ArucoMarkers__rosidl_typesupport_introspection_c__ArucoMarkers_message_members = {
  "arucosrvmsg__msg",  // message namespace
  "ArucoMarkers",  // message name
  2,  // number of fields
  sizeof(arucosrvmsg__msg__ArucoMarkers),
  arucosrvmsg__msg__ArucoMarkers__rosidl_typesupport_introspection_c__ArucoMarkers_message_member_array,  // message members
  arucosrvmsg__msg__ArucoMarkers__rosidl_typesupport_introspection_c__ArucoMarkers_init_function,  // function to initialize message memory (memory has to be allocated)
  arucosrvmsg__msg__ArucoMarkers__rosidl_typesupport_introspection_c__ArucoMarkers_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t arucosrvmsg__msg__ArucoMarkers__rosidl_typesupport_introspection_c__ArucoMarkers_message_type_support_handle = {
  0,
  &arucosrvmsg__msg__ArucoMarkers__rosidl_typesupport_introspection_c__ArucoMarkers_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_arucosrvmsg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, arucosrvmsg, msg, ArucoMarkers)() {
  arucosrvmsg__msg__ArucoMarkers__rosidl_typesupport_introspection_c__ArucoMarkers_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Polygon)();
  if (!arucosrvmsg__msg__ArucoMarkers__rosidl_typesupport_introspection_c__ArucoMarkers_message_type_support_handle.typesupport_identifier) {
    arucosrvmsg__msg__ArucoMarkers__rosidl_typesupport_introspection_c__ArucoMarkers_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &arucosrvmsg__msg__ArucoMarkers__rosidl_typesupport_introspection_c__ArucoMarkers_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
