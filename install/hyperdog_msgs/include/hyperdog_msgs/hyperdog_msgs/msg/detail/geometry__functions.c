// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from hyperdog_msgs:msg/Geometry.idl
// generated code does not contain a copyright notice
#include "hyperdog_msgs/msg/detail/geometry__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `fr`
// Member `fl`
// Member `br`
// Member `bl`
#include "geometry_msgs/msg/detail/point32__functions.h"
// Member `euler_ang`
#include "geometry_msgs/msg/detail/quaternion__functions.h"

bool
hyperdog_msgs__msg__Geometry__init(hyperdog_msgs__msg__Geometry * msg)
{
  if (!msg) {
    return false;
  }
  // fr
  if (!geometry_msgs__msg__Point32__init(&msg->fr)) {
    hyperdog_msgs__msg__Geometry__fini(msg);
    return false;
  }
  // fl
  if (!geometry_msgs__msg__Point32__init(&msg->fl)) {
    hyperdog_msgs__msg__Geometry__fini(msg);
    return false;
  }
  // br
  if (!geometry_msgs__msg__Point32__init(&msg->br)) {
    hyperdog_msgs__msg__Geometry__fini(msg);
    return false;
  }
  // bl
  if (!geometry_msgs__msg__Point32__init(&msg->bl)) {
    hyperdog_msgs__msg__Geometry__fini(msg);
    return false;
  }
  // euler_ang
  if (!geometry_msgs__msg__Quaternion__init(&msg->euler_ang)) {
    hyperdog_msgs__msg__Geometry__fini(msg);
    return false;
  }
  return true;
}

void
hyperdog_msgs__msg__Geometry__fini(hyperdog_msgs__msg__Geometry * msg)
{
  if (!msg) {
    return;
  }
  // fr
  geometry_msgs__msg__Point32__fini(&msg->fr);
  // fl
  geometry_msgs__msg__Point32__fini(&msg->fl);
  // br
  geometry_msgs__msg__Point32__fini(&msg->br);
  // bl
  geometry_msgs__msg__Point32__fini(&msg->bl);
  // euler_ang
  geometry_msgs__msg__Quaternion__fini(&msg->euler_ang);
}

bool
hyperdog_msgs__msg__Geometry__are_equal(const hyperdog_msgs__msg__Geometry * lhs, const hyperdog_msgs__msg__Geometry * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // fr
  if (!geometry_msgs__msg__Point32__are_equal(
      &(lhs->fr), &(rhs->fr)))
  {
    return false;
  }
  // fl
  if (!geometry_msgs__msg__Point32__are_equal(
      &(lhs->fl), &(rhs->fl)))
  {
    return false;
  }
  // br
  if (!geometry_msgs__msg__Point32__are_equal(
      &(lhs->br), &(rhs->br)))
  {
    return false;
  }
  // bl
  if (!geometry_msgs__msg__Point32__are_equal(
      &(lhs->bl), &(rhs->bl)))
  {
    return false;
  }
  // euler_ang
  if (!geometry_msgs__msg__Quaternion__are_equal(
      &(lhs->euler_ang), &(rhs->euler_ang)))
  {
    return false;
  }
  return true;
}

bool
hyperdog_msgs__msg__Geometry__copy(
  const hyperdog_msgs__msg__Geometry * input,
  hyperdog_msgs__msg__Geometry * output)
{
  if (!input || !output) {
    return false;
  }
  // fr
  if (!geometry_msgs__msg__Point32__copy(
      &(input->fr), &(output->fr)))
  {
    return false;
  }
  // fl
  if (!geometry_msgs__msg__Point32__copy(
      &(input->fl), &(output->fl)))
  {
    return false;
  }
  // br
  if (!geometry_msgs__msg__Point32__copy(
      &(input->br), &(output->br)))
  {
    return false;
  }
  // bl
  if (!geometry_msgs__msg__Point32__copy(
      &(input->bl), &(output->bl)))
  {
    return false;
  }
  // euler_ang
  if (!geometry_msgs__msg__Quaternion__copy(
      &(input->euler_ang), &(output->euler_ang)))
  {
    return false;
  }
  return true;
}

hyperdog_msgs__msg__Geometry *
hyperdog_msgs__msg__Geometry__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hyperdog_msgs__msg__Geometry * msg = (hyperdog_msgs__msg__Geometry *)allocator.allocate(sizeof(hyperdog_msgs__msg__Geometry), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(hyperdog_msgs__msg__Geometry));
  bool success = hyperdog_msgs__msg__Geometry__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
hyperdog_msgs__msg__Geometry__destroy(hyperdog_msgs__msg__Geometry * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    hyperdog_msgs__msg__Geometry__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
hyperdog_msgs__msg__Geometry__Sequence__init(hyperdog_msgs__msg__Geometry__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hyperdog_msgs__msg__Geometry * data = NULL;

  if (size) {
    data = (hyperdog_msgs__msg__Geometry *)allocator.zero_allocate(size, sizeof(hyperdog_msgs__msg__Geometry), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = hyperdog_msgs__msg__Geometry__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        hyperdog_msgs__msg__Geometry__fini(&data[i - 1]);
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
hyperdog_msgs__msg__Geometry__Sequence__fini(hyperdog_msgs__msg__Geometry__Sequence * array)
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
      hyperdog_msgs__msg__Geometry__fini(&array->data[i]);
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

hyperdog_msgs__msg__Geometry__Sequence *
hyperdog_msgs__msg__Geometry__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hyperdog_msgs__msg__Geometry__Sequence * array = (hyperdog_msgs__msg__Geometry__Sequence *)allocator.allocate(sizeof(hyperdog_msgs__msg__Geometry__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = hyperdog_msgs__msg__Geometry__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
hyperdog_msgs__msg__Geometry__Sequence__destroy(hyperdog_msgs__msg__Geometry__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    hyperdog_msgs__msg__Geometry__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
hyperdog_msgs__msg__Geometry__Sequence__are_equal(const hyperdog_msgs__msg__Geometry__Sequence * lhs, const hyperdog_msgs__msg__Geometry__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!hyperdog_msgs__msg__Geometry__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
hyperdog_msgs__msg__Geometry__Sequence__copy(
  const hyperdog_msgs__msg__Geometry__Sequence * input,
  hyperdog_msgs__msg__Geometry__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(hyperdog_msgs__msg__Geometry);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    hyperdog_msgs__msg__Geometry * data =
      (hyperdog_msgs__msg__Geometry *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!hyperdog_msgs__msg__Geometry__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          hyperdog_msgs__msg__Geometry__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!hyperdog_msgs__msg__Geometry__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
