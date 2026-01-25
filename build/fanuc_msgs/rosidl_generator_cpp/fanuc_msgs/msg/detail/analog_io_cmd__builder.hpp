// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from fanuc_msgs:msg/AnalogIOCmd.idl
// generated code does not contain a copyright notice

#ifndef FANUC_MSGS__MSG__DETAIL__ANALOG_IO_CMD__BUILDER_HPP_
#define FANUC_MSGS__MSG__DETAIL__ANALOG_IO_CMD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "fanuc_msgs/msg/detail/analog_io_cmd__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace fanuc_msgs
{

namespace msg
{

namespace builder
{

class Init_AnalogIOCmd_values
{
public:
  Init_AnalogIOCmd_values()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::fanuc_msgs::msg::AnalogIOCmd values(::fanuc_msgs::msg::AnalogIOCmd::_values_type arg)
  {
    msg_.values = std::move(arg);
    return std::move(msg_);
  }

private:
  ::fanuc_msgs::msg::AnalogIOCmd msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::fanuc_msgs::msg::AnalogIOCmd>()
{
  return fanuc_msgs::msg::builder::Init_AnalogIOCmd_values();
}

}  // namespace fanuc_msgs

#endif  // FANUC_MSGS__MSG__DETAIL__ANALOG_IO_CMD__BUILDER_HPP_
