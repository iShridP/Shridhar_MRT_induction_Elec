// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from arucosrvmsg:srv/Service.idl
// generated code does not contain a copyright notice

#ifndef ARUCOSRVMSG__SRV__DETAIL__SERVICE__STRUCT_HPP_
#define ARUCOSRVMSG__SRV__DETAIL__SERVICE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'image'
#include "sensor_msgs/msg/detail/image__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__arucosrvmsg__srv__Service_Request __attribute__((deprecated))
#else
# define DEPRECATED__arucosrvmsg__srv__Service_Request __declspec(deprecated)
#endif

namespace arucosrvmsg
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Service_Request_
{
  using Type = Service_Request_<ContainerAllocator>;

  explicit Service_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : image(_init)
  {
    (void)_init;
  }

  explicit Service_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : image(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _image_type =
    sensor_msgs::msg::Image_<ContainerAllocator>;
  _image_type image;

  // setters for named parameter idiom
  Type & set__image(
    const sensor_msgs::msg::Image_<ContainerAllocator> & _arg)
  {
    this->image = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    arucosrvmsg::srv::Service_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const arucosrvmsg::srv::Service_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<arucosrvmsg::srv::Service_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<arucosrvmsg::srv::Service_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      arucosrvmsg::srv::Service_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<arucosrvmsg::srv::Service_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      arucosrvmsg::srv::Service_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<arucosrvmsg::srv::Service_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<arucosrvmsg::srv::Service_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<arucosrvmsg::srv::Service_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__arucosrvmsg__srv__Service_Request
    std::shared_ptr<arucosrvmsg::srv::Service_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__arucosrvmsg__srv__Service_Request
    std::shared_ptr<arucosrvmsg::srv::Service_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Service_Request_ & other) const
  {
    if (this->image != other.image) {
      return false;
    }
    return true;
  }
  bool operator!=(const Service_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Service_Request_

// alias to use template instance with default allocator
using Service_Request =
  arucosrvmsg::srv::Service_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace arucosrvmsg


// Include directives for member types
// Member 'markers'
#include "arucosrvmsg/msg/detail/markers__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__arucosrvmsg__srv__Service_Response __attribute__((deprecated))
#else
# define DEPRECATED__arucosrvmsg__srv__Service_Response __declspec(deprecated)
#endif

namespace arucosrvmsg
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Service_Response_
{
  using Type = Service_Response_<ContainerAllocator>;

  explicit Service_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : markers(_init)
  {
    (void)_init;
  }

  explicit Service_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : markers(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _markers_type =
    arucosrvmsg::msg::Markers_<ContainerAllocator>;
  _markers_type markers;

  // setters for named parameter idiom
  Type & set__markers(
    const arucosrvmsg::msg::Markers_<ContainerAllocator> & _arg)
  {
    this->markers = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    arucosrvmsg::srv::Service_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const arucosrvmsg::srv::Service_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<arucosrvmsg::srv::Service_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<arucosrvmsg::srv::Service_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      arucosrvmsg::srv::Service_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<arucosrvmsg::srv::Service_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      arucosrvmsg::srv::Service_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<arucosrvmsg::srv::Service_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<arucosrvmsg::srv::Service_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<arucosrvmsg::srv::Service_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__arucosrvmsg__srv__Service_Response
    std::shared_ptr<arucosrvmsg::srv::Service_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__arucosrvmsg__srv__Service_Response
    std::shared_ptr<arucosrvmsg::srv::Service_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Service_Response_ & other) const
  {
    if (this->markers != other.markers) {
      return false;
    }
    return true;
  }
  bool operator!=(const Service_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Service_Response_

// alias to use template instance with default allocator
using Service_Response =
  arucosrvmsg::srv::Service_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace arucosrvmsg

namespace arucosrvmsg
{

namespace srv
{

struct Service
{
  using Request = arucosrvmsg::srv::Service_Request;
  using Response = arucosrvmsg::srv::Service_Response;
};

}  // namespace srv

}  // namespace arucosrvmsg

#endif  // ARUCOSRVMSG__SRV__DETAIL__SERVICE__STRUCT_HPP_
