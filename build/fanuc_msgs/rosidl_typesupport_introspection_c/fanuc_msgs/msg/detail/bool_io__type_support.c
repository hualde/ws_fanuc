// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from fanuc_msgs:msg/BoolIO.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "fanuc_msgs/msg/detail/bool_io__rosidl_typesupport_introspection_c.h"
#include "fanuc_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "fanuc_msgs/msg/detail/bool_io__functions.h"
#include "fanuc_msgs/msg/detail/bool_io__struct.h"


// Include directives for member types
// Member `io_type`
#include "fanuc_msgs/msg/io_type.h"
// Member `io_type`
#include "fanuc_msgs/msg/detail/io_type__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void fanuc_msgs__msg__BoolIO__rosidl_typesupport_introspection_c__BoolIO_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  fanuc_msgs__msg__BoolIO__init(message_memory);
}

void fanuc_msgs__msg__BoolIO__rosidl_typesupport_introspection_c__BoolIO_fini_function(void * message_memory)
{
  fanuc_msgs__msg__BoolIO__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember fanuc_msgs__msg__BoolIO__rosidl_typesupport_introspection_c__BoolIO_message_member_array[3] = {
  {
    "io_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fanuc_msgs__msg__BoolIO, io_type),  // bytes offset in struct
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
    offsetof(fanuc_msgs__msg__BoolIO, index),  // bytes offset in struct
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
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fanuc_msgs__msg__BoolIO, value),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers fanuc_msgs__msg__BoolIO__rosidl_typesupport_introspection_c__BoolIO_message_members = {
  "fanuc_msgs__msg",  // message namespace
  "BoolIO",  // message name
  3,  // number of fields
  sizeof(fanuc_msgs__msg__BoolIO),
  fanuc_msgs__msg__BoolIO__rosidl_typesupport_introspection_c__BoolIO_message_member_array,  // message members
  fanuc_msgs__msg__BoolIO__rosidl_typesupport_introspection_c__BoolIO_init_function,  // function to initialize message memory (memory has to be allocated)
  fanuc_msgs__msg__BoolIO__rosidl_typesupport_introspection_c__BoolIO_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t fanuc_msgs__msg__BoolIO__rosidl_typesupport_introspection_c__BoolIO_message_type_support_handle = {
  0,
  &fanuc_msgs__msg__BoolIO__rosidl_typesupport_introspection_c__BoolIO_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_fanuc_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, fanuc_msgs, msg, BoolIO)() {
  fanuc_msgs__msg__BoolIO__rosidl_typesupport_introspection_c__BoolIO_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, fanuc_msgs, msg, IOType)();
  if (!fanuc_msgs__msg__BoolIO__rosidl_typesupport_introspection_c__BoolIO_message_type_support_handle.typesupport_identifier) {
    fanuc_msgs__msg__BoolIO__rosidl_typesupport_introspection_c__BoolIO_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &fanuc_msgs__msg__BoolIO__rosidl_typesupport_introspection_c__BoolIO_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
