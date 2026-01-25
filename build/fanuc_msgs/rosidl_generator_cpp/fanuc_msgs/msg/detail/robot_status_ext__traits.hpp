// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from fanuc_msgs:msg/RobotStatusExt.idl
// generated code does not contain a copyright notice

#ifndef FANUC_MSGS__MSG__DETAIL__ROBOT_STATUS_EXT__TRAITS_HPP_
#define FANUC_MSGS__MSG__DETAIL__ROBOT_STATUS_EXT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "fanuc_msgs/msg/detail/robot_status_ext__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace fanuc_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const RobotStatusExt & msg,
  std::ostream & out)
{
  out << "{";
  // member: error_code
  {
    out << "error_code: ";
    rosidl_generator_traits::value_to_yaml(msg.error_code, out);
    out << ", ";
  }

  // member: in_motion
  {
    out << "in_motion: ";
    rosidl_generator_traits::value_to_yaml(msg.in_motion, out);
    out << ", ";
  }

  // member: drives_powered
  {
    out << "drives_powered: ";
    rosidl_generator_traits::value_to_yaml(msg.drives_powered, out);
    out << ", ";
  }

  // member: gen_override
  {
    out << "gen_override: ";
    rosidl_generator_traits::value_to_yaml(msg.gen_override, out);
    out << ", ";
  }

  // member: speed_clamp_limit
  {
    out << "speed_clamp_limit: ";
    rosidl_generator_traits::value_to_yaml(msg.speed_clamp_limit, out);
    out << ", ";
  }

  // member: control_mode
  {
    out << "control_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.control_mode, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RobotStatusExt & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: error_code
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "error_code: ";
    rosidl_generator_traits::value_to_yaml(msg.error_code, out);
    out << "\n";
  }

  // member: in_motion
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "in_motion: ";
    rosidl_generator_traits::value_to_yaml(msg.in_motion, out);
    out << "\n";
  }

  // member: drives_powered
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "drives_powered: ";
    rosidl_generator_traits::value_to_yaml(msg.drives_powered, out);
    out << "\n";
  }

  // member: gen_override
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gen_override: ";
    rosidl_generator_traits::value_to_yaml(msg.gen_override, out);
    out << "\n";
  }

  // member: speed_clamp_limit
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speed_clamp_limit: ";
    rosidl_generator_traits::value_to_yaml(msg.speed_clamp_limit, out);
    out << "\n";
  }

  // member: control_mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "control_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.control_mode, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RobotStatusExt & msg, bool use_flow_style = false)
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
  const fanuc_msgs::msg::RobotStatusExt & msg,
  std::ostream & out, size_t indentation = 0)
{
  fanuc_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use fanuc_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const fanuc_msgs::msg::RobotStatusExt & msg)
{
  return fanuc_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<fanuc_msgs::msg::RobotStatusExt>()
{
  return "fanuc_msgs::msg::RobotStatusExt";
}

template<>
inline const char * name<fanuc_msgs::msg::RobotStatusExt>()
{
  return "fanuc_msgs/msg/RobotStatusExt";
}

template<>
struct has_fixed_size<fanuc_msgs::msg::RobotStatusExt>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<fanuc_msgs::msg::RobotStatusExt>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<fanuc_msgs::msg::RobotStatusExt>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // FANUC_MSGS__MSG__DETAIL__ROBOT_STATUS_EXT__TRAITS_HPP_
