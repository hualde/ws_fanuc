// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from fanuc_msgs:msg/BoolIO.idl
// generated code does not contain a copyright notice

#ifndef FANUC_MSGS__MSG__DETAIL__BOOL_IO__STRUCT_HPP_
#define FANUC_MSGS__MSG__DETAIL__BOOL_IO__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'io_type'
#include "fanuc_msgs/msg/detail/io_type__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__fanuc_msgs__msg__BoolIO __attribute__((deprecated))
#else
# define DEPRECATED__fanuc_msgs__msg__BoolIO __declspec(deprecated)
#endif

namespace fanuc_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct BoolIO_
{
  using Type = BoolIO_<ContainerAllocator>;

  explicit BoolIO_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : io_type(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->index = 0;
      this->value = false;
    }
  }

  explicit BoolIO_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : io_type(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->index = 0;
      this->value = false;
    }
  }

  // field types and members
  using _io_type_type =
    fanuc_msgs::msg::IOType_<ContainerAllocator>;
  _io_type_type io_type;
  using _index_type =
    uint16_t;
  _index_type index;
  using _value_type =
    bool;
  _value_type value;

  // setters for named parameter idiom
  Type & set__io_type(
    const fanuc_msgs::msg::IOType_<ContainerAllocator> & _arg)
  {
    this->io_type = _arg;
    return *this;
  }
  Type & set__index(
    const uint16_t & _arg)
  {
    this->index = _arg;
    return *this;
  }
  Type & set__value(
    const bool & _arg)
  {
    this->value = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    fanuc_msgs::msg::BoolIO_<ContainerAllocator> *;
  using ConstRawPtr =
    const fanuc_msgs::msg::BoolIO_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<fanuc_msgs::msg::BoolIO_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<fanuc_msgs::msg::BoolIO_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      fanuc_msgs::msg::BoolIO_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<fanuc_msgs::msg::BoolIO_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      fanuc_msgs::msg::BoolIO_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<fanuc_msgs::msg::BoolIO_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<fanuc_msgs::msg::BoolIO_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<fanuc_msgs::msg::BoolIO_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__fanuc_msgs__msg__BoolIO
    std::shared_ptr<fanuc_msgs::msg::BoolIO_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__fanuc_msgs__msg__BoolIO
    std::shared_ptr<fanuc_msgs::msg::BoolIO_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BoolIO_ & other) const
  {
    if (this->io_type != other.io_type) {
      return false;
    }
    if (this->index != other.index) {
      return false;
    }
    if (this->value != other.value) {
      return false;
    }
    return true;
  }
  bool operator!=(const BoolIO_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BoolIO_

// alias to use template instance with default allocator
using BoolIO =
  fanuc_msgs::msg::BoolIO_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace fanuc_msgs

#endif  // FANUC_MSGS__MSG__DETAIL__BOOL_IO__STRUCT_HPP_
