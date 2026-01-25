// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from fanuc_msgs:srv/SetPosReg.idl
// generated code does not contain a copyright notice

#ifndef FANUC_MSGS__SRV__DETAIL__SET_POS_REG__STRUCT_H_
#define FANUC_MSGS__SRV__DETAIL__SET_POS_REG__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'representation'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/SetPosReg in the package fanuc_msgs.
typedef struct fanuc_msgs__srv__SetPosReg_Request
{
  uint16_t index;
  rosidl_runtime_c__String representation;
  uint8_t utool;
  uint8_t uframe;
  uint8_t front;
  uint8_t up;
  uint8_t left;
  uint8_t flip;
  int8_t turn4;
  int8_t turn5;
  int8_t turn6;
  float x;
  float y;
  float z;
  float w;
  float p;
  float r;
  float ext1;
  float ext2;
  float ext3;
  float j1;
  float j2;
  float j3;
  float j4;
  float j5;
  float j6;
  float j7;
  float j8;
  float j9;
} fanuc_msgs__srv__SetPosReg_Request;

// Struct for a sequence of fanuc_msgs__srv__SetPosReg_Request.
typedef struct fanuc_msgs__srv__SetPosReg_Request__Sequence
{
  fanuc_msgs__srv__SetPosReg_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} fanuc_msgs__srv__SetPosReg_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/SetPosReg in the package fanuc_msgs.
typedef struct fanuc_msgs__srv__SetPosReg_Response
{
  int32_t result;
} fanuc_msgs__srv__SetPosReg_Response;

// Struct for a sequence of fanuc_msgs__srv__SetPosReg_Response.
typedef struct fanuc_msgs__srv__SetPosReg_Response__Sequence
{
  fanuc_msgs__srv__SetPosReg_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} fanuc_msgs__srv__SetPosReg_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // FANUC_MSGS__SRV__DETAIL__SET_POS_REG__STRUCT_H_
