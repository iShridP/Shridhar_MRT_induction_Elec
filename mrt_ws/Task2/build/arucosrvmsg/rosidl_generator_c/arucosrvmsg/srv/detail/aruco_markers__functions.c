// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from arucosrvmsg:srv/ArucoMarkers.idl
// generated code does not contain a copyright notice
#include "arucosrvmsg/srv/detail/aruco_markers__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `image`
#include "sensor_msgs/msg/detail/image__functions.h"

bool
arucosrvmsg__srv__ArucoMarkers_Request__init(arucosrvmsg__srv__ArucoMarkers_Request * msg)
{
  if (!msg) {
    return false;
  }
  // image
  if (!sensor_msgs__msg__Image__init(&msg->image)) {
    arucosrvmsg__srv__ArucoMarkers_Request__fini(msg);
    return false;
  }
  return true;
}

void
arucosrvmsg__srv__ArucoMarkers_Request__fini(arucosrvmsg__srv__ArucoMarkers_Request * msg)
{
  if (!msg) {
    return;
  }
  // image
  sensor_msgs__msg__Image__fini(&msg->image);
}

bool
arucosrvmsg__srv__ArucoMarkers_Request__are_equal(const arucosrvmsg__srv__ArucoMarkers_Request * lhs, const arucosrvmsg__srv__ArucoMarkers_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // image
  if (!sensor_msgs__msg__Image__are_equal(
      &(lhs->image), &(rhs->image)))
  {
    return false;
  }
  return true;
}

bool
arucosrvmsg__srv__ArucoMarkers_Request__copy(
  const arucosrvmsg__srv__ArucoMarkers_Request * input,
  arucosrvmsg__srv__ArucoMarkers_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // image
  if (!sensor_msgs__msg__Image__copy(
      &(input->image), &(output->image)))
  {
    return false;
  }
  return true;
}

arucosrvmsg__srv__ArucoMarkers_Request *
arucosrvmsg__srv__ArucoMarkers_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  arucosrvmsg__srv__ArucoMarkers_Request * msg = (arucosrvmsg__srv__ArucoMarkers_Request *)allocator.allocate(sizeof(arucosrvmsg__srv__ArucoMarkers_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(arucosrvmsg__srv__ArucoMarkers_Request));
  bool success = arucosrvmsg__srv__ArucoMarkers_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
arucosrvmsg__srv__ArucoMarkers_Request__destroy(arucosrvmsg__srv__ArucoMarkers_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    arucosrvmsg__srv__ArucoMarkers_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
arucosrvmsg__srv__ArucoMarkers_Request__Sequence__init(arucosrvmsg__srv__ArucoMarkers_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  arucosrvmsg__srv__ArucoMarkers_Request * data = NULL;

  if (size) {
    data = (arucosrvmsg__srv__ArucoMarkers_Request *)allocator.zero_allocate(size, sizeof(arucosrvmsg__srv__ArucoMarkers_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = arucosrvmsg__srv__ArucoMarkers_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        arucosrvmsg__srv__ArucoMarkers_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
arucosrvmsg__srv__ArucoMarkers_Request__Sequence__fini(arucosrvmsg__srv__ArucoMarkers_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      arucosrvmsg__srv__ArucoMarkers_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

arucosrvmsg__srv__ArucoMarkers_Request__Sequence *
arucosrvmsg__srv__ArucoMarkers_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  arucosrvmsg__srv__ArucoMarkers_Request__Sequence * array = (arucosrvmsg__srv__ArucoMarkers_Request__Sequence *)allocator.allocate(sizeof(arucosrvmsg__srv__ArucoMarkers_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = arucosrvmsg__srv__ArucoMarkers_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
arucosrvmsg__srv__ArucoMarkers_Request__Sequence__destroy(arucosrvmsg__srv__ArucoMarkers_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    arucosrvmsg__srv__ArucoMarkers_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
arucosrvmsg__srv__ArucoMarkers_Request__Sequence__are_equal(const arucosrvmsg__srv__ArucoMarkers_Request__Sequence * lhs, const arucosrvmsg__srv__ArucoMarkers_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!arucosrvmsg__srv__ArucoMarkers_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
arucosrvmsg__srv__ArucoMarkers_Request__Sequence__copy(
  const arucosrvmsg__srv__ArucoMarkers_Request__Sequence * input,
  arucosrvmsg__srv__ArucoMarkers_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(arucosrvmsg__srv__ArucoMarkers_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    arucosrvmsg__srv__ArucoMarkers_Request * data =
      (arucosrvmsg__srv__ArucoMarkers_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!arucosrvmsg__srv__ArucoMarkers_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          arucosrvmsg__srv__ArucoMarkers_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!arucosrvmsg__srv__ArucoMarkers_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `ids`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `bounding_boxes`
#include "geometry_msgs/msg/detail/polygon__functions.h"

bool
arucosrvmsg__srv__ArucoMarkers_Response__init(arucosrvmsg__srv__ArucoMarkers_Response * msg)
{
  if (!msg) {
    return false;
  }
  // ids
  if (!rosidl_runtime_c__int32__Sequence__init(&msg->ids, 0)) {
    arucosrvmsg__srv__ArucoMarkers_Response__fini(msg);
    return false;
  }
  // bounding_boxes
  if (!geometry_msgs__msg__Polygon__Sequence__init(&msg->bounding_boxes, 0)) {
    arucosrvmsg__srv__ArucoMarkers_Response__fini(msg);
    return false;
  }
  return true;
}

void
arucosrvmsg__srv__ArucoMarkers_Response__fini(arucosrvmsg__srv__ArucoMarkers_Response * msg)
{
  if (!msg) {
    return;
  }
  // ids
  rosidl_runtime_c__int32__Sequence__fini(&msg->ids);
  // bounding_boxes
  geometry_msgs__msg__Polygon__Sequence__fini(&msg->bounding_boxes);
}

bool
arucosrvmsg__srv__ArucoMarkers_Response__are_equal(const arucosrvmsg__srv__ArucoMarkers_Response * lhs, const arucosrvmsg__srv__ArucoMarkers_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // ids
  if (!rosidl_runtime_c__int32__Sequence__are_equal(
      &(lhs->ids), &(rhs->ids)))
  {
    return false;
  }
  // bounding_boxes
  if (!geometry_msgs__msg__Polygon__Sequence__are_equal(
      &(lhs->bounding_boxes), &(rhs->bounding_boxes)))
  {
    return false;
  }
  return true;
}

bool
arucosrvmsg__srv__ArucoMarkers_Response__copy(
  const arucosrvmsg__srv__ArucoMarkers_Response * input,
  arucosrvmsg__srv__ArucoMarkers_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // ids
  if (!rosidl_runtime_c__int32__Sequence__copy(
      &(input->ids), &(output->ids)))
  {
    return false;
  }
  // bounding_boxes
  if (!geometry_msgs__msg__Polygon__Sequence__copy(
      &(input->bounding_boxes), &(output->bounding_boxes)))
  {
    return false;
  }
  return true;
}

arucosrvmsg__srv__ArucoMarkers_Response *
arucosrvmsg__srv__ArucoMarkers_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  arucosrvmsg__srv__ArucoMarkers_Response * msg = (arucosrvmsg__srv__ArucoMarkers_Response *)allocator.allocate(sizeof(arucosrvmsg__srv__ArucoMarkers_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(arucosrvmsg__srv__ArucoMarkers_Response));
  bool success = arucosrvmsg__srv__ArucoMarkers_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
arucosrvmsg__srv__ArucoMarkers_Response__destroy(arucosrvmsg__srv__ArucoMarkers_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    arucosrvmsg__srv__ArucoMarkers_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
arucosrvmsg__srv__ArucoMarkers_Response__Sequence__init(arucosrvmsg__srv__ArucoMarkers_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  arucosrvmsg__srv__ArucoMarkers_Response * data = NULL;

  if (size) {
    data = (arucosrvmsg__srv__ArucoMarkers_Response *)allocator.zero_allocate(size, sizeof(arucosrvmsg__srv__ArucoMarkers_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = arucosrvmsg__srv__ArucoMarkers_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        arucosrvmsg__srv__ArucoMarkers_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
arucosrvmsg__srv__ArucoMarkers_Response__Sequence__fini(arucosrvmsg__srv__ArucoMarkers_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      arucosrvmsg__srv__ArucoMarkers_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

arucosrvmsg__srv__ArucoMarkers_Response__Sequence *
arucosrvmsg__srv__ArucoMarkers_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  arucosrvmsg__srv__ArucoMarkers_Response__Sequence * array = (arucosrvmsg__srv__ArucoMarkers_Response__Sequence *)allocator.allocate(sizeof(arucosrvmsg__srv__ArucoMarkers_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = arucosrvmsg__srv__ArucoMarkers_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
arucosrvmsg__srv__ArucoMarkers_Response__Sequence__destroy(arucosrvmsg__srv__ArucoMarkers_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    arucosrvmsg__srv__ArucoMarkers_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
arucosrvmsg__srv__ArucoMarkers_Response__Sequence__are_equal(const arucosrvmsg__srv__ArucoMarkers_Response__Sequence * lhs, const arucosrvmsg__srv__ArucoMarkers_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!arucosrvmsg__srv__ArucoMarkers_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
arucosrvmsg__srv__ArucoMarkers_Response__Sequence__copy(
  const arucosrvmsg__srv__ArucoMarkers_Response__Sequence * input,
  arucosrvmsg__srv__ArucoMarkers_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(arucosrvmsg__srv__ArucoMarkers_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    arucosrvmsg__srv__ArucoMarkers_Response * data =
      (arucosrvmsg__srv__ArucoMarkers_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!arucosrvmsg__srv__ArucoMarkers_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          arucosrvmsg__srv__ArucoMarkers_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!arucosrvmsg__srv__ArucoMarkers_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}