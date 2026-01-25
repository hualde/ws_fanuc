// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from fanuc_msgs:msg/IOState.idl
// generated code does not contain a copyright notice

#ifndef FANUC_MSGS__MSG__DETAIL__IO_STATE__STRUCT_HPP_
#define FANUC_MSGS__MSG__DETAIL__IO_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'values'
#include "fanuc_msgs/msg/detail/bool_io__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__fanuc_msgs__msg__IOState __attribute__((deprecated))
#else
# define DEPRECATED__fanuc_msgs__msg__IOState __declspec(deprecated)
#endif

namespace fanuc_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct IOState_
{
  using Type = IOState_<ContainerAllocator>;

  explicit IOState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit IOState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _values_type =
    std::vector<fanuc_msgs::msg::BoolIO_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<fanuc_msgs::msg::BoolIO_<ContainerAllocator>>>;
  _values_type values;

  // setters for named parameter idiom
  Type & set__values(
    const std::vector<fanuc_msgs::msg::BoolIO_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<fanuc_msgs::msg::BoolIO_<ContainerAllocator>>> & _arg)
  {
    this->values = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    fanuc_msgs::msg::IOState_<ContainerAllocator> *;
  using ConstRawPtr =
    const fanuc_msgs::msg::IOState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<fanuc_msgs::msg::IOState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<fanuc_msgs::msg::IOState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      fanuc_msgs::msg::IOState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<fanuc_msgs::msg::IOState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      fanuc_msgs::msg::IOState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<fanuc_msgs::msg::IOState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<fanuc_msgs::msg::IOState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<fanuc_msgs::msg::IOState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__fanuc_msgs__msg__IOState
    std::shared_ptr<fanuc_msgs::msg::IOState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__fanuc_msgs__msg__IOState
    std::shared_ptr<fanuc_msgs::msg::IOState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const IOState_ & other) const
  {
    if (this->values != other.values) {
      return false;
    }
    return true;
  }
  bool operator!=(const IOState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct IOState_

// alias to use template instance with default allocator
using IOState =
  fanuc_msgs::msg::IOState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace fanuc_msgs

#endif  // FANUC_MSGS__MSG__DETAIL__IO_STATE__STRUCT_HPP_
