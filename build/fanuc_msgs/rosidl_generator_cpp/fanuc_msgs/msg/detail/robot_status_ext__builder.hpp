// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from fanuc_msgs:msg/RobotStatusExt.idl
// generated code does not contain a copyright notice

#ifndef FANUC_MSGS__MSG__DETAIL__ROBOT_STATUS_EXT__BUILDER_HPP_
#define FANUC_MSGS__MSG__DETAIL__ROBOT_STATUS_EXT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "fanuc_msgs/msg/detail/robot_status_ext__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace fanuc_msgs
{

namespace msg
{

namespace builder
{

class Init_RobotStatusExt_control_mode
{
public:
  explicit Init_RobotStatusExt_control_mode(::fanuc_msgs::msg::RobotStatusExt & msg)
  : msg_(msg)
  {}
  ::fanuc_msgs::msg::RobotStatusExt control_mode(::fanuc_msgs::msg::RobotStatusExt::_control_mode_type arg)
  {
    msg_.control_mode = std::move(arg);
    return std::move(msg_);
  }

private:
  ::fanuc_msgs::msg::RobotStatusExt msg_;
};

class Init_RobotStatusExt_speed_clamp_limit
{
public:
  explicit Init_RobotStatusExt_speed_clamp_limit(::fanuc_msgs::msg::RobotStatusExt & msg)
  : msg_(msg)
  {}
  Init_RobotStatusExt_control_mode speed_clamp_limit(::fanuc_msgs::msg::RobotStatusExt::_speed_clamp_limit_type arg)
  {
    msg_.speed_clamp_limit = std::move(arg);
    return Init_RobotStatusExt_control_mode(msg_);
  }

private:
  ::fanuc_msgs::msg::RobotStatusExt msg_;
};

class Init_RobotStatusExt_gen_override
{
public:
  explicit Init_RobotStatusExt_gen_override(::fanuc_msgs::msg::RobotStatusExt & msg)
  : msg_(msg)
  {}
  Init_RobotStatusExt_speed_clamp_limit gen_override(::fanuc_msgs::msg::RobotStatusExt::_gen_override_type arg)
  {
    msg_.gen_override = std::move(arg);
    return Init_RobotStatusExt_speed_clamp_limit(msg_);
  }

private:
  ::fanuc_msgs::msg::RobotStatusExt msg_;
};

class Init_RobotStatusExt_drives_powered
{
public:
  explicit Init_RobotStatusExt_drives_powered(::fanuc_msgs::msg::RobotStatusExt & msg)
  : msg_(msg)
  {}
  Init_RobotStatusExt_gen_override drives_powered(::fanuc_msgs::msg::RobotStatusExt::_drives_powered_type arg)
  {
    msg_.drives_powered = std::move(arg);
    return Init_RobotStatusExt_gen_override(msg_);
  }

private:
  ::fanuc_msgs::msg::RobotStatusExt msg_;
};

class Init_RobotStatusExt_in_motion
{
public:
  explicit Init_RobotStatusExt_in_motion(::fanuc_msgs::msg::RobotStatusExt & msg)
  : msg_(msg)
  {}
  Init_RobotStatusExt_drives_powered in_motion(::fanuc_msgs::msg::RobotStatusExt::_in_motion_type arg)
  {
    msg_.in_motion = std::move(arg);
    return Init_RobotStatusExt_drives_powered(msg_);
  }

private:
  ::fanuc_msgs::msg::RobotStatusExt msg_;
};

class Init_RobotStatusExt_error_code
{
public:
  Init_RobotStatusExt_error_code()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RobotStatusExt_in_motion error_code(::fanuc_msgs::msg::RobotStatusExt::_error_code_type arg)
  {
    msg_.error_code = std::move(arg);
    return Init_RobotStatusExt_in_motion(msg_);
  }

private:
  ::fanuc_msgs::msg::RobotStatusExt msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::fanuc_msgs::msg::RobotStatusExt>()
{
  return fanuc_msgs::msg::builder::Init_RobotStatusExt_error_code();
}

}  // namespace fanuc_msgs

#endif  // FANUC_MSGS__MSG__DETAIL__ROBOT_STATUS_EXT__BUILDER_HPP_
