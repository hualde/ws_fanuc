// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from fanuc_msgs:srv/SetPayloadID.idl
// generated code does not contain a copyright notice

#ifndef FANUC_MSGS__SRV__DETAIL__SET_PAYLOAD_ID__TRAITS_HPP_
#define FANUC_MSGS__SRV__DETAIL__SET_PAYLOAD_ID__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "fanuc_msgs/srv/detail/set_payload_id__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace fanuc_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetPayloadID_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: payload_schedule_id
  {
    out << "payload_schedule_id: ";
    rosidl_generator_traits::value_to_yaml(msg.payload_schedule_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetPayloadID_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: payload_schedule_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "payload_schedule_id: ";
    rosidl_generator_traits::value_to_yaml(msg.payload_schedule_id, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetPayloadID_Request & msg, bool use_flow_style = false)
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
  const fanuc_msgs::srv::SetPayloadID_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  fanuc_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use fanuc_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const fanuc_msgs::srv::SetPayloadID_Request & msg)
{
  return fanuc_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<fanuc_msgs::srv::SetPayloadID_Request>()
{
  return "fanuc_msgs::srv::SetPayloadID_Request";
}

template<>
inline const char * name<fanuc_msgs::srv::SetPayloadID_Request>()
{
  return "fanuc_msgs/srv/SetPayloadID_Request";
}

template<>
struct has_fixed_size<fanuc_msgs::srv::SetPayloadID_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<fanuc_msgs::srv::SetPayloadID_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<fanuc_msgs::srv::SetPayloadID_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace fanuc_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetPayloadID_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: result
  {
    out << "result: ";
    rosidl_generator_traits::value_to_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetPayloadID_Response & msg,
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
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetPayloadID_Response & msg, bool use_flow_style = false)
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
  const fanuc_msgs::srv::SetPayloadID_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  fanuc_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use fanuc_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const fanuc_msgs::srv::SetPayloadID_Response & msg)
{
  return fanuc_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<fanuc_msgs::srv::SetPayloadID_Response>()
{
  return "fanuc_msgs::srv::SetPayloadID_Response";
}

template<>
inline const char * name<fanuc_msgs::srv::SetPayloadID_Response>()
{
  return "fanuc_msgs/srv/SetPayloadID_Response";
}

template<>
struct has_fixed_size<fanuc_msgs::srv::SetPayloadID_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<fanuc_msgs::srv::SetPayloadID_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<fanuc_msgs::srv::SetPayloadID_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<fanuc_msgs::srv::SetPayloadID>()
{
  return "fanuc_msgs::srv::SetPayloadID";
}

template<>
inline const char * name<fanuc_msgs::srv::SetPayloadID>()
{
  return "fanuc_msgs/srv/SetPayloadID";
}

template<>
struct has_fixed_size<fanuc_msgs::srv::SetPayloadID>
  : std::integral_constant<
    bool,
    has_fixed_size<fanuc_msgs::srv::SetPayloadID_Request>::value &&
    has_fixed_size<fanuc_msgs::srv::SetPayloadID_Response>::value
  >
{
};

template<>
struct has_bounded_size<fanuc_msgs::srv::SetPayloadID>
  : std::integral_constant<
    bool,
    has_bounded_size<fanuc_msgs::srv::SetPayloadID_Request>::value &&
    has_bounded_size<fanuc_msgs::srv::SetPayloadID_Response>::value
  >
{
};

template<>
struct is_service<fanuc_msgs::srv::SetPayloadID>
  : std::true_type
{
};

template<>
struct is_service_request<fanuc_msgs::srv::SetPayloadID_Request>
  : std::true_type
{
};

template<>
struct is_service_response<fanuc_msgs::srv::SetPayloadID_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // FANUC_MSGS__SRV__DETAIL__SET_PAYLOAD_ID__TRAITS_HPP_
