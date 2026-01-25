// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from fanuc_msgs:msg/RobotStatusExt.idl
// generated code does not contain a copyright notice

#ifndef FANUC_MSGS__MSG__DETAIL__ROBOT_STATUS_EXT__STRUCT_H_
#define FANUC_MSGS__MSG__DETAIL__ROBOT_STATUS_EXT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'error_code'
// Member 'control_mode'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/RobotStatusExt in the package fanuc_msgs.
/**
  * SPDX-FileCopyrightText: 2025, FANUC America Corporation
  * SPDX-FileCopyrightText: 2025, FANUC CORPORATION
  *
  * SPDX-License-Identifier: Apache-2.0
 */
typedef struct fanuc_msgs__msg__RobotStatusExt
{
  rosidl_runtime_c__String error_code;
  bool in_motion;
  bool drives_powered;
  int32_t gen_override;
  float speed_clamp_limit;
  rosidl_runtime_c__String control_mode;
} fanuc_msgs__msg__RobotStatusExt;

// Struct for a sequence of fanuc_msgs__msg__RobotStatusExt.
typedef struct fanuc_msgs__msg__RobotStatusExt__Sequence
{
  fanuc_msgs__msg__RobotStatusExt * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} fanuc_msgs__msg__RobotStatusExt__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // FANUC_MSGS__MSG__DETAIL__ROBOT_STATUS_EXT__STRUCT_H_
