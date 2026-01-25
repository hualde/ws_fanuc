// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from fanuc_msgs:msg/NumReg.idl
// generated code does not contain a copyright notice

#ifndef FANUC_MSGS__MSG__DETAIL__NUM_REG__BUILDER_HPP_
#define FANUC_MSGS__MSG__DETAIL__NUM_REG__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "fanuc_msgs/msg/detail/num_reg__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace fanuc_msgs
{

namespace msg
{

namespace builder
{

class Init_NumReg_value
{
public:
  explicit Init_NumReg_value(::fanuc_msgs::msg::NumReg & msg)
  : msg_(msg)
  {}
  ::fanuc_msgs::msg::NumReg value(::fanuc_msgs::msg::NumReg::_value_type arg)
  {
    msg_.value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::fanuc_msgs::msg::NumReg msg_;
};

class Init_NumReg_index
{
public:
  Init_NumReg_index()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NumReg_value index(::fanuc_msgs::msg::NumReg::_index_type arg)
  {
    msg_.index = std::move(arg);
    return Init_NumReg_value(msg_);
  }

private:
  ::fanuc_msgs::msg::NumReg msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::fanuc_msgs::msg::NumReg>()
{
  return fanuc_msgs::msg::builder::Init_NumReg_index();
}

}  // namespace fanuc_msgs

#endif  // FANUC_MSGS__MSG__DETAIL__NUM_REG__BUILDER_HPP_
