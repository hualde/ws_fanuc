// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from fanuc_msgs:msg/NumRegCmd.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "fanuc_msgs/msg/detail/num_reg_cmd__struct.hpp"
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

void NumRegCmd_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) fanuc_msgs::msg::NumRegCmd(_init);
}

void NumRegCmd_fini_function(void * message_memory)
{
  auto typed_message = static_cast<fanuc_msgs::msg::NumRegCmd *>(message_memory);
  typed_message->~NumRegCmd();
}

size_t size_function__NumRegCmd__values(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<fanuc_msgs::msg::NumReg> *>(untyped_member);
  return member->size();
}

const void * get_const_function__NumRegCmd__values(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<fanuc_msgs::msg::NumReg> *>(untyped_member);
  return &member[index];
}

void * get_function__NumRegCmd__values(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<fanuc_msgs::msg::NumReg> *>(untyped_member);
  return &member[index];
}

void fetch_function__NumRegCmd__values(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const fanuc_msgs::msg::NumReg *>(
    get_const_function__NumRegCmd__values(untyped_member, index));
  auto & value = *reinterpret_cast<fanuc_msgs::msg::NumReg *>(untyped_value);
  value = item;
}

void assign_function__NumRegCmd__values(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<fanuc_msgs::msg::NumReg *>(
    get_function__NumRegCmd__values(untyped_member, index));
  const auto & value = *reinterpret_cast<const fanuc_msgs::msg::NumReg *>(untyped_value);
  item = value;
}

void resize_function__NumRegCmd__values(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<fanuc_msgs::msg::NumReg> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember NumRegCmd_message_member_array[1] = {
  {
    "values",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<fanuc_msgs::msg::NumReg>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fanuc_msgs::msg::NumRegCmd, values),  // bytes offset in struct
    nullptr,  // default value
    size_function__NumRegCmd__values,  // size() function pointer
    get_const_function__NumRegCmd__values,  // get_const(index) function pointer
    get_function__NumRegCmd__values,  // get(index) function pointer
    fetch_function__NumRegCmd__values,  // fetch(index, &value) function pointer
    assign_function__NumRegCmd__values,  // assign(index, value) function pointer
    resize_function__NumRegCmd__values  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers NumRegCmd_message_members = {
  "fanuc_msgs::msg",  // message namespace
  "NumRegCmd",  // message name
  1,  // number of fields
  sizeof(fanuc_msgs::msg::NumRegCmd),
  NumRegCmd_message_member_array,  // message members
  NumRegCmd_init_function,  // function to initialize message memory (memory has to be allocated)
  NumRegCmd_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t NumRegCmd_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &NumRegCmd_message_members,
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
get_message_type_support_handle<fanuc_msgs::msg::NumRegCmd>()
{
  return &::fanuc_msgs::msg::rosidl_typesupport_introspection_cpp::NumRegCmd_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, fanuc_msgs, msg, NumRegCmd)() {
  return &::fanuc_msgs::msg::rosidl_typesupport_introspection_cpp::NumRegCmd_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
