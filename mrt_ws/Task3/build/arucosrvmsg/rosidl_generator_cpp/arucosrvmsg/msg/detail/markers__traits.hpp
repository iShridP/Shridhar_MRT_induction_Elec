// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from arucosrvmsg:msg/Markers.idl
// generated code does not contain a copyright notice

#ifndef ARUCOSRVMSG__MSG__DETAIL__MARKERS__TRAITS_HPP_
#define ARUCOSRVMSG__MSG__DETAIL__MARKERS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "arucosrvmsg/msg/detail/markers__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace arucosrvmsg
{

namespace msg
{

inline void to_flow_style_yaml(
  const Markers & msg,
  std::ostream & out)
{
  out << "{";
  // member: corners
  {
    if (msg.corners.size() == 0) {
      out << "corners: []";
    } else {
      out << "corners: [";
      size_t pending_items = msg.corners.size();
      for (auto item : msg.corners) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: ids
  {
    if (msg.ids.size() == 0) {
      out << "ids: []";
    } else {
      out << "ids: [";
      size_t pending_items = msg.ids.size();
      for (auto item : msg.ids) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Markers & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: corners
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.corners.size() == 0) {
      out << "corners: []\n";
    } else {
      out << "corners:\n";
      for (auto item : msg.corners) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: ids
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.ids.size() == 0) {
      out << "ids: []\n";
    } else {
      out << "ids:\n";
      for (auto item : msg.ids) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Markers & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace arucosrvmsg

namespace rosidl_generator_traits
{

[[deprecated("use arucosrvmsg::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const arucosrvmsg::msg::Markers & msg,
  std::ostream & out, size_t indentation = 0)
{
  arucosrvmsg::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use arucosrvmsg::msg::to_yaml() instead")]]
inline std::string to_yaml(const arucosrvmsg::msg::Markers & msg)
{
  return arucosrvmsg::msg::to_yaml(msg);
}

template<>
inline const char * data_type<arucosrvmsg::msg::Markers>()
{
  return "arucosrvmsg::msg::Markers";
}

template<>
inline const char * name<arucosrvmsg::msg::Markers>()
{
  return "arucosrvmsg/msg/Markers";
}

template<>
struct has_fixed_size<arucosrvmsg::msg::Markers>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<arucosrvmsg::msg::Markers>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<arucosrvmsg::msg::Markers>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ARUCOSRVMSG__MSG__DETAIL__MARKERS__TRAITS_HPP_
