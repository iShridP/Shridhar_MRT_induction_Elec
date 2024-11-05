// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from arucosrvmsg:msg/ArucoMarkers.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "arucosrvmsg/msg/detail/aruco_markers__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace arucosrvmsg
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void ArucoMarkers_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) arucosrvmsg::msg::ArucoMarkers(_init);
}

void ArucoMarkers_fini_function(void * message_memory)
{
  auto typed_message = static_cast<arucosrvmsg::msg::ArucoMarkers *>(message_memory);
  typed_message->~ArucoMarkers();
}

size_t size_function__ArucoMarkers__ids(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ArucoMarkers__ids(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void * get_function__ArucoMarkers__ids(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__ArucoMarkers__ids(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const int32_t *>(
    get_const_function__ArucoMarkers__ids(untyped_member, index));
  auto & value = *reinterpret_cast<int32_t *>(untyped_value);
  value = item;
}

void assign_function__ArucoMarkers__ids(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<int32_t *>(
    get_function__ArucoMarkers__ids(untyped_member, index));
  const auto & value = *reinterpret_cast<const int32_t *>(untyped_value);
  item = value;
}

void resize_function__ArucoMarkers__ids(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ArucoMarkers__bounding_boxes(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<geometry_msgs::msg::Polygon> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ArucoMarkers__bounding_boxes(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<geometry_msgs::msg::Polygon> *>(untyped_member);
  return &member[index];
}

void * get_function__ArucoMarkers__bounding_boxes(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<geometry_msgs::msg::Polygon> *>(untyped_member);
  return &member[index];
}

void fetch_function__ArucoMarkers__bounding_boxes(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const geometry_msgs::msg::Polygon *>(
    get_const_function__ArucoMarkers__bounding_boxes(untyped_member, index));
  auto & value = *reinterpret_cast<geometry_msgs::msg::Polygon *>(untyped_value);
  value = item;
}

void assign_function__ArucoMarkers__bounding_boxes(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<geometry_msgs::msg::Polygon *>(
    get_function__ArucoMarkers__bounding_boxes(untyped_member, index));
  const auto & value = *reinterpret_cast<const geometry_msgs::msg::Polygon *>(untyped_value);
  item = value;
}

void resize_function__ArucoMarkers__bounding_boxes(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<geometry_msgs::msg::Polygon> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ArucoMarkers_message_member_array[2] = {
  {
    "ids",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(arucosrvmsg::msg::ArucoMarkers, ids),  // bytes offset in struct
    nullptr,  // default value
    size_function__ArucoMarkers__ids,  // size() function pointer
    get_const_function__ArucoMarkers__ids,  // get_const(index) function pointer
    get_function__ArucoMarkers__ids,  // get(index) function pointer
    fetch_function__ArucoMarkers__ids,  // fetch(index, &value) function pointer
    assign_function__ArucoMarkers__ids,  // assign(index, value) function pointer
    resize_function__ArucoMarkers__ids  // resize(index) function pointer
  },
  {
    "bounding_boxes",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::Polygon>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(arucosrvmsg::msg::ArucoMarkers, bounding_boxes),  // bytes offset in struct
    nullptr,  // default value
    size_function__ArucoMarkers__bounding_boxes,  // size() function pointer
    get_const_function__ArucoMarkers__bounding_boxes,  // get_const(index) function pointer
    get_function__ArucoMarkers__bounding_boxes,  // get(index) function pointer
    fetch_function__ArucoMarkers__bounding_boxes,  // fetch(index, &value) function pointer
    assign_function__ArucoMarkers__bounding_boxes,  // assign(index, value) function pointer
    resize_function__ArucoMarkers__bounding_boxes  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ArucoMarkers_message_members = {
  "arucosrvmsg::msg",  // message namespace
  "ArucoMarkers",  // message name
  2,  // number of fields
  sizeof(arucosrvmsg::msg::ArucoMarkers),
  ArucoMarkers_message_member_array,  // message members
  ArucoMarkers_init_function,  // function to initialize message memory (memory has to be allocated)
  ArucoMarkers_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ArucoMarkers_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ArucoMarkers_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace arucosrvmsg


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<arucosrvmsg::msg::ArucoMarkers>()
{
  return &::arucosrvmsg::msg::rosidl_typesupport_introspection_cpp::ArucoMarkers_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, arucosrvmsg, msg, ArucoMarkers)() {
  return &::arucosrvmsg::msg::rosidl_typesupport_introspection_cpp::ArucoMarkers_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
