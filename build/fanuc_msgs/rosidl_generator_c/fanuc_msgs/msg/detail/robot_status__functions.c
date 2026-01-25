// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from fanuc_msgs:msg/RobotStatus.idl
// generated code does not contain a copyright notice
#include "fanuc_msgs/msg/detail/robot_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
fanuc_msgs__msg__RobotStatus__init(fanuc_msgs__msg__RobotStatus * msg)
{
  if (!msg) {
    return false;
  }
  // in_error
  // tp_enabled
  // e_stopped
  // motion_possible
  // contact_stop_mode
  return true;
}

void
fanuc_msgs__msg__RobotStatus__fini(fanuc_msgs__msg__RobotStatus * msg)
{
  if (!msg) {
    return;
  }
  // in_error
  // tp_enabled
  // e_stopped
  // motion_possible
  // contact_stop_mode
}

bool
fanuc_msgs__msg__RobotStatus__are_equal(const fanuc_msgs__msg__RobotStatus * lhs, const fanuc_msgs__msg__RobotStatus * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // in_error
  if (lhs->in_error != rhs->in_error) {
    return false;
  }
  // tp_enabled
  if (lhs->tp_enabled != rhs->tp_enabled) {
    return false;
  }
  // e_stopped
  if (lhs->e_stopped != rhs->e_stopped) {
    return false;
  }
  // motion_possible
  if (lhs->motion_possible != rhs->motion_possible) {
    return false;
  }
  // contact_stop_mode
  if (lhs->contact_stop_mode != rhs->contact_stop_mode) {
    return false;
  }
  return true;
}

bool
fanuc_msgs__msg__RobotStatus__copy(
  const fanuc_msgs__msg__RobotStatus * input,
  fanuc_msgs__msg__RobotStatus * output)
{
  if (!input || !output) {
    return false;
  }
  // in_error
  output->in_error = input->in_error;
  // tp_enabled
  output->tp_enabled = input->tp_enabled;
  // e_stopped
  output->e_stopped = input->e_stopped;
  // motion_possible
  output->motion_possible = input->motion_possible;
  // contact_stop_mode
  output->contact_stop_mode = input->contact_stop_mode;
  return true;
}

fanuc_msgs__msg__RobotStatus *
fanuc_msgs__msg__RobotStatus__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  fanuc_msgs__msg__RobotStatus * msg = (fanuc_msgs__msg__RobotStatus *)allocator.allocate(sizeof(fanuc_msgs__msg__RobotStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(fanuc_msgs__msg__RobotStatus));
  bool success = fanuc_msgs__msg__RobotStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
fanuc_msgs__msg__RobotStatus__destroy(fanuc_msgs__msg__RobotStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    fanuc_msgs__msg__RobotStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
fanuc_msgs__msg__RobotStatus__Sequence__init(fanuc_msgs__msg__RobotStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  fanuc_msgs__msg__RobotStatus * data = NULL;

  if (size) {
    data = (fanuc_msgs__msg__RobotStatus *)allocator.zero_allocate(size, sizeof(fanuc_msgs__msg__RobotStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = fanuc_msgs__msg__RobotStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        fanuc_msgs__msg__RobotStatus__fini(&data[i - 1]);
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
fanuc_msgs__msg__RobotStatus__Sequence__fini(fanuc_msgs__msg__RobotStatus__Sequence * array)
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
      fanuc_msgs__msg__RobotStatus__fini(&array->data[i]);
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

fanuc_msgs__msg__RobotStatus__Sequence *
fanuc_msgs__msg__RobotStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  fanuc_msgs__msg__RobotStatus__Sequence * array = (fanuc_msgs__msg__RobotStatus__Sequence *)allocator.allocate(sizeof(fanuc_msgs__msg__RobotStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = fanuc_msgs__msg__RobotStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
fanuc_msgs__msg__RobotStatus__Sequence__destroy(fanuc_msgs__msg__RobotStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    fanuc_msgs__msg__RobotStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
fanuc_msgs__msg__RobotStatus__Sequence__are_equal(const fanuc_msgs__msg__RobotStatus__Sequence * lhs, const fanuc_msgs__msg__RobotStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!fanuc_msgs__msg__RobotStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
fanuc_msgs__msg__RobotStatus__Sequence__copy(
  const fanuc_msgs__msg__RobotStatus__Sequence * input,
  fanuc_msgs__msg__RobotStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(fanuc_msgs__msg__RobotStatus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    fanuc_msgs__msg__RobotStatus * data =
      (fanuc_msgs__msg__RobotStatus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!fanuc_msgs__msg__RobotStatus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          fanuc_msgs__msg__RobotStatus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!fanuc_msgs__msg__RobotStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
