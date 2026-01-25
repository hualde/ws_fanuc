// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from fanuc_msgs:msg/RobotStatus.idl
// generated code does not contain a copyright notice

#ifndef FANUC_MSGS__MSG__DETAIL__ROBOT_STATUS__STRUCT_HPP_
#define FANUC_MSGS__MSG__DETAIL__ROBOT_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__fanuc_msgs__msg__RobotStatus __attribute__((deprecated))
#else
# define DEPRECATED__fanuc_msgs__msg__RobotStatus __declspec(deprecated)
#endif

namespace fanuc_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RobotStatus_
{
  using Type = RobotStatus_<ContainerAllocator>;

  explicit RobotStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->in_error = false;
      this->tp_enabled = false;
      this->e_stopped = false;
      this->motion_possible = false;
      this->contact_stop_mode = 0;
    }
  }

  explicit RobotStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->in_error = false;
      this->tp_enabled = false;
      this->e_stopped = false;
      this->motion_possible = false;
      this->contact_stop_mode = 0;
    }
  }

  // field types and members
  using _in_error_type =
    bool;
  _in_error_type in_error;
  using _tp_enabled_type =
    bool;
  _tp_enabled_type tp_enabled;
  using _e_stopped_type =
    bool;
  _e_stopped_type e_stopped;
  using _motion_possible_type =
    bool;
  _motion_possible_type motion_possible;
  using _contact_stop_mode_type =
    uint8_t;
  _contact_stop_mode_type contact_stop_mode;

  // setters for named parameter idiom
  Type & set__in_error(
    const bool & _arg)
  {
    this->in_error = _arg;
    return *this;
  }
  Type & set__tp_enabled(
    const bool & _arg)
  {
    this->tp_enabled = _arg;
    return *this;
  }
  Type & set__e_stopped(
    const bool & _arg)
  {
    this->e_stopped = _arg;
    return *this;
  }
  Type & set__motion_possible(
    const bool & _arg)
  {
    this->motion_possible = _arg;
    return *this;
  }
  Type & set__contact_stop_mode(
    const uint8_t & _arg)
  {
    this->contact_stop_mode = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t CONTACT_STOP_MODE_NONE =
    0u;
  static constexpr uint8_t CONTACT_STOP_MODE_SAFE =
    1u;
  static constexpr uint8_t CONTACT_STOP_MODE_STOP =
    2u;
  static constexpr uint8_t CONTACT_STOP_MODE_DSBL =
    3u;
  static constexpr uint8_t CONTACT_STOP_MODE_ESCP =
    4u;

  // pointer types
  using RawPtr =
    fanuc_msgs::msg::RobotStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const fanuc_msgs::msg::RobotStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<fanuc_msgs::msg::RobotStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<fanuc_msgs::msg::RobotStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      fanuc_msgs::msg::RobotStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<fanuc_msgs::msg::RobotStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      fanuc_msgs::msg::RobotStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<fanuc_msgs::msg::RobotStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<fanuc_msgs::msg::RobotStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<fanuc_msgs::msg::RobotStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__fanuc_msgs__msg__RobotStatus
    std::shared_ptr<fanuc_msgs::msg::RobotStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__fanuc_msgs__msg__RobotStatus
    std::shared_ptr<fanuc_msgs::msg::RobotStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RobotStatus_ & other) const
  {
    if (this->in_error != other.in_error) {
      return false;
    }
    if (this->tp_enabled != other.tp_enabled) {
      return false;
    }
    if (this->e_stopped != other.e_stopped) {
      return false;
    }
    if (this->motion_possible != other.motion_possible) {
      return false;
    }
    if (this->contact_stop_mode != other.contact_stop_mode) {
      return false;
    }
    return true;
  }
  bool operator!=(const RobotStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RobotStatus_

// alias to use template instance with default allocator
using RobotStatus =
  fanuc_msgs::msg::RobotStatus_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RobotStatus_<ContainerAllocator>::CONTACT_STOP_MODE_NONE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RobotStatus_<ContainerAllocator>::CONTACT_STOP_MODE_SAFE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RobotStatus_<ContainerAllocator>::CONTACT_STOP_MODE_STOP;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RobotStatus_<ContainerAllocator>::CONTACT_STOP_MODE_DSBL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RobotStatus_<ContainerAllocator>::CONTACT_STOP_MODE_ESCP;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace fanuc_msgs

#endif  // FANUC_MSGS__MSG__DETAIL__ROBOT_STATUS__STRUCT_HPP_
