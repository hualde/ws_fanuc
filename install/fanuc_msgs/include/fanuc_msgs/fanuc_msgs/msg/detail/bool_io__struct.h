// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from fanuc_msgs:msg/BoolIO.idl
// generated code does not contain a copyright notice

#ifndef FANUC_MSGS__MSG__DETAIL__BOOL_IO__STRUCT_H_
#define FANUC_MSGS__MSG__DETAIL__BOOL_IO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'io_type'
#include "fanuc_msgs/msg/detail/io_type__struct.h"

/// Struct defined in msg/BoolIO in the package fanuc_msgs.
/**
  * SPDX-FileCopyrightText: 2025, FANUC America Corporation
  * SPDX-FileCopyrightText: 2025, FANUC CORPORATION
  *
  * SPDX-License-Identifier: Apache-2.0
 */
typedef struct fanuc_msgs__msg__BoolIO
{
  /// Supported types:
  ///  DI
  ///  DO
  ///  RI
  ///  RO
  ///  F
  fanuc_msgs__msg__IOType io_type;
  uint16_t index;
  bool value;
} fanuc_msgs__msg__BoolIO;

// Struct for a sequence of fanuc_msgs__msg__BoolIO.
typedef struct fanuc_msgs__msg__BoolIO__Sequence
{
  fanuc_msgs__msg__BoolIO * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} fanuc_msgs__msg__BoolIO__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // FANUC_MSGS__MSG__DETAIL__BOOL_IO__STRUCT_H_
