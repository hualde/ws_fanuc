// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from fanuc_msgs:msg/ConnectionStatus.idl
// generated code does not contain a copyright notice

#ifndef FANUC_MSGS__MSG__DETAIL__CONNECTION_STATUS__STRUCT_HPP_
#define FANUC_MSGS__MSG__DETAIL__CONNECTION_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__fanuc_msgs__msg__ConnectionStatus __attribute__((deprecated))
#else
# define DEPRECATED__fanuc_msgs__msg__ConnectionStatus __declspec(deprecated)
#endif

namespace fanuc_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ConnectionStatus_
{
  using Type = ConnectionStatus_<ContainerAllocator>;

  explicit ConnectionStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->is_connected = false;
    }
  }

  explicit ConnectionStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->is_connected = false;
    }
  }

  // field types and members
  using _is_connected_type =
    bool;
  _is_connected_type is_connected;

  // setters for named parameter idiom
  Type & set__is_connected(
    const bool & _arg)
  {
    this->is_connected = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    fanuc_msgs::msg::ConnectionStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const fanuc_msgs::msg::ConnectionStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<fanuc_msgs::msg::ConnectionStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<fanuc_msgs::msg::ConnectionStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      fanuc_msgs::msg::ConnectionStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<fanuc_msgs::msg::ConnectionStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      fanuc_msgs::msg::ConnectionStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<fanuc_msgs::msg::ConnectionStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<fanuc_msgs::msg::ConnectionStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<fanuc_msgs::msg::ConnectionStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__fanuc_msgs__msg__ConnectionStatus
    std::shared_ptr<fanuc_msgs::msg::ConnectionStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__fanuc_msgs__msg__ConnectionStatus
    std::shared_ptr<fanuc_msgs::msg::ConnectionStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ConnectionStatus_ & other) const
  {
    if (this->is_connected != other.is_connected) {
      return false;
    }
    return true;
  }
  bool operator!=(const ConnectionStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ConnectionStatus_

// alias to use template instance with default allocator
using ConnectionStatus =
  fanuc_msgs::msg::ConnectionStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace fanuc_msgs

#endif  // FANUC_MSGS__MSG__DETAIL__CONNECTION_STATUS__STRUCT_HPP_
