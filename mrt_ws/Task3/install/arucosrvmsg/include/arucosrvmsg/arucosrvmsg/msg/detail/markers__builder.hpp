// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from arucosrvmsg:msg/Markers.idl
// generated code does not contain a copyright notice

#ifndef ARUCOSRVMSG__MSG__DETAIL__MARKERS__BUILDER_HPP_
#define ARUCOSRVMSG__MSG__DETAIL__MARKERS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "arucosrvmsg/msg/detail/markers__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace arucosrvmsg
{

namespace msg
{

namespace builder
{

class Init_Markers_ids
{
public:
  explicit Init_Markers_ids(::arucosrvmsg::msg::Markers & msg)
  : msg_(msg)
  {}
  ::arucosrvmsg::msg::Markers ids(::arucosrvmsg::msg::Markers::_ids_type arg)
  {
    msg_.ids = std::move(arg);
    return std::move(msg_);
  }

private:
  ::arucosrvmsg::msg::Markers msg_;
};

class Init_Markers_corners
{
public:
  Init_Markers_corners()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Markers_ids corners(::arucosrvmsg::msg::Markers::_corners_type arg)
  {
    msg_.corners = std::move(arg);
    return Init_Markers_ids(msg_);
  }

private:
  ::arucosrvmsg::msg::Markers msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::arucosrvmsg::msg::Markers>()
{
  return arucosrvmsg::msg::builder::Init_Markers_corners();
}

}  // namespace arucosrvmsg

#endif  // ARUCOSRVMSG__MSG__DETAIL__MARKERS__BUILDER_HPP_
