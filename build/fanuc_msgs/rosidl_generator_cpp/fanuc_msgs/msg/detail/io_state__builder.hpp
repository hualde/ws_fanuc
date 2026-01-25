// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from fanuc_msgs:msg/IOState.idl
// generated code does not contain a copyright notice

#ifndef FANUC_MSGS__MSG__DETAIL__IO_STATE__BUILDER_HPP_
#define FANUC_MSGS__MSG__DETAIL__IO_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "fanuc_msgs/msg/detail/io_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace fanuc_msgs
{

namespace msg
{

namespace builder
{

class Init_IOState_values
{
public:
  Init_IOState_values()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::fanuc_msgs::msg::IOState values(::fanuc_msgs::msg::IOState::_values_type arg)
  {
    msg_.values = std::move(arg);
    return std::move(msg_);
  }

private:
  ::fanuc_msgs::msg::IOState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::fanuc_msgs::msg::IOState>()
{
  return fanuc_msgs::msg::builder::Init_IOState_values();
}

}  // namespace fanuc_msgs

#endif  // FANUC_MSGS__MSG__DETAIL__IO_STATE__BUILDER_HPP_
