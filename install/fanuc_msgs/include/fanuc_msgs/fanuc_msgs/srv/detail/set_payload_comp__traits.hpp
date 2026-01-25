// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from fanuc_msgs:srv/SetPayloadComp.idl
// generated code does not contain a copyright notice

#ifndef FANUC_MSGS__SRV__DETAIL__SET_PAYLOAD_COMP__TRAITS_HPP_
#define FANUC_MSGS__SRV__DETAIL__SET_PAYLOAD_COMP__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "fanuc_msgs/srv/detail/set_payload_comp__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace fanuc_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetPayloadComp_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: payload_schedule_id
  {
    out << "payload_schedule_id: ";
    rosidl_generator_traits::value_to_yaml(msg.payload_schedule_id, out);
    out << ", ";
  }

  // member: mass
  {
    out << "mass: ";
    rosidl_generator_traits::value_to_yaml(msg.mass, out);
    out << ", ";
  }

  // member: cg_x
  {
    out << "cg_x: ";
    rosidl_generator_traits::value_to_yaml(msg.cg_x, out);
    out << ", ";
  }

  // member: cg_y
  {
    out << "cg_y: ";
    rosidl_generator_traits::value_to_yaml(msg.cg_y, out);
    out << ", ";
  }

  // member: cg_z
  {
    out << "cg_z: ";
    rosidl_generator_traits::value_to_yaml(msg.cg_z, out);
    out << ", ";
  }

  // member: in_x
  {
    out << "in_x: ";
    rosidl_generator_traits::value_to_yaml(msg.in_x, out);
    out << ", ";
  }

  // member: in_y
  {
    out << "in_y: ";
    rosidl_generator_traits::value_to_yaml(msg.in_y, out);
    out << ", ";
  }

  // member: in_z
  {
    out << "in_z: ";
    rosidl_generator_traits::value_to_yaml(msg.in_z, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetPayloadComp_Request & msg,
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

  // member: mass
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mass: ";
    rosidl_generator_traits::value_to_yaml(msg.mass, out);
    out << "\n";
  }

  // member: cg_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cg_x: ";
    rosidl_generator_traits::value_to_yaml(msg.cg_x, out);
    out << "\n";
  }

  // member: cg_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cg_y: ";
    rosidl_generator_traits::value_to_yaml(msg.cg_y, out);
    out << "\n";
  }

  // member: cg_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cg_z: ";
    rosidl_generator_traits::value_to_yaml(msg.cg_z, out);
    out << "\n";
  }

  // member: in_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "in_x: ";
    rosidl_generator_traits::value_to_yaml(msg.in_x, out);
    out << "\n";
  }

  // member: in_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "in_y: ";
    rosidl_generator_traits::value_to_yaml(msg.in_y, out);
    out << "\n";
  }

  // member: in_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "in_z: ";
    rosidl_generator_traits::value_to_yaml(msg.in_z, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetPayloadComp_Request & msg, bool use_flow_style = false)
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
  const fanuc_msgs::srv::SetPayloadComp_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  fanuc_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use fanuc_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const fanuc_msgs::srv::SetPayloadComp_Request & msg)
{
  return fanuc_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<fanuc_msgs::srv::SetPayloadComp_Request>()
{
  return "fanuc_msgs::srv::SetPayloadComp_Request";
}

template<>
inline const char * name<fanuc_msgs::srv::SetPayloadComp_Request>()
{
  return "fanuc_msgs/srv/SetPayloadComp_Request";
}

template<>
struct has_fixed_size<fanuc_msgs::srv::SetPayloadComp_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<fanuc_msgs::srv::SetPayloadComp_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<fanuc_msgs::srv::SetPayloadComp_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace fanuc_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetPayloadComp_Response & msg,
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
  const SetPayloadComp_Response & msg,
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

inline std::string to_yaml(const SetPayloadComp_Response & msg, bool use_flow_style = false)
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
  const fanuc_msgs::srv::SetPayloadComp_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  fanuc_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use fanuc_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const fanuc_msgs::srv::SetPayloadComp_Response & msg)
{
  return fanuc_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<fanuc_msgs::srv::SetPayloadComp_Response>()
{
  return "fanuc_msgs::srv::SetPayloadComp_Response";
}

template<>
inline const char * name<fanuc_msgs::srv::SetPayloadComp_Response>()
{
  return "fanuc_msgs/srv/SetPayloadComp_Response";
}

template<>
struct has_fixed_size<fanuc_msgs::srv::SetPayloadComp_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<fanuc_msgs::srv::SetPayloadComp_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<fanuc_msgs::srv::SetPayloadComp_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<fanuc_msgs::srv::SetPayloadComp>()
{
  return "fanuc_msgs::srv::SetPayloadComp";
}

template<>
inline const char * name<fanuc_msgs::srv::SetPayloadComp>()
{
  return "fanuc_msgs/srv/SetPayloadComp";
}

template<>
struct has_fixed_size<fanuc_msgs::srv::SetPayloadComp>
  : std::integral_constant<
    bool,
    has_fixed_size<fanuc_msgs::srv::SetPayloadComp_Request>::value &&
    has_fixed_size<fanuc_msgs::srv::SetPayloadComp_Response>::value
  >
{
};

template<>
struct has_bounded_size<fanuc_msgs::srv::SetPayloadComp>
  : std::integral_constant<
    bool,
    has_bounded_size<fanuc_msgs::srv::SetPayloadComp_Request>::value &&
    has_bounded_size<fanuc_msgs::srv::SetPayloadComp_Response>::value
  >
{
};

template<>
struct is_service<fanuc_msgs::srv::SetPayloadComp>
  : std::true_type
{
};

template<>
struct is_service_request<fanuc_msgs::srv::SetPayloadComp_Request>
  : std::true_type
{
};

template<>
struct is_service_response<fanuc_msgs::srv::SetPayloadComp_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // FANUC_MSGS__SRV__DETAIL__SET_PAYLOAD_COMP__TRAITS_HPP_
