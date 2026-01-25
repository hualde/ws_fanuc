// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from fanuc_msgs:msg/RobotStatusExt.idl
// generated code does not contain a copyright notice

#ifndef FANUC_MSGS__MSG__DETAIL__ROBOT_STATUS_EXT__STRUCT_HPP_
#define FANUC_MSGS__MSG__DETAIL__ROBOT_STATUS_EXT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__fanuc_msgs__msg__RobotStatusExt __attribute__((deprecated))
#else
# define DEPRECATED__fanuc_msgs__msg__RobotStatusExt __declspec(deprecated)
#endif

namespace fanuc_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RobotStatusExt_
{
  using Type = RobotStatusExt_<ContainerAllocator>;

  explicit RobotStatusExt_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->error_code = "";
      this->in_motion = false;
      this->drives_powered = false;
      this->gen_override = 0l;
      this->speed_clamp_limit = 0.0f;
      this->control_mode = "";
    }
  }

  explicit RobotStatusExt_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : error_code(_alloc),
    control_mode(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->error_code = "";
      this->in_motion = false;
      this->drives_powered = false;
      this->gen_override = 0l;
      this->speed_clamp_limit = 0.0f;
      this->control_mode = "";
    }
  }

  // field types and members
  using _error_code_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _error_code_type error_code;
  using _in_motion_type =
    bool;
  _in_motion_type in_motion;
  using _drives_powered_type =
    bool;
  _drives_powered_type drives_powered;
  using _gen_override_type =
    int32_t;
  _gen_override_type gen_override;
  using _speed_clamp_limit_type =
    float;
  _speed_clamp_limit_type speed_clamp_limit;
  using _control_mode_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _control_mode_type control_mode;

  // setters for named parameter idiom
  Type & set__error_code(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->error_code = _arg;
    return *this;
  }
  Type & set__in_motion(
    const bool & _arg)
  {
    this->in_motion = _arg;
    return *this;
  }
  Type & set__drives_powered(
    const bool & _arg)
  {
    this->drives_powered = _arg;
    return *this;
  }
  Type & set__gen_override(
    const int32_t & _arg)
  {
    this->gen_override = _arg;
    return *this;
  }
  Type & set__speed_clamp_limit(
    const float & _arg)
  {
    this->speed_clamp_limit = _arg;
    return *this;
  }
  Type & set__control_mode(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->control_mode = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    fanuc_msgs::msg::RobotStatusExt_<ContainerAllocator> *;
  using ConstRawPtr =
    const fanuc_msgs::msg::RobotStatusExt_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<fanuc_msgs::msg::RobotStatusExt_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<fanuc_msgs::msg::RobotStatusExt_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      fanuc_msgs::msg::RobotStatusExt_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<fanuc_msgs::msg::RobotStatusExt_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      fanuc_msgs::msg::RobotStatusExt_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<fanuc_msgs::msg::RobotStatusExt_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<fanuc_msgs::msg::RobotStatusExt_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<fanuc_msgs::msg::RobotStatusExt_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__fanuc_msgs__msg__RobotStatusExt
    std::shared_ptr<fanuc_msgs::msg::RobotStatusExt_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__fanuc_msgs__msg__RobotStatusExt
    std::shared_ptr<fanuc_msgs::msg::RobotStatusExt_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RobotStatusExt_ & other) const
  {
    if (this->error_code != other.error_code) {
      return false;
    }
    if (this->in_motion != other.in_motion) {
      return false;
    }
    if (this->drives_powered != other.drives_powered) {
      return false;
    }
    if (this->gen_override != other.gen_override) {
      return false;
    }
    if (this->speed_clamp_limit != other.speed_clamp_limit) {
      return false;
    }
    if (this->control_mode != other.control_mode) {
      return false;
    }
    return true;
  }
  bool operator!=(const RobotStatusExt_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RobotStatusExt_

// alias to use template instance with default allocator
using RobotStatusExt =
  fanuc_msgs::msg::RobotStatusExt_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace fanuc_msgs

#endif  // FANUC_MSGS__MSG__DETAIL__ROBOT_STATUS_EXT__STRUCT_HPP_
