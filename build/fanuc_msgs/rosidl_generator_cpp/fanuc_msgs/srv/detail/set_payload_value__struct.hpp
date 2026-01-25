// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from fanuc_msgs:srv/SetPayloadValue.idl
// generated code does not contain a copyright notice

#ifndef FANUC_MSGS__SRV__DETAIL__SET_PAYLOAD_VALUE__STRUCT_HPP_
#define FANUC_MSGS__SRV__DETAIL__SET_PAYLOAD_VALUE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__fanuc_msgs__srv__SetPayloadValue_Request __attribute__((deprecated))
#else
# define DEPRECATED__fanuc_msgs__srv__SetPayloadValue_Request __declspec(deprecated)
#endif

namespace fanuc_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetPayloadValue_Request_
{
  using Type = SetPayloadValue_Request_<ContainerAllocator>;

  explicit SetPayloadValue_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->payload_schedule_id = 0;
      this->mass = 0.0f;
      this->cg_x = 0.0f;
      this->cg_y = 0.0f;
      this->cg_z = 0.0f;
      this->use_in = false;
      this->in_x = 0.0f;
      this->in_y = 0.0f;
      this->in_z = 0.0f;
    }
  }

  explicit SetPayloadValue_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->payload_schedule_id = 0;
      this->mass = 0.0f;
      this->cg_x = 0.0f;
      this->cg_y = 0.0f;
      this->cg_z = 0.0f;
      this->use_in = false;
      this->in_x = 0.0f;
      this->in_y = 0.0f;
      this->in_z = 0.0f;
    }
  }

  // field types and members
  using _payload_schedule_id_type =
    uint16_t;
  _payload_schedule_id_type payload_schedule_id;
  using _mass_type =
    float;
  _mass_type mass;
  using _cg_x_type =
    float;
  _cg_x_type cg_x;
  using _cg_y_type =
    float;
  _cg_y_type cg_y;
  using _cg_z_type =
    float;
  _cg_z_type cg_z;
  using _use_in_type =
    bool;
  _use_in_type use_in;
  using _in_x_type =
    float;
  _in_x_type in_x;
  using _in_y_type =
    float;
  _in_y_type in_y;
  using _in_z_type =
    float;
  _in_z_type in_z;

  // setters for named parameter idiom
  Type & set__payload_schedule_id(
    const uint16_t & _arg)
  {
    this->payload_schedule_id = _arg;
    return *this;
  }
  Type & set__mass(
    const float & _arg)
  {
    this->mass = _arg;
    return *this;
  }
  Type & set__cg_x(
    const float & _arg)
  {
    this->cg_x = _arg;
    return *this;
  }
  Type & set__cg_y(
    const float & _arg)
  {
    this->cg_y = _arg;
    return *this;
  }
  Type & set__cg_z(
    const float & _arg)
  {
    this->cg_z = _arg;
    return *this;
  }
  Type & set__use_in(
    const bool & _arg)
  {
    this->use_in = _arg;
    return *this;
  }
  Type & set__in_x(
    const float & _arg)
  {
    this->in_x = _arg;
    return *this;
  }
  Type & set__in_y(
    const float & _arg)
  {
    this->in_y = _arg;
    return *this;
  }
  Type & set__in_z(
    const float & _arg)
  {
    this->in_z = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    fanuc_msgs::srv::SetPayloadValue_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const fanuc_msgs::srv::SetPayloadValue_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<fanuc_msgs::srv::SetPayloadValue_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<fanuc_msgs::srv::SetPayloadValue_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      fanuc_msgs::srv::SetPayloadValue_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<fanuc_msgs::srv::SetPayloadValue_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      fanuc_msgs::srv::SetPayloadValue_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<fanuc_msgs::srv::SetPayloadValue_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<fanuc_msgs::srv::SetPayloadValue_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<fanuc_msgs::srv::SetPayloadValue_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__fanuc_msgs__srv__SetPayloadValue_Request
    std::shared_ptr<fanuc_msgs::srv::SetPayloadValue_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__fanuc_msgs__srv__SetPayloadValue_Request
    std::shared_ptr<fanuc_msgs::srv::SetPayloadValue_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetPayloadValue_Request_ & other) const
  {
    if (this->payload_schedule_id != other.payload_schedule_id) {
      return false;
    }
    if (this->mass != other.mass) {
      return false;
    }
    if (this->cg_x != other.cg_x) {
      return false;
    }
    if (this->cg_y != other.cg_y) {
      return false;
    }
    if (this->cg_z != other.cg_z) {
      return false;
    }
    if (this->use_in != other.use_in) {
      return false;
    }
    if (this->in_x != other.in_x) {
      return false;
    }
    if (this->in_y != other.in_y) {
      return false;
    }
    if (this->in_z != other.in_z) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetPayloadValue_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetPayloadValue_Request_

// alias to use template instance with default allocator
using SetPayloadValue_Request =
  fanuc_msgs::srv::SetPayloadValue_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace fanuc_msgs


#ifndef _WIN32
# define DEPRECATED__fanuc_msgs__srv__SetPayloadValue_Response __attribute__((deprecated))
#else
# define DEPRECATED__fanuc_msgs__srv__SetPayloadValue_Response __declspec(deprecated)
#endif

namespace fanuc_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetPayloadValue_Response_
{
  using Type = SetPayloadValue_Response_<ContainerAllocator>;

  explicit SetPayloadValue_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = 0l;
    }
  }

  explicit SetPayloadValue_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = 0l;
    }
  }

  // field types and members
  using _result_type =
    int32_t;
  _result_type result;

  // setters for named parameter idiom
  Type & set__result(
    const int32_t & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    fanuc_msgs::srv::SetPayloadValue_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const fanuc_msgs::srv::SetPayloadValue_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<fanuc_msgs::srv::SetPayloadValue_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<fanuc_msgs::srv::SetPayloadValue_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      fanuc_msgs::srv::SetPayloadValue_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<fanuc_msgs::srv::SetPayloadValue_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      fanuc_msgs::srv::SetPayloadValue_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<fanuc_msgs::srv::SetPayloadValue_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<fanuc_msgs::srv::SetPayloadValue_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<fanuc_msgs::srv::SetPayloadValue_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__fanuc_msgs__srv__SetPayloadValue_Response
    std::shared_ptr<fanuc_msgs::srv::SetPayloadValue_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__fanuc_msgs__srv__SetPayloadValue_Response
    std::shared_ptr<fanuc_msgs::srv::SetPayloadValue_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetPayloadValue_Response_ & other) const
  {
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetPayloadValue_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetPayloadValue_Response_

// alias to use template instance with default allocator
using SetPayloadValue_Response =
  fanuc_msgs::srv::SetPayloadValue_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace fanuc_msgs

namespace fanuc_msgs
{

namespace srv
{

struct SetPayloadValue
{
  using Request = fanuc_msgs::srv::SetPayloadValue_Request;
  using Response = fanuc_msgs::srv::SetPayloadValue_Response;
};

}  // namespace srv

}  // namespace fanuc_msgs

#endif  // FANUC_MSGS__SRV__DETAIL__SET_PAYLOAD_VALUE__STRUCT_HPP_
