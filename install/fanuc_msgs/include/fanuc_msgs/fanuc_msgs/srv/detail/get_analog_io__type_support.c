// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from fanuc_msgs:srv/GetAnalogIO.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "fanuc_msgs/srv/detail/get_analog_io__rosidl_typesupport_introspection_c.h"
#include "fanuc_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "fanuc_msgs/srv/detail/get_analog_io__functions.h"
#include "fanuc_msgs/srv/detail/get_analog_io__struct.h"


// Include directives for member types
// Member `io_type`
#include "fanuc_msgs/msg/io_type.h"
// Member `io_type`
#include "fanuc_msgs/msg/detail/io_type__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void fanuc_msgs__srv__GetAnalogIO_Request__rosidl_typesupport_introspection_c__GetAnalogIO_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  fanuc_msgs__srv__GetAnalogIO_Request__init(message_memory);
}

void fanuc_msgs__srv__GetAnalogIO_Request__rosidl_typesupport_introspection_c__GetAnalogIO_Request_fini_function(void * message_memory)
{
  fanuc_msgs__srv__GetAnalogIO_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember fanuc_msgs__srv__GetAnalogIO_Request__rosidl_typesupport_introspection_c__GetAnalogIO_Request_message_member_array[2] = {
  {
    "io_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fanuc_msgs__srv__GetAnalogIO_Request, io_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "index",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fanuc_msgs__srv__GetAnalogIO_Request, index),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers fanuc_msgs__srv__GetAnalogIO_Request__rosidl_typesupport_introspection_c__GetAnalogIO_Request_message_members = {
  "fanuc_msgs__srv",  // message namespace
  "GetAnalogIO_Request",  // message name
  2,  // number of fields
  sizeof(fanuc_msgs__srv__GetAnalogIO_Request),
  fanuc_msgs__srv__GetAnalogIO_Request__rosidl_typesupport_introspection_c__GetAnalogIO_Request_message_member_array,  // message members
  fanuc_msgs__srv__GetAnalogIO_Request__rosidl_typesupport_introspection_c__GetAnalogIO_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  fanuc_msgs__srv__GetAnalogIO_Request__rosidl_typesupport_introspection_c__GetAnalogIO_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t fanuc_msgs__srv__GetAnalogIO_Request__rosidl_typesupport_introspection_c__GetAnalogIO_Request_message_type_support_handle = {
  0,
  &fanuc_msgs__srv__GetAnalogIO_Request__rosidl_typesupport_introspection_c__GetAnalogIO_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_fanuc_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, fanuc_msgs, srv, GetAnalogIO_Request)() {
  fanuc_msgs__srv__GetAnalogIO_Request__rosidl_typesupport_introspection_c__GetAnalogIO_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, fanuc_msgs, msg, IOType)();
  if (!fanuc_msgs__srv__GetAnalogIO_Request__rosidl_typesupport_introspection_c__GetAnalogIO_Request_message_type_support_handle.typesupport_identifier) {
    fanuc_msgs__srv__GetAnalogIO_Request__rosidl_typesupport_introspection_c__GetAnalogIO_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &fanuc_msgs__srv__GetAnalogIO_Request__rosidl_typesupport_introspection_c__GetAnalogIO_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "fanuc_msgs/srv/detail/get_analog_io__rosidl_typesupport_introspection_c.h"
// already included above
// #include "fanuc_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "fanuc_msgs/srv/detail/get_analog_io__functions.h"
// already included above
// #include "fanuc_msgs/srv/detail/get_analog_io__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void fanuc_msgs__srv__GetAnalogIO_Response__rosidl_typesupport_introspection_c__GetAnalogIO_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  fanuc_msgs__srv__GetAnalogIO_Response__init(message_memory);
}

void fanuc_msgs__srv__GetAnalogIO_Response__rosidl_typesupport_introspection_c__GetAnalogIO_Response_fini_function(void * message_memory)
{
  fanuc_msgs__srv__GetAnalogIO_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember fanuc_msgs__srv__GetAnalogIO_Response__rosidl_typesupport_introspection_c__GetAnalogIO_Response_message_member_array[2] = {
  {
    "result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fanuc_msgs__srv__GetAnalogIO_Response, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "value",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fanuc_msgs__srv__GetAnalogIO_Response, value),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers fanuc_msgs__srv__GetAnalogIO_Response__rosidl_typesupport_introspection_c__GetAnalogIO_Response_message_members = {
  "fanuc_msgs__srv",  // message namespace
  "GetAnalogIO_Response",  // message name
  2,  // number of fields
  sizeof(fanuc_msgs__srv__GetAnalogIO_Response),
  fanuc_msgs__srv__GetAnalogIO_Response__rosidl_typesupport_introspection_c__GetAnalogIO_Response_message_member_array,  // message members
  fanuc_msgs__srv__GetAnalogIO_Response__rosidl_typesupport_introspection_c__GetAnalogIO_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  fanuc_msgs__srv__GetAnalogIO_Response__rosidl_typesupport_introspection_c__GetAnalogIO_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t fanuc_msgs__srv__GetAnalogIO_Response__rosidl_typesupport_introspection_c__GetAnalogIO_Response_message_type_support_handle = {
  0,
  &fanuc_msgs__srv__GetAnalogIO_Response__rosidl_typesupport_introspection_c__GetAnalogIO_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_fanuc_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, fanuc_msgs, srv, GetAnalogIO_Response)() {
  if (!fanuc_msgs__srv__GetAnalogIO_Response__rosidl_typesupport_introspection_c__GetAnalogIO_Response_message_type_support_handle.typesupport_identifier) {
    fanuc_msgs__srv__GetAnalogIO_Response__rosidl_typesupport_introspection_c__GetAnalogIO_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &fanuc_msgs__srv__GetAnalogIO_Response__rosidl_typesupport_introspection_c__GetAnalogIO_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "fanuc_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "fanuc_msgs/srv/detail/get_analog_io__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers fanuc_msgs__srv__detail__get_analog_io__rosidl_typesupport_introspection_c__GetAnalogIO_service_members = {
  "fanuc_msgs__srv",  // service namespace
  "GetAnalogIO",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // fanuc_msgs__srv__detail__get_analog_io__rosidl_typesupport_introspection_c__GetAnalogIO_Request_message_type_support_handle,
  NULL  // response message
  // fanuc_msgs__srv__detail__get_analog_io__rosidl_typesupport_introspection_c__GetAnalogIO_Response_message_type_support_handle
};

static rosidl_service_type_support_t fanuc_msgs__srv__detail__get_analog_io__rosidl_typesupport_introspection_c__GetAnalogIO_service_type_support_handle = {
  0,
  &fanuc_msgs__srv__detail__get_analog_io__rosidl_typesupport_introspection_c__GetAnalogIO_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, fanuc_msgs, srv, GetAnalogIO_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, fanuc_msgs, srv, GetAnalogIO_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_fanuc_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, fanuc_msgs, srv, GetAnalogIO)() {
  if (!fanuc_msgs__srv__detail__get_analog_io__rosidl_typesupport_introspection_c__GetAnalogIO_service_type_support_handle.typesupport_identifier) {
    fanuc_msgs__srv__detail__get_analog_io__rosidl_typesupport_introspection_c__GetAnalogIO_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)fanuc_msgs__srv__detail__get_analog_io__rosidl_typesupport_introspection_c__GetAnalogIO_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, fanuc_msgs, srv, GetAnalogIO_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, fanuc_msgs, srv, GetAnalogIO_Response)()->data;
  }

  return &fanuc_msgs__srv__detail__get_analog_io__rosidl_typesupport_introspection_c__GetAnalogIO_service_type_support_handle;
}
