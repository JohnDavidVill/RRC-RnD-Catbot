// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from hyperdog_msgs:msg/JoyCtrlCmds.idl
// generated code does not contain a copyright notice
#include "hyperdog_msgs/msg/detail/joy_ctrl_cmds__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `pose`
#include "geometry_msgs/msg/detail/pose__functions.h"
// Member `gait_step`
#include "geometry_msgs/msg/detail/vector3__functions.h"

bool
hyperdog_msgs__msg__JoyCtrlCmds__init(hyperdog_msgs__msg__JoyCtrlCmds * msg)
{
  if (!msg) {
    return false;
  }
  // states
  // gait_type
  msg->gait_type = 0;
  // pose
  if (!geometry_msgs__msg__Pose__init(&msg->pose)) {
    hyperdog_msgs__msg__JoyCtrlCmds__fini(msg);
    return false;
  }
  // gait_step
  if (!geometry_msgs__msg__Vector3__init(&msg->gait_step)) {
    hyperdog_msgs__msg__JoyCtrlCmds__fini(msg);
    return false;
  }
  return true;
}

void
hyperdog_msgs__msg__JoyCtrlCmds__fini(hyperdog_msgs__msg__JoyCtrlCmds * msg)
{
  if (!msg) {
    return;
  }
  // states
  // gait_type
  // pose
  geometry_msgs__msg__Pose__fini(&msg->pose);
  // gait_step
  geometry_msgs__msg__Vector3__fini(&msg->gait_step);
}

bool
hyperdog_msgs__msg__JoyCtrlCmds__are_equal(const hyperdog_msgs__msg__JoyCtrlCmds * lhs, const hyperdog_msgs__msg__JoyCtrlCmds * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // states
  for (size_t i = 0; i < 3; ++i) {
    if (lhs->states[i] != rhs->states[i]) {
      return false;
    }
  }
  // gait_type
  if (lhs->gait_type != rhs->gait_type) {
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose__are_equal(
      &(lhs->pose), &(rhs->pose)))
  {
    return false;
  }
  // gait_step
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->gait_step), &(rhs->gait_step)))
  {
    return false;
  }
  return true;
}

bool
hyperdog_msgs__msg__JoyCtrlCmds__copy(
  const hyperdog_msgs__msg__JoyCtrlCmds * input,
  hyperdog_msgs__msg__JoyCtrlCmds * output)
{
  if (!input || !output) {
    return false;
  }
  // states
  for (size_t i = 0; i < 3; ++i) {
    output->states[i] = input->states[i];
  }
  // gait_type
  output->gait_type = input->gait_type;
  // pose
  if (!geometry_msgs__msg__Pose__copy(
      &(input->pose), &(output->pose)))
  {
    return false;
  }
  // gait_step
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->gait_step), &(output->gait_step)))
  {
    return false;
  }
  return true;
}

hyperdog_msgs__msg__JoyCtrlCmds *
hyperdog_msgs__msg__JoyCtrlCmds__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hyperdog_msgs__msg__JoyCtrlCmds * msg = (hyperdog_msgs__msg__JoyCtrlCmds *)allocator.allocate(sizeof(hyperdog_msgs__msg__JoyCtrlCmds), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(hyperdog_msgs__msg__JoyCtrlCmds));
  bool success = hyperdog_msgs__msg__JoyCtrlCmds__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
hyperdog_msgs__msg__JoyCtrlCmds__destroy(hyperdog_msgs__msg__JoyCtrlCmds * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    hyperdog_msgs__msg__JoyCtrlCmds__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
hyperdog_msgs__msg__JoyCtrlCmds__Sequence__init(hyperdog_msgs__msg__JoyCtrlCmds__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hyperdog_msgs__msg__JoyCtrlCmds * data = NULL;

  if (size) {
    data = (hyperdog_msgs__msg__JoyCtrlCmds *)allocator.zero_allocate(size, sizeof(hyperdog_msgs__msg__JoyCtrlCmds), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = hyperdog_msgs__msg__JoyCtrlCmds__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        hyperdog_msgs__msg__JoyCtrlCmds__fini(&data[i - 1]);
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
hyperdog_msgs__msg__JoyCtrlCmds__Sequence__fini(hyperdog_msgs__msg__JoyCtrlCmds__Sequence * array)
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
      hyperdog_msgs__msg__JoyCtrlCmds__fini(&array->data[i]);
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

hyperdog_msgs__msg__JoyCtrlCmds__Sequence *
hyperdog_msgs__msg__JoyCtrlCmds__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hyperdog_msgs__msg__JoyCtrlCmds__Sequence * array = (hyperdog_msgs__msg__JoyCtrlCmds__Sequence *)allocator.allocate(sizeof(hyperdog_msgs__msg__JoyCtrlCmds__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = hyperdog_msgs__msg__JoyCtrlCmds__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
hyperdog_msgs__msg__JoyCtrlCmds__Sequence__destroy(hyperdog_msgs__msg__JoyCtrlCmds__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    hyperdog_msgs__msg__JoyCtrlCmds__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
hyperdog_msgs__msg__JoyCtrlCmds__Sequence__are_equal(const hyperdog_msgs__msg__JoyCtrlCmds__Sequence * lhs, const hyperdog_msgs__msg__JoyCtrlCmds__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!hyperdog_msgs__msg__JoyCtrlCmds__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
hyperdog_msgs__msg__JoyCtrlCmds__Sequence__copy(
  const hyperdog_msgs__msg__JoyCtrlCmds__Sequence * input,
  hyperdog_msgs__msg__JoyCtrlCmds__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(hyperdog_msgs__msg__JoyCtrlCmds);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    hyperdog_msgs__msg__JoyCtrlCmds * data =
      (hyperdog_msgs__msg__JoyCtrlCmds *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!hyperdog_msgs__msg__JoyCtrlCmds__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          hyperdog_msgs__msg__JoyCtrlCmds__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!hyperdog_msgs__msg__JoyCtrlCmds__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
