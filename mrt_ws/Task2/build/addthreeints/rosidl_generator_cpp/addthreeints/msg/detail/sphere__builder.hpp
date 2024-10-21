// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from addthreeints:msg/Sphere.idl
// generated code does not contain a copyright notice

#ifndef ADDTHREEINTS__MSG__DETAIL__SPHERE__BUILDER_HPP_
#define ADDTHREEINTS__MSG__DETAIL__SPHERE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "addthreeints/msg/detail/sphere__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace addthreeints
{

namespace msg
{

namespace builder
{

class Init_Sphere_radius
{
public:
  explicit Init_Sphere_radius(::addthreeints::msg::Sphere & msg)
  : msg_(msg)
  {}
  ::addthreeints::msg::Sphere radius(::addthreeints::msg::Sphere::_radius_type arg)
  {
    msg_.radius = std::move(arg);
    return std::move(msg_);
  }

private:
  ::addthreeints::msg::Sphere msg_;
};

class Init_Sphere_center
{
public:
  Init_Sphere_center()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Sphere_radius center(::addthreeints::msg::Sphere::_center_type arg)
  {
    msg_.center = std::move(arg);
    return Init_Sphere_radius(msg_);
  }

private:
  ::addthreeints::msg::Sphere msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::addthreeints::msg::Sphere>()
{
  return addthreeints::msg::builder::Init_Sphere_center();
}

}  // namespace addthreeints

#endif  // ADDTHREEINTS__MSG__DETAIL__SPHERE__BUILDER_HPP_
