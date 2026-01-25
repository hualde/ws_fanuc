// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from fanuc_msgs:msg/RobotStatus.idl
// generated code does not contain a copyright notice

#ifndef FANUC_MSGS__MSG__DETAIL__ROBOT_STATUS__STRUCT_H_
#define FANUC_MSGS__MSG__DETAIL__ROBOT_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'CONTACT_STOP_MODE_NONE'.
enum
{
  fanuc_msgs__msg__RobotStatus__CONTACT_STOP_MODE_NONE = 0
};

/// Constant 'CONTACT_STOP_MODE_SAFE'.
enum
{
  fanuc_msgs__msg__RobotStatus__CONTACT_STOP_MODE_SAFE = 1
};

/// Constant 'CONTACT_STOP_MODE_STOP'.
enum
{
  fanuc_msgs__msg__RobotStatus__CONTACT_STOP_MODE_STOP = 2
};

/// Constant 'CONTACT_STOP_MODE_DSBL'.
enum
{
  fanuc_msgs__msg__RobotStatus__CONTACT_STOP_MODE_DSBL = 3
};

/// Constant 'CONTACT_STOP_MODE_ESCP'.
enum
{
  fanuc_msgs__msg__RobotStatus__CONTACT_STOP_MODE_ESCP = 4
};

/// Struct defined in msg/RobotStatus in the package fanuc_msgs.
/**
  * SPDX-FileCopyrightText: 2025, FANUC America Corporation
  * SPDX-FileCopyrightText: 2025, FANUC CORPORATION
  *
  * SPDX-License-Identifier: Apache-2.0
 */
typedef struct fanuc_msgs__msg__RobotStatus
{
  bool in_error;
  bool tp_enabled;
  bool e_stopped;
  bool motion_possible;
  uint8_t contact_stop_mode;
} fanuc_msgs__msg__RobotStatus;

// Struct for a sequence of fanuc_msgs__msg__RobotStatus.
typedef struct fanuc_msgs__msg__RobotStatus__Sequence
{
  fanuc_msgs__msg__RobotStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} fanuc_msgs__msg__RobotStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // FANUC_MSGS__MSG__DETAIL__ROBOT_STATUS__STRUCT_H_
