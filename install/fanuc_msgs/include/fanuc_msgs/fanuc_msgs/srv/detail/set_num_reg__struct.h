// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from fanuc_msgs:srv/SetNumReg.idl
// generated code does not contain a copyright notice

#ifndef FANUC_MSGS__SRV__DETAIL__SET_NUM_REG__STRUCT_H_
#define FANUC_MSGS__SRV__DETAIL__SET_NUM_REG__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/SetNumReg in the package fanuc_msgs.
typedef struct fanuc_msgs__srv__SetNumReg_Request
{
  uint16_t index;
  float value;
} fanuc_msgs__srv__SetNumReg_Request;

// Struct for a sequence of fanuc_msgs__srv__SetNumReg_Request.
typedef struct fanuc_msgs__srv__SetNumReg_Request__Sequence
{
  fanuc_msgs__srv__SetNumReg_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} fanuc_msgs__srv__SetNumReg_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/SetNumReg in the package fanuc_msgs.
typedef struct fanuc_msgs__srv__SetNumReg_Response
{
  int32_t result;
} fanuc_msgs__srv__SetNumReg_Response;

// Struct for a sequence of fanuc_msgs__srv__SetNumReg_Response.
typedef struct fanuc_msgs__srv__SetNumReg_Response__Sequence
{
  fanuc_msgs__srv__SetNumReg_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} fanuc_msgs__srv__SetNumReg_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // FANUC_MSGS__SRV__DETAIL__SET_NUM_REG__STRUCT_H_
