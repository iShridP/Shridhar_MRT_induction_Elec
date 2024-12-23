// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from arucosrvmsg:msg/Markers.idl
// generated code does not contain a copyright notice

#ifndef ARUCOSRVMSG__MSG__DETAIL__MARKERS__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define ARUCOSRVMSG__MSG__DETAIL__MARKERS__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "arucosrvmsg/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "arucosrvmsg/msg/detail/markers__struct.hpp"

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

namespace arucosrvmsg
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_arucosrvmsg
cdr_serialize(
  const arucosrvmsg::msg::Markers & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_arucosrvmsg
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  arucosrvmsg::msg::Markers & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_arucosrvmsg
get_serialized_size(
  const arucosrvmsg::msg::Markers & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_arucosrvmsg
max_serialized_size_Markers(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace arucosrvmsg

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_arucosrvmsg
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, arucosrvmsg, msg, Markers)();

#ifdef __cplusplus
}
#endif

#endif  // ARUCOSRVMSG__MSG__DETAIL__MARKERS__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
