// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from fanuc_msgs:msg/ConnectionStatus.idl
// generated code does not contain a copyright notice
#include "fanuc_msgs/msg/detail/connection_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
fanuc_msgs__msg__ConnectionStatus__init(fanuc_msgs__msg__ConnectionStatus * msg)
{
  if (!msg) {
    return false;
  }
  // is_connected
  return true;
}

void
fanuc_msgs__msg__ConnectionStatus__fini(fanuc_msgs__msg__ConnectionStatus * msg)
{
  if (!msg) {
    return;
  }
  // is_connected
}

bool
fanuc_msgs__msg__ConnectionStatus__are_equal(const fanuc_msgs__msg__ConnectionStatus * lhs, const fanuc_msgs__msg__ConnectionStatus * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // is_connected
  if (lhs->is_connected != rhs->is_connected) {
    return false;
  }
  return true;
}

bool
fanuc_msgs__msg__ConnectionStatus__copy(
  const fanuc_msgs__msg__ConnectionStatus * input,
  fanuc_msgs__msg__ConnectionStatus * output)
{
  if (!input || !output) {
    return false;
  }
  // is_connected
  output->is_connected = input->is_connected;
  return true;
}

fanuc_msgs__msg__ConnectionStatus *
fanuc_msgs__msg__ConnectionStatus__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  fanuc_msgs__msg__ConnectionStatus * msg = (fanuc_msgs__msg__ConnectionStatus *)allocator.allocate(sizeof(fanuc_msgs__msg__ConnectionStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(fanuc_msgs__msg__ConnectionStatus));
  bool success = fanuc_msgs__msg__ConnectionStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
fanuc_msgs__msg__ConnectionStatus__destroy(fanuc_msgs__msg__ConnectionStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    fanuc_msgs__msg__ConnectionStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
fanuc_msgs__msg__ConnectionStatus__Sequence__init(fanuc_msgs__msg__ConnectionStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  fanuc_msgs__msg__ConnectionStatus * data = NULL;

  if (size) {
    data = (fanuc_msgs__msg__ConnectionStatus *)allocator.zero_allocate(size, sizeof(fanuc_msgs__msg__ConnectionStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = fanuc_msgs__msg__ConnectionStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        fanuc_msgs__msg__ConnectionStatus__fini(&data[i - 1]);
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
fanuc_msgs__msg__ConnectionStatus__Sequence__fini(fanuc_msgs__msg__ConnectionStatus__Sequence * array)
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
      fanuc_msgs__msg__ConnectionStatus__fini(&array->data[i]);
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

fanuc_msgs__msg__ConnectionStatus__Sequence *
fanuc_msgs__msg__ConnectionStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  fanuc_msgs__msg__ConnectionStatus__Sequence * array = (fanuc_msgs__msg__ConnectionStatus__Sequence *)allocator.allocate(sizeof(fanuc_msgs__msg__ConnectionStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = fanuc_msgs__msg__ConnectionStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
fanuc_msgs__msg__ConnectionStatus__Sequence__destroy(fanuc_msgs__msg__ConnectionStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    fanuc_msgs__msg__ConnectionStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
fanuc_msgs__msg__ConnectionStatus__Sequence__are_equal(const fanuc_msgs__msg__ConnectionStatus__Sequence * lhs, const fanuc_msgs__msg__ConnectionStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!fanuc_msgs__msg__ConnectionStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
fanuc_msgs__msg__ConnectionStatus__Sequence__copy(
  const fanuc_msgs__msg__ConnectionStatus__Sequence * input,
  fanuc_msgs__msg__ConnectionStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(fanuc_msgs__msg__ConnectionStatus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    fanuc_msgs__msg__ConnectionStatus * data =
      (fanuc_msgs__msg__ConnectionStatus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!fanuc_msgs__msg__ConnectionStatus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          fanuc_msgs__msg__ConnectionStatus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!fanuc_msgs__msg__ConnectionStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
