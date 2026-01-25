// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from fanuc_msgs:msg/ConnectionStatus.idl
// generated code does not contain a copyright notice

#ifndef FANUC_MSGS__MSG__DETAIL__CONNECTION_STATUS__STRUCT_H_
#define FANUC_MSGS__MSG__DETAIL__CONNECTION_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/ConnectionStatus in the package fanuc_msgs.
/**
  * SPDX-FileCopyrightText: 2025, FANUC America Corporation
  * SPDX-FileCopyrightText: 2025, FANUC CORPORATION
  *
  * SPDX-License-Identifier: Apache-2.0
 */
typedef struct fanuc_msgs__msg__ConnectionStatus
{
  bool is_connected;
} fanuc_msgs__msg__ConnectionStatus;

// Struct for a sequence of fanuc_msgs__msg__ConnectionStatus.
typedef struct fanuc_msgs__msg__ConnectionStatus__Sequence
{
  fanuc_msgs__msg__ConnectionStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} fanuc_msgs__msg__ConnectionStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // FANUC_MSGS__MSG__DETAIL__CONNECTION_STATUS__STRUCT_H_
