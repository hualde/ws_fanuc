// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from fanuc_msgs:msg/RobotStatusExt.idl
// generated code does not contain a copyright notice
#include "fanuc_msgs/msg/detail/robot_status_ext__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `error_code`
// Member `control_mode`
#include "rosidl_runtime_c/string_functions.h"

bool
fanuc_msgs__msg__RobotStatusExt__init(fanuc_msgs__msg__RobotStatusExt * msg)
{
  if (!msg) {
    return false;
  }
  // error_code
  if (!rosidl_runtime_c__String__init(&msg->error_code)) {
    fanuc_msgs__msg__RobotStatusExt__fini(msg);
    return false;
  }
  // in_motion
  // drives_powered
  // gen_override
  // speed_clamp_limit
  // control_mode
  if (!rosidl_runtime_c__String__init(&msg->control_mode)) {
    fanuc_msgs__msg__RobotStatusExt__fini(msg);
    return false;
  }
  return true;
}

void
fanuc_msgs__msg__RobotStatusExt__fini(fanuc_msgs__msg__RobotStatusExt * msg)
{
  if (!msg) {
    return;
  }
  // error_code
  rosidl_runtime_c__String__fini(&msg->error_code);
  // in_motion
  // drives_powered
  // gen_override
  // speed_clamp_limit
  // control_mode
  rosidl_runtime_c__String__fini(&msg->control_mode);
}

bool
fanuc_msgs__msg__RobotStatusExt__are_equal(const fanuc_msgs__msg__RobotStatusExt * lhs, const fanuc_msgs__msg__RobotStatusExt * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // error_code
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->error_code), &(rhs->error_code)))
  {
    return false;
  }
  // in_motion
  if (lhs->in_motion != rhs->in_motion) {
    return false;
  }
  // drives_powered
  if (lhs->drives_powered != rhs->drives_powered) {
    return false;
  }
  // gen_override
  if (lhs->gen_override != rhs->gen_override) {
    return false;
  }
  // speed_clamp_limit
  if (lhs->speed_clamp_limit != rhs->speed_clamp_limit) {
    return false;
  }
  // control_mode
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->control_mode), &(rhs->control_mode)))
  {
    return false;
  }
  return true;
}

bool
fanuc_msgs__msg__RobotStatusExt__copy(
  const fanuc_msgs__msg__RobotStatusExt * input,
  fanuc_msgs__msg__RobotStatusExt * output)
{
  if (!input || !output) {
    return false;
  }
  // error_code
  if (!rosidl_runtime_c__String__copy(
      &(input->error_code), &(output->error_code)))
  {
    return false;
  }
  // in_motion
  output->in_motion = input->in_motion;
  // drives_powered
  output->drives_powered = input->drives_powered;
  // gen_override
  output->gen_override = input->gen_override;
  // speed_clamp_limit
  output->speed_clamp_limit = input->speed_clamp_limit;
  // control_mode
  if (!rosidl_runtime_c__String__copy(
      &(input->control_mode), &(output->control_mode)))
  {
    return false;
  }
  return true;
}

fanuc_msgs__msg__RobotStatusExt *
fanuc_msgs__msg__RobotStatusExt__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  fanuc_msgs__msg__RobotStatusExt * msg = (fanuc_msgs__msg__RobotStatusExt *)allocator.allocate(sizeof(fanuc_msgs__msg__RobotStatusExt), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(fanuc_msgs__msg__RobotStatusExt));
  bool success = fanuc_msgs__msg__RobotStatusExt__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
fanuc_msgs__msg__RobotStatusExt__destroy(fanuc_msgs__msg__RobotStatusExt * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    fanuc_msgs__msg__RobotStatusExt__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
fanuc_msgs__msg__RobotStatusExt__Sequence__init(fanuc_msgs__msg__RobotStatusExt__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  fanuc_msgs__msg__RobotStatusExt * data = NULL;

  if (size) {
    data = (fanuc_msgs__msg__RobotStatusExt *)allocator.zero_allocate(size, sizeof(fanuc_msgs__msg__RobotStatusExt), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = fanuc_msgs__msg__RobotStatusExt__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        fanuc_msgs__msg__RobotStatusExt__fini(&data[i - 1]);
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
fanuc_msgs__msg__RobotStatusExt__Sequence__fini(fanuc_msgs__msg__RobotStatusExt__Sequence * array)
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
      fanuc_msgs__msg__RobotStatusExt__fini(&array->data[i]);
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

fanuc_msgs__msg__RobotStatusExt__Sequence *
fanuc_msgs__msg__RobotStatusExt__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  fanuc_msgs__msg__RobotStatusExt__Sequence * array = (fanuc_msgs__msg__RobotStatusExt__Sequence *)allocator.allocate(sizeof(fanuc_msgs__msg__RobotStatusExt__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = fanuc_msgs__msg__RobotStatusExt__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
fanuc_msgs__msg__RobotStatusExt__Sequence__destroy(fanuc_msgs__msg__RobotStatusExt__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    fanuc_msgs__msg__RobotStatusExt__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
fanuc_msgs__msg__RobotStatusExt__Sequence__are_equal(const fanuc_msgs__msg__RobotStatusExt__Sequence * lhs, const fanuc_msgs__msg__RobotStatusExt__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!fanuc_msgs__msg__RobotStatusExt__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
fanuc_msgs__msg__RobotStatusExt__Sequence__copy(
  const fanuc_msgs__msg__RobotStatusExt__Sequence * input,
  fanuc_msgs__msg__RobotStatusExt__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(fanuc_msgs__msg__RobotStatusExt);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    fanuc_msgs__msg__RobotStatusExt * data =
      (fanuc_msgs__msg__RobotStatusExt *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!fanuc_msgs__msg__RobotStatusExt__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          fanuc_msgs__msg__RobotStatusExt__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!fanuc_msgs__msg__RobotStatusExt__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
