// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from fanuc_msgs:msg/CollaborativeSpeedScaling.idl
// generated code does not contain a copyright notice

#ifndef FANUC_MSGS__MSG__DETAIL__COLLABORATIVE_SPEED_SCALING__BUILDER_HPP_
#define FANUC_MSGS__MSG__DETAIL__COLLABORATIVE_SPEED_SCALING__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "fanuc_msgs/msg/detail/collaborative_speed_scaling__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace fanuc_msgs
{

namespace msg
{

namespace builder
{

class Init_CollaborativeSpeedScaling_collaborative_speed_scaling
{
public:
  Init_CollaborativeSpeedScaling_collaborative_speed_scaling()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::fanuc_msgs::msg::CollaborativeSpeedScaling collaborative_speed_scaling(::fanuc_msgs::msg::CollaborativeSpeedScaling::_collaborative_speed_scaling_type arg)
  {
    msg_.collaborative_speed_scaling = std::move(arg);
    return std::move(msg_);
  }

private:
  ::fanuc_msgs::msg::CollaborativeSpeedScaling msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::fanuc_msgs::msg::CollaborativeSpeedScaling>()
{
  return fanuc_msgs::msg::builder::Init_CollaborativeSpeedScaling_collaborative_speed_scaling();
}

}  // namespace fanuc_msgs

#endif  // FANUC_MSGS__MSG__DETAIL__COLLABORATIVE_SPEED_SCALING__BUILDER_HPP_
