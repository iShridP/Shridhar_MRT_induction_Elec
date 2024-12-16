// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from arucosrvmsg:msg/Markers.idl
// generated code does not contain a copyright notice

#ifndef ARUCOSRVMSG__MSG__DETAIL__MARKERS__STRUCT_HPP_
#define ARUCOSRVMSG__MSG__DETAIL__MARKERS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__arucosrvmsg__msg__Markers __attribute__((deprecated))
#else
# define DEPRECATED__arucosrvmsg__msg__Markers __declspec(deprecated)
#endif

namespace arucosrvmsg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Markers_
{
  using Type = Markers_<ContainerAllocator>;

  explicit Markers_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit Markers_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _corners_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _corners_type corners;
  using _ids_type =
    std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>>;
  _ids_type ids;

  // setters for named parameter idiom
  Type & set__corners(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->corners = _arg;
    return *this;
  }
  Type & set__ids(
    const std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>> & _arg)
  {
    this->ids = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    arucosrvmsg::msg::Markers_<ContainerAllocator> *;
  using ConstRawPtr =
    const arucosrvmsg::msg::Markers_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<arucosrvmsg::msg::Markers_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<arucosrvmsg::msg::Markers_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      arucosrvmsg::msg::Markers_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<arucosrvmsg::msg::Markers_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      arucosrvmsg::msg::Markers_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<arucosrvmsg::msg::Markers_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<arucosrvmsg::msg::Markers_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<arucosrvmsg::msg::Markers_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__arucosrvmsg__msg__Markers
    std::shared_ptr<arucosrvmsg::msg::Markers_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__arucosrvmsg__msg__Markers
    std::shared_ptr<arucosrvmsg::msg::Markers_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Markers_ & other) const
  {
    if (this->corners != other.corners) {
      return false;
    }
    if (this->ids != other.ids) {
      return false;
    }
    return true;
  }
  bool operator!=(const Markers_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Markers_

// alias to use template instance with default allocator
using Markers =
  arucosrvmsg::msg::Markers_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace arucosrvmsg

#endif  // ARUCOSRVMSG__MSG__DETAIL__MARKERS__STRUCT_HPP_
