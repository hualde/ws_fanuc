// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from fanuc_msgs:msg/IOCmd.idl
// generated code does not contain a copyright notice

#ifndef FANUC_MSGS__MSG__DETAIL__IO_CMD__TRAITS_HPP_
#define FANUC_MSGS__MSG__DETAIL__IO_CMD__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "fanuc_msgs/msg/detail/io_cmd__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'values'
#include "fanuc_msgs/msg/detail/bool_io__traits.hpp"

namespace fanuc_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const IOCmd & msg,
  std::ostream & out)
{
  out << "{";
  // member: values
  {
    if (msg.values.size() == 0) {
      out << "values: []";
    } else {
      out << "values: [";
      size_t pending_items = msg.values.size();
      for (auto item : msg.values) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const IOCmd & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: values
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.values.size() == 0) {
      out << "values: []\n";
    } else {
      out << "values:\n";
      for (auto item : msg.values) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const IOCmd & msg, bool use_flow_style = false)
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
  const fanuc_msgs::msg::IOCmd & msg,
  std::ostream & out, size_t indentation = 0)
{
  fanuc_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use fanuc_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const fanuc_msgs::msg::IOCmd & msg)
{
  return fanuc_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<fanuc_msgs::msg::IOCmd>()
{
  return "fanuc_msgs::msg::IOCmd";
}

template<>
inline const char * name<fanuc_msgs::msg::IOCmd>()
{
  return "fanuc_msgs/msg/IOCmd";
}

template<>
struct has_fixed_size<fanuc_msgs::msg::IOCmd>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<fanuc_msgs::msg::IOCmd>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<fanuc_msgs::msg::IOCmd>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // FANUC_MSGS__MSG__DETAIL__IO_CMD__TRAITS_HPP_
