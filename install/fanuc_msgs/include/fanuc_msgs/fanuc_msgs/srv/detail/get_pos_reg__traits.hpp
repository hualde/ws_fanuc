// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from fanuc_msgs:srv/GetPosReg.idl
// generated code does not contain a copyright notice

#ifndef FANUC_MSGS__SRV__DETAIL__GET_POS_REG__TRAITS_HPP_
#define FANUC_MSGS__SRV__DETAIL__GET_POS_REG__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "fanuc_msgs/srv/detail/get_pos_reg__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace fanuc_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetPosReg_Request & msg,
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
  const GetPosReg_Request & msg,
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

inline std::string to_yaml(const GetPosReg_Request & msg, bool use_flow_style = false)
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
  const fanuc_msgs::srv::GetPosReg_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  fanuc_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use fanuc_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const fanuc_msgs::srv::GetPosReg_Request & msg)
{
  return fanuc_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<fanuc_msgs::srv::GetPosReg_Request>()
{
  return "fanuc_msgs::srv::GetPosReg_Request";
}

template<>
inline const char * name<fanuc_msgs::srv::GetPosReg_Request>()
{
  return "fanuc_msgs/srv/GetPosReg_Request";
}

template<>
struct has_fixed_size<fanuc_msgs::srv::GetPosReg_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<fanuc_msgs::srv::GetPosReg_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<fanuc_msgs::srv::GetPosReg_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace fanuc_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetPosReg_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: result
  {
    out << "result: ";
    rosidl_generator_traits::value_to_yaml(msg.result, out);
    out << ", ";
  }

  // member: representation
  {
    out << "representation: ";
    rosidl_generator_traits::value_to_yaml(msg.representation, out);
    out << ", ";
  }

  // member: utool
  {
    out << "utool: ";
    rosidl_generator_traits::value_to_yaml(msg.utool, out);
    out << ", ";
  }

  // member: uframe
  {
    out << "uframe: ";
    rosidl_generator_traits::value_to_yaml(msg.uframe, out);
    out << ", ";
  }

  // member: front
  {
    out << "front: ";
    rosidl_generator_traits::value_to_yaml(msg.front, out);
    out << ", ";
  }

  // member: up
  {
    out << "up: ";
    rosidl_generator_traits::value_to_yaml(msg.up, out);
    out << ", ";
  }

  // member: left
  {
    out << "left: ";
    rosidl_generator_traits::value_to_yaml(msg.left, out);
    out << ", ";
  }

  // member: flip
  {
    out << "flip: ";
    rosidl_generator_traits::value_to_yaml(msg.flip, out);
    out << ", ";
  }

  // member: turn4
  {
    out << "turn4: ";
    rosidl_generator_traits::value_to_yaml(msg.turn4, out);
    out << ", ";
  }

  // member: turn5
  {
    out << "turn5: ";
    rosidl_generator_traits::value_to_yaml(msg.turn5, out);
    out << ", ";
  }

  // member: turn6
  {
    out << "turn6: ";
    rosidl_generator_traits::value_to_yaml(msg.turn6, out);
    out << ", ";
  }

  // member: x
  {
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << ", ";
  }

  // member: y
  {
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << ", ";
  }

  // member: z
  {
    out << "z: ";
    rosidl_generator_traits::value_to_yaml(msg.z, out);
    out << ", ";
  }

  // member: w
  {
    out << "w: ";
    rosidl_generator_traits::value_to_yaml(msg.w, out);
    out << ", ";
  }

  // member: p
  {
    out << "p: ";
    rosidl_generator_traits::value_to_yaml(msg.p, out);
    out << ", ";
  }

  // member: r
  {
    out << "r: ";
    rosidl_generator_traits::value_to_yaml(msg.r, out);
    out << ", ";
  }

  // member: ext1
  {
    out << "ext1: ";
    rosidl_generator_traits::value_to_yaml(msg.ext1, out);
    out << ", ";
  }

  // member: ext2
  {
    out << "ext2: ";
    rosidl_generator_traits::value_to_yaml(msg.ext2, out);
    out << ", ";
  }

  // member: ext3
  {
    out << "ext3: ";
    rosidl_generator_traits::value_to_yaml(msg.ext3, out);
    out << ", ";
  }

  // member: j1
  {
    out << "j1: ";
    rosidl_generator_traits::value_to_yaml(msg.j1, out);
    out << ", ";
  }

  // member: j2
  {
    out << "j2: ";
    rosidl_generator_traits::value_to_yaml(msg.j2, out);
    out << ", ";
  }

  // member: j3
  {
    out << "j3: ";
    rosidl_generator_traits::value_to_yaml(msg.j3, out);
    out << ", ";
  }

  // member: j4
  {
    out << "j4: ";
    rosidl_generator_traits::value_to_yaml(msg.j4, out);
    out << ", ";
  }

  // member: j5
  {
    out << "j5: ";
    rosidl_generator_traits::value_to_yaml(msg.j5, out);
    out << ", ";
  }

  // member: j6
  {
    out << "j6: ";
    rosidl_generator_traits::value_to_yaml(msg.j6, out);
    out << ", ";
  }

  // member: j7
  {
    out << "j7: ";
    rosidl_generator_traits::value_to_yaml(msg.j7, out);
    out << ", ";
  }

  // member: j8
  {
    out << "j8: ";
    rosidl_generator_traits::value_to_yaml(msg.j8, out);
    out << ", ";
  }

  // member: j9
  {
    out << "j9: ";
    rosidl_generator_traits::value_to_yaml(msg.j9, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetPosReg_Response & msg,
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

  // member: representation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "representation: ";
    rosidl_generator_traits::value_to_yaml(msg.representation, out);
    out << "\n";
  }

  // member: utool
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "utool: ";
    rosidl_generator_traits::value_to_yaml(msg.utool, out);
    out << "\n";
  }

  // member: uframe
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "uframe: ";
    rosidl_generator_traits::value_to_yaml(msg.uframe, out);
    out << "\n";
  }

  // member: front
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "front: ";
    rosidl_generator_traits::value_to_yaml(msg.front, out);
    out << "\n";
  }

  // member: up
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "up: ";
    rosidl_generator_traits::value_to_yaml(msg.up, out);
    out << "\n";
  }

  // member: left
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "left: ";
    rosidl_generator_traits::value_to_yaml(msg.left, out);
    out << "\n";
  }

  // member: flip
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "flip: ";
    rosidl_generator_traits::value_to_yaml(msg.flip, out);
    out << "\n";
  }

  // member: turn4
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "turn4: ";
    rosidl_generator_traits::value_to_yaml(msg.turn4, out);
    out << "\n";
  }

  // member: turn5
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "turn5: ";
    rosidl_generator_traits::value_to_yaml(msg.turn5, out);
    out << "\n";
  }

  // member: turn6
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "turn6: ";
    rosidl_generator_traits::value_to_yaml(msg.turn6, out);
    out << "\n";
  }

  // member: x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << "\n";
  }

  // member: y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << "\n";
  }

  // member: z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "z: ";
    rosidl_generator_traits::value_to_yaml(msg.z, out);
    out << "\n";
  }

  // member: w
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "w: ";
    rosidl_generator_traits::value_to_yaml(msg.w, out);
    out << "\n";
  }

  // member: p
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "p: ";
    rosidl_generator_traits::value_to_yaml(msg.p, out);
    out << "\n";
  }

  // member: r
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "r: ";
    rosidl_generator_traits::value_to_yaml(msg.r, out);
    out << "\n";
  }

  // member: ext1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ext1: ";
    rosidl_generator_traits::value_to_yaml(msg.ext1, out);
    out << "\n";
  }

  // member: ext2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ext2: ";
    rosidl_generator_traits::value_to_yaml(msg.ext2, out);
    out << "\n";
  }

  // member: ext3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ext3: ";
    rosidl_generator_traits::value_to_yaml(msg.ext3, out);
    out << "\n";
  }

  // member: j1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "j1: ";
    rosidl_generator_traits::value_to_yaml(msg.j1, out);
    out << "\n";
  }

  // member: j2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "j2: ";
    rosidl_generator_traits::value_to_yaml(msg.j2, out);
    out << "\n";
  }

  // member: j3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "j3: ";
    rosidl_generator_traits::value_to_yaml(msg.j3, out);
    out << "\n";
  }

  // member: j4
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "j4: ";
    rosidl_generator_traits::value_to_yaml(msg.j4, out);
    out << "\n";
  }

  // member: j5
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "j5: ";
    rosidl_generator_traits::value_to_yaml(msg.j5, out);
    out << "\n";
  }

  // member: j6
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "j6: ";
    rosidl_generator_traits::value_to_yaml(msg.j6, out);
    out << "\n";
  }

  // member: j7
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "j7: ";
    rosidl_generator_traits::value_to_yaml(msg.j7, out);
    out << "\n";
  }

  // member: j8
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "j8: ";
    rosidl_generator_traits::value_to_yaml(msg.j8, out);
    out << "\n";
  }

  // member: j9
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "j9: ";
    rosidl_generator_traits::value_to_yaml(msg.j9, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetPosReg_Response & msg, bool use_flow_style = false)
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
  const fanuc_msgs::srv::GetPosReg_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  fanuc_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use fanuc_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const fanuc_msgs::srv::GetPosReg_Response & msg)
{
  return fanuc_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<fanuc_msgs::srv::GetPosReg_Response>()
{
  return "fanuc_msgs::srv::GetPosReg_Response";
}

template<>
inline const char * name<fanuc_msgs::srv::GetPosReg_Response>()
{
  return "fanuc_msgs/srv/GetPosReg_Response";
}

template<>
struct has_fixed_size<fanuc_msgs::srv::GetPosReg_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<fanuc_msgs::srv::GetPosReg_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<fanuc_msgs::srv::GetPosReg_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<fanuc_msgs::srv::GetPosReg>()
{
  return "fanuc_msgs::srv::GetPosReg";
}

template<>
inline const char * name<fanuc_msgs::srv::GetPosReg>()
{
  return "fanuc_msgs/srv/GetPosReg";
}

template<>
struct has_fixed_size<fanuc_msgs::srv::GetPosReg>
  : std::integral_constant<
    bool,
    has_fixed_size<fanuc_msgs::srv::GetPosReg_Request>::value &&
    has_fixed_size<fanuc_msgs::srv::GetPosReg_Response>::value
  >
{
};

template<>
struct has_bounded_size<fanuc_msgs::srv::GetPosReg>
  : std::integral_constant<
    bool,
    has_bounded_size<fanuc_msgs::srv::GetPosReg_Request>::value &&
    has_bounded_size<fanuc_msgs::srv::GetPosReg_Response>::value
  >
{
};

template<>
struct is_service<fanuc_msgs::srv::GetPosReg>
  : std::true_type
{
};

template<>
struct is_service_request<fanuc_msgs::srv::GetPosReg_Request>
  : std::true_type
{
};

template<>
struct is_service_response<fanuc_msgs::srv::GetPosReg_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // FANUC_MSGS__SRV__DETAIL__GET_POS_REG__TRAITS_HPP_
