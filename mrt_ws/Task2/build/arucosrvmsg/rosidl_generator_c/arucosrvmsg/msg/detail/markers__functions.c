// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from arucosrvmsg:msg/Markers.idl
// generated code does not contain a copyright notice
#include "arucosrvmsg/msg/detail/markers__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `corners`
// Member `ids`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
arucosrvmsg__msg__Markers__init(arucosrvmsg__msg__Markers * msg)
{
  if (!msg) {
    return false;
  }
  // corners
  if (!rosidl_runtime_c__float__Sequence__init(&msg->corners, 0)) {
    arucosrvmsg__msg__Markers__fini(msg);
    return false;
  }
  // ids
  if (!rosidl_runtime_c__int32__Sequence__init(&msg->ids, 0)) {
    arucosrvmsg__msg__Markers__fini(msg);
    return false;
  }
  return true;
}

void
arucosrvmsg__msg__Markers__fini(arucosrvmsg__msg__Markers * msg)
{
  if (!msg) {
    return;
  }
  // corners
  rosidl_runtime_c__float__Sequence__fini(&msg->corners);
  // ids
  rosidl_runtime_c__int32__Sequence__fini(&msg->ids);
}

bool
arucosrvmsg__msg__Markers__are_equal(const arucosrvmsg__msg__Markers * lhs, const arucosrvmsg__msg__Markers * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // corners
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->corners), &(rhs->corners)))
  {
    return false;
  }
  // ids
  if (!rosidl_runtime_c__int32__Sequence__are_equal(
      &(lhs->ids), &(rhs->ids)))
  {
    return false;
  }
  return true;
}

bool
arucosrvmsg__msg__Markers__copy(
  const arucosrvmsg__msg__Markers * input,
  arucosrvmsg__msg__Markers * output)
{
  if (!input || !output) {
    return false;
  }
  // corners
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->corners), &(output->corners)))
  {
    return false;
  }
  // ids
  if (!rosidl_runtime_c__int32__Sequence__copy(
      &(input->ids), &(output->ids)))
  {
    return false;
  }
  return true;
}

arucosrvmsg__msg__Markers *
arucosrvmsg__msg__Markers__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  arucosrvmsg__msg__Markers * msg = (arucosrvmsg__msg__Markers *)allocator.allocate(sizeof(arucosrvmsg__msg__Markers), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(arucosrvmsg__msg__Markers));
  bool success = arucosrvmsg__msg__Markers__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
arucosrvmsg__msg__Markers__destroy(arucosrvmsg__msg__Markers * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    arucosrvmsg__msg__Markers__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
arucosrvmsg__msg__Markers__Sequence__init(arucosrvmsg__msg__Markers__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  arucosrvmsg__msg__Markers * data = NULL;

  if (size) {
    data = (arucosrvmsg__msg__Markers *)allocator.zero_allocate(size, sizeof(arucosrvmsg__msg__Markers), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = arucosrvmsg__msg__Markers__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        arucosrvmsg__msg__Markers__fini(&data[i - 1]);
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
arucosrvmsg__msg__Markers__Sequence__fini(arucosrvmsg__msg__Markers__Sequence * array)
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
      arucosrvmsg__msg__Markers__fini(&array->data[i]);
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

arucosrvmsg__msg__Markers__Sequence *
arucosrvmsg__msg__Markers__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  arucosrvmsg__msg__Markers__Sequence * array = (arucosrvmsg__msg__Markers__Sequence *)allocator.allocate(sizeof(arucosrvmsg__msg__Markers__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = arucosrvmsg__msg__Markers__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
arucosrvmsg__msg__Markers__Sequence__destroy(arucosrvmsg__msg__Markers__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    arucosrvmsg__msg__Markers__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
arucosrvmsg__msg__Markers__Sequence__are_equal(const arucosrvmsg__msg__Markers__Sequence * lhs, const arucosrvmsg__msg__Markers__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!arucosrvmsg__msg__Markers__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
arucosrvmsg__msg__Markers__Sequence__copy(
  const arucosrvmsg__msg__Markers__Sequence * input,
  arucosrvmsg__msg__Markers__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(arucosrvmsg__msg__Markers);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    arucosrvmsg__msg__Markers * data =
      (arucosrvmsg__msg__Markers *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!arucosrvmsg__msg__Markers__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          arucosrvmsg__msg__Markers__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!arucosrvmsg__msg__Markers__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
