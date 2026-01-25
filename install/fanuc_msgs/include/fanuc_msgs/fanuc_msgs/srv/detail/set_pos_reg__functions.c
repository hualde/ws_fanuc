// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from fanuc_msgs:srv/SetPosReg.idl
// generated code does not contain a copyright notice
#include "fanuc_msgs/srv/detail/set_pos_reg__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `representation`
#include "rosidl_runtime_c/string_functions.h"

bool
fanuc_msgs__srv__SetPosReg_Request__init(fanuc_msgs__srv__SetPosReg_Request * msg)
{
  if (!msg) {
    return false;
  }
  // index
  // representation
  if (!rosidl_runtime_c__String__init(&msg->representation)) {
    fanuc_msgs__srv__SetPosReg_Request__fini(msg);
    return false;
  }
  // utool
  // uframe
  // front
  // up
  // left
  // flip
  // turn4
  // turn5
  // turn6
  // x
  // y
  // z
  // w
  // p
  // r
  // ext1
  // ext2
  // ext3
  // j1
  // j2
  // j3
  // j4
  // j5
  // j6
  // j7
  // j8
  // j9
  return true;
}

void
fanuc_msgs__srv__SetPosReg_Request__fini(fanuc_msgs__srv__SetPosReg_Request * msg)
{
  if (!msg) {
    return;
  }
  // index
  // representation
  rosidl_runtime_c__String__fini(&msg->representation);
  // utool
  // uframe
  // front
  // up
  // left
  // flip
  // turn4
  // turn5
  // turn6
  // x
  // y
  // z
  // w
  // p
  // r
  // ext1
  // ext2
  // ext3
  // j1
  // j2
  // j3
  // j4
  // j5
  // j6
  // j7
  // j8
  // j9
}

bool
fanuc_msgs__srv__SetPosReg_Request__are_equal(const fanuc_msgs__srv__SetPosReg_Request * lhs, const fanuc_msgs__srv__SetPosReg_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // index
  if (lhs->index != rhs->index) {
    return false;
  }
  // representation
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->representation), &(rhs->representation)))
  {
    return false;
  }
  // utool
  if (lhs->utool != rhs->utool) {
    return false;
  }
  // uframe
  if (lhs->uframe != rhs->uframe) {
    return false;
  }
  // front
  if (lhs->front != rhs->front) {
    return false;
  }
  // up
  if (lhs->up != rhs->up) {
    return false;
  }
  // left
  if (lhs->left != rhs->left) {
    return false;
  }
  // flip
  if (lhs->flip != rhs->flip) {
    return false;
  }
  // turn4
  if (lhs->turn4 != rhs->turn4) {
    return false;
  }
  // turn5
  if (lhs->turn5 != rhs->turn5) {
    return false;
  }
  // turn6
  if (lhs->turn6 != rhs->turn6) {
    return false;
  }
  // x
  if (lhs->x != rhs->x) {
    return false;
  }
  // y
  if (lhs->y != rhs->y) {
    return false;
  }
  // z
  if (lhs->z != rhs->z) {
    return false;
  }
  // w
  if (lhs->w != rhs->w) {
    return false;
  }
  // p
  if (lhs->p != rhs->p) {
    return false;
  }
  // r
  if (lhs->r != rhs->r) {
    return false;
  }
  // ext1
  if (lhs->ext1 != rhs->ext1) {
    return false;
  }
  // ext2
  if (lhs->ext2 != rhs->ext2) {
    return false;
  }
  // ext3
  if (lhs->ext3 != rhs->ext3) {
    return false;
  }
  // j1
  if (lhs->j1 != rhs->j1) {
    return false;
  }
  // j2
  if (lhs->j2 != rhs->j2) {
    return false;
  }
  // j3
  if (lhs->j3 != rhs->j3) {
    return false;
  }
  // j4
  if (lhs->j4 != rhs->j4) {
    return false;
  }
  // j5
  if (lhs->j5 != rhs->j5) {
    return false;
  }
  // j6
  if (lhs->j6 != rhs->j6) {
    return false;
  }
  // j7
  if (lhs->j7 != rhs->j7) {
    return false;
  }
  // j8
  if (lhs->j8 != rhs->j8) {
    return false;
  }
  // j9
  if (lhs->j9 != rhs->j9) {
    return false;
  }
  return true;
}

bool
fanuc_msgs__srv__SetPosReg_Request__copy(
  const fanuc_msgs__srv__SetPosReg_Request * input,
  fanuc_msgs__srv__SetPosReg_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // index
  output->index = input->index;
  // representation
  if (!rosidl_runtime_c__String__copy(
      &(input->representation), &(output->representation)))
  {
    return false;
  }
  // utool
  output->utool = input->utool;
  // uframe
  output->uframe = input->uframe;
  // front
  output->front = input->front;
  // up
  output->up = input->up;
  // left
  output->left = input->left;
  // flip
  output->flip = input->flip;
  // turn4
  output->turn4 = input->turn4;
  // turn5
  output->turn5 = input->turn5;
  // turn6
  output->turn6 = input->turn6;
  // x
  output->x = input->x;
  // y
  output->y = input->y;
  // z
  output->z = input->z;
  // w
  output->w = input->w;
  // p
  output->p = input->p;
  // r
  output->r = input->r;
  // ext1
  output->ext1 = input->ext1;
  // ext2
  output->ext2 = input->ext2;
  // ext3
  output->ext3 = input->ext3;
  // j1
  output->j1 = input->j1;
  // j2
  output->j2 = input->j2;
  // j3
  output->j3 = input->j3;
  // j4
  output->j4 = input->j4;
  // j5
  output->j5 = input->j5;
  // j6
  output->j6 = input->j6;
  // j7
  output->j7 = input->j7;
  // j8
  output->j8 = input->j8;
  // j9
  output->j9 = input->j9;
  return true;
}

fanuc_msgs__srv__SetPosReg_Request *
fanuc_msgs__srv__SetPosReg_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  fanuc_msgs__srv__SetPosReg_Request * msg = (fanuc_msgs__srv__SetPosReg_Request *)allocator.allocate(sizeof(fanuc_msgs__srv__SetPosReg_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(fanuc_msgs__srv__SetPosReg_Request));
  bool success = fanuc_msgs__srv__SetPosReg_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
fanuc_msgs__srv__SetPosReg_Request__destroy(fanuc_msgs__srv__SetPosReg_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    fanuc_msgs__srv__SetPosReg_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
fanuc_msgs__srv__SetPosReg_Request__Sequence__init(fanuc_msgs__srv__SetPosReg_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  fanuc_msgs__srv__SetPosReg_Request * data = NULL;

  if (size) {
    data = (fanuc_msgs__srv__SetPosReg_Request *)allocator.zero_allocate(size, sizeof(fanuc_msgs__srv__SetPosReg_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = fanuc_msgs__srv__SetPosReg_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        fanuc_msgs__srv__SetPosReg_Request__fini(&data[i - 1]);
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
fanuc_msgs__srv__SetPosReg_Request__Sequence__fini(fanuc_msgs__srv__SetPosReg_Request__Sequence * array)
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
      fanuc_msgs__srv__SetPosReg_Request__fini(&array->data[i]);
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

fanuc_msgs__srv__SetPosReg_Request__Sequence *
fanuc_msgs__srv__SetPosReg_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  fanuc_msgs__srv__SetPosReg_Request__Sequence * array = (fanuc_msgs__srv__SetPosReg_Request__Sequence *)allocator.allocate(sizeof(fanuc_msgs__srv__SetPosReg_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = fanuc_msgs__srv__SetPosReg_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
fanuc_msgs__srv__SetPosReg_Request__Sequence__destroy(fanuc_msgs__srv__SetPosReg_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    fanuc_msgs__srv__SetPosReg_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
fanuc_msgs__srv__SetPosReg_Request__Sequence__are_equal(const fanuc_msgs__srv__SetPosReg_Request__Sequence * lhs, const fanuc_msgs__srv__SetPosReg_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!fanuc_msgs__srv__SetPosReg_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
fanuc_msgs__srv__SetPosReg_Request__Sequence__copy(
  const fanuc_msgs__srv__SetPosReg_Request__Sequence * input,
  fanuc_msgs__srv__SetPosReg_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(fanuc_msgs__srv__SetPosReg_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    fanuc_msgs__srv__SetPosReg_Request * data =
      (fanuc_msgs__srv__SetPosReg_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!fanuc_msgs__srv__SetPosReg_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          fanuc_msgs__srv__SetPosReg_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!fanuc_msgs__srv__SetPosReg_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
fanuc_msgs__srv__SetPosReg_Response__init(fanuc_msgs__srv__SetPosReg_Response * msg)
{
  if (!msg) {
    return false;
  }
  // result
  return true;
}

void
fanuc_msgs__srv__SetPosReg_Response__fini(fanuc_msgs__srv__SetPosReg_Response * msg)
{
  if (!msg) {
    return;
  }
  // result
}

bool
fanuc_msgs__srv__SetPosReg_Response__are_equal(const fanuc_msgs__srv__SetPosReg_Response * lhs, const fanuc_msgs__srv__SetPosReg_Response * rhs)
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
fanuc_msgs__srv__SetPosReg_Response__copy(
  const fanuc_msgs__srv__SetPosReg_Response * input,
  fanuc_msgs__srv__SetPosReg_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // result
  output->result = input->result;
  return true;
}

fanuc_msgs__srv__SetPosReg_Response *
fanuc_msgs__srv__SetPosReg_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  fanuc_msgs__srv__SetPosReg_Response * msg = (fanuc_msgs__srv__SetPosReg_Response *)allocator.allocate(sizeof(fanuc_msgs__srv__SetPosReg_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(fanuc_msgs__srv__SetPosReg_Response));
  bool success = fanuc_msgs__srv__SetPosReg_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
fanuc_msgs__srv__SetPosReg_Response__destroy(fanuc_msgs__srv__SetPosReg_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    fanuc_msgs__srv__SetPosReg_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
fanuc_msgs__srv__SetPosReg_Response__Sequence__init(fanuc_msgs__srv__SetPosReg_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  fanuc_msgs__srv__SetPosReg_Response * data = NULL;

  if (size) {
    data = (fanuc_msgs__srv__SetPosReg_Response *)allocator.zero_allocate(size, sizeof(fanuc_msgs__srv__SetPosReg_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = fanuc_msgs__srv__SetPosReg_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        fanuc_msgs__srv__SetPosReg_Response__fini(&data[i - 1]);
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
fanuc_msgs__srv__SetPosReg_Response__Sequence__fini(fanuc_msgs__srv__SetPosReg_Response__Sequence * array)
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
      fanuc_msgs__srv__SetPosReg_Response__fini(&array->data[i]);
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

fanuc_msgs__srv__SetPosReg_Response__Sequence *
fanuc_msgs__srv__SetPosReg_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  fanuc_msgs__srv__SetPosReg_Response__Sequence * array = (fanuc_msgs__srv__SetPosReg_Response__Sequence *)allocator.allocate(sizeof(fanuc_msgs__srv__SetPosReg_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = fanuc_msgs__srv__SetPosReg_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
fanuc_msgs__srv__SetPosReg_Response__Sequence__destroy(fanuc_msgs__srv__SetPosReg_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    fanuc_msgs__srv__SetPosReg_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
fanuc_msgs__srv__SetPosReg_Response__Sequence__are_equal(const fanuc_msgs__srv__SetPosReg_Response__Sequence * lhs, const fanuc_msgs__srv__SetPosReg_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!fanuc_msgs__srv__SetPosReg_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
fanuc_msgs__srv__SetPosReg_Response__Sequence__copy(
  const fanuc_msgs__srv__SetPosReg_Response__Sequence * input,
  fanuc_msgs__srv__SetPosReg_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(fanuc_msgs__srv__SetPosReg_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    fanuc_msgs__srv__SetPosReg_Response * data =
      (fanuc_msgs__srv__SetPosReg_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!fanuc_msgs__srv__SetPosReg_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          fanuc_msgs__srv__SetPosReg_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!fanuc_msgs__srv__SetPosReg_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
