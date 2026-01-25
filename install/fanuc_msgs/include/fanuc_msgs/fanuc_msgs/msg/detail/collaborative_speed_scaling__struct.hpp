// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from fanuc_msgs:msg/CollaborativeSpeedScaling.idl
// generated code does not contain a copyright notice

#ifndef FANUC_MSGS__MSG__DETAIL__COLLABORATIVE_SPEED_SCALING__STRUCT_HPP_
#define FANUC_MSGS__MSG__DETAIL__COLLABORATIVE_SPEED_SCALING__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__fanuc_msgs__msg__CollaborativeSpeedScaling __attribute__((deprecated))
#else
# define DEPRECATED__fanuc_msgs__msg__CollaborativeSpeedScaling __declspec(deprecated)
#endif

namespace fanuc_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CollaborativeSpeedScaling_
{
  using Type = CollaborativeSpeedScaling_<ContainerAllocator>;

  explicit CollaborativeSpeedScaling_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->collaborative_speed_scaling = 0.0;
    }
  }

  explicit CollaborativeSpeedScaling_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->collaborative_speed_scaling = 0.0;
    }
  }

  // field types and members
  using _collaborative_speed_scaling_type =
    double;
  _collaborative_speed_scaling_type collaborative_speed_scaling;

  // setters for named parameter idiom
  Type & set__collaborative_speed_scaling(
    const double & _arg)
  {
    this->collaborative_speed_scaling = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    fanuc_msgs::msg::CollaborativeSpeedScaling_<ContainerAllocator> *;
  using ConstRawPtr =
    const fanuc_msgs::msg::CollaborativeSpeedScaling_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<fanuc_msgs::msg::CollaborativeSpeedScaling_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<fanuc_msgs::msg::CollaborativeSpeedScaling_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      fanuc_msgs::msg::CollaborativeSpeedScaling_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<fanuc_msgs::msg::CollaborativeSpeedScaling_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      fanuc_msgs::msg::CollaborativeSpeedScaling_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<fanuc_msgs::msg::CollaborativeSpeedScaling_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<fanuc_msgs::msg::CollaborativeSpeedScaling_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<fanuc_msgs::msg::CollaborativeSpeedScaling_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__fanuc_msgs__msg__CollaborativeSpeedScaling
    std::shared_ptr<fanuc_msgs::msg::CollaborativeSpeedScaling_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__fanuc_msgs__msg__CollaborativeSpeedScaling
    std::shared_ptr<fanuc_msgs::msg::CollaborativeSpeedScaling_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CollaborativeSpeedScaling_ & other) const
  {
    if (this->collaborative_speed_scaling != other.collaborative_speed_scaling) {
      return false;
    }
    return true;
  }
  bool operator!=(const CollaborativeSpeedScaling_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CollaborativeSpeedScaling_

// alias to use template instance with default allocator
using CollaborativeSpeedScaling =
  fanuc_msgs::msg::CollaborativeSpeedScaling_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace fanuc_msgs

#endif  // FANUC_MSGS__MSG__DETAIL__COLLABORATIVE_SPEED_SCALING__STRUCT_HPP_
