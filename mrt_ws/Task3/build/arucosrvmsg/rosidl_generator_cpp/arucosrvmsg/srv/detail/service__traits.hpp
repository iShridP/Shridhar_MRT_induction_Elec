// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from arucosrvmsg:srv/Service.idl
// generated code does not contain a copyright notice

#ifndef ARUCOSRVMSG__SRV__DETAIL__SERVICE__TRAITS_HPP_
#define ARUCOSRVMSG__SRV__DETAIL__SERVICE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "arucosrvmsg/srv/detail/service__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'image'
#include "sensor_msgs/msg/detail/image__traits.hpp"

namespace arucosrvmsg
{

namespace srv
{

inline void to_flow_style_yaml(
  const Service_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: image
  {
    out << "image: ";
    to_flow_style_yaml(msg.image, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Service_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: image
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "image:\n";
    to_block_style_yaml(msg.image, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Service_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace arucosrvmsg

namespace rosidl_generator_traits
{

[[deprecated("use arucosrvmsg::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const arucosrvmsg::srv::Service_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  arucosrvmsg::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use arucosrvmsg::srv::to_yaml() instead")]]
inline std::string to_yaml(const arucosrvmsg::srv::Service_Request & msg)
{
  return arucosrvmsg::srv::to_yaml(msg);
}

template<>
inline const char * data_type<arucosrvmsg::srv::Service_Request>()
{
  return "arucosrvmsg::srv::Service_Request";
}

template<>
inline const char * name<arucosrvmsg::srv::Service_Request>()
{
  return "arucosrvmsg/srv/Service_Request";
}

template<>
struct has_fixed_size<arucosrvmsg::srv::Service_Request>
  : std::integral_constant<bool, has_fixed_size<sensor_msgs::msg::Image>::value> {};

template<>
struct has_bounded_size<arucosrvmsg::srv::Service_Request>
  : std::integral_constant<bool, has_bounded_size<sensor_msgs::msg::Image>::value> {};

template<>
struct is_message<arucosrvmsg::srv::Service_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'markers'
#include "arucosrvmsg/msg/detail/markers__traits.hpp"

namespace arucosrvmsg
{

namespace srv
{

inline void to_flow_style_yaml(
  const Service_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: markers
  {
    out << "markers: ";
    to_flow_style_yaml(msg.markers, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Service_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: markers
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "markers:\n";
    to_block_style_yaml(msg.markers, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Service_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace arucosrvmsg

namespace rosidl_generator_traits
{

[[deprecated("use arucosrvmsg::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const arucosrvmsg::srv::Service_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  arucosrvmsg::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use arucosrvmsg::srv::to_yaml() instead")]]
inline std::string to_yaml(const arucosrvmsg::srv::Service_Response & msg)
{
  return arucosrvmsg::srv::to_yaml(msg);
}

template<>
inline const char * data_type<arucosrvmsg::srv::Service_Response>()
{
  return "arucosrvmsg::srv::Service_Response";
}

template<>
inline const char * name<arucosrvmsg::srv::Service_Response>()
{
  return "arucosrvmsg/srv/Service_Response";
}

template<>
struct has_fixed_size<arucosrvmsg::srv::Service_Response>
  : std::integral_constant<bool, has_fixed_size<arucosrvmsg::msg::Markers>::value> {};

template<>
struct has_bounded_size<arucosrvmsg::srv::Service_Response>
  : std::integral_constant<bool, has_bounded_size<arucosrvmsg::msg::Markers>::value> {};

template<>
struct is_message<arucosrvmsg::srv::Service_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<arucosrvmsg::srv::Service>()
{
  return "arucosrvmsg::srv::Service";
}

template<>
inline const char * name<arucosrvmsg::srv::Service>()
{
  return "arucosrvmsg/srv/Service";
}

template<>
struct has_fixed_size<arucosrvmsg::srv::Service>
  : std::integral_constant<
    bool,
    has_fixed_size<arucosrvmsg::srv::Service_Request>::value &&
    has_fixed_size<arucosrvmsg::srv::Service_Response>::value
  >
{
};

template<>
struct has_bounded_size<arucosrvmsg::srv::Service>
  : std::integral_constant<
    bool,
    has_bounded_size<arucosrvmsg::srv::Service_Request>::value &&
    has_bounded_size<arucosrvmsg::srv::Service_Response>::value
  >
{
};

template<>
struct is_service<arucosrvmsg::srv::Service>
  : std::true_type
{
};

template<>
struct is_service_request<arucosrvmsg::srv::Service_Request>
  : std::true_type
{
};

template<>
struct is_service_response<arucosrvmsg::srv::Service_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // ARUCOSRVMSG__SRV__DETAIL__SERVICE__TRAITS_HPP_
