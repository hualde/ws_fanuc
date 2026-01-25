// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from fanuc_msgs:srv/SetGroupIO.idl
// generated code does not contain a copyright notice

#ifndef FANUC_MSGS__SRV__DETAIL__SET_GROUP_IO__STRUCT_H_
#define FANUC_MSGS__SRV__DETAIL__SET_GROUP_IO__STRUCT_H_

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

/// Struct defined in srv/SetGroupIO in the package fanuc_msgs.
typedef struct fanuc_msgs__srv__SetGroupIO_Request
{
  /// Supported types:
  ///  GO
  fanuc_msgs__msg__IOType io_type;
  uint16_t index;
  uint16_t value;
} fanuc_msgs__srv__SetGroupIO_Request;

// Struct for a sequence of fanuc_msgs__srv__SetGroupIO_Request.
typedef struct fanuc_msgs__srv__SetGroupIO_Request__Sequence
{
  fanuc_msgs__srv__SetGroupIO_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} fanuc_msgs__srv__SetGroupIO_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/SetGroupIO in the package fanuc_msgs.
typedef struct fanuc_msgs__srv__SetGroupIO_Response
{
  int32_t result;
} fanuc_msgs__srv__SetGroupIO_Response;

// Struct for a sequence of fanuc_msgs__srv__SetGroupIO_Response.
typedef struct fanuc_msgs__srv__SetGroupIO_Response__Sequence
{
  fanuc_msgs__srv__SetGroupIO_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} fanuc_msgs__srv__SetGroupIO_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // FANUC_MSGS__SRV__DETAIL__SET_GROUP_IO__STRUCT_H_
