// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from fanuc_msgs:msg/NumRegCmd.idl
// generated code does not contain a copyright notice

#ifndef FANUC_MSGS__MSG__DETAIL__NUM_REG_CMD__STRUCT_H_
#define FANUC_MSGS__MSG__DETAIL__NUM_REG_CMD__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'values'
#include "fanuc_msgs/msg/detail/num_reg__struct.h"

/// Struct defined in msg/NumRegCmd in the package fanuc_msgs.
/**
  * SPDX-FileCopyrightText: 2025, FANUC America Corporation
  * SPDX-FileCopyrightText: 2025, FANUC CORPORATION
  *
  * SPDX-License-Identifier: Apache-2.0
 */
typedef struct fanuc_msgs__msg__NumRegCmd
{
  fanuc_msgs__msg__NumReg__Sequence values;
} fanuc_msgs__msg__NumRegCmd;

// Struct for a sequence of fanuc_msgs__msg__NumRegCmd.
typedef struct fanuc_msgs__msg__NumRegCmd__Sequence
{
  fanuc_msgs__msg__NumRegCmd * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} fanuc_msgs__msg__NumRegCmd__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // FANUC_MSGS__MSG__DETAIL__NUM_REG_CMD__STRUCT_H_
