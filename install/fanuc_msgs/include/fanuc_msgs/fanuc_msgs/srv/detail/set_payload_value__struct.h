// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from fanuc_msgs:srv/SetPayloadValue.idl
// generated code does not contain a copyright notice

#ifndef FANUC_MSGS__SRV__DETAIL__SET_PAYLOAD_VALUE__STRUCT_H_
#define FANUC_MSGS__SRV__DETAIL__SET_PAYLOAD_VALUE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/SetPayloadValue in the package fanuc_msgs.
typedef struct fanuc_msgs__srv__SetPayloadValue_Request
{
  /// Mass unit: kg
  /// Center of Gravity (CG) unit: m
  /// Inertia (IN) unit: kgm^2
  /// use_in: true - robot will set the inertia values
  ///         false - robot will ignore the inertia values
  uint16_t payload_schedule_id;
  float mass;
  float cg_x;
  float cg_y;
  float cg_z;
  bool use_in;
  float in_x;
  float in_y;
  float in_z;
} fanuc_msgs__srv__SetPayloadValue_Request;

// Struct for a sequence of fanuc_msgs__srv__SetPayloadValue_Request.
typedef struct fanuc_msgs__srv__SetPayloadValue_Request__Sequence
{
  fanuc_msgs__srv__SetPayloadValue_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} fanuc_msgs__srv__SetPayloadValue_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/SetPayloadValue in the package fanuc_msgs.
typedef struct fanuc_msgs__srv__SetPayloadValue_Response
{
  int32_t result;
} fanuc_msgs__srv__SetPayloadValue_Response;

// Struct for a sequence of fanuc_msgs__srv__SetPayloadValue_Response.
typedef struct fanuc_msgs__srv__SetPayloadValue_Response__Sequence
{
  fanuc_msgs__srv__SetPayloadValue_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} fanuc_msgs__srv__SetPayloadValue_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // FANUC_MSGS__SRV__DETAIL__SET_PAYLOAD_VALUE__STRUCT_H_
