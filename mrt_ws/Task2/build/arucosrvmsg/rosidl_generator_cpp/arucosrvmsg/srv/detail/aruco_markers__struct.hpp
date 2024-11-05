// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from arucosrvmsg:srv/ArucoMarkers.idl
// generated code does not contain a copyright notice

#ifndef ARUCOSRVMSG__SRV__DETAIL__ARUCO_MARKERS__STRUCT_HPP_
#define ARUCOSRVMSG__SRV__DETAIL__ARUCO_MARKERS__STRUCT_HPP_

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
# define DEPRECATED__arucosrvmsg__srv__ArucoMarkers_Request __attribute__((deprecated))
#else
# define DEPRECATED__arucosrvmsg__srv__ArucoMarkers_Request __declspec(deprecated)
#endif

namespace arucosrvmsg
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ArucoMarkers_Request_
{
  using Type = ArucoMarkers_Request_<ContainerAllocator>;

  explicit ArucoMarkers_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : image(_init)
  {
    (void)_init;
  }

  explicit ArucoMarkers_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    arucosrvmsg::srv::ArucoMarkers_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const arucosrvmsg::srv::ArucoMarkers_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<arucosrvmsg::srv::ArucoMarkers_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<arucosrvmsg::srv::ArucoMarkers_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      arucosrvmsg::srv::ArucoMarkers_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<arucosrvmsg::srv::ArucoMarkers_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      arucosrvmsg::srv::ArucoMarkers_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<arucosrvmsg::srv::ArucoMarkers_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<arucosrvmsg::srv::ArucoMarkers_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<arucosrvmsg::srv::ArucoMarkers_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__arucosrvmsg__srv__ArucoMarkers_Request
    std::shared_ptr<arucosrvmsg::srv::ArucoMarkers_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__arucosrvmsg__srv__ArucoMarkers_Request
    std::shared_ptr<arucosrvmsg::srv::ArucoMarkers_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ArucoMarkers_Request_ & other) const
  {
    if (this->image != other.image) {
      return false;
    }
    return true;
  }
  bool operator!=(const ArucoMarkers_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ArucoMarkers_Request_

// alias to use template instance with default allocator
using ArucoMarkers_Request =
  arucosrvmsg::srv::ArucoMarkers_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace arucosrvmsg


// Include directives for member types
// Member 'bounding_boxes'
#include "geometry_msgs/msg/detail/polygon__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__arucosrvmsg__srv__ArucoMarkers_Response __attribute__((deprecated))
#else
# define DEPRECATED__arucosrvmsg__srv__ArucoMarkers_Response __declspec(deprecated)
#endif

namespace arucosrvmsg
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ArucoMarkers_Response_
{
  using Type = ArucoMarkers_Response_<ContainerAllocator>;

  explicit ArucoMarkers_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit ArucoMarkers_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    arucosrvmsg::srv::ArucoMarkers_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const arucosrvmsg::srv::ArucoMarkers_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<arucosrvmsg::srv::ArucoMarkers_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<arucosrvmsg::srv::ArucoMarkers_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      arucosrvmsg::srv::ArucoMarkers_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<arucosrvmsg::srv::ArucoMarkers_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      arucosrvmsg::srv::ArucoMarkers_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<arucosrvmsg::srv::ArucoMarkers_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<arucosrvmsg::srv::ArucoMarkers_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<arucosrvmsg::srv::ArucoMarkers_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__arucosrvmsg__srv__ArucoMarkers_Response
    std::shared_ptr<arucosrvmsg::srv::ArucoMarkers_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__arucosrvmsg__srv__ArucoMarkers_Response
    std::shared_ptr<arucosrvmsg::srv::ArucoMarkers_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ArucoMarkers_Response_ & other) const
  {
    if (this->ids != other.ids) {
      return false;
    }
    if (this->bounding_boxes != other.bounding_boxes) {
      return false;
    }
    return true;
  }
  bool operator!=(const ArucoMarkers_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ArucoMarkers_Response_

// alias to use template instance with default allocator
using ArucoMarkers_Response =
  arucosrvmsg::srv::ArucoMarkers_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace arucosrvmsg

namespace arucosrvmsg
{

namespace srv
{

struct ArucoMarkers
{
  using Request = arucosrvmsg::srv::ArucoMarkers_Request;
  using Response = arucosrvmsg::srv::ArucoMarkers_Response;
};

}  // namespace srv

}  // namespace arucosrvmsg

#endif  // ARUCOSRVMSG__SRV__DETAIL__ARUCO_MARKERS__STRUCT_HPP_
