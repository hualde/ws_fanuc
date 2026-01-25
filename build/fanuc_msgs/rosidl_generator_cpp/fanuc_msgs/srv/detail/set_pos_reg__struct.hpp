// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from fanuc_msgs:srv/SetPosReg.idl
// generated code does not contain a copyright notice

#ifndef FANUC_MSGS__SRV__DETAIL__SET_POS_REG__STRUCT_HPP_
#define FANUC_MSGS__SRV__DETAIL__SET_POS_REG__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__fanuc_msgs__srv__SetPosReg_Request __attribute__((deprecated))
#else
# define DEPRECATED__fanuc_msgs__srv__SetPosReg_Request __declspec(deprecated)
#endif

namespace fanuc_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetPosReg_Request_
{
  using Type = SetPosReg_Request_<ContainerAllocator>;

  explicit SetPosReg_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->index = 0;
      this->representation = "";
      this->utool = 0;
      this->uframe = 0;
      this->front = 0;
      this->up = 0;
      this->left = 0;
      this->flip = 0;
      this->turn4 = 0;
      this->turn5 = 0;
      this->turn6 = 0;
      this->x = 0.0f;
      this->y = 0.0f;
      this->z = 0.0f;
      this->w = 0.0f;
      this->p = 0.0f;
      this->r = 0.0f;
      this->ext1 = 0.0f;
      this->ext2 = 0.0f;
      this->ext3 = 0.0f;
      this->j1 = 0.0f;
      this->j2 = 0.0f;
      this->j3 = 0.0f;
      this->j4 = 0.0f;
      this->j5 = 0.0f;
      this->j6 = 0.0f;
      this->j7 = 0.0f;
      this->j8 = 0.0f;
      this->j9 = 0.0f;
    }
  }

  explicit SetPosReg_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : representation(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->index = 0;
      this->representation = "";
      this->utool = 0;
      this->uframe = 0;
      this->front = 0;
      this->up = 0;
      this->left = 0;
      this->flip = 0;
      this->turn4 = 0;
      this->turn5 = 0;
      this->turn6 = 0;
      this->x = 0.0f;
      this->y = 0.0f;
      this->z = 0.0f;
      this->w = 0.0f;
      this->p = 0.0f;
      this->r = 0.0f;
      this->ext1 = 0.0f;
      this->ext2 = 0.0f;
      this->ext3 = 0.0f;
      this->j1 = 0.0f;
      this->j2 = 0.0f;
      this->j3 = 0.0f;
      this->j4 = 0.0f;
      this->j5 = 0.0f;
      this->j6 = 0.0f;
      this->j7 = 0.0f;
      this->j8 = 0.0f;
      this->j9 = 0.0f;
    }
  }

  // field types and members
  using _index_type =
    uint16_t;
  _index_type index;
  using _representation_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _representation_type representation;
  using _utool_type =
    uint8_t;
  _utool_type utool;
  using _uframe_type =
    uint8_t;
  _uframe_type uframe;
  using _front_type =
    uint8_t;
  _front_type front;
  using _up_type =
    uint8_t;
  _up_type up;
  using _left_type =
    uint8_t;
  _left_type left;
  using _flip_type =
    uint8_t;
  _flip_type flip;
  using _turn4_type =
    int8_t;
  _turn4_type turn4;
  using _turn5_type =
    int8_t;
  _turn5_type turn5;
  using _turn6_type =
    int8_t;
  _turn6_type turn6;
  using _x_type =
    float;
  _x_type x;
  using _y_type =
    float;
  _y_type y;
  using _z_type =
    float;
  _z_type z;
  using _w_type =
    float;
  _w_type w;
  using _p_type =
    float;
  _p_type p;
  using _r_type =
    float;
  _r_type r;
  using _ext1_type =
    float;
  _ext1_type ext1;
  using _ext2_type =
    float;
  _ext2_type ext2;
  using _ext3_type =
    float;
  _ext3_type ext3;
  using _j1_type =
    float;
  _j1_type j1;
  using _j2_type =
    float;
  _j2_type j2;
  using _j3_type =
    float;
  _j3_type j3;
  using _j4_type =
    float;
  _j4_type j4;
  using _j5_type =
    float;
  _j5_type j5;
  using _j6_type =
    float;
  _j6_type j6;
  using _j7_type =
    float;
  _j7_type j7;
  using _j8_type =
    float;
  _j8_type j8;
  using _j9_type =
    float;
  _j9_type j9;

  // setters for named parameter idiom
  Type & set__index(
    const uint16_t & _arg)
  {
    this->index = _arg;
    return *this;
  }
  Type & set__representation(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->representation = _arg;
    return *this;
  }
  Type & set__utool(
    const uint8_t & _arg)
  {
    this->utool = _arg;
    return *this;
  }
  Type & set__uframe(
    const uint8_t & _arg)
  {
    this->uframe = _arg;
    return *this;
  }
  Type & set__front(
    const uint8_t & _arg)
  {
    this->front = _arg;
    return *this;
  }
  Type & set__up(
    const uint8_t & _arg)
  {
    this->up = _arg;
    return *this;
  }
  Type & set__left(
    const uint8_t & _arg)
  {
    this->left = _arg;
    return *this;
  }
  Type & set__flip(
    const uint8_t & _arg)
  {
    this->flip = _arg;
    return *this;
  }
  Type & set__turn4(
    const int8_t & _arg)
  {
    this->turn4 = _arg;
    return *this;
  }
  Type & set__turn5(
    const int8_t & _arg)
  {
    this->turn5 = _arg;
    return *this;
  }
  Type & set__turn6(
    const int8_t & _arg)
  {
    this->turn6 = _arg;
    return *this;
  }
  Type & set__x(
    const float & _arg)
  {
    this->x = _arg;
    return *this;
  }
  Type & set__y(
    const float & _arg)
  {
    this->y = _arg;
    return *this;
  }
  Type & set__z(
    const float & _arg)
  {
    this->z = _arg;
    return *this;
  }
  Type & set__w(
    const float & _arg)
  {
    this->w = _arg;
    return *this;
  }
  Type & set__p(
    const float & _arg)
  {
    this->p = _arg;
    return *this;
  }
  Type & set__r(
    const float & _arg)
  {
    this->r = _arg;
    return *this;
  }
  Type & set__ext1(
    const float & _arg)
  {
    this->ext1 = _arg;
    return *this;
  }
  Type & set__ext2(
    const float & _arg)
  {
    this->ext2 = _arg;
    return *this;
  }
  Type & set__ext3(
    const float & _arg)
  {
    this->ext3 = _arg;
    return *this;
  }
  Type & set__j1(
    const float & _arg)
  {
    this->j1 = _arg;
    return *this;
  }
  Type & set__j2(
    const float & _arg)
  {
    this->j2 = _arg;
    return *this;
  }
  Type & set__j3(
    const float & _arg)
  {
    this->j3 = _arg;
    return *this;
  }
  Type & set__j4(
    const float & _arg)
  {
    this->j4 = _arg;
    return *this;
  }
  Type & set__j5(
    const float & _arg)
  {
    this->j5 = _arg;
    return *this;
  }
  Type & set__j6(
    const float & _arg)
  {
    this->j6 = _arg;
    return *this;
  }
  Type & set__j7(
    const float & _arg)
  {
    this->j7 = _arg;
    return *this;
  }
  Type & set__j8(
    const float & _arg)
  {
    this->j8 = _arg;
    return *this;
  }
  Type & set__j9(
    const float & _arg)
  {
    this->j9 = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    fanuc_msgs::srv::SetPosReg_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const fanuc_msgs::srv::SetPosReg_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<fanuc_msgs::srv::SetPosReg_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<fanuc_msgs::srv::SetPosReg_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      fanuc_msgs::srv::SetPosReg_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<fanuc_msgs::srv::SetPosReg_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      fanuc_msgs::srv::SetPosReg_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<fanuc_msgs::srv::SetPosReg_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<fanuc_msgs::srv::SetPosReg_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<fanuc_msgs::srv::SetPosReg_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__fanuc_msgs__srv__SetPosReg_Request
    std::shared_ptr<fanuc_msgs::srv::SetPosReg_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__fanuc_msgs__srv__SetPosReg_Request
    std::shared_ptr<fanuc_msgs::srv::SetPosReg_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetPosReg_Request_ & other) const
  {
    if (this->index != other.index) {
      return false;
    }
    if (this->representation != other.representation) {
      return false;
    }
    if (this->utool != other.utool) {
      return false;
    }
    if (this->uframe != other.uframe) {
      return false;
    }
    if (this->front != other.front) {
      return false;
    }
    if (this->up != other.up) {
      return false;
    }
    if (this->left != other.left) {
      return false;
    }
    if (this->flip != other.flip) {
      return false;
    }
    if (this->turn4 != other.turn4) {
      return false;
    }
    if (this->turn5 != other.turn5) {
      return false;
    }
    if (this->turn6 != other.turn6) {
      return false;
    }
    if (this->x != other.x) {
      return false;
    }
    if (this->y != other.y) {
      return false;
    }
    if (this->z != other.z) {
      return false;
    }
    if (this->w != other.w) {
      return false;
    }
    if (this->p != other.p) {
      return false;
    }
    if (this->r != other.r) {
      return false;
    }
    if (this->ext1 != other.ext1) {
      return false;
    }
    if (this->ext2 != other.ext2) {
      return false;
    }
    if (this->ext3 != other.ext3) {
      return false;
    }
    if (this->j1 != other.j1) {
      return false;
    }
    if (this->j2 != other.j2) {
      return false;
    }
    if (this->j3 != other.j3) {
      return false;
    }
    if (this->j4 != other.j4) {
      return false;
    }
    if (this->j5 != other.j5) {
      return false;
    }
    if (this->j6 != other.j6) {
      return false;
    }
    if (this->j7 != other.j7) {
      return false;
    }
    if (this->j8 != other.j8) {
      return false;
    }
    if (this->j9 != other.j9) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetPosReg_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetPosReg_Request_

// alias to use template instance with default allocator
using SetPosReg_Request =
  fanuc_msgs::srv::SetPosReg_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace fanuc_msgs


#ifndef _WIN32
# define DEPRECATED__fanuc_msgs__srv__SetPosReg_Response __attribute__((deprecated))
#else
# define DEPRECATED__fanuc_msgs__srv__SetPosReg_Response __declspec(deprecated)
#endif

namespace fanuc_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetPosReg_Response_
{
  using Type = SetPosReg_Response_<ContainerAllocator>;

  explicit SetPosReg_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = 0l;
    }
  }

  explicit SetPosReg_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    fanuc_msgs::srv::SetPosReg_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const fanuc_msgs::srv::SetPosReg_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<fanuc_msgs::srv::SetPosReg_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<fanuc_msgs::srv::SetPosReg_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      fanuc_msgs::srv::SetPosReg_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<fanuc_msgs::srv::SetPosReg_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      fanuc_msgs::srv::SetPosReg_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<fanuc_msgs::srv::SetPosReg_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<fanuc_msgs::srv::SetPosReg_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<fanuc_msgs::srv::SetPosReg_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__fanuc_msgs__srv__SetPosReg_Response
    std::shared_ptr<fanuc_msgs::srv::SetPosReg_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__fanuc_msgs__srv__SetPosReg_Response
    std::shared_ptr<fanuc_msgs::srv::SetPosReg_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetPosReg_Response_ & other) const
  {
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetPosReg_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetPosReg_Response_

// alias to use template instance with default allocator
using SetPosReg_Response =
  fanuc_msgs::srv::SetPosReg_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace fanuc_msgs

namespace fanuc_msgs
{

namespace srv
{

struct SetPosReg
{
  using Request = fanuc_msgs::srv::SetPosReg_Request;
  using Response = fanuc_msgs::srv::SetPosReg_Response;
};

}  // namespace srv

}  // namespace fanuc_msgs

#endif  // FANUC_MSGS__SRV__DETAIL__SET_POS_REG__STRUCT_HPP_
