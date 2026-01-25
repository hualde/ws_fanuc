// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from fanuc_msgs:msg/BoolIO.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "fanuc_msgs/msg/detail/bool_io__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace fanuc_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void BoolIO_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) fanuc_msgs::msg::BoolIO(_init);
}

void BoolIO_fini_function(void * message_memory)
{
  auto typed_message = static_cast<fanuc_msgs::msg::BoolIO *>(message_memory);
  typed_message->~BoolIO();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember BoolIO_message_member_array[3] = {
  {
    "io_type",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<fanuc_msgs::msg::IOType>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fanuc_msgs::msg::BoolIO, io_type),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "index",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fanuc_msgs::msg::BoolIO, index),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "value",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fanuc_msgs::msg::BoolIO, value),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers BoolIO_message_members = {
  "fanuc_msgs::msg",  // message namespace
  "BoolIO",  // message name
  3,  // number of fields
  sizeof(fanuc_msgs::msg::BoolIO),
  BoolIO_message_member_array,  // message members
  BoolIO_init_function,  // function to initialize message memory (memory has to be allocated)
  BoolIO_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t BoolIO_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &BoolIO_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace fanuc_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<fanuc_msgs::msg::BoolIO>()
{
  return &::fanuc_msgs::msg::rosidl_typesupport_introspection_cpp::BoolIO_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, fanuc_msgs, msg, BoolIO)() {
  return &::fanuc_msgs::msg::rosidl_typesupport_introspection_cpp::BoolIO_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
