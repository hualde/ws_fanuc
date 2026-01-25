// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from fanuc_msgs:msg/IOState.idl
// generated code does not contain a copyright notice

#ifndef FANUC_MSGS__MSG__DETAIL__IO_STATE__STRUCT_H_
#define FANUC_MSGS__MSG__DETAIL__IO_STATE__STRUCT_H_

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
#include "fanuc_msgs/msg/detail/bool_io__struct.h"

/// Struct defined in msg/IOState in the package fanuc_msgs.
/**
  * SPDX-FileCopyrightText: 2025, FANUC America Corporation
  * SPDX-FileCopyrightText: 2025, FANUC CORPORATION
  *
  * SPDX-License-Identifier: Apache-2.0
 */
typedef struct fanuc_msgs__msg__IOState
{
  /// Possible BoolIO types:
  ///  DI
  ///  DO
  ///  RI
  ///  RO
  ///  F
  fanuc_msgs__msg__BoolIO__Sequence values;
} fanuc_msgs__msg__IOState;

// Struct for a sequence of fanuc_msgs__msg__IOState.
typedef struct fanuc_msgs__msg__IOState__Sequence
{
  fanuc_msgs__msg__IOState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} fanuc_msgs__msg__IOState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // FANUC_MSGS__MSG__DETAIL__IO_STATE__STRUCT_H_
