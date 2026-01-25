// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from fanuc_msgs:msg/RobotStatusExt.idl
// generated code does not contain a copyright notice
#include "fanuc_msgs/msg/detail/robot_status_ext__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "fanuc_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "fanuc_msgs/msg/detail/robot_status_ext__struct.h"
#include "fanuc_msgs/msg/detail/robot_status_ext__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/string.h"  // control_mode, error_code
#include "rosidl_runtime_c/string_functions.h"  // control_mode, error_code

// forward declare type support functions


using _RobotStatusExt__ros_msg_type = fanuc_msgs__msg__RobotStatusExt;

static bool _RobotStatusExt__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _RobotStatusExt__ros_msg_type * ros_message = static_cast<const _RobotStatusExt__ros_msg_type *>(untyped_ros_message);
  // Field name: error_code
  {
    const rosidl_runtime_c__String * str = &ros_message->error_code;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: in_motion
  {
    cdr << (ros_message->in_motion ? true : false);
  }

  // Field name: drives_powered
  {
    cdr << (ros_message->drives_powered ? true : false);
  }

  // Field name: gen_override
  {
    cdr << ros_message->gen_override;
  }

  // Field name: speed_clamp_limit
  {
    cdr << ros_message->speed_clamp_limit;
  }

  // Field name: control_mode
  {
    const rosidl_runtime_c__String * str = &ros_message->control_mode;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

static bool _RobotStatusExt__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _RobotStatusExt__ros_msg_type * ros_message = static_cast<_RobotStatusExt__ros_msg_type *>(untyped_ros_message);
  // Field name: error_code
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->error_code.data) {
      rosidl_runtime_c__String__init(&ros_message->error_code);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->error_code,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'error_code'\n");
      return false;
    }
  }

  // Field name: in_motion
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->in_motion = tmp ? true : false;
  }

  // Field name: drives_powered
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->drives_powered = tmp ? true : false;
  }

  // Field name: gen_override
  {
    cdr >> ros_message->gen_override;
  }

  // Field name: speed_clamp_limit
  {
    cdr >> ros_message->speed_clamp_limit;
  }

  // Field name: control_mode
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->control_mode.data) {
      rosidl_runtime_c__String__init(&ros_message->control_mode);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->control_mode,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'control_mode'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_fanuc_msgs
size_t get_serialized_size_fanuc_msgs__msg__RobotStatusExt(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _RobotStatusExt__ros_msg_type * ros_message = static_cast<const _RobotStatusExt__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name error_code
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->error_code.size + 1);
  // field.name in_motion
  {
    size_t item_size = sizeof(ros_message->in_motion);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name drives_powered
  {
    size_t item_size = sizeof(ros_message->drives_powered);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gen_override
  {
    size_t item_size = sizeof(ros_message->gen_override);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name speed_clamp_limit
  {
    size_t item_size = sizeof(ros_message->speed_clamp_limit);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name control_mode
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->control_mode.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _RobotStatusExt__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_fanuc_msgs__msg__RobotStatusExt(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_fanuc_msgs
size_t max_serialized_size_fanuc_msgs__msg__RobotStatusExt(
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

  // member: error_code
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
  // member: in_motion
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: drives_powered
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: gen_override
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: speed_clamp_limit
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: control_mode
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
    using DataType = fanuc_msgs__msg__RobotStatusExt;
    is_plain =
      (
      offsetof(DataType, control_mode) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _RobotStatusExt__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_fanuc_msgs__msg__RobotStatusExt(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_RobotStatusExt = {
  "fanuc_msgs::msg",
  "RobotStatusExt",
  _RobotStatusExt__cdr_serialize,
  _RobotStatusExt__cdr_deserialize,
  _RobotStatusExt__get_serialized_size,
  _RobotStatusExt__max_serialized_size
};

static rosidl_message_type_support_t _RobotStatusExt__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_RobotStatusExt,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, fanuc_msgs, msg, RobotStatusExt)() {
  return &_RobotStatusExt__type_support;
}

#if defined(__cplusplus)
}
#endif
