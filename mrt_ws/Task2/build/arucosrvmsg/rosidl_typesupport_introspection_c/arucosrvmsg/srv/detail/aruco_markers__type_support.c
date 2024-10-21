// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from arucosrvmsg:srv/ArucoMarkers.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "arucosrvmsg/srv/detail/aruco_markers__rosidl_typesupport_introspection_c.h"
#include "arucosrvmsg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "arucosrvmsg/srv/detail/aruco_markers__functions.h"
#include "arucosrvmsg/srv/detail/aruco_markers__struct.h"


// Include directives for member types
// Member `image`
#include "sensor_msgs/msg/image.h"
// Member `image`
#include "sensor_msgs/msg/detail/image__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void arucosrvmsg__srv__ArucoMarkers_Request__rosidl_typesupport_introspection_c__ArucoMarkers_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  arucosrvmsg__srv__ArucoMarkers_Request__init(message_memory);
}

void arucosrvmsg__srv__ArucoMarkers_Request__rosidl_typesupport_introspection_c__ArucoMarkers_Request_fini_function(void * message_memory)
{
  arucosrvmsg__srv__ArucoMarkers_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember arucosrvmsg__srv__ArucoMarkers_Request__rosidl_typesupport_introspection_c__ArucoMarkers_Request_message_member_array[1] = {
  {
    "image",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(arucosrvmsg__srv__ArucoMarkers_Request, image),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers arucosrvmsg__srv__ArucoMarkers_Request__rosidl_typesupport_introspection_c__ArucoMarkers_Request_message_members = {
  "arucosrvmsg__srv",  // message namespace
  "ArucoMarkers_Request",  // message name
  1,  // number of fields
  sizeof(arucosrvmsg__srv__ArucoMarkers_Request),
  arucosrvmsg__srv__ArucoMarkers_Request__rosidl_typesupport_introspection_c__ArucoMarkers_Request_message_member_array,  // message members
  arucosrvmsg__srv__ArucoMarkers_Request__rosidl_typesupport_introspection_c__ArucoMarkers_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  arucosrvmsg__srv__ArucoMarkers_Request__rosidl_typesupport_introspection_c__ArucoMarkers_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t arucosrvmsg__srv__ArucoMarkers_Request__rosidl_typesupport_introspection_c__ArucoMarkers_Request_message_type_support_handle = {
  0,
  &arucosrvmsg__srv__ArucoMarkers_Request__rosidl_typesupport_introspection_c__ArucoMarkers_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_arucosrvmsg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, arucosrvmsg, srv, ArucoMarkers_Request)() {
  arucosrvmsg__srv__ArucoMarkers_Request__rosidl_typesupport_introspection_c__ArucoMarkers_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sensor_msgs, msg, Image)();
  if (!arucosrvmsg__srv__ArucoMarkers_Request__rosidl_typesupport_introspection_c__ArucoMarkers_Request_message_type_support_handle.typesupport_identifier) {
    arucosrvmsg__srv__ArucoMarkers_Request__rosidl_typesupport_introspection_c__ArucoMarkers_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &arucosrvmsg__srv__ArucoMarkers_Request__rosidl_typesupport_introspection_c__ArucoMarkers_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "arucosrvmsg/srv/detail/aruco_markers__rosidl_typesupport_introspection_c.h"
// already included above
// #include "arucosrvmsg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "arucosrvmsg/srv/detail/aruco_markers__functions.h"
// already included above
// #include "arucosrvmsg/srv/detail/aruco_markers__struct.h"


// Include directives for member types
// Member `ids`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `bounding_boxes`
#include "geometry_msgs/msg/polygon.h"
// Member `bounding_boxes`
#include "geometry_msgs/msg/detail/polygon__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void arucosrvmsg__srv__ArucoMarkers_Response__rosidl_typesupport_introspection_c__ArucoMarkers_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  arucosrvmsg__srv__ArucoMarkers_Response__init(message_memory);
}

void arucosrvmsg__srv__ArucoMarkers_Response__rosidl_typesupport_introspection_c__ArucoMarkers_Response_fini_function(void * message_memory)
{
  arucosrvmsg__srv__ArucoMarkers_Response__fini(message_memory);
}

size_t arucosrvmsg__srv__ArucoMarkers_Response__rosidl_typesupport_introspection_c__size_function__ArucoMarkers_Response__ids(
  const void * untyped_member)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return member->size;
}

const void * arucosrvmsg__srv__ArucoMarkers_Response__rosidl_typesupport_introspection_c__get_const_function__ArucoMarkers_Response__ids(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * arucosrvmsg__srv__ArucoMarkers_Response__rosidl_typesupport_introspection_c__get_function__ArucoMarkers_Response__ids(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void arucosrvmsg__srv__ArucoMarkers_Response__rosidl_typesupport_introspection_c__fetch_function__ArucoMarkers_Response__ids(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int32_t * item =
    ((const int32_t *)
    arucosrvmsg__srv__ArucoMarkers_Response__rosidl_typesupport_introspection_c__get_const_function__ArucoMarkers_Response__ids(untyped_member, index));
  int32_t * value =
    (int32_t *)(untyped_value);
  *value = *item;
}

void arucosrvmsg__srv__ArucoMarkers_Response__rosidl_typesupport_introspection_c__assign_function__ArucoMarkers_Response__ids(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int32_t * item =
    ((int32_t *)
    arucosrvmsg__srv__ArucoMarkers_Response__rosidl_typesupport_introspection_c__get_function__ArucoMarkers_Response__ids(untyped_member, index));
  const int32_t * value =
    (const int32_t *)(untyped_value);
  *item = *value;
}

bool arucosrvmsg__srv__ArucoMarkers_Response__rosidl_typesupport_introspection_c__resize_function__ArucoMarkers_Response__ids(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  rosidl_runtime_c__int32__Sequence__fini(member);
  return rosidl_runtime_c__int32__Sequence__init(member, size);
}

size_t arucosrvmsg__srv__ArucoMarkers_Response__rosidl_typesupport_introspection_c__size_function__ArucoMarkers_Response__bounding_boxes(
  const void * untyped_member)
{
  const geometry_msgs__msg__Polygon__Sequence * member =
    (const geometry_msgs__msg__Polygon__Sequence *)(untyped_member);
  return member->size;
}

const void * arucosrvmsg__srv__ArucoMarkers_Response__rosidl_typesupport_introspection_c__get_const_function__ArucoMarkers_Response__bounding_boxes(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__Polygon__Sequence * member =
    (const geometry_msgs__msg__Polygon__Sequence *)(untyped_member);
  return &member->data[index];
}

void * arucosrvmsg__srv__ArucoMarkers_Response__rosidl_typesupport_introspection_c__get_function__ArucoMarkers_Response__bounding_boxes(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__Polygon__Sequence * member =
    (geometry_msgs__msg__Polygon__Sequence *)(untyped_member);
  return &member->data[index];
}

void arucosrvmsg__srv__ArucoMarkers_Response__rosidl_typesupport_introspection_c__fetch_function__ArucoMarkers_Response__bounding_boxes(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const geometry_msgs__msg__Polygon * item =
    ((const geometry_msgs__msg__Polygon *)
    arucosrvmsg__srv__ArucoMarkers_Response__rosidl_typesupport_introspection_c__get_const_function__ArucoMarkers_Response__bounding_boxes(untyped_member, index));
  geometry_msgs__msg__Polygon * value =
    (geometry_msgs__msg__Polygon *)(untyped_value);
  *value = *item;
}

void arucosrvmsg__srv__ArucoMarkers_Response__rosidl_typesupport_introspection_c__assign_function__ArucoMarkers_Response__bounding_boxes(
  void * untyped_member, size_t index, const void * untyped_value)
{
  geometry_msgs__msg__Polygon * item =
    ((geometry_msgs__msg__Polygon *)
    arucosrvmsg__srv__ArucoMarkers_Response__rosidl_typesupport_introspection_c__get_function__ArucoMarkers_Response__bounding_boxes(untyped_member, index));
  const geometry_msgs__msg__Polygon * value =
    (const geometry_msgs__msg__Polygon *)(untyped_value);
  *item = *value;
}

bool arucosrvmsg__srv__ArucoMarkers_Response__rosidl_typesupport_introspection_c__resize_function__ArucoMarkers_Response__bounding_boxes(
  void * untyped_member, size_t size)
{
  geometry_msgs__msg__Polygon__Sequence * member =
    (geometry_msgs__msg__Polygon__Sequence *)(untyped_member);
  geometry_msgs__msg__Polygon__Sequence__fini(member);
  return geometry_msgs__msg__Polygon__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember arucosrvmsg__srv__ArucoMarkers_Response__rosidl_typesupport_introspection_c__ArucoMarkers_Response_message_member_array[2] = {
  {
    "ids",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(arucosrvmsg__srv__ArucoMarkers_Response, ids),  // bytes offset in struct
    NULL,  // default value
    arucosrvmsg__srv__ArucoMarkers_Response__rosidl_typesupport_introspection_c__size_function__ArucoMarkers_Response__ids,  // size() function pointer
    arucosrvmsg__srv__ArucoMarkers_Response__rosidl_typesupport_introspection_c__get_const_function__ArucoMarkers_Response__ids,  // get_const(index) function pointer
    arucosrvmsg__srv__ArucoMarkers_Response__rosidl_typesupport_introspection_c__get_function__ArucoMarkers_Response__ids,  // get(index) function pointer
    arucosrvmsg__srv__ArucoMarkers_Response__rosidl_typesupport_introspection_c__fetch_function__ArucoMarkers_Response__ids,  // fetch(index, &value) function pointer
    arucosrvmsg__srv__ArucoMarkers_Response__rosidl_typesupport_introspection_c__assign_function__ArucoMarkers_Response__ids,  // assign(index, value) function pointer
    arucosrvmsg__srv__ArucoMarkers_Response__rosidl_typesupport_introspection_c__resize_function__ArucoMarkers_Response__ids  // resize(index) function pointer
  },
  {
    "bounding_boxes",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(arucosrvmsg__srv__ArucoMarkers_Response, bounding_boxes),  // bytes offset in struct
    NULL,  // default value
    arucosrvmsg__srv__ArucoMarkers_Response__rosidl_typesupport_introspection_c__size_function__ArucoMarkers_Response__bounding_boxes,  // size() function pointer
    arucosrvmsg__srv__ArucoMarkers_Response__rosidl_typesupport_introspection_c__get_const_function__ArucoMarkers_Response__bounding_boxes,  // get_const(index) function pointer
    arucosrvmsg__srv__ArucoMarkers_Response__rosidl_typesupport_introspection_c__get_function__ArucoMarkers_Response__bounding_boxes,  // get(index) function pointer
    arucosrvmsg__srv__ArucoMarkers_Response__rosidl_typesupport_introspection_c__fetch_function__ArucoMarkers_Response__bounding_boxes,  // fetch(index, &value) function pointer
    arucosrvmsg__srv__ArucoMarkers_Response__rosidl_typesupport_introspection_c__assign_function__ArucoMarkers_Response__bounding_boxes,  // assign(index, value) function pointer
    arucosrvmsg__srv__ArucoMarkers_Response__rosidl_typesupport_introspection_c__resize_function__ArucoMarkers_Response__bounding_boxes  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers arucosrvmsg__srv__ArucoMarkers_Response__rosidl_typesupport_introspection_c__ArucoMarkers_Response_message_members = {
  "arucosrvmsg__srv",  // message namespace
  "ArucoMarkers_Response",  // message name
  2,  // number of fields
  sizeof(arucosrvmsg__srv__ArucoMarkers_Response),
  arucosrvmsg__srv__ArucoMarkers_Response__rosidl_typesupport_introspection_c__ArucoMarkers_Response_message_member_array,  // message members
  arucosrvmsg__srv__ArucoMarkers_Response__rosidl_typesupport_introspection_c__ArucoMarkers_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  arucosrvmsg__srv__ArucoMarkers_Response__rosidl_typesupport_introspection_c__ArucoMarkers_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t arucosrvmsg__srv__ArucoMarkers_Response__rosidl_typesupport_introspection_c__ArucoMarkers_Response_message_type_support_handle = {
  0,
  &arucosrvmsg__srv__ArucoMarkers_Response__rosidl_typesupport_introspection_c__ArucoMarkers_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_arucosrvmsg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, arucosrvmsg, srv, ArucoMarkers_Response)() {
  arucosrvmsg__srv__ArucoMarkers_Response__rosidl_typesupport_introspection_c__ArucoMarkers_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Polygon)();
  if (!arucosrvmsg__srv__ArucoMarkers_Response__rosidl_typesupport_introspection_c__ArucoMarkers_Response_message_type_support_handle.typesupport_identifier) {
    arucosrvmsg__srv__ArucoMarkers_Response__rosidl_typesupport_introspection_c__ArucoMarkers_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &arucosrvmsg__srv__ArucoMarkers_Response__rosidl_typesupport_introspection_c__ArucoMarkers_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "arucosrvmsg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "arucosrvmsg/srv/detail/aruco_markers__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers arucosrvmsg__srv__detail__aruco_markers__rosidl_typesupport_introspection_c__ArucoMarkers_service_members = {
  "arucosrvmsg__srv",  // service namespace
  "ArucoMarkers",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // arucosrvmsg__srv__detail__aruco_markers__rosidl_typesupport_introspection_c__ArucoMarkers_Request_message_type_support_handle,
  NULL  // response message
  // arucosrvmsg__srv__detail__aruco_markers__rosidl_typesupport_introspection_c__ArucoMarkers_Response_message_type_support_handle
};

static rosidl_service_type_support_t arucosrvmsg__srv__detail__aruco_markers__rosidl_typesupport_introspection_c__ArucoMarkers_service_type_support_handle = {
  0,
  &arucosrvmsg__srv__detail__aruco_markers__rosidl_typesupport_introspection_c__ArucoMarkers_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, arucosrvmsg, srv, ArucoMarkers_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, arucosrvmsg, srv, ArucoMarkers_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_arucosrvmsg
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, arucosrvmsg, srv, ArucoMarkers)() {
  if (!arucosrvmsg__srv__detail__aruco_markers__rosidl_typesupport_introspection_c__ArucoMarkers_service_type_support_handle.typesupport_identifier) {
    arucosrvmsg__srv__detail__aruco_markers__rosidl_typesupport_introspection_c__ArucoMarkers_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)arucosrvmsg__srv__detail__aruco_markers__rosidl_typesupport_introspection_c__ArucoMarkers_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, arucosrvmsg, srv, ArucoMarkers_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, arucosrvmsg, srv, ArucoMarkers_Response)()->data;
  }

  return &arucosrvmsg__srv__detail__aruco_markers__rosidl_typesupport_introspection_c__ArucoMarkers_service_type_support_handle;
}
