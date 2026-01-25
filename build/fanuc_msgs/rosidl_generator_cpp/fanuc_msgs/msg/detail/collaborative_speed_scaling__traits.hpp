// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from fanuc_msgs:msg/CollaborativeSpeedScaling.idl
// generated code does not contain a copyright notice

#ifndef FANUC_MSGS__MSG__DETAIL__COLLABORATIVE_SPEED_SCALING__TRAITS_HPP_
#define FANUC_MSGS__MSG__DETAIL__COLLABORATIVE_SPEED_SCALING__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "fanuc_msgs/msg/detail/collaborative_speed_scaling__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace fanuc_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const CollaborativeSpeedScaling & msg,
  std::ostream & out)
{
  out << "{";
  // member: collaborative_speed_scaling
  {
    out << "collaborative_speed_scaling: ";
    rosidl_generator_traits::value_to_yaml(msg.collaborative_speed_scaling, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CollaborativeSpeedScaling & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: collaborative_speed_scaling
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "collaborative_speed_scaling: ";
    rosidl_generator_traits::value_to_yaml(msg.collaborative_speed_scaling, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CollaborativeSpeedScaling & msg, bool use_flow_style = false)
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
  const fanuc_msgs::msg::CollaborativeSpeedScaling & msg,
  std::ostream & out, size_t indentation = 0)
{
  fanuc_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use fanuc_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const fanuc_msgs::msg::CollaborativeSpeedScaling & msg)
{
  return fanuc_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<fanuc_msgs::msg::CollaborativeSpeedScaling>()
{
  return "fanuc_msgs::msg::CollaborativeSpeedScaling";
}

template<>
inline const char * name<fanuc_msgs::msg::CollaborativeSpeedScaling>()
{
  return "fanuc_msgs/msg/CollaborativeSpeedScaling";
}

template<>
struct has_fixed_size<fanuc_msgs::msg::CollaborativeSpeedScaling>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<fanuc_msgs::msg::CollaborativeSpeedScaling>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<fanuc_msgs::msg::CollaborativeSpeedScaling>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // FANUC_MSGS__MSG__DETAIL__COLLABORATIVE_SPEED_SCALING__TRAITS_HPP_
