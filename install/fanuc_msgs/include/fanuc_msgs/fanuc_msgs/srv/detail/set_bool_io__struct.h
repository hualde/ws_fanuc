// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from fanuc_msgs:srv/SetBoolIO.idl
// generated code does not contain a copyright notice

#ifndef FANUC_MSGS__SRV__DETAIL__SET_BOOL_IO__STRUCT_H_
#define FANUC_MSGS__SRV__DETAIL__SET_BOOL_IO__STRUCT_H_

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

/// Struct defined in srv/SetBoolIO in the package fanuc_msgs.
typedef struct fanuc_msgs__srv__SetBoolIO_Request
{
  /// Supported types:
  ///  DO
  ///  RO
  ///  F
  fanuc_msgs__msg__IOType io_type;
  uint16_t index;
  bool value;
} fanuc_msgs__srv__SetBoolIO_Request;

// Struct for a sequence of fanuc_msgs__srv__SetBoolIO_Request.
typedef struct fanuc_msgs__srv__SetBoolIO_Request__Sequence
{
  fanuc_msgs__srv__SetBoolIO_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} fanuc_msgs__srv__SetBoolIO_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/SetBoolIO in the package fanuc_msgs.
typedef struct fanuc_msgs__srv__SetBoolIO_Response
{
  int32_t result;
} fanuc_msgs__srv__SetBoolIO_Response;

// Struct for a sequence of fanuc_msgs__srv__SetBoolIO_Response.
typedef struct fanuc_msgs__srv__SetBoolIO_Response__Sequence
{
  fanuc_msgs__srv__SetBoolIO_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} fanuc_msgs__srv__SetBoolIO_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // FANUC_MSGS__SRV__DETAIL__SET_BOOL_IO__STRUCT_H_
