// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from fanuc_msgs:srv/GetNumReg.idl
// generated code does not contain a copyright notice

#ifndef FANUC_MSGS__SRV__DETAIL__GET_NUM_REG__TRAITS_HPP_
#define FANUC_MSGS__SRV__DETAIL__GET_NUM_REG__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "fanuc_msgs/srv/detail/get_num_reg__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace fanuc_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetNumReg_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: index
  {
    out << "index: ";
    rosidl_generator_traits::value_to_yaml(msg.index, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetNumReg_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: index
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "index: ";
    rosidl_generator_traits::value_to_yaml(msg.index, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetNumReg_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace fanuc_msgs

namespace rosidl_generator_traits
{

[[deprecated("use fanuc_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const fanuc_msgs::srv::GetNumReg_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  fanuc_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use fanuc_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const fanuc_msgs::srv::GetNumReg_Request & msg)
{
  return fanuc_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<fanuc_msgs::srv::GetNumReg_Request>()
{
  return "fanuc_msgs::srv::GetNumReg_Request";
}

template<>
inline const char * name<fanuc_msgs::srv::GetNumReg_Request>()
{
  return "fanuc_msgs/srv/GetNumReg_Request";
}

template<>
struct has_fixed_size<fanuc_msgs::srv::GetNumReg_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<fanuc_msgs::srv::GetNumReg_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<fanuc_msgs::srv::GetNumReg_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace fanuc_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetNumReg_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: result
  {
    out << "result: ";
    rosidl_generator_traits::value_to_yaml(msg.result, out);
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
  const GetNumReg_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result: ";
    rosidl_generator_traits::value_to_yaml(msg.result, out);
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

inline std::string to_yaml(const GetNumReg_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace fanuc_msgs

namespace rosidl_generator_traits
{

[[deprecated("use fanuc_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const fanuc_msgs::srv::GetNumReg_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  fanuc_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use fanuc_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const fanuc_msgs::srv::GetNumReg_Response & msg)
{
  return fanuc_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<fanuc_msgs::srv::GetNumReg_Response>()
{
  return "fanuc_msgs::srv::GetNumReg_Response";
}

template<>
inline const char * name<fanuc_msgs::srv::GetNumReg_Response>()
{
  return "fanuc_msgs/srv/GetNumReg_Response";
}

template<>
struct has_fixed_size<fanuc_msgs::srv::GetNumReg_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<fanuc_msgs::srv::GetNumReg_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<fanuc_msgs::srv::GetNumReg_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<fanuc_msgs::srv::GetNumReg>()
{
  return "fanuc_msgs::srv::GetNumReg";
}

template<>
inline const char * name<fanuc_msgs::srv::GetNumReg>()
{
  return "fanuc_msgs/srv/GetNumReg";
}

template<>
struct has_fixed_size<fanuc_msgs::srv::GetNumReg>
  : std::integral_constant<
    bool,
    has_fixed_size<fanuc_msgs::srv::GetNumReg_Request>::value &&
    has_fixed_size<fanuc_msgs::srv::GetNumReg_Response>::value
  >
{
};

template<>
struct has_bounded_size<fanuc_msgs::srv::GetNumReg>
  : std::integral_constant<
    bool,
    has_bounded_size<fanuc_msgs::srv::GetNumReg_Request>::value &&
    has_bounded_size<fanuc_msgs::srv::GetNumReg_Response>::value
  >
{
};

template<>
struct is_service<fanuc_msgs::srv::GetNumReg>
  : std::true_type
{
};

template<>
struct is_service_request<fanuc_msgs::srv::GetNumReg_Request>
  : std::true_type
{
};

template<>
struct is_service_response<fanuc_msgs::srv::GetNumReg_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // FANUC_MSGS__SRV__DETAIL__GET_NUM_REG__TRAITS_HPP_
