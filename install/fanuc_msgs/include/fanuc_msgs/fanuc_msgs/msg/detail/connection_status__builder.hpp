// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from fanuc_msgs:msg/ConnectionStatus.idl
// generated code does not contain a copyright notice

#ifndef FANUC_MSGS__MSG__DETAIL__CONNECTION_STATUS__BUILDER_HPP_
#define FANUC_MSGS__MSG__DETAIL__CONNECTION_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "fanuc_msgs/msg/detail/connection_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace fanuc_msgs
{

namespace msg
{

namespace builder
{

class Init_ConnectionStatus_is_connected
{
public:
  Init_ConnectionStatus_is_connected()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::fanuc_msgs::msg::ConnectionStatus is_connected(::fanuc_msgs::msg::ConnectionStatus::_is_connected_type arg)
  {
    msg_.is_connected = std::move(arg);
    return std::move(msg_);
  }

private:
  ::fanuc_msgs::msg::ConnectionStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::fanuc_msgs::msg::ConnectionStatus>()
{
  return fanuc_msgs::msg::builder::Init_ConnectionStatus_is_connected();
}

}  // namespace fanuc_msgs

#endif  // FANUC_MSGS__MSG__DETAIL__CONNECTION_STATUS__BUILDER_HPP_
