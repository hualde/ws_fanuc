// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from fanuc_msgs:msg/AnalogIO.idl
// generated code does not contain a copyright notice

#ifndef FANUC_MSGS__MSG__DETAIL__ANALOG_IO__BUILDER_HPP_
#define FANUC_MSGS__MSG__DETAIL__ANALOG_IO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "fanuc_msgs/msg/detail/analog_io__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace fanuc_msgs
{

namespace msg
{

namespace builder
{

class Init_AnalogIO_value
{
public:
  explicit Init_AnalogIO_value(::fanuc_msgs::msg::AnalogIO & msg)
  : msg_(msg)
  {}
  ::fanuc_msgs::msg::AnalogIO value(::fanuc_msgs::msg::AnalogIO::_value_type arg)
  {
    msg_.value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::fanuc_msgs::msg::AnalogIO msg_;
};

class Init_AnalogIO_index
{
public:
  explicit Init_AnalogIO_index(::fanuc_msgs::msg::AnalogIO & msg)
  : msg_(msg)
  {}
  Init_AnalogIO_value index(::fanuc_msgs::msg::AnalogIO::_index_type arg)
  {
    msg_.index = std::move(arg);
    return Init_AnalogIO_value(msg_);
  }

private:
  ::fanuc_msgs::msg::AnalogIO msg_;
};

class Init_AnalogIO_io_type
{
public:
  Init_AnalogIO_io_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AnalogIO_index io_type(::fanuc_msgs::msg::AnalogIO::_io_type_type arg)
  {
    msg_.io_type = std::move(arg);
    return Init_AnalogIO_index(msg_);
  }

private:
  ::fanuc_msgs::msg::AnalogIO msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::fanuc_msgs::msg::AnalogIO>()
{
  return fanuc_msgs::msg::builder::Init_AnalogIO_io_type();
}

}  // namespace fanuc_msgs

#endif  // FANUC_MSGS__MSG__DETAIL__ANALOG_IO__BUILDER_HPP_
