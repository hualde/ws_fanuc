// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from fanuc_msgs:msg/CollaborativeSpeedScaling.idl
// generated code does not contain a copyright notice
#include "fanuc_msgs/msg/detail/collaborative_speed_scaling__rosidl_typesupport_fastrtps_cpp.hpp"
#include "fanuc_msgs/msg/detail/collaborative_speed_scaling__struct.hpp"

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
  const fanuc_msgs::msg::CollaborativeSpeedScaling & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: collaborative_speed_scaling
  cdr << ros_message.collaborative_speed_scaling;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_fanuc_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  fanuc_msgs::msg::CollaborativeSpeedScaling & ros_message)
{
  // Member: collaborative_speed_scaling
  cdr >> ros_message.collaborative_speed_scaling;

  return true;
}  // NOLINT(readability/fn_size)

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_fanuc_msgs
get_serialized_size(
  const fanuc_msgs::msg::CollaborativeSpeedScaling & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: collaborative_speed_scaling
  {
    size_t item_size = sizeof(ros_message.collaborative_speed_scaling);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_fanuc_msgs
max_serialized_size_CollaborativeSpeedScaling(
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


  // Member: collaborative_speed_scaling
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = fanuc_msgs::msg::CollaborativeSpeedScaling;
    is_plain =
      (
      offsetof(DataType, collaborative_speed_scaling) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _CollaborativeSpeedScaling__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const fanuc_msgs::msg::CollaborativeSpeedScaling *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _CollaborativeSpeedScaling__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<fanuc_msgs::msg::CollaborativeSpeedScaling *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _CollaborativeSpeedScaling__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const fanuc_msgs::msg::CollaborativeSpeedScaling *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _CollaborativeSpeedScaling__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_CollaborativeSpeedScaling(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _CollaborativeSpeedScaling__callbacks = {
  "fanuc_msgs::msg",
  "CollaborativeSpeedScaling",
  _CollaborativeSpeedScaling__cdr_serialize,
  _CollaborativeSpeedScaling__cdr_deserialize,
  _CollaborativeSpeedScaling__get_serialized_size,
  _CollaborativeSpeedScaling__max_serialized_size
};

static rosidl_message_type_support_t _CollaborativeSpeedScaling__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_CollaborativeSpeedScaling__callbacks,
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
get_message_type_support_handle<fanuc_msgs::msg::CollaborativeSpeedScaling>()
{
  return &fanuc_msgs::msg::typesupport_fastrtps_cpp::_CollaborativeSpeedScaling__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, fanuc_msgs, msg, CollaborativeSpeedScaling)() {
  return &fanuc_msgs::msg::typesupport_fastrtps_cpp::_CollaborativeSpeedScaling__handle;
}

#ifdef __cplusplus
}
#endif
