// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from fanuc_msgs:msg/AnalogIO.idl
// generated code does not contain a copyright notice

#ifndef FANUC_MSGS__MSG__DETAIL__ANALOG_IO__TRAITS_HPP_
#define FANUC_MSGS__MSG__DETAIL__ANALOG_IO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "fanuc_msgs/msg/detail/analog_io__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'io_type'
#include "fanuc_msgs/msg/detail/io_type__traits.hpp"

namespace fanuc_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const AnalogIO & msg,
  std::ostream & out)
{
  out << "{";
  // member: io_type
  {
    out << "io_type: ";
    to_flow_style_yaml(msg.io_type, out);
    out << ", ";
  }

  // member: index
  {
    out << "index: ";
    rosidl_generator_traits::value_to_yaml(msg.index, out);
    out << ", ";
  }

  // member: value
  {
    out << "value: ";
    rosidl_generator_traits::value_to_yaml(msg.value, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AnalogIO & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: io_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "io_type:\n";
    to_block_style_yaml(msg.io_type, out, indentation + 2);
  }

  // member: index
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "index: ";
    rosidl_generator_traits::value_to_yaml(msg.index, out);
    out << "\n";
  }

  // member: value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "value: ";
    rosidl_generator_traits::value_to_yaml(msg.value, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AnalogIO & msg, bool use_flow_style = false)
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
  const fanuc_msgs::msg::AnalogIO & msg,
  std::ostream & out, size_t indentation = 0)
{
  fanuc_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use fanuc_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const fanuc_msgs::msg::AnalogIO & msg)
{
  return fanuc_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<fanuc_msgs::msg::AnalogIO>()
{
  return "fanuc_msgs::msg::AnalogIO";
}

template<>
inline const char * name<fanuc_msgs::msg::AnalogIO>()
{
  return "fanuc_msgs/msg/AnalogIO";
}

template<>
struct has_fixed_size<fanuc_msgs::msg::AnalogIO>
  : std::integral_constant<bool, has_fixed_size<fanuc_msgs::msg::IOType>::value> {};

template<>
struct has_bounded_size<fanuc_msgs::msg::AnalogIO>
  : std::integral_constant<bool, has_bounded_size<fanuc_msgs::msg::IOType>::value> {};

template<>
struct is_message<fanuc_msgs::msg::AnalogIO>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // FANUC_MSGS__MSG__DETAIL__ANALOG_IO__TRAITS_HPP_
