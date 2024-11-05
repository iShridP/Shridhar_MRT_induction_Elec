// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from arucosrvmsg:msg/ArucoMarkers.idl
// generated code does not contain a copyright notice

#ifndef ARUCOSRVMSG__MSG__DETAIL__ARUCO_MARKERS__STRUCT_HPP_
#define ARUCOSRVMSG__MSG__DETAIL__ARUCO_MARKERS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'bounding_boxes'
#include "geometry_msgs/msg/detail/polygon__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__arucosrvmsg__msg__ArucoMarkers __attribute__((deprecated))
#else
# define DEPRECATED__arucosrvmsg__msg__ArucoMarkers __declspec(deprecated)
#endif

namespace arucosrvmsg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ArucoMarkers_
{
  using Type = ArucoMarkers_<ContainerAllocator>;

  explicit ArucoMarkers_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit ArucoMarkers_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _ids_type =
    std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>>;
  _ids_type ids;
  using _bounding_boxes_type =
    std::vector<geometry_msgs::msg::Polygon_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Polygon_<ContainerAllocator>>>;
  _bounding_boxes_type bounding_boxes;

  // setters for named parameter idiom
  Type & set__ids(
    const std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>> & _arg)
  {
    this->ids = _arg;
    return *this;
  }
  Type & set__bounding_boxes(
    const std::vector<geometry_msgs::msg::Polygon_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Polygon_<ContainerAllocator>>> & _arg)
  {
    this->bounding_boxes = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    arucosrvmsg::msg::ArucoMarkers_<ContainerAllocator> *;
  using ConstRawPtr =
    const arucosrvmsg::msg::ArucoMarkers_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<arucosrvmsg::msg::ArucoMarkers_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<arucosrvmsg::msg::ArucoMarkers_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      arucosrvmsg::msg::ArucoMarkers_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<arucosrvmsg::msg::ArucoMarkers_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      arucosrvmsg::msg::ArucoMarkers_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<arucosrvmsg::msg::ArucoMarkers_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<arucosrvmsg::msg::ArucoMarkers_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<arucosrvmsg::msg::ArucoMarkers_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__arucosrvmsg__msg__ArucoMarkers
    std::shared_ptr<arucosrvmsg::msg::ArucoMarkers_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__arucosrvmsg__msg__ArucoMarkers
    std::shared_ptr<arucosrvmsg::msg::ArucoMarkers_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ArucoMarkers_ & other) const
  {
    if (this->ids != other.ids) {
      return false;
    }
    if (this->bounding_boxes != other.bounding_boxes) {
      return false;
    }
    return true;
  }
  bool operator!=(const ArucoMarkers_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ArucoMarkers_

// alias to use template instance with default allocator
using ArucoMarkers =
  arucosrvmsg::msg::ArucoMarkers_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace arucosrvmsg

#endif  // ARUCOSRVMSG__MSG__DETAIL__ARUCO_MARKERS__STRUCT_HPP_
