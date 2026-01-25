// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from fanuc_msgs:srv/SetPayloadID.idl
// generated code does not contain a copyright notice

#ifndef FANUC_MSGS__SRV__DETAIL__SET_PAYLOAD_ID__BUILDER_HPP_
#define FANUC_MSGS__SRV__DETAIL__SET_PAYLOAD_ID__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "fanuc_msgs/srv/detail/set_payload_id__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace fanuc_msgs
{

namespace srv
{

namespace builder
{

class Init_SetPayloadID_Request_payload_schedule_id
{
public:
  Init_SetPayloadID_Request_payload_schedule_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::fanuc_msgs::srv::SetPayloadID_Request payload_schedule_id(::fanuc_msgs::srv::SetPayloadID_Request::_payload_schedule_id_type arg)
  {
    msg_.payload_schedule_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::fanuc_msgs::srv::SetPayloadID_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::fanuc_msgs::srv::SetPayloadID_Request>()
{
  return fanuc_msgs::srv::builder::Init_SetPayloadID_Request_payload_schedule_id();
}

}  // namespace fanuc_msgs


namespace fanuc_msgs
{

namespace srv
{

namespace builder
{

class Init_SetPayloadID_Response_result
{
public:
  Init_SetPayloadID_Response_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::fanuc_msgs::srv::SetPayloadID_Response result(::fanuc_msgs::srv::SetPayloadID_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::fanuc_msgs::srv::SetPayloadID_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::fanuc_msgs::srv::SetPayloadID_Response>()
{
  return fanuc_msgs::srv::builder::Init_SetPayloadID_Response_result();
}

}  // namespace fanuc_msgs

#endif  // FANUC_MSGS__SRV__DETAIL__SET_PAYLOAD_ID__BUILDER_HPP_
