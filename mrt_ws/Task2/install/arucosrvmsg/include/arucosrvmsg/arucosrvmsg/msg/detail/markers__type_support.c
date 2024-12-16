// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from arucosrvmsg:msg/Markers.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "arucosrvmsg/msg/detail/markers__rosidl_typesupport_introspection_c.h"
#include "arucosrvmsg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "arucosrvmsg/msg/detail/markers__functions.h"
#include "arucosrvmsg/msg/detail/markers__struct.h"


// Include directives for member types
// Member `corners`
// Member `ids`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void arucosrvmsg__msg__Markers__rosidl_typesupport_introspection_c__Markers_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  arucosrvmsg__msg__Markers__init(message_memory);
}

void arucosrvmsg__msg__Markers__rosidl_typesupport_introspection_c__Markers_fini_function(void * message_memory)
{
  arucosrvmsg__msg__Markers__fini(message_memory);
}

size_t arucosrvmsg__msg__Markers__rosidl_typesupport_introspection_c__size_function__Markers__corners(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * arucosrvmsg__msg__Markers__rosidl_typesupport_introspection_c__get_const_function__Markers__corners(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * arucosrvmsg__msg__Markers__rosidl_typesupport_introspection_c__get_function__Markers__corners(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void arucosrvmsg__msg__Markers__rosidl_typesupport_introspection_c__fetch_function__Markers__corners(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    arucosrvmsg__msg__Markers__rosidl_typesupport_introspection_c__get_const_function__Markers__corners(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void arucosrvmsg__msg__Markers__rosidl_typesupport_introspection_c__assign_function__Markers__corners(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    arucosrvmsg__msg__Markers__rosidl_typesupport_introspection_c__get_function__Markers__corners(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool arucosrvmsg__msg__Markers__rosidl_typesupport_introspection_c__resize_function__Markers__corners(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t arucosrvmsg__msg__Markers__rosidl_typesupport_introspection_c__size_function__Markers__ids(
  const void * untyped_member)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return member->size;
}

const void * arucosrvmsg__msg__Markers__rosidl_typesupport_introspection_c__get_const_function__Markers__ids(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * arucosrvmsg__msg__Markers__rosidl_typesupport_introspection_c__get_function__Markers__ids(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void arucosrvmsg__msg__Markers__rosidl_typesupport_introspection_c__fetch_function__Markers__ids(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int32_t * item =
    ((const int32_t *)
    arucosrvmsg__msg__Markers__rosidl_typesupport_introspection_c__get_const_function__Markers__ids(untyped_member, index));
  int32_t * value =
    (int32_t *)(untyped_value);
  *value = *item;
}

void arucosrvmsg__msg__Markers__rosidl_typesupport_introspection_c__assign_function__Markers__ids(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int32_t * item =
    ((int32_t *)
    arucosrvmsg__msg__Markers__rosidl_typesupport_introspection_c__get_function__Markers__ids(untyped_member, index));
  const int32_t * value =
    (const int32_t *)(untyped_value);
  *item = *value;
}

bool arucosrvmsg__msg__Markers__rosidl_typesupport_introspection_c__resize_function__Markers__ids(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  rosidl_runtime_c__int32__Sequence__fini(member);
  return rosidl_runtime_c__int32__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember arucosrvmsg__msg__Markers__rosidl_typesupport_introspection_c__Markers_message_member_array[2] = {
  {
    "corners",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(arucosrvmsg__msg__Markers, corners),  // bytes offset in struct
    NULL,  // default value
    arucosrvmsg__msg__Markers__rosidl_typesupport_introspection_c__size_function__Markers__corners,  // size() function pointer
    arucosrvmsg__msg__Markers__rosidl_typesupport_introspection_c__get_const_function__Markers__corners,  // get_const(index) function pointer
    arucosrvmsg__msg__Markers__rosidl_typesupport_introspection_c__get_function__Markers__corners,  // get(index) function pointer
    arucosrvmsg__msg__Markers__rosidl_typesupport_introspection_c__fetch_function__Markers__corners,  // fetch(index, &value) function pointer
    arucosrvmsg__msg__Markers__rosidl_typesupport_introspection_c__assign_function__Markers__corners,  // assign(index, value) function pointer
    arucosrvmsg__msg__Markers__rosidl_typesupport_introspection_c__resize_function__Markers__corners  // resize(index) function pointer
  },
  {
    "ids",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(arucosrvmsg__msg__Markers, ids),  // bytes offset in struct
    NULL,  // default value
    arucosrvmsg__msg__Markers__rosidl_typesupport_introspection_c__size_function__Markers__ids,  // size() function pointer
    arucosrvmsg__msg__Markers__rosidl_typesupport_introspection_c__get_const_function__Markers__ids,  // get_const(index) function pointer
    arucosrvmsg__msg__Markers__rosidl_typesupport_introspection_c__get_function__Markers__ids,  // get(index) function pointer
    arucosrvmsg__msg__Markers__rosidl_typesupport_introspection_c__fetch_function__Markers__ids,  // fetch(index, &value) function pointer
    arucosrvmsg__msg__Markers__rosidl_typesupport_introspection_c__assign_function__Markers__ids,  // assign(index, value) function pointer
    arucosrvmsg__msg__Markers__rosidl_typesupport_introspection_c__resize_function__Markers__ids  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers arucosrvmsg__msg__Markers__rosidl_typesupport_introspection_c__Markers_message_members = {
  "arucosrvmsg__msg",  // message namespace
  "Markers",  // message name
  2,  // number of fields
  sizeof(arucosrvmsg__msg__Markers),
  arucosrvmsg__msg__Markers__rosidl_typesupport_introspection_c__Markers_message_member_array,  // message members
  arucosrvmsg__msg__Markers__rosidl_typesupport_introspection_c__Markers_init_function,  // function to initialize message memory (memory has to be allocated)
  arucosrvmsg__msg__Markers__rosidl_typesupport_introspection_c__Markers_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t arucosrvmsg__msg__Markers__rosidl_typesupport_introspection_c__Markers_message_type_support_handle = {
  0,
  &arucosrvmsg__msg__Markers__rosidl_typesupport_introspection_c__Markers_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_arucosrvmsg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, arucosrvmsg, msg, Markers)() {
  if (!arucosrvmsg__msg__Markers__rosidl_typesupport_introspection_c__Markers_message_type_support_handle.typesupport_identifier) {
    arucosrvmsg__msg__Markers__rosidl_typesupport_introspection_c__Markers_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &arucosrvmsg__msg__Markers__rosidl_typesupport_introspection_c__Markers_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
