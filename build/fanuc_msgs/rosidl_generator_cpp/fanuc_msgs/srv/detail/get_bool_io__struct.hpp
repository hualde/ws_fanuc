// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from fanuc_msgs:srv/GetBoolIO.idl
// generated code does not contain a copyright notice

#ifndef FANUC_MSGS__SRV__DETAIL__GET_BOOL_IO__STRUCT_HPP_
#define FANUC_MSGS__SRV__DETAIL__GET_BOOL_IO__STRUCT_HPP_

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
# define DEPRECATED__fanuc_msgs__srv__GetBoolIO_Request __attribute__((deprecated))
#else
# define DEPRECATED__fanuc_msgs__srv__GetBoolIO_Request __declspec(deprecated)
#endif

namespace fanuc_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetBoolIO_Request_
{
  using Type = GetBoolIO_Request_<ContainerAllocator>;

  explicit GetBoolIO_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : io_type(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->index = 0;
    }
  }

  explicit GetBoolIO_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : io_type(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->index = 0;
    }
  }

  // field types and members
  using _io_type_type =
    fanuc_msgs::msg::IOType_<ContainerAllocator>;
  _io_type_type io_type;
  using _index_type =
    uint16_t;
  _index_type index;

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

  // constant declarations

  // pointer types
  using RawPtr =
    fanuc_msgs::srv::GetBoolIO_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const fanuc_msgs::srv::GetBoolIO_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<fanuc_msgs::srv::GetBoolIO_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<fanuc_msgs::srv::GetBoolIO_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      fanuc_msgs::srv::GetBoolIO_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<fanuc_msgs::srv::GetBoolIO_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      fanuc_msgs::srv::GetBoolIO_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<fanuc_msgs::srv::GetBoolIO_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<fanuc_msgs::srv::GetBoolIO_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<fanuc_msgs::srv::GetBoolIO_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__fanuc_msgs__srv__GetBoolIO_Request
    std::shared_ptr<fanuc_msgs::srv::GetBoolIO_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__fanuc_msgs__srv__GetBoolIO_Request
    std::shared_ptr<fanuc_msgs::srv::GetBoolIO_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetBoolIO_Request_ & other) const
  {
    if (this->io_type != other.io_type) {
      return false;
    }
    if (this->index != other.index) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetBoolIO_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetBoolIO_Request_

// alias to use template instance with default allocator
using GetBoolIO_Request =
  fanuc_msgs::srv::GetBoolIO_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace fanuc_msgs


#ifndef _WIN32
# define DEPRECATED__fanuc_msgs__srv__GetBoolIO_Response __attribute__((deprecated))
#else
# define DEPRECATED__fanuc_msgs__srv__GetBoolIO_Response __declspec(deprecated)
#endif

namespace fanuc_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetBoolIO_Response_
{
  using Type = GetBoolIO_Response_<ContainerAllocator>;

  explicit GetBoolIO_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = 0l;
      this->value = false;
    }
  }

  explicit GetBoolIO_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = 0l;
      this->value = false;
    }
  }

  // field types and members
  using _result_type =
    int32_t;
  _result_type result;
  using _value_type =
    bool;
  _value_type value;

  // setters for named parameter idiom
  Type & set__result(
    const int32_t & _arg)
  {
    this->result = _arg;
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
    fanuc_msgs::srv::GetBoolIO_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const fanuc_msgs::srv::GetBoolIO_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<fanuc_msgs::srv::GetBoolIO_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<fanuc_msgs::srv::GetBoolIO_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      fanuc_msgs::srv::GetBoolIO_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<fanuc_msgs::srv::GetBoolIO_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      fanuc_msgs::srv::GetBoolIO_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<fanuc_msgs::srv::GetBoolIO_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<fanuc_msgs::srv::GetBoolIO_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<fanuc_msgs::srv::GetBoolIO_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__fanuc_msgs__srv__GetBoolIO_Response
    std::shared_ptr<fanuc_msgs::srv::GetBoolIO_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__fanuc_msgs__srv__GetBoolIO_Response
    std::shared_ptr<fanuc_msgs::srv::GetBoolIO_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetBoolIO_Response_ & other) const
  {
    if (this->result != other.result) {
      return false;
    }
    if (this->value != other.value) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetBoolIO_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetBoolIO_Response_

// alias to use template instance with default allocator
using GetBoolIO_Response =
  fanuc_msgs::srv::GetBoolIO_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace fanuc_msgs

namespace fanuc_msgs
{

namespace srv
{

struct GetBoolIO
{
  using Request = fanuc_msgs::srv::GetBoolIO_Request;
  using Response = fanuc_msgs::srv::GetBoolIO_Response;
};

}  // namespace srv

}  // namespace fanuc_msgs

#endif  // FANUC_MSGS__SRV__DETAIL__GET_BOOL_IO__STRUCT_HPP_
