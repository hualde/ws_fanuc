// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from fanuc_msgs:msg/IOType.idl
// generated code does not contain a copyright notice

#ifndef FANUC_MSGS__MSG__DETAIL__IO_TYPE__STRUCT_H_
#define FANUC_MSGS__MSG__DETAIL__IO_TYPE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'AI'.
static const char * const fanuc_msgs__msg__IOType__AI = "AI";

/// Constant 'AO'.
static const char * const fanuc_msgs__msg__IOType__AO = "AO";

/// Constant 'DI'.
static const char * const fanuc_msgs__msg__IOType__DI = "DI";

/// Constant 'DO'.
static const char * const fanuc_msgs__msg__IOType__DO = "DO";

/// Constant 'RI'.
static const char * const fanuc_msgs__msg__IOType__RI = "RI";

/// Constant 'RO'.
static const char * const fanuc_msgs__msg__IOType__RO = "RO";

/// Constant 'SI'.
static const char * const fanuc_msgs__msg__IOType__SI = "SI";

/// Constant 'SO'.
static const char * const fanuc_msgs__msg__IOType__SO = "SO";

/// Constant 'WI'.
static const char * const fanuc_msgs__msg__IOType__WI = "WI";

/// Constant 'WO'.
static const char * const fanuc_msgs__msg__IOType__WO = "WO";

/// Constant 'UI'.
static const char * const fanuc_msgs__msg__IOType__UI = "UI";

/// Constant 'UO'.
static const char * const fanuc_msgs__msg__IOType__UO = "UO";

/// Constant 'WSI'.
static const char * const fanuc_msgs__msg__IOType__WSI = "WSI";

/// Constant 'WSO'.
static const char * const fanuc_msgs__msg__IOType__WSO = "WSO";

/// Constant 'F'.
static const char * const fanuc_msgs__msg__IOType__F = "F";

/// Constant 'M'.
static const char * const fanuc_msgs__msg__IOType__M = "M";

/// Constant 'GI'.
static const char * const fanuc_msgs__msg__IOType__GI = "GI";

/// Constant 'GO'.
static const char * const fanuc_msgs__msg__IOType__GO = "GO";

// Include directives for member types
// Member 'type'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/IOType in the package fanuc_msgs.
/**
  * SPDX-FileCopyrightText: 2025, FANUC America Corporation
  * SPDX-FileCopyrightText: 2025, FANUC CORPORATION
  *
  * SPDX-License-Identifier: Apache-2.0
 */
typedef struct fanuc_msgs__msg__IOType
{
  rosidl_runtime_c__String type;
} fanuc_msgs__msg__IOType;

// Struct for a sequence of fanuc_msgs__msg__IOType.
typedef struct fanuc_msgs__msg__IOType__Sequence
{
  fanuc_msgs__msg__IOType * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} fanuc_msgs__msg__IOType__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // FANUC_MSGS__MSG__DETAIL__IO_TYPE__STRUCT_H_
