// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from arucosrvmsg:msg/ArucoMarkers.idl
// generated code does not contain a copyright notice
#include "arucosrvmsg/msg/detail/aruco_markers__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `ids`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `bounding_boxes`
#include "geometry_msgs/msg/detail/polygon__functions.h"

bool
arucosrvmsg__msg__ArucoMarkers__init(arucosrvmsg__msg__ArucoMarkers * msg)
{
  if (!msg) {
    return false;
  }
  // ids
  if (!rosidl_runtime_c__int32__Sequence__init(&msg->ids, 0)) {
    arucosrvmsg__msg__ArucoMarkers__fini(msg);
    return false;
  }
  // bounding_boxes
  if (!geometry_msgs__msg__Polygon__Sequence__init(&msg->bounding_boxes, 0)) {
    arucosrvmsg__msg__ArucoMarkers__fini(msg);
    return false;
  }
  return true;
}

void
arucosrvmsg__msg__ArucoMarkers__fini(arucosrvmsg__msg__ArucoMarkers * msg)
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
arucosrvmsg__msg__ArucoMarkers__are_equal(const arucosrvmsg__msg__ArucoMarkers * lhs, const arucosrvmsg__msg__ArucoMarkers * rhs)
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
arucosrvmsg__msg__ArucoMarkers__copy(
  const arucosrvmsg__msg__ArucoMarkers * input,
  arucosrvmsg__msg__ArucoMarkers * output)
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

arucosrvmsg__msg__ArucoMarkers *
arucosrvmsg__msg__ArucoMarkers__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  arucosrvmsg__msg__ArucoMarkers * msg = (arucosrvmsg__msg__ArucoMarkers *)allocator.allocate(sizeof(arucosrvmsg__msg__ArucoMarkers), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(arucosrvmsg__msg__ArucoMarkers));
  bool success = arucosrvmsg__msg__ArucoMarkers__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
arucosrvmsg__msg__ArucoMarkers__destroy(arucosrvmsg__msg__ArucoMarkers * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    arucosrvmsg__msg__ArucoMarkers__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
arucosrvmsg__msg__ArucoMarkers__Sequence__init(arucosrvmsg__msg__ArucoMarkers__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  arucosrvmsg__msg__ArucoMarkers * data = NULL;

  if (size) {
    data = (arucosrvmsg__msg__ArucoMarkers *)allocator.zero_allocate(size, sizeof(arucosrvmsg__msg__ArucoMarkers), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = arucosrvmsg__msg__ArucoMarkers__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        arucosrvmsg__msg__ArucoMarkers__fini(&data[i - 1]);
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
arucosrvmsg__msg__ArucoMarkers__Sequence__fini(arucosrvmsg__msg__ArucoMarkers__Sequence * array)
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
      arucosrvmsg__msg__ArucoMarkers__fini(&array->data[i]);
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

arucosrvmsg__msg__ArucoMarkers__Sequence *
arucosrvmsg__msg__ArucoMarkers__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  arucosrvmsg__msg__ArucoMarkers__Sequence * array = (arucosrvmsg__msg__ArucoMarkers__Sequence *)allocator.allocate(sizeof(arucosrvmsg__msg__ArucoMarkers__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = arucosrvmsg__msg__ArucoMarkers__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
arucosrvmsg__msg__ArucoMarkers__Sequence__destroy(arucosrvmsg__msg__ArucoMarkers__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    arucosrvmsg__msg__ArucoMarkers__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
arucosrvmsg__msg__ArucoMarkers__Sequence__are_equal(const arucosrvmsg__msg__ArucoMarkers__Sequence * lhs, const arucosrvmsg__msg__ArucoMarkers__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!arucosrvmsg__msg__ArucoMarkers__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
arucosrvmsg__msg__ArucoMarkers__Sequence__copy(
  const arucosrvmsg__msg__ArucoMarkers__Sequence * input,
  arucosrvmsg__msg__ArucoMarkers__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(arucosrvmsg__msg__ArucoMarkers);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    arucosrvmsg__msg__ArucoMarkers * data =
      (arucosrvmsg__msg__ArucoMarkers *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!arucosrvmsg__msg__ArucoMarkers__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          arucosrvmsg__msg__ArucoMarkers__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!arucosrvmsg__msg__ArucoMarkers__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
