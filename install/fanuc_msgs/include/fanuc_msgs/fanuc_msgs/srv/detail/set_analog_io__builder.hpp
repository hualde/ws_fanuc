// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from fanuc_msgs:srv/SetAnalogIO.idl
// generated code does not contain a copyright notice

#ifndef FANUC_MSGS__SRV__DETAIL__SET_ANALOG_IO__BUILDER_HPP_
#define FANUC_MSGS__SRV__DETAIL__SET_ANALOG_IO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "fanuc_msgs/srv/detail/set_analog_io__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace fanuc_msgs
{

namespace srv
{

namespace builder
{

class Init_SetAnalogIO_Request_value
{
public:
  explicit Init_SetAnalogIO_Request_value(::fanuc_msgs::srv::SetAnalogIO_Request & msg)
  : msg_(msg)
  {}
  ::fanuc_msgs::srv::SetAnalogIO_Request value(::fanuc_msgs::srv::SetAnalogIO_Request::_value_type arg)
  {
    msg_.value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::fanuc_msgs::srv::SetAnalogIO_Request msg_;
};

class Init_SetAnalogIO_Request_index
{
public:
  explicit Init_SetAnalogIO_Request_index(::fanuc_msgs::srv::SetAnalogIO_Request & msg)
  : msg_(msg)
  {}
  Init_SetAnalogIO_Request_value index(::fanuc_msgs::srv::SetAnalogIO_Request::_index_type arg)
  {
    msg_.index = std::move(arg);
    return Init_SetAnalogIO_Request_value(msg_);
  }

private:
  ::fanuc_msgs::srv::SetAnalogIO_Request msg_;
};

class Init_SetAnalogIO_Request_io_type
{
public:
  Init_SetAnalogIO_Request_io_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetAnalogIO_Request_index io_type(::fanuc_msgs::srv::SetAnalogIO_Request::_io_type_type arg)
  {
    msg_.io_type = std::move(arg);
    return Init_SetAnalogIO_Request_index(msg_);
  }

private:
  ::fanuc_msgs::srv::SetAnalogIO_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::fanuc_msgs::srv::SetAnalogIO_Request>()
{
  return fanuc_msgs::srv::builder::Init_SetAnalogIO_Request_io_type();
}

}  // namespace fanuc_msgs


namespace fanuc_msgs
{

namespace srv
{

namespace builder
{

class Init_SetAnalogIO_Response_result
{
public:
  Init_SetAnalogIO_Response_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::fanuc_msgs::srv::SetAnalogIO_Response result(::fanuc_msgs::srv::SetAnalogIO_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::fanuc_msgs::srv::SetAnalogIO_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::fanuc_msgs::srv::SetAnalogIO_Response>()
{
  return fanuc_msgs::srv::builder::Init_SetAnalogIO_Response_result();
}

}  // namespace fanuc_msgs

#endif  // FANUC_MSGS__SRV__DETAIL__SET_ANALOG_IO__BUILDER_HPP_
