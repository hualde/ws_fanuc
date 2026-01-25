// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from fanuc_msgs:msg/IOType.idl
// generated code does not contain a copyright notice

#ifndef FANUC_MSGS__MSG__DETAIL__IO_TYPE__BUILDER_HPP_
#define FANUC_MSGS__MSG__DETAIL__IO_TYPE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "fanuc_msgs/msg/detail/io_type__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace fanuc_msgs
{

namespace msg
{

namespace builder
{

class Init_IOType_type
{
public:
  Init_IOType_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::fanuc_msgs::msg::IOType type(::fanuc_msgs::msg::IOType::_type_type arg)
  {
    msg_.type = std::move(arg);
    return std::move(msg_);
  }

private:
  ::fanuc_msgs::msg::IOType msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::fanuc_msgs::msg::IOType>()
{
  return fanuc_msgs::msg::builder::Init_IOType_type();
}

}  // namespace fanuc_msgs

#endif  // FANUC_MSGS__MSG__DETAIL__IO_TYPE__BUILDER_HPP_
