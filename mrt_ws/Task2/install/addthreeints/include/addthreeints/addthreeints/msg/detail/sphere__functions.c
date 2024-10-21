// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from addthreeints:msg/Sphere.idl
// generated code does not contain a copyright notice
#include "addthreeints/msg/detail/sphere__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `center`
#include "geometry_msgs/msg/detail/point__functions.h"

bool
addthreeints__msg__Sphere__init(addthreeints__msg__Sphere * msg)
{
  if (!msg) {
    return false;
  }
  // center
  if (!geometry_msgs__msg__Point__init(&msg->center)) {
    addthreeints__msg__Sphere__fini(msg);
    return false;
  }
  // radius
  return true;
}

void
addthreeints__msg__Sphere__fini(addthreeints__msg__Sphere * msg)
{
  if (!msg) {
    return;
  }
  // center
  geometry_msgs__msg__Point__fini(&msg->center);
  // radius
}

bool
addthreeints__msg__Sphere__are_equal(const addthreeints__msg__Sphere * lhs, const addthreeints__msg__Sphere * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // center
  if (!geometry_msgs__msg__Point__are_equal(
      &(lhs->center), &(rhs->center)))
  {
    return false;
  }
  // radius
  if (lhs->radius != rhs->radius) {
    return false;
  }
  return true;
}

bool
addthreeints__msg__Sphere__copy(
  const addthreeints__msg__Sphere * input,
  addthreeints__msg__Sphere * output)
{
  if (!input || !output) {
    return false;
  }
  // center
  if (!geometry_msgs__msg__Point__copy(
      &(input->center), &(output->center)))
  {
    return false;
  }
  // radius
  output->radius = input->radius;
  return true;
}

addthreeints__msg__Sphere *
addthreeints__msg__Sphere__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  addthreeints__msg__Sphere * msg = (addthreeints__msg__Sphere *)allocator.allocate(sizeof(addthreeints__msg__Sphere), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(addthreeints__msg__Sphere));
  bool success = addthreeints__msg__Sphere__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
addthreeints__msg__Sphere__destroy(addthreeints__msg__Sphere * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    addthreeints__msg__Sphere__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
addthreeints__msg__Sphere__Sequence__init(addthreeints__msg__Sphere__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  addthreeints__msg__Sphere * data = NULL;

  if (size) {
    data = (addthreeints__msg__Sphere *)allocator.zero_allocate(size, sizeof(addthreeints__msg__Sphere), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = addthreeints__msg__Sphere__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        addthreeints__msg__Sphere__fini(&data[i - 1]);
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
addthreeints__msg__Sphere__Sequence__fini(addthreeints__msg__Sphere__Sequence * array)
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
      addthreeints__msg__Sphere__fini(&array->data[i]);
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

addthreeints__msg__Sphere__Sequence *
addthreeints__msg__Sphere__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  addthreeints__msg__Sphere__Sequence * array = (addthreeints__msg__Sphere__Sequence *)allocator.allocate(sizeof(addthreeints__msg__Sphere__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = addthreeints__msg__Sphere__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
addthreeints__msg__Sphere__Sequence__destroy(addthreeints__msg__Sphere__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    addthreeints__msg__Sphere__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
addthreeints__msg__Sphere__Sequence__are_equal(const addthreeints__msg__Sphere__Sequence * lhs, const addthreeints__msg__Sphere__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!addthreeints__msg__Sphere__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
addthreeints__msg__Sphere__Sequence__copy(
  const addthreeints__msg__Sphere__Sequence * input,
  addthreeints__msg__Sphere__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(addthreeints__msg__Sphere);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    addthreeints__msg__Sphere * data =
      (addthreeints__msg__Sphere *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!addthreeints__msg__Sphere__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          addthreeints__msg__Sphere__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!addthreeints__msg__Sphere__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
