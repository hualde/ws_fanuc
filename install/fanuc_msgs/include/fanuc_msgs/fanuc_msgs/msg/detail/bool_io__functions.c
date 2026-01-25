// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from fanuc_msgs:msg/BoolIO.idl
// generated code does not contain a copyright notice
#include "fanuc_msgs/msg/detail/bool_io__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `io_type`
#include "fanuc_msgs/msg/detail/io_type__functions.h"

bool
fanuc_msgs__msg__BoolIO__init(fanuc_msgs__msg__BoolIO * msg)
{
  if (!msg) {
    return false;
  }
  // io_type
  if (!fanuc_msgs__msg__IOType__init(&msg->io_type)) {
    fanuc_msgs__msg__BoolIO__fini(msg);
    return false;
  }
  // index
  // value
  return true;
}

void
fanuc_msgs__msg__BoolIO__fini(fanuc_msgs__msg__BoolIO * msg)
{
  if (!msg) {
    return;
  }
  // io_type
  fanuc_msgs__msg__IOType__fini(&msg->io_type);
  // index
  // value
}

bool
fanuc_msgs__msg__BoolIO__are_equal(const fanuc_msgs__msg__BoolIO * lhs, const fanuc_msgs__msg__BoolIO * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // io_type
  if (!fanuc_msgs__msg__IOType__are_equal(
      &(lhs->io_type), &(rhs->io_type)))
  {
    return false;
  }
  // index
  if (lhs->index != rhs->index) {
    return false;
  }
  // value
  if (lhs->value != rhs->value) {
    return false;
  }
  return true;
}

bool
fanuc_msgs__msg__BoolIO__copy(
  const fanuc_msgs__msg__BoolIO * input,
  fanuc_msgs__msg__BoolIO * output)
{
  if (!input || !output) {
    return false;
  }
  // io_type
  if (!fanuc_msgs__msg__IOType__copy(
      &(input->io_type), &(output->io_type)))
  {
    return false;
  }
  // index
  output->index = input->index;
  // value
  output->value = input->value;
  return true;
}

fanuc_msgs__msg__BoolIO *
fanuc_msgs__msg__BoolIO__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  fanuc_msgs__msg__BoolIO * msg = (fanuc_msgs__msg__BoolIO *)allocator.allocate(sizeof(fanuc_msgs__msg__BoolIO), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(fanuc_msgs__msg__BoolIO));
  bool success = fanuc_msgs__msg__BoolIO__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
fanuc_msgs__msg__BoolIO__destroy(fanuc_msgs__msg__BoolIO * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    fanuc_msgs__msg__BoolIO__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
fanuc_msgs__msg__BoolIO__Sequence__init(fanuc_msgs__msg__BoolIO__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  fanuc_msgs__msg__BoolIO * data = NULL;

  if (size) {
    data = (fanuc_msgs__msg__BoolIO *)allocator.zero_allocate(size, sizeof(fanuc_msgs__msg__BoolIO), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = fanuc_msgs__msg__BoolIO__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        fanuc_msgs__msg__BoolIO__fini(&data[i - 1]);
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
fanuc_msgs__msg__BoolIO__Sequence__fini(fanuc_msgs__msg__BoolIO__Sequence * array)
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
      fanuc_msgs__msg__BoolIO__fini(&array->data[i]);
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

fanuc_msgs__msg__BoolIO__Sequence *
fanuc_msgs__msg__BoolIO__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  fanuc_msgs__msg__BoolIO__Sequence * array = (fanuc_msgs__msg__BoolIO__Sequence *)allocator.allocate(sizeof(fanuc_msgs__msg__BoolIO__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = fanuc_msgs__msg__BoolIO__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
fanuc_msgs__msg__BoolIO__Sequence__destroy(fanuc_msgs__msg__BoolIO__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    fanuc_msgs__msg__BoolIO__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
fanuc_msgs__msg__BoolIO__Sequence__are_equal(const fanuc_msgs__msg__BoolIO__Sequence * lhs, const fanuc_msgs__msg__BoolIO__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!fanuc_msgs__msg__BoolIO__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
fanuc_msgs__msg__BoolIO__Sequence__copy(
  const fanuc_msgs__msg__BoolIO__Sequence * input,
  fanuc_msgs__msg__BoolIO__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(fanuc_msgs__msg__BoolIO);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    fanuc_msgs__msg__BoolIO * data =
      (fanuc_msgs__msg__BoolIO *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!fanuc_msgs__msg__BoolIO__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          fanuc_msgs__msg__BoolIO__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!fanuc_msgs__msg__BoolIO__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
