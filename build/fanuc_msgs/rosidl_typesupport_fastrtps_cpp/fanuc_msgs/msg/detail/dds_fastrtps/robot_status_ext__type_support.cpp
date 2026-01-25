// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from fanuc_msgs:msg/RobotStatusExt.idl
// generated code does not contain a copyright notice
#include "fanuc_msgs/msg/detail/robot_status_ext__rosidl_typesupport_fastrtps_cpp.hpp"
#include "fanuc_msgs/msg/detail/robot_status_ext__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace fanuc_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_fanuc_msgs
cdr_serialize(
  const fanuc_msgs::msg::RobotStatusExt & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: error_code
  cdr << ros_message.error_code;
  // Member: in_motion
  cdr << (ros_message.in_motion ? true : false);
  // Member: drives_powered
  cdr << (ros_message.drives_powered ? true : false);
  // Member: gen_override
  cdr << ros_message.gen_override;
  // Member: speed_clamp_limit
  cdr << ros_message.speed_clamp_limit;
  // Member: control_mode
  cdr << ros_message.control_mode;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_fanuc_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  fanuc_msgs::msg::RobotStatusExt & ros_message)
{
  // Member: error_code
  cdr >> ros_message.error_code;

  // Member: in_motion
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.in_motion = tmp ? true : false;
  }

  // Member: drives_powered
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.drives_powered = tmp ? true : false;
  }

  // Member: gen_override
  cdr >> ros_message.gen_override;

  // Member: speed_clamp_limit
  cdr >> ros_message.speed_clamp_limit;

  // Member: control_mode
  cdr >> ros_message.control_mode;

  return true;
}  // NOLINT(readability/fn_size)

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_fanuc_msgs
get_serialized_size(
  const fanuc_msgs::msg::RobotStatusExt & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: error_code
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.error_code.size() + 1);
  // Member: in_motion
  {
    size_t item_size = sizeof(ros_message.in_motion);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: drives_powered
  {
    size_t item_size = sizeof(ros_message.drives_powered);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: gen_override
  {
    size_t item_size = sizeof(ros_message.gen_override);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: speed_clamp_limit
  {
    size_t item_size = sizeof(ros_message.speed_clamp_limit);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: control_mode
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.control_mode.size() + 1);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_fanuc_msgs
max_serialized_size_RobotStatusExt(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: error_code
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: in_motion
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: drives_powered
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: gen_override
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: speed_clamp_limit
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: control_mode
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = fanuc_msgs::msg::RobotStatusExt;
    is_plain =
      (
      offsetof(DataType, control_mode) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _RobotStatusExt__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const fanuc_msgs::msg::RobotStatusExt *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _RobotStatusExt__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<fanuc_msgs::msg::RobotStatusExt *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _RobotStatusExt__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const fanuc_msgs::msg::RobotStatusExt *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _RobotStatusExt__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_RobotStatusExt(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _RobotStatusExt__callbacks = {
  "fanuc_msgs::msg",
  "RobotStatusExt",
  _RobotStatusExt__cdr_serialize,
  _RobotStatusExt__cdr_deserialize,
  _RobotStatusExt__get_serialized_size,
  _RobotStatusExt__max_serialized_size
};

static rosidl_message_type_support_t _RobotStatusExt__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_RobotStatusExt__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace fanuc_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_fanuc_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<fanuc_msgs::msg::RobotStatusExt>()
{
  return &fanuc_msgs::msg::typesupport_fastrtps_cpp::_RobotStatusExt__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, fanuc_msgs, msg, RobotStatusExt)() {
  return &fanuc_msgs::msg::typesupport_fastrtps_cpp::_RobotStatusExt__handle;
}

#ifdef __cplusplus
}
#endif
