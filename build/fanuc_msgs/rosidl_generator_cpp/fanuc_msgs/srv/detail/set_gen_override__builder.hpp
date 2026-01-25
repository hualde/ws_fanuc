// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from fanuc_msgs:srv/SetGenOverride.idl
// generated code does not contain a copyright notice

#ifndef FANUC_MSGS__SRV__DETAIL__SET_GEN_OVERRIDE__BUILDER_HPP_
#define FANUC_MSGS__SRV__DETAIL__SET_GEN_OVERRIDE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "fanuc_msgs/srv/detail/set_gen_override__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace fanuc_msgs
{

namespace srv
{

namespace builder
{

class Init_SetGenOverride_Request_value
{
public:
  Init_SetGenOverride_Request_value()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::fanuc_msgs::srv::SetGenOverride_Request value(::fanuc_msgs::srv::SetGenOverride_Request::_value_type arg)
  {
    msg_.value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::fanuc_msgs::srv::SetGenOverride_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::fanuc_msgs::srv::SetGenOverride_Request>()
{
  return fanuc_msgs::srv::builder::Init_SetGenOverride_Request_value();
}

}  // namespace fanuc_msgs


namespace fanuc_msgs
{

namespace srv
{

namespace builder
{

class Init_SetGenOverride_Response_result
{
public:
  Init_SetGenOverride_Response_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::fanuc_msgs::srv::SetGenOverride_Response result(::fanuc_msgs::srv::SetGenOverride_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::fanuc_msgs::srv::SetGenOverride_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::fanuc_msgs::srv::SetGenOverride_Response>()
{
  return fanuc_msgs::srv::builder::Init_SetGenOverride_Response_result();
}

}  // namespace fanuc_msgs

#endif  // FANUC_MSGS__SRV__DETAIL__SET_GEN_OVERRIDE__BUILDER_HPP_
