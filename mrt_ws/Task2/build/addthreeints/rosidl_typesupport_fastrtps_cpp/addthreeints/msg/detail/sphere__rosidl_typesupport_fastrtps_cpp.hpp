// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from addthreeints:msg/Sphere.idl
// generated code does not contain a copyright notice

#ifndef ADDTHREEINTS__MSG__DETAIL__SPHERE__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define ADDTHREEINTS__MSG__DETAIL__SPHERE__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "addthreeints/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "addthreeints/msg/detail/sphere__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace addthreeints
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_addthreeints
cdr_serialize(
  const addthreeints::msg::Sphere & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_addthreeints
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  addthreeints::msg::Sphere & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_addthreeints
get_serialized_size(
  const addthreeints::msg::Sphere & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_addthreeints
max_serialized_size_Sphere(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace addthreeints

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_addthreeints
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, addthreeints, msg, Sphere)();

#ifdef __cplusplus
}
#endif

#endif  // ADDTHREEINTS__MSG__DETAIL__SPHERE__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
