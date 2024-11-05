// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from arucosrvmsg:msg/ArucoMarkers.idl
// generated code does not contain a copyright notice
#include "arucosrvmsg/msg/detail/aruco_markers__rosidl_typesupport_fastrtps_cpp.hpp"
#include "arucosrvmsg/msg/detail/aruco_markers__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace geometry_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const geometry_msgs::msg::Polygon &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  geometry_msgs::msg::Polygon &);
size_t get_serialized_size(
  const geometry_msgs::msg::Polygon &,
  size_t current_alignment);
size_t
max_serialized_size_Polygon(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace geometry_msgs


namespace arucosrvmsg
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_arucosrvmsg
cdr_serialize(
  const arucosrvmsg::msg::ArucoMarkers & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: ids
  {
    cdr << ros_message.ids;
  }
  // Member: bounding_boxes
  {
    size_t size = ros_message.bounding_boxes.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      geometry_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.bounding_boxes[i],
        cdr);
    }
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_arucosrvmsg
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  arucosrvmsg::msg::ArucoMarkers & ros_message)
{
  // Member: ids
  {
    cdr >> ros_message.ids;
  }

  // Member: bounding_boxes
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.bounding_boxes.resize(size);
    for (size_t i = 0; i < size; i++) {
      geometry_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.bounding_boxes[i]);
    }
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_arucosrvmsg
get_serialized_size(
  const arucosrvmsg::msg::ArucoMarkers & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: ids
  {
    size_t array_size = ros_message.ids.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.ids[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: bounding_boxes
  {
    size_t array_size = ros_message.bounding_boxes.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        geometry_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.bounding_boxes[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_arucosrvmsg
max_serialized_size_ArucoMarkers(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: ids
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: bounding_boxes
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        geometry_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Polygon(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = arucosrvmsg::msg::ArucoMarkers;
    is_plain =
      (
      offsetof(DataType, bounding_boxes) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _ArucoMarkers__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const arucosrvmsg::msg::ArucoMarkers *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _ArucoMarkers__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<arucosrvmsg::msg::ArucoMarkers *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _ArucoMarkers__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const arucosrvmsg::msg::ArucoMarkers *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _ArucoMarkers__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_ArucoMarkers(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _ArucoMarkers__callbacks = {
  "arucosrvmsg::msg",
  "ArucoMarkers",
  _ArucoMarkers__cdr_serialize,
  _ArucoMarkers__cdr_deserialize,
  _ArucoMarkers__get_serialized_size,
  _ArucoMarkers__max_serialized_size
};

static rosidl_message_type_support_t _ArucoMarkers__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_ArucoMarkers__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace arucosrvmsg

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_arucosrvmsg
const rosidl_message_type_support_t *
get_message_type_support_handle<arucosrvmsg::msg::ArucoMarkers>()
{
  return &arucosrvmsg::msg::typesupport_fastrtps_cpp::_ArucoMarkers__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, arucosrvmsg, msg, ArucoMarkers)() {
  return &arucosrvmsg::msg::typesupport_fastrtps_cpp::_ArucoMarkers__handle;
}

#ifdef __cplusplus
}
#endif
