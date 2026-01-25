// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from fanuc_msgs:msg/NumReg.idl
// generated code does not contain a copyright notice

#ifndef FANUC_MSGS__MSG__DETAIL__NUM_REG__STRUCT_HPP_
#define FANUC_MSGS__MSG__DETAIL__NUM_REG__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__fanuc_msgs__msg__NumReg __attribute__((deprecated))
#else
# define DEPRECATED__fanuc_msgs__msg__NumReg __declspec(deprecated)
#endif

namespace fanuc_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct NumReg_
{
  using Type = NumReg_<ContainerAllocator>;

  explicit NumReg_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->index = 0;
      this->value = 0.0f;
    }
  }

  explicit NumReg_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->index = 0;
      this->value = 0.0f;
    }
  }

  // field types and members
  using _index_type =
    uint16_t;
  _index_type index;
  using _value_type =
    float;
  _value_type value;

  // setters for named parameter idiom
  Type & set__index(
    const uint16_t & _arg)
  {
    this->index = _arg;
    return *this;
  }
  Type & set__value(
    const float & _arg)
  {
    this->value = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    fanuc_msgs::msg::NumReg_<ContainerAllocator> *;
  using ConstRawPtr =
    const fanuc_msgs::msg::NumReg_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<fanuc_msgs::msg::NumReg_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<fanuc_msgs::msg::NumReg_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      fanuc_msgs::msg::NumReg_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<fanuc_msgs::msg::NumReg_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      fanuc_msgs::msg::NumReg_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<fanuc_msgs::msg::NumReg_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<fanuc_msgs::msg::NumReg_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<fanuc_msgs::msg::NumReg_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__fanuc_msgs__msg__NumReg
    std::shared_ptr<fanuc_msgs::msg::NumReg_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__fanuc_msgs__msg__NumReg
    std::shared_ptr<fanuc_msgs::msg::NumReg_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NumReg_ & other) const
  {
    if (this->index != other.index) {
      return false;
    }
    if (this->value != other.value) {
      return false;
    }
    return true;
  }
  bool operator!=(const NumReg_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NumReg_

// alias to use template instance with default allocator
using NumReg =
  fanuc_msgs::msg::NumReg_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace fanuc_msgs

#endif  // FANUC_MSGS__MSG__DETAIL__NUM_REG__STRUCT_HPP_
