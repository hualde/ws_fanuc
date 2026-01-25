// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from fanuc_msgs:srv/SetPayloadID.idl
// generated code does not contain a copyright notice

#ifndef FANUC_MSGS__SRV__DETAIL__SET_PAYLOAD_ID__STRUCT_H_
#define FANUC_MSGS__SRV__DETAIL__SET_PAYLOAD_ID__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/SetPayloadID in the package fanuc_msgs.
typedef struct fanuc_msgs__srv__SetPayloadID_Request
{
  uint16_t payload_schedule_id;
} fanuc_msgs__srv__SetPayloadID_Request;

// Struct for a sequence of fanuc_msgs__srv__SetPayloadID_Request.
typedef struct fanuc_msgs__srv__SetPayloadID_Request__Sequence
{
  fanuc_msgs__srv__SetPayloadID_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} fanuc_msgs__srv__SetPayloadID_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/SetPayloadID in the package fanuc_msgs.
typedef struct fanuc_msgs__srv__SetPayloadID_Response
{
  int32_t result;
} fanuc_msgs__srv__SetPayloadID_Response;

// Struct for a sequence of fanuc_msgs__srv__SetPayloadID_Response.
typedef struct fanuc_msgs__srv__SetPayloadID_Response__Sequence
{
  fanuc_msgs__srv__SetPayloadID_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} fanuc_msgs__srv__SetPayloadID_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // FANUC_MSGS__SRV__DETAIL__SET_PAYLOAD_ID__STRUCT_H_
