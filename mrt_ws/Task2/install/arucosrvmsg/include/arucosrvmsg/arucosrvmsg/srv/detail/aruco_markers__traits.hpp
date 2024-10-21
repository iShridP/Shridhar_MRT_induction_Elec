// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from arucosrvmsg:srv/ArucoMarkers.idl
// generated code does not contain a copyright notice

#ifndef ARUCOSRVMSG__SRV__DETAIL__ARUCO_MARKERS__TRAITS_HPP_
#define ARUCOSRVMSG__SRV__DETAIL__ARUCO_MARKERS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "arucosrvmsg/srv/detail/aruco_markers__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'image'
#include "sensor_msgs/msg/detail/image__traits.hpp"

namespace arucosrvmsg
{

namespace srv
{

inline void to_flow_style_yaml(
  const ArucoMarkers_Request & msg,
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
  const ArucoMarkers_Request & msg,
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

inline std::string to_yaml(const ArucoMarkers_Request & msg, bool use_flow_style = false)
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
  const arucosrvmsg::srv::ArucoMarkers_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  arucosrvmsg::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use arucosrvmsg::srv::to_yaml() instead")]]
inline std::string to_yaml(const arucosrvmsg::srv::ArucoMarkers_Request & msg)
{
  return arucosrvmsg::srv::to_yaml(msg);
}

template<>
inline const char * data_type<arucosrvmsg::srv::ArucoMarkers_Request>()
{
  return "arucosrvmsg::srv::ArucoMarkers_Request";
}

template<>
inline const char * name<arucosrvmsg::srv::ArucoMarkers_Request>()
{
  return "arucosrvmsg/srv/ArucoMarkers_Request";
}

template<>
struct has_fixed_size<arucosrvmsg::srv::ArucoMarkers_Request>
  : std::integral_constant<bool, has_fixed_size<sensor_msgs::msg::Image>::value> {};

template<>
struct has_bounded_size<arucosrvmsg::srv::ArucoMarkers_Request>
  : std::integral_constant<bool, has_bounded_size<sensor_msgs::msg::Image>::value> {};

template<>
struct is_message<arucosrvmsg::srv::ArucoMarkers_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'bounding_boxes'
#include "geometry_msgs/msg/detail/polygon__traits.hpp"

namespace arucosrvmsg
{

namespace srv
{

inline void to_flow_style_yaml(
  const ArucoMarkers_Response & msg,
  std::ostream & out)
{
  out << "{";
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
    out << ", ";
  }

  // member: bounding_boxes
  {
    if (msg.bounding_boxes.size() == 0) {
      out << "bounding_boxes: []";
    } else {
      out << "bounding_boxes: [";
      size_t pending_items = msg.bounding_boxes.size();
      for (auto item : msg.bounding_boxes) {
        to_flow_style_yaml(item, out);
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
  const ArucoMarkers_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
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

  // member: bounding_boxes
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.bounding_boxes.size() == 0) {
      out << "bounding_boxes: []\n";
    } else {
      out << "bounding_boxes:\n";
      for (auto item : msg.bounding_boxes) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ArucoMarkers_Response & msg, bool use_flow_style = false)
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
  const arucosrvmsg::srv::ArucoMarkers_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  arucosrvmsg::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use arucosrvmsg::srv::to_yaml() instead")]]
inline std::string to_yaml(const arucosrvmsg::srv::ArucoMarkers_Response & msg)
{
  return arucosrvmsg::srv::to_yaml(msg);
}

template<>
inline const char * data_type<arucosrvmsg::srv::ArucoMarkers_Response>()
{
  return "arucosrvmsg::srv::ArucoMarkers_Response";
}

template<>
inline const char * name<arucosrvmsg::srv::ArucoMarkers_Response>()
{
  return "arucosrvmsg/srv/ArucoMarkers_Response";
}

template<>
struct has_fixed_size<arucosrvmsg::srv::ArucoMarkers_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<arucosrvmsg::srv::ArucoMarkers_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<arucosrvmsg::srv::ArucoMarkers_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<arucosrvmsg::srv::ArucoMarkers>()
{
  return "arucosrvmsg::srv::ArucoMarkers";
}

template<>
inline const char * name<arucosrvmsg::srv::ArucoMarkers>()
{
  return "arucosrvmsg/srv/ArucoMarkers";
}

template<>
struct has_fixed_size<arucosrvmsg::srv::ArucoMarkers>
  : std::integral_constant<
    bool,
    has_fixed_size<arucosrvmsg::srv::ArucoMarkers_Request>::value &&
    has_fixed_size<arucosrvmsg::srv::ArucoMarkers_Response>::value
  >
{
};

template<>
struct has_bounded_size<arucosrvmsg::srv::ArucoMarkers>
  : std::integral_constant<
    bool,
    has_bounded_size<arucosrvmsg::srv::ArucoMarkers_Request>::value &&
    has_bounded_size<arucosrvmsg::srv::ArucoMarkers_Response>::value
  >
{
};

template<>
struct is_service<arucosrvmsg::srv::ArucoMarkers>
  : std::true_type
{
};

template<>
struct is_service_request<arucosrvmsg::srv::ArucoMarkers_Request>
  : std::true_type
{
};

template<>
struct is_service_response<arucosrvmsg::srv::ArucoMarkers_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // ARUCOSRVMSG__SRV__DETAIL__ARUCO_MARKERS__TRAITS_HPP_
