// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from addthreeints:msg/Num.idl
// generated code does not contain a copyright notice

#ifndef ADDTHREEINTS__MSG__DETAIL__NUM__BUILDER_HPP_
#define ADDTHREEINTS__MSG__DETAIL__NUM__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "addthreeints/msg/detail/num__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace addthreeints
{

namespace msg
{

namespace builder
{

class Init_Num_num
{
public:
  Init_Num_num()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::addthreeints::msg::Num num(::addthreeints::msg::Num::_num_type arg)
  {
    msg_.num = std::move(arg);
    return std::move(msg_);
  }

private:
  ::addthreeints::msg::Num msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::addthreeints::msg::Num>()
{
  return addthreeints::msg::builder::Init_Num_num();
}

}  // namespace addthreeints

#endif  // ADDTHREEINTS__MSG__DETAIL__NUM__BUILDER_HPP_
