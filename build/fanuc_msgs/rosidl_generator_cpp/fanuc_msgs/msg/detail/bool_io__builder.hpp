// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from fanuc_msgs:msg/BoolIO.idl
// generated code does not contain a copyright notice

#ifndef FANUC_MSGS__MSG__DETAIL__BOOL_IO__BUILDER_HPP_
#define FANUC_MSGS__MSG__DETAIL__BOOL_IO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "fanuc_msgs/msg/detail/bool_io__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace fanuc_msgs
{

namespace msg
{

namespace builder
{

class Init_BoolIO_value
{
public:
  explicit Init_BoolIO_value(::fanuc_msgs::msg::BoolIO & msg)
  : msg_(msg)
  {}
  ::fanuc_msgs::msg::BoolIO value(::fanuc_msgs::msg::BoolIO::_value_type arg)
  {
    msg_.value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::fanuc_msgs::msg::BoolIO msg_;
};

class Init_BoolIO_index
{
public:
  explicit Init_BoolIO_index(::fanuc_msgs::msg::BoolIO & msg)
  : msg_(msg)
  {}
  Init_BoolIO_value index(::fanuc_msgs::msg::BoolIO::_index_type arg)
  {
    msg_.index = std::move(arg);
    return Init_BoolIO_value(msg_);
  }

private:
  ::fanuc_msgs::msg::BoolIO msg_;
};

class Init_BoolIO_io_type
{
public:
  Init_BoolIO_io_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BoolIO_index io_type(::fanuc_msgs::msg::BoolIO::_io_type_type arg)
  {
    msg_.io_type = std::move(arg);
    return Init_BoolIO_index(msg_);
  }

private:
  ::fanuc_msgs::msg::BoolIO msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::fanuc_msgs::msg::BoolIO>()
{
  return fanuc_msgs::msg::builder::Init_BoolIO_io_type();
}

}  // namespace fanuc_msgs

#endif  // FANUC_MSGS__MSG__DETAIL__BOOL_IO__BUILDER_HPP_
