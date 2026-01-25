// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from fanuc_msgs:msg/RobotStatus.idl
// generated code does not contain a copyright notice

#ifndef FANUC_MSGS__MSG__DETAIL__ROBOT_STATUS__TRAITS_HPP_
#define FANUC_MSGS__MSG__DETAIL__ROBOT_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "fanuc_msgs/msg/detail/robot_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace fanuc_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const RobotStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: in_error
  {
    out << "in_error: ";
    rosidl_generator_traits::value_to_yaml(msg.in_error, out);
    out << ", ";
  }

  // member: tp_enabled
  {
    out << "tp_enabled: ";
    rosidl_generator_traits::value_to_yaml(msg.tp_enabled, out);
    out << ", ";
  }

  // member: e_stopped
  {
    out << "e_stopped: ";
    rosidl_generator_traits::value_to_yaml(msg.e_stopped, out);
    out << ", ";
  }

  // member: motion_possible
  {
    out << "motion_possible: ";
    rosidl_generator_traits::value_to_yaml(msg.motion_possible, out);
    out << ", ";
  }

  // member: contact_stop_mode
  {
    out << "contact_stop_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.contact_stop_mode, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RobotStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: in_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "in_error: ";
    rosidl_generator_traits::value_to_yaml(msg.in_error, out);
    out << "\n";
  }

  // member: tp_enabled
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tp_enabled: ";
    rosidl_generator_traits::value_to_yaml(msg.tp_enabled, out);
    out << "\n";
  }

  // member: e_stopped
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "e_stopped: ";
    rosidl_generator_traits::value_to_yaml(msg.e_stopped, out);
    out << "\n";
  }

  // member: motion_possible
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "motion_possible: ";
    rosidl_generator_traits::value_to_yaml(msg.motion_possible, out);
    out << "\n";
  }

  // member: contact_stop_mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "contact_stop_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.contact_stop_mode, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RobotStatus & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace fanuc_msgs

namespace rosidl_generator_traits
{

[[deprecated("use fanuc_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const fanuc_msgs::msg::RobotStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  fanuc_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use fanuc_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const fanuc_msgs::msg::RobotStatus & msg)
{
  return fanuc_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<fanuc_msgs::msg::RobotStatus>()
{
  return "fanuc_msgs::msg::RobotStatus";
}

template<>
inline const char * name<fanuc_msgs::msg::RobotStatus>()
{
  return "fanuc_msgs/msg/RobotStatus";
}

template<>
struct has_fixed_size<fanuc_msgs::msg::RobotStatus>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<fanuc_msgs::msg::RobotStatus>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<fanuc_msgs::msg::RobotStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // FANUC_MSGS__MSG__DETAIL__ROBOT_STATUS__TRAITS_HPP_
