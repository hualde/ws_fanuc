// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from fanuc_msgs:msg/RobotStatusExt.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "fanuc_msgs/msg/detail/robot_status_ext__rosidl_typesupport_introspection_c.h"
#include "fanuc_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "fanuc_msgs/msg/detail/robot_status_ext__functions.h"
#include "fanuc_msgs/msg/detail/robot_status_ext__struct.h"


// Include directives for member types
// Member `error_code`
// Member `control_mode`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void fanuc_msgs__msg__RobotStatusExt__rosidl_typesupport_introspection_c__RobotStatusExt_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  fanuc_msgs__msg__RobotStatusExt__init(message_memory);
}

void fanuc_msgs__msg__RobotStatusExt__rosidl_typesupport_introspection_c__RobotStatusExt_fini_function(void * message_memory)
{
  fanuc_msgs__msg__RobotStatusExt__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember fanuc_msgs__msg__RobotStatusExt__rosidl_typesupport_introspection_c__RobotStatusExt_message_member_array[6] = {
  {
    "error_code",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fanuc_msgs__msg__RobotStatusExt, error_code),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "in_motion",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fanuc_msgs__msg__RobotStatusExt, in_motion),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "drives_powered",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fanuc_msgs__msg__RobotStatusExt, drives_powered),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "gen_override",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fanuc_msgs__msg__RobotStatusExt, gen_override),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "speed_clamp_limit",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fanuc_msgs__msg__RobotStatusExt, speed_clamp_limit),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "control_mode",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fanuc_msgs__msg__RobotStatusExt, control_mode),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers fanuc_msgs__msg__RobotStatusExt__rosidl_typesupport_introspection_c__RobotStatusExt_message_members = {
  "fanuc_msgs__msg",  // message namespace
  "RobotStatusExt",  // message name
  6,  // number of fields
  sizeof(fanuc_msgs__msg__RobotStatusExt),
  fanuc_msgs__msg__RobotStatusExt__rosidl_typesupport_introspection_c__RobotStatusExt_message_member_array,  // message members
  fanuc_msgs__msg__RobotStatusExt__rosidl_typesupport_introspection_c__RobotStatusExt_init_function,  // function to initialize message memory (memory has to be allocated)
  fanuc_msgs__msg__RobotStatusExt__rosidl_typesupport_introspection_c__RobotStatusExt_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t fanuc_msgs__msg__RobotStatusExt__rosidl_typesupport_introspection_c__RobotStatusExt_message_type_support_handle = {
  0,
  &fanuc_msgs__msg__RobotStatusExt__rosidl_typesupport_introspection_c__RobotStatusExt_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_fanuc_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, fanuc_msgs, msg, RobotStatusExt)() {
  if (!fanuc_msgs__msg__RobotStatusExt__rosidl_typesupport_introspection_c__RobotStatusExt_message_type_support_handle.typesupport_identifier) {
    fanuc_msgs__msg__RobotStatusExt__rosidl_typesupport_introspection_c__RobotStatusExt_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &fanuc_msgs__msg__RobotStatusExt__rosidl_typesupport_introspection_c__RobotStatusExt_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
