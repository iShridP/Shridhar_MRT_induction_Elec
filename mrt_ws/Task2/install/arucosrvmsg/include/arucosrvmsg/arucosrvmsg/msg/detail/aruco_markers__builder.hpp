// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from arucosrvmsg:msg/ArucoMarkers.idl
// generated code does not contain a copyright notice

#ifndef ARUCOSRVMSG__MSG__DETAIL__ARUCO_MARKERS__BUILDER_HPP_
#define ARUCOSRVMSG__MSG__DETAIL__ARUCO_MARKERS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "arucosrvmsg/msg/detail/aruco_markers__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace arucosrvmsg
{

namespace msg
{

namespace builder
{

class Init_ArucoMarkers_bounding_boxes
{
public:
  explicit Init_ArucoMarkers_bounding_boxes(::arucosrvmsg::msg::ArucoMarkers & msg)
  : msg_(msg)
  {}
  ::arucosrvmsg::msg::ArucoMarkers bounding_boxes(::arucosrvmsg::msg::ArucoMarkers::_bounding_boxes_type arg)
  {
    msg_.bounding_boxes = std::move(arg);
    return std::move(msg_);
  }

private:
  ::arucosrvmsg::msg::ArucoMarkers msg_;
};

class Init_ArucoMarkers_ids
{
public:
  Init_ArucoMarkers_ids()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ArucoMarkers_bounding_boxes ids(::arucosrvmsg::msg::ArucoMarkers::_ids_type arg)
  {
    msg_.ids = std::move(arg);
    return Init_ArucoMarkers_bounding_boxes(msg_);
  }

private:
  ::arucosrvmsg::msg::ArucoMarkers msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::arucosrvmsg::msg::ArucoMarkers>()
{
  return arucosrvmsg::msg::builder::Init_ArucoMarkers_ids();
}

}  // namespace arucosrvmsg

#endif  // ARUCOSRVMSG__MSG__DETAIL__ARUCO_MARKERS__BUILDER_HPP_
