// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from fanuc_msgs:srv/SetPayloadID.idl
// generated code does not contain a copyright notice
#include "fanuc_msgs/srv/detail/set_payload_id__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
fanuc_msgs__srv__SetPayloadID_Request__init(fanuc_msgs__srv__SetPayloadID_Request * msg)
{
  if (!msg) {
    return false;
  }
  // payload_schedule_id
  return true;
}

void
fanuc_msgs__srv__SetPayloadID_Request__fini(fanuc_msgs__srv__SetPayloadID_Request * msg)
{
  if (!msg) {
    return;
  }
  // payload_schedule_id
}

bool
fanuc_msgs__srv__SetPayloadID_Request__are_equal(const fanuc_msgs__srv__SetPayloadID_Request * lhs, const fanuc_msgs__srv__SetPayloadID_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // payload_schedule_id
  if (lhs->payload_schedule_id != rhs->payload_schedule_id) {
    return false;
  }
  return true;
}

bool
fanuc_msgs__srv__SetPayloadID_Request__copy(
  const fanuc_msgs__srv__SetPayloadID_Request * input,
  fanuc_msgs__srv__SetPayloadID_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // payload_schedule_id
  output->payload_schedule_id = input->payload_schedule_id;
  return true;
}

fanuc_msgs__srv__SetPayloadID_Request *
fanuc_msgs__srv__SetPayloadID_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  fanuc_msgs__srv__SetPayloadID_Request * msg = (fanuc_msgs__srv__SetPayloadID_Request *)allocator.allocate(sizeof(fanuc_msgs__srv__SetPayloadID_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(fanuc_msgs__srv__SetPayloadID_Request));
  bool success = fanuc_msgs__srv__SetPayloadID_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
fanuc_msgs__srv__SetPayloadID_Request__destroy(fanuc_msgs__srv__SetPayloadID_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    fanuc_msgs__srv__SetPayloadID_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
fanuc_msgs__srv__SetPayloadID_Request__Sequence__init(fanuc_msgs__srv__SetPayloadID_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  fanuc_msgs__srv__SetPayloadID_Request * data = NULL;

  if (size) {
    data = (fanuc_msgs__srv__SetPayloadID_Request *)allocator.zero_allocate(size, sizeof(fanuc_msgs__srv__SetPayloadID_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = fanuc_msgs__srv__SetPayloadID_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        fanuc_msgs__srv__SetPayloadID_Request__fini(&data[i - 1]);
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
fanuc_msgs__srv__SetPayloadID_Request__Sequence__fini(fanuc_msgs__srv__SetPayloadID_Request__Sequence * array)
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
      fanuc_msgs__srv__SetPayloadID_Request__fini(&array->data[i]);
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

fanuc_msgs__srv__SetPayloadID_Request__Sequence *
fanuc_msgs__srv__SetPayloadID_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  fanuc_msgs__srv__SetPayloadID_Request__Sequence * array = (fanuc_msgs__srv__SetPayloadID_Request__Sequence *)allocator.allocate(sizeof(fanuc_msgs__srv__SetPayloadID_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = fanuc_msgs__srv__SetPayloadID_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
fanuc_msgs__srv__SetPayloadID_Request__Sequence__destroy(fanuc_msgs__srv__SetPayloadID_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    fanuc_msgs__srv__SetPayloadID_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
fanuc_msgs__srv__SetPayloadID_Request__Sequence__are_equal(const fanuc_msgs__srv__SetPayloadID_Request__Sequence * lhs, const fanuc_msgs__srv__SetPayloadID_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!fanuc_msgs__srv__SetPayloadID_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
fanuc_msgs__srv__SetPayloadID_Request__Sequence__copy(
  const fanuc_msgs__srv__SetPayloadID_Request__Sequence * input,
  fanuc_msgs__srv__SetPayloadID_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(fanuc_msgs__srv__SetPayloadID_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    fanuc_msgs__srv__SetPayloadID_Request * data =
      (fanuc_msgs__srv__SetPayloadID_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!fanuc_msgs__srv__SetPayloadID_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          fanuc_msgs__srv__SetPayloadID_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!fanuc_msgs__srv__SetPayloadID_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
fanuc_msgs__srv__SetPayloadID_Response__init(fanuc_msgs__srv__SetPayloadID_Response * msg)
{
  if (!msg) {
    return false;
  }
  // result
  return true;
}

void
fanuc_msgs__srv__SetPayloadID_Response__fini(fanuc_msgs__srv__SetPayloadID_Response * msg)
{
  if (!msg) {
    return;
  }
  // result
}

bool
fanuc_msgs__srv__SetPayloadID_Response__are_equal(const fanuc_msgs__srv__SetPayloadID_Response * lhs, const fanuc_msgs__srv__SetPayloadID_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // result
  if (lhs->result != rhs->result) {
    return false;
  }
  return true;
}

bool
fanuc_msgs__srv__SetPayloadID_Response__copy(
  const fanuc_msgs__srv__SetPayloadID_Response * input,
  fanuc_msgs__srv__SetPayloadID_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // result
  output->result = input->result;
  return true;
}

fanuc_msgs__srv__SetPayloadID_Response *
fanuc_msgs__srv__SetPayloadID_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  fanuc_msgs__srv__SetPayloadID_Response * msg = (fanuc_msgs__srv__SetPayloadID_Response *)allocator.allocate(sizeof(fanuc_msgs__srv__SetPayloadID_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(fanuc_msgs__srv__SetPayloadID_Response));
  bool success = fanuc_msgs__srv__SetPayloadID_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
fanuc_msgs__srv__SetPayloadID_Response__destroy(fanuc_msgs__srv__SetPayloadID_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    fanuc_msgs__srv__SetPayloadID_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
fanuc_msgs__srv__SetPayloadID_Response__Sequence__init(fanuc_msgs__srv__SetPayloadID_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  fanuc_msgs__srv__SetPayloadID_Response * data = NULL;

  if (size) {
    data = (fanuc_msgs__srv__SetPayloadID_Response *)allocator.zero_allocate(size, sizeof(fanuc_msgs__srv__SetPayloadID_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = fanuc_msgs__srv__SetPayloadID_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        fanuc_msgs__srv__SetPayloadID_Response__fini(&data[i - 1]);
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
fanuc_msgs__srv__SetPayloadID_Response__Sequence__fini(fanuc_msgs__srv__SetPayloadID_Response__Sequence * array)
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
      fanuc_msgs__srv__SetPayloadID_Response__fini(&array->data[i]);
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

fanuc_msgs__srv__SetPayloadID_Response__Sequence *
fanuc_msgs__srv__SetPayloadID_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  fanuc_msgs__srv__SetPayloadID_Response__Sequence * array = (fanuc_msgs__srv__SetPayloadID_Response__Sequence *)allocator.allocate(sizeof(fanuc_msgs__srv__SetPayloadID_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = fanuc_msgs__srv__SetPayloadID_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
fanuc_msgs__srv__SetPayloadID_Response__Sequence__destroy(fanuc_msgs__srv__SetPayloadID_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    fanuc_msgs__srv__SetPayloadID_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
fanuc_msgs__srv__SetPayloadID_Response__Sequence__are_equal(const fanuc_msgs__srv__SetPayloadID_Response__Sequence * lhs, const fanuc_msgs__srv__SetPayloadID_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!fanuc_msgs__srv__SetPayloadID_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
fanuc_msgs__srv__SetPayloadID_Response__Sequence__copy(
  const fanuc_msgs__srv__SetPayloadID_Response__Sequence * input,
  fanuc_msgs__srv__SetPayloadID_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(fanuc_msgs__srv__SetPayloadID_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    fanuc_msgs__srv__SetPayloadID_Response * data =
      (fanuc_msgs__srv__SetPayloadID_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!fanuc_msgs__srv__SetPayloadID_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          fanuc_msgs__srv__SetPayloadID_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!fanuc_msgs__srv__SetPayloadID_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
