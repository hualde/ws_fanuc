// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from fanuc_msgs:srv/SetPayloadComp.idl
// generated code does not contain a copyright notice

#ifndef FANUC_MSGS__SRV__DETAIL__SET_PAYLOAD_COMP__BUILDER_HPP_
#define FANUC_MSGS__SRV__DETAIL__SET_PAYLOAD_COMP__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "fanuc_msgs/srv/detail/set_payload_comp__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace fanuc_msgs
{

namespace srv
{

namespace builder
{

class Init_SetPayloadComp_Request_in_z
{
public:
  explicit Init_SetPayloadComp_Request_in_z(::fanuc_msgs::srv::SetPayloadComp_Request & msg)
  : msg_(msg)
  {}
  ::fanuc_msgs::srv::SetPayloadComp_Request in_z(::fanuc_msgs::srv::SetPayloadComp_Request::_in_z_type arg)
  {
    msg_.in_z = std::move(arg);
    return std::move(msg_);
  }

private:
  ::fanuc_msgs::srv::SetPayloadComp_Request msg_;
};

class Init_SetPayloadComp_Request_in_y
{
public:
  explicit Init_SetPayloadComp_Request_in_y(::fanuc_msgs::srv::SetPayloadComp_Request & msg)
  : msg_(msg)
  {}
  Init_SetPayloadComp_Request_in_z in_y(::fanuc_msgs::srv::SetPayloadComp_Request::_in_y_type arg)
  {
    msg_.in_y = std::move(arg);
    return Init_SetPayloadComp_Request_in_z(msg_);
  }

private:
  ::fanuc_msgs::srv::SetPayloadComp_Request msg_;
};

class Init_SetPayloadComp_Request_in_x
{
public:
  explicit Init_SetPayloadComp_Request_in_x(::fanuc_msgs::srv::SetPayloadComp_Request & msg)
  : msg_(msg)
  {}
  Init_SetPayloadComp_Request_in_y in_x(::fanuc_msgs::srv::SetPayloadComp_Request::_in_x_type arg)
  {
    msg_.in_x = std::move(arg);
    return Init_SetPayloadComp_Request_in_y(msg_);
  }

private:
  ::fanuc_msgs::srv::SetPayloadComp_Request msg_;
};

class Init_SetPayloadComp_Request_cg_z
{
public:
  explicit Init_SetPayloadComp_Request_cg_z(::fanuc_msgs::srv::SetPayloadComp_Request & msg)
  : msg_(msg)
  {}
  Init_SetPayloadComp_Request_in_x cg_z(::fanuc_msgs::srv::SetPayloadComp_Request::_cg_z_type arg)
  {
    msg_.cg_z = std::move(arg);
    return Init_SetPayloadComp_Request_in_x(msg_);
  }

private:
  ::fanuc_msgs::srv::SetPayloadComp_Request msg_;
};

class Init_SetPayloadComp_Request_cg_y
{
public:
  explicit Init_SetPayloadComp_Request_cg_y(::fanuc_msgs::srv::SetPayloadComp_Request & msg)
  : msg_(msg)
  {}
  Init_SetPayloadComp_Request_cg_z cg_y(::fanuc_msgs::srv::SetPayloadComp_Request::_cg_y_type arg)
  {
    msg_.cg_y = std::move(arg);
    return Init_SetPayloadComp_Request_cg_z(msg_);
  }

private:
  ::fanuc_msgs::srv::SetPayloadComp_Request msg_;
};

class Init_SetPayloadComp_Request_cg_x
{
public:
  explicit Init_SetPayloadComp_Request_cg_x(::fanuc_msgs::srv::SetPayloadComp_Request & msg)
  : msg_(msg)
  {}
  Init_SetPayloadComp_Request_cg_y cg_x(::fanuc_msgs::srv::SetPayloadComp_Request::_cg_x_type arg)
  {
    msg_.cg_x = std::move(arg);
    return Init_SetPayloadComp_Request_cg_y(msg_);
  }

private:
  ::fanuc_msgs::srv::SetPayloadComp_Request msg_;
};

class Init_SetPayloadComp_Request_mass
{
public:
  explicit Init_SetPayloadComp_Request_mass(::fanuc_msgs::srv::SetPayloadComp_Request & msg)
  : msg_(msg)
  {}
  Init_SetPayloadComp_Request_cg_x mass(::fanuc_msgs::srv::SetPayloadComp_Request::_mass_type arg)
  {
    msg_.mass = std::move(arg);
    return Init_SetPayloadComp_Request_cg_x(msg_);
  }

private:
  ::fanuc_msgs::srv::SetPayloadComp_Request msg_;
};

class Init_SetPayloadComp_Request_payload_schedule_id
{
public:
  Init_SetPayloadComp_Request_payload_schedule_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetPayloadComp_Request_mass payload_schedule_id(::fanuc_msgs::srv::SetPayloadComp_Request::_payload_schedule_id_type arg)
  {
    msg_.payload_schedule_id = std::move(arg);
    return Init_SetPayloadComp_Request_mass(msg_);
  }

private:
  ::fanuc_msgs::srv::SetPayloadComp_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::fanuc_msgs::srv::SetPayloadComp_Request>()
{
  return fanuc_msgs::srv::builder::Init_SetPayloadComp_Request_payload_schedule_id();
}

}  // namespace fanuc_msgs


namespace fanuc_msgs
{

namespace srv
{

namespace builder
{

class Init_SetPayloadComp_Response_result
{
public:
  Init_SetPayloadComp_Response_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::fanuc_msgs::srv::SetPayloadComp_Response result(::fanuc_msgs::srv::SetPayloadComp_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::fanuc_msgs::srv::SetPayloadComp_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::fanuc_msgs::srv::SetPayloadComp_Response>()
{
  return fanuc_msgs::srv::builder::Init_SetPayloadComp_Response_result();
}

}  // namespace fanuc_msgs

#endif  // FANUC_MSGS__SRV__DETAIL__SET_PAYLOAD_COMP__BUILDER_HPP_
