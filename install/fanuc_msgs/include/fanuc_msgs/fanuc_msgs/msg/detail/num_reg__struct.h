// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from fanuc_msgs:msg/NumReg.idl
// generated code does not contain a copyright notice

#ifndef FANUC_MSGS__MSG__DETAIL__NUM_REG__STRUCT_H_
#define FANUC_MSGS__MSG__DETAIL__NUM_REG__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/NumReg in the package fanuc_msgs.
/**
  * SPDX-FileCopyrightText: 2025, FANUC America Corporation
  * SPDX-FileCopyrightText: 2025, FANUC CORPORATION
  *
  * SPDX-License-Identifier: Apache-2.0
 */
typedef struct fanuc_msgs__msg__NumReg
{
  uint16_t index;
  float value;
} fanuc_msgs__msg__NumReg;

// Struct for a sequence of fanuc_msgs__msg__NumReg.
typedef struct fanuc_msgs__msg__NumReg__Sequence
{
  fanuc_msgs__msg__NumReg * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} fanuc_msgs__msg__NumReg__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // FANUC_MSGS__MSG__DETAIL__NUM_REG__STRUCT_H_
