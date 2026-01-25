// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from fanuc_msgs:msg/CollaborativeSpeedScaling.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "fanuc_msgs/msg/detail/collaborative_speed_scaling__struct.hpp"
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

void CollaborativeSpeedScaling_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) fanuc_msgs::msg::CollaborativeSpeedScaling(_init);
}

void CollaborativeSpeedScaling_fini_function(void * message_memory)
{
  auto typed_message = static_cast<fanuc_msgs::msg::CollaborativeSpeedScaling *>(message_memory);
  typed_message->~CollaborativeSpeedScaling();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember CollaborativeSpeedScaling_message_member_array[1] = {
  {
    "collaborative_speed_scaling",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fanuc_msgs::msg::CollaborativeSpeedScaling, collaborative_speed_scaling),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers CollaborativeSpeedScaling_message_members = {
  "fanuc_msgs::msg",  // message namespace
  "CollaborativeSpeedScaling",  // message name
  1,  // number of fields
  sizeof(fanuc_msgs::msg::CollaborativeSpeedScaling),
  CollaborativeSpeedScaling_message_member_array,  // message members
  CollaborativeSpeedScaling_init_function,  // function to initialize message memory (memory has to be allocated)
  CollaborativeSpeedScaling_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t CollaborativeSpeedScaling_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &CollaborativeSpeedScaling_message_members,
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
get_message_type_support_handle<fanuc_msgs::msg::CollaborativeSpeedScaling>()
{
  return &::fanuc_msgs::msg::rosidl_typesupport_introspection_cpp::CollaborativeSpeedScaling_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, fanuc_msgs, msg, CollaborativeSpeedScaling)() {
  return &::fanuc_msgs::msg::rosidl_typesupport_introspection_cpp::CollaborativeSpeedScaling_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
