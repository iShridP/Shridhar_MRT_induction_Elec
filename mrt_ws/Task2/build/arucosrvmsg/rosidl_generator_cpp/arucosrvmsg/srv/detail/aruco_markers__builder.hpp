// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from arucosrvmsg:srv/ArucoMarkers.idl
// generated code does not contain a copyright notice

#ifndef ARUCOSRVMSG__SRV__DETAIL__ARUCO_MARKERS__BUILDER_HPP_
#define ARUCOSRVMSG__SRV__DETAIL__ARUCO_MARKERS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "arucosrvmsg/srv/detail/aruco_markers__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace arucosrvmsg
{

namespace srv
{

namespace builder
{

class Init_ArucoMarkers_Request_image
{
public:
  Init_ArucoMarkers_Request_image()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::arucosrvmsg::srv::ArucoMarkers_Request image(::arucosrvmsg::srv::ArucoMarkers_Request::_image_type arg)
  {
    msg_.image = std::move(arg);
    return std::move(msg_);
  }

private:
  ::arucosrvmsg::srv::ArucoMarkers_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::arucosrvmsg::srv::ArucoMarkers_Request>()
{
  return arucosrvmsg::srv::builder::Init_ArucoMarkers_Request_image();
}

}  // namespace arucosrvmsg


namespace arucosrvmsg
{

namespace srv
{

namespace builder
{

class Init_ArucoMarkers_Response_bounding_boxes
{
public:
  explicit Init_ArucoMarkers_Response_bounding_boxes(::arucosrvmsg::srv::ArucoMarkers_Response & msg)
  : msg_(msg)
  {}
  ::arucosrvmsg::srv::ArucoMarkers_Response bounding_boxes(::arucosrvmsg::srv::ArucoMarkers_Response::_bounding_boxes_type arg)
  {
    msg_.bounding_boxes = std::move(arg);
    return std::move(msg_);
  }

private:
  ::arucosrvmsg::srv::ArucoMarkers_Response msg_;
};

class Init_ArucoMarkers_Response_ids
{
public:
  Init_ArucoMarkers_Response_ids()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ArucoMarkers_Response_bounding_boxes ids(::arucosrvmsg::srv::ArucoMarkers_Response::_ids_type arg)
  {
    msg_.ids = std::move(arg);
    return Init_ArucoMarkers_Response_bounding_boxes(msg_);
  }

private:
  ::arucosrvmsg::srv::ArucoMarkers_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::arucosrvmsg::srv::ArucoMarkers_Response>()
{
  return arucosrvmsg::srv::builder::Init_ArucoMarkers_Response_ids();
}

}  // namespace arucosrvmsg

#endif  // ARUCOSRVMSG__SRV__DETAIL__ARUCO_MARKERS__BUILDER_HPP_
