// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from fanuc_msgs:msg/AnalogIOCmd.idl
// generated code does not contain a copyright notice
#include "fanuc_msgs/msg/detail/analog_io_cmd__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `values`
#include "fanuc_msgs/msg/detail/analog_io__functions.h"

bool
fanuc_msgs__msg__AnalogIOCmd__init(fanuc_msgs__msg__AnalogIOCmd * msg)
{
  if (!msg) {
    return false;
  }
  // values
  if (!fanuc_msgs__msg__AnalogIO__Sequence__init(&msg->values, 0)) {
    fanuc_msgs__msg__AnalogIOCmd__fini(msg);
    return false;
  }
  return true;
}

void
fanuc_msgs__msg__AnalogIOCmd__fini(fanuc_msgs__msg__AnalogIOCmd * msg)
{
  if (!msg) {
    return;
  }
  // values
  fanuc_msgs__msg__AnalogIO__Sequence__fini(&msg->values);
}

bool
fanuc_msgs__msg__AnalogIOCmd__are_equal(const fanuc_msgs__msg__AnalogIOCmd * lhs, const fanuc_msgs__msg__AnalogIOCmd * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // values
  if (!fanuc_msgs__msg__AnalogIO__Sequence__are_equal(
      &(lhs->values), &(rhs->values)))
  {
    return false;
  }
  return true;
}

bool
fanuc_msgs__msg__AnalogIOCmd__copy(
  const fanuc_msgs__msg__AnalogIOCmd * input,
  fanuc_msgs__msg__AnalogIOCmd * output)
{
  if (!input || !output) {
    return false;
  }
  // values
  if (!fanuc_msgs__msg__AnalogIO__Sequence__copy(
      &(input->values), &(output->values)))
  {
    return false;
  }
  return true;
}

fanuc_msgs__msg__AnalogIOCmd *
fanuc_msgs__msg__AnalogIOCmd__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  fanuc_msgs__msg__AnalogIOCmd * msg = (fanuc_msgs__msg__AnalogIOCmd *)allocator.allocate(sizeof(fanuc_msgs__msg__AnalogIOCmd), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(fanuc_msgs__msg__AnalogIOCmd));
  bool success = fanuc_msgs__msg__AnalogIOCmd__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
fanuc_msgs__msg__AnalogIOCmd__destroy(fanuc_msgs__msg__AnalogIOCmd * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    fanuc_msgs__msg__AnalogIOCmd__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
fanuc_msgs__msg__AnalogIOCmd__Sequence__init(fanuc_msgs__msg__AnalogIOCmd__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  fanuc_msgs__msg__AnalogIOCmd * data = NULL;

  if (size) {
    data = (fanuc_msgs__msg__AnalogIOCmd *)allocator.zero_allocate(size, sizeof(fanuc_msgs__msg__AnalogIOCmd), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = fanuc_msgs__msg__AnalogIOCmd__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        fanuc_msgs__msg__AnalogIOCmd__fini(&data[i - 1]);
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
fanuc_msgs__msg__AnalogIOCmd__Sequence__fini(fanuc_msgs__msg__AnalogIOCmd__Sequence * array)
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
      fanuc_msgs__msg__AnalogIOCmd__fini(&array->data[i]);
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

fanuc_msgs__msg__AnalogIOCmd__Sequence *
fanuc_msgs__msg__AnalogIOCmd__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  fanuc_msgs__msg__AnalogIOCmd__Sequence * array = (fanuc_msgs__msg__AnalogIOCmd__Sequence *)allocator.allocate(sizeof(fanuc_msgs__msg__AnalogIOCmd__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = fanuc_msgs__msg__AnalogIOCmd__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
fanuc_msgs__msg__AnalogIOCmd__Sequence__destroy(fanuc_msgs__msg__AnalogIOCmd__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    fanuc_msgs__msg__AnalogIOCmd__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
fanuc_msgs__msg__AnalogIOCmd__Sequence__are_equal(const fanuc_msgs__msg__AnalogIOCmd__Sequence * lhs, const fanuc_msgs__msg__AnalogIOCmd__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!fanuc_msgs__msg__AnalogIOCmd__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
fanuc_msgs__msg__AnalogIOCmd__Sequence__copy(
  const fanuc_msgs__msg__AnalogIOCmd__Sequence * input,
  fanuc_msgs__msg__AnalogIOCmd__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(fanuc_msgs__msg__AnalogIOCmd);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    fanuc_msgs__msg__AnalogIOCmd * data =
      (fanuc_msgs__msg__AnalogIOCmd *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!fanuc_msgs__msg__AnalogIOCmd__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          fanuc_msgs__msg__AnalogIOCmd__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!fanuc_msgs__msg__AnalogIOCmd__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
