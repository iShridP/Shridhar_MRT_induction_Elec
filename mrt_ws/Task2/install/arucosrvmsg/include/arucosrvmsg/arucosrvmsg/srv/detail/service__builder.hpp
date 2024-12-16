// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from arucosrvmsg:srv/Service.idl
// generated code does not contain a copyright notice

#ifndef ARUCOSRVMSG__SRV__DETAIL__SERVICE__BUILDER_HPP_
#define ARUCOSRVMSG__SRV__DETAIL__SERVICE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "arucosrvmsg/srv/detail/service__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace arucosrvmsg
{

namespace srv
{

namespace builder
{

class Init_Service_Request_image
{
public:
  Init_Service_Request_image()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::arucosrvmsg::srv::Service_Request image(::arucosrvmsg::srv::Service_Request::_image_type arg)
  {
    msg_.image = std::move(arg);
    return std::move(msg_);
  }

private:
  ::arucosrvmsg::srv::Service_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::arucosrvmsg::srv::Service_Request>()
{
  return arucosrvmsg::srv::builder::Init_Service_Request_image();
}

}  // namespace arucosrvmsg


namespace arucosrvmsg
{

namespace srv
{

namespace builder
{

class Init_Service_Response_markers
{
public:
  Init_Service_Response_markers()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::arucosrvmsg::srv::Service_Response markers(::arucosrvmsg::srv::Service_Response::_markers_type arg)
  {
    msg_.markers = std::move(arg);
    return std::move(msg_);
  }

private:
  ::arucosrvmsg::srv::Service_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::arucosrvmsg::srv::Service_Response>()
{
  return arucosrvmsg::srv::builder::Init_Service_Response_markers();
}

}  // namespace arucosrvmsg

#endif  // ARUCOSRVMSG__SRV__DETAIL__SERVICE__BUILDER_HPP_
