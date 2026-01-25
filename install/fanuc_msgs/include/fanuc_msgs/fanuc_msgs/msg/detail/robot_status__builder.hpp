// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from fanuc_msgs:msg/RobotStatus.idl
// generated code does not contain a copyright notice

#ifndef FANUC_MSGS__MSG__DETAIL__ROBOT_STATUS__BUILDER_HPP_
#define FANUC_MSGS__MSG__DETAIL__ROBOT_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "fanuc_msgs/msg/detail/robot_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace fanuc_msgs
{

namespace msg
{

namespace builder
{

class Init_RobotStatus_contact_stop_mode
{
public:
  explicit Init_RobotStatus_contact_stop_mode(::fanuc_msgs::msg::RobotStatus & msg)
  : msg_(msg)
  {}
  ::fanuc_msgs::msg::RobotStatus contact_stop_mode(::fanuc_msgs::msg::RobotStatus::_contact_stop_mode_type arg)
  {
    msg_.contact_stop_mode = std::move(arg);
    return std::move(msg_);
  }

private:
  ::fanuc_msgs::msg::RobotStatus msg_;
};

class Init_RobotStatus_motion_possible
{
public:
  explicit Init_RobotStatus_motion_possible(::fanuc_msgs::msg::RobotStatus & msg)
  : msg_(msg)
  {}
  Init_RobotStatus_contact_stop_mode motion_possible(::fanuc_msgs::msg::RobotStatus::_motion_possible_type arg)
  {
    msg_.motion_possible = std::move(arg);
    return Init_RobotStatus_contact_stop_mode(msg_);
  }

private:
  ::fanuc_msgs::msg::RobotStatus msg_;
};

class Init_RobotStatus_e_stopped
{
public:
  explicit Init_RobotStatus_e_stopped(::fanuc_msgs::msg::RobotStatus & msg)
  : msg_(msg)
  {}
  Init_RobotStatus_motion_possible e_stopped(::fanuc_msgs::msg::RobotStatus::_e_stopped_type arg)
  {
    msg_.e_stopped = std::move(arg);
    return Init_RobotStatus_motion_possible(msg_);
  }

private:
  ::fanuc_msgs::msg::RobotStatus msg_;
};

class Init_RobotStatus_tp_enabled
{
public:
  explicit Init_RobotStatus_tp_enabled(::fanuc_msgs::msg::RobotStatus & msg)
  : msg_(msg)
  {}
  Init_RobotStatus_e_stopped tp_enabled(::fanuc_msgs::msg::RobotStatus::_tp_enabled_type arg)
  {
    msg_.tp_enabled = std::move(arg);
    return Init_RobotStatus_e_stopped(msg_);
  }

private:
  ::fanuc_msgs::msg::RobotStatus msg_;
};

class Init_RobotStatus_in_error
{
public:
  Init_RobotStatus_in_error()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RobotStatus_tp_enabled in_error(::fanuc_msgs::msg::RobotStatus::_in_error_type arg)
  {
    msg_.in_error = std::move(arg);
    return Init_RobotStatus_tp_enabled(msg_);
  }

private:
  ::fanuc_msgs::msg::RobotStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::fanuc_msgs::msg::RobotStatus>()
{
  return fanuc_msgs::msg::builder::Init_RobotStatus_in_error();
}

}  // namespace fanuc_msgs

#endif  // FANUC_MSGS__MSG__DETAIL__ROBOT_STATUS__BUILDER_HPP_
