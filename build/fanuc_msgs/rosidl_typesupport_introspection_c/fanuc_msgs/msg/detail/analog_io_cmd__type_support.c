// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from fanuc_msgs:msg/AnalogIOCmd.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "fanuc_msgs/msg/detail/analog_io_cmd__rosidl_typesupport_introspection_c.h"
#include "fanuc_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "fanuc_msgs/msg/detail/analog_io_cmd__functions.h"
#include "fanuc_msgs/msg/detail/analog_io_cmd__struct.h"


// Include directives for member types
// Member `values`
#include "fanuc_msgs/msg/analog_io.h"
// Member `values`
#include "fanuc_msgs/msg/detail/analog_io__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void fanuc_msgs__msg__AnalogIOCmd__rosidl_typesupport_introspection_c__AnalogIOCmd_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  fanuc_msgs__msg__AnalogIOCmd__init(message_memory);
}

void fanuc_msgs__msg__AnalogIOCmd__rosidl_typesupport_introspection_c__AnalogIOCmd_fini_function(void * message_memory)
{
  fanuc_msgs__msg__AnalogIOCmd__fini(message_memory);
}

size_t fanuc_msgs__msg__AnalogIOCmd__rosidl_typesupport_introspection_c__size_function__AnalogIOCmd__values(
  const void * untyped_member)
{
  const fanuc_msgs__msg__AnalogIO__Sequence * member =
    (const fanuc_msgs__msg__AnalogIO__Sequence *)(untyped_member);
  return member->size;
}

const void * fanuc_msgs__msg__AnalogIOCmd__rosidl_typesupport_introspection_c__get_const_function__AnalogIOCmd__values(
  const void * untyped_member, size_t index)
{
  const fanuc_msgs__msg__AnalogIO__Sequence * member =
    (const fanuc_msgs__msg__AnalogIO__Sequence *)(untyped_member);
  return &member->data[index];
}

void * fanuc_msgs__msg__AnalogIOCmd__rosidl_typesupport_introspection_c__get_function__AnalogIOCmd__values(
  void * untyped_member, size_t index)
{
  fanuc_msgs__msg__AnalogIO__Sequence * member =
    (fanuc_msgs__msg__AnalogIO__Sequence *)(untyped_member);
  return &member->data[index];
}

void fanuc_msgs__msg__AnalogIOCmd__rosidl_typesupport_introspection_c__fetch_function__AnalogIOCmd__values(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const fanuc_msgs__msg__AnalogIO * item =
    ((const fanuc_msgs__msg__AnalogIO *)
    fanuc_msgs__msg__AnalogIOCmd__rosidl_typesupport_introspection_c__get_const_function__AnalogIOCmd__values(untyped_member, index));
  fanuc_msgs__msg__AnalogIO * value =
    (fanuc_msgs__msg__AnalogIO *)(untyped_value);
  *value = *item;
}

void fanuc_msgs__msg__AnalogIOCmd__rosidl_typesupport_introspection_c__assign_function__AnalogIOCmd__values(
  void * untyped_member, size_t index, const void * untyped_value)
{
  fanuc_msgs__msg__AnalogIO * item =
    ((fanuc_msgs__msg__AnalogIO *)
    fanuc_msgs__msg__AnalogIOCmd__rosidl_typesupport_introspection_c__get_function__AnalogIOCmd__values(untyped_member, index));
  const fanuc_msgs__msg__AnalogIO * value =
    (const fanuc_msgs__msg__AnalogIO *)(untyped_value);
  *item = *value;
}

bool fanuc_msgs__msg__AnalogIOCmd__rosidl_typesupport_introspection_c__resize_function__AnalogIOCmd__values(
  void * untyped_member, size_t size)
{
  fanuc_msgs__msg__AnalogIO__Sequence * member =
    (fanuc_msgs__msg__AnalogIO__Sequence *)(untyped_member);
  fanuc_msgs__msg__AnalogIO__Sequence__fini(member);
  return fanuc_msgs__msg__AnalogIO__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember fanuc_msgs__msg__AnalogIOCmd__rosidl_typesupport_introspection_c__AnalogIOCmd_message_member_array[1] = {
  {
    "values",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fanuc_msgs__msg__AnalogIOCmd, values),  // bytes offset in struct
    NULL,  // default value
    fanuc_msgs__msg__AnalogIOCmd__rosidl_typesupport_introspection_c__size_function__AnalogIOCmd__values,  // size() function pointer
    fanuc_msgs__msg__AnalogIOCmd__rosidl_typesupport_introspection_c__get_const_function__AnalogIOCmd__values,  // get_const(index) function pointer
    fanuc_msgs__msg__AnalogIOCmd__rosidl_typesupport_introspection_c__get_function__AnalogIOCmd__values,  // get(index) function pointer
    fanuc_msgs__msg__AnalogIOCmd__rosidl_typesupport_introspection_c__fetch_function__AnalogIOCmd__values,  // fetch(index, &value) function pointer
    fanuc_msgs__msg__AnalogIOCmd__rosidl_typesupport_introspection_c__assign_function__AnalogIOCmd__values,  // assign(index, value) function pointer
    fanuc_msgs__msg__AnalogIOCmd__rosidl_typesupport_introspection_c__resize_function__AnalogIOCmd__values  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers fanuc_msgs__msg__AnalogIOCmd__rosidl_typesupport_introspection_c__AnalogIOCmd_message_members = {
  "fanuc_msgs__msg",  // message namespace
  "AnalogIOCmd",  // message name
  1,  // number of fields
  sizeof(fanuc_msgs__msg__AnalogIOCmd),
  fanuc_msgs__msg__AnalogIOCmd__rosidl_typesupport_introspection_c__AnalogIOCmd_message_member_array,  // message members
  fanuc_msgs__msg__AnalogIOCmd__rosidl_typesupport_introspection_c__AnalogIOCmd_init_function,  // function to initialize message memory (memory has to be allocated)
  fanuc_msgs__msg__AnalogIOCmd__rosidl_typesupport_introspection_c__AnalogIOCmd_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t fanuc_msgs__msg__AnalogIOCmd__rosidl_typesupport_introspection_c__AnalogIOCmd_message_type_support_handle = {
  0,
  &fanuc_msgs__msg__AnalogIOCmd__rosidl_typesupport_introspection_c__AnalogIOCmd_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_fanuc_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, fanuc_msgs, msg, AnalogIOCmd)() {
  fanuc_msgs__msg__AnalogIOCmd__rosidl_typesupport_introspection_c__AnalogIOCmd_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, fanuc_msgs, msg, AnalogIO)();
  if (!fanuc_msgs__msg__AnalogIOCmd__rosidl_typesupport_introspection_c__AnalogIOCmd_message_type_support_handle.typesupport_identifier) {
    fanuc_msgs__msg__AnalogIOCmd__rosidl_typesupport_introspection_c__AnalogIOCmd_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &fanuc_msgs__msg__AnalogIOCmd__rosidl_typesupport_introspection_c__AnalogIOCmd_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
