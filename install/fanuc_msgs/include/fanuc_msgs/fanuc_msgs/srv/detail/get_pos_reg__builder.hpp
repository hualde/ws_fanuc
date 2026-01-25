// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from fanuc_msgs:srv/GetPosReg.idl
// generated code does not contain a copyright notice

#ifndef FANUC_MSGS__SRV__DETAIL__GET_POS_REG__BUILDER_HPP_
#define FANUC_MSGS__SRV__DETAIL__GET_POS_REG__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "fanuc_msgs/srv/detail/get_pos_reg__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace fanuc_msgs
{

namespace srv
{

namespace builder
{

class Init_GetPosReg_Request_index
{
public:
  Init_GetPosReg_Request_index()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::fanuc_msgs::srv::GetPosReg_Request index(::fanuc_msgs::srv::GetPosReg_Request::_index_type arg)
  {
    msg_.index = std::move(arg);
    return std::move(msg_);
  }

private:
  ::fanuc_msgs::srv::GetPosReg_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::fanuc_msgs::srv::GetPosReg_Request>()
{
  return fanuc_msgs::srv::builder::Init_GetPosReg_Request_index();
}

}  // namespace fanuc_msgs


namespace fanuc_msgs
{

namespace srv
{

namespace builder
{

class Init_GetPosReg_Response_j9
{
public:
  explicit Init_GetPosReg_Response_j9(::fanuc_msgs::srv::GetPosReg_Response & msg)
  : msg_(msg)
  {}
  ::fanuc_msgs::srv::GetPosReg_Response j9(::fanuc_msgs::srv::GetPosReg_Response::_j9_type arg)
  {
    msg_.j9 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::fanuc_msgs::srv::GetPosReg_Response msg_;
};

class Init_GetPosReg_Response_j8
{
public:
  explicit Init_GetPosReg_Response_j8(::fanuc_msgs::srv::GetPosReg_Response & msg)
  : msg_(msg)
  {}
  Init_GetPosReg_Response_j9 j8(::fanuc_msgs::srv::GetPosReg_Response::_j8_type arg)
  {
    msg_.j8 = std::move(arg);
    return Init_GetPosReg_Response_j9(msg_);
  }

private:
  ::fanuc_msgs::srv::GetPosReg_Response msg_;
};

class Init_GetPosReg_Response_j7
{
public:
  explicit Init_GetPosReg_Response_j7(::fanuc_msgs::srv::GetPosReg_Response & msg)
  : msg_(msg)
  {}
  Init_GetPosReg_Response_j8 j7(::fanuc_msgs::srv::GetPosReg_Response::_j7_type arg)
  {
    msg_.j7 = std::move(arg);
    return Init_GetPosReg_Response_j8(msg_);
  }

private:
  ::fanuc_msgs::srv::GetPosReg_Response msg_;
};

class Init_GetPosReg_Response_j6
{
public:
  explicit Init_GetPosReg_Response_j6(::fanuc_msgs::srv::GetPosReg_Response & msg)
  : msg_(msg)
  {}
  Init_GetPosReg_Response_j7 j6(::fanuc_msgs::srv::GetPosReg_Response::_j6_type arg)
  {
    msg_.j6 = std::move(arg);
    return Init_GetPosReg_Response_j7(msg_);
  }

private:
  ::fanuc_msgs::srv::GetPosReg_Response msg_;
};

class Init_GetPosReg_Response_j5
{
public:
  explicit Init_GetPosReg_Response_j5(::fanuc_msgs::srv::GetPosReg_Response & msg)
  : msg_(msg)
  {}
  Init_GetPosReg_Response_j6 j5(::fanuc_msgs::srv::GetPosReg_Response::_j5_type arg)
  {
    msg_.j5 = std::move(arg);
    return Init_GetPosReg_Response_j6(msg_);
  }

private:
  ::fanuc_msgs::srv::GetPosReg_Response msg_;
};

class Init_GetPosReg_Response_j4
{
public:
  explicit Init_GetPosReg_Response_j4(::fanuc_msgs::srv::GetPosReg_Response & msg)
  : msg_(msg)
  {}
  Init_GetPosReg_Response_j5 j4(::fanuc_msgs::srv::GetPosReg_Response::_j4_type arg)
  {
    msg_.j4 = std::move(arg);
    return Init_GetPosReg_Response_j5(msg_);
  }

private:
  ::fanuc_msgs::srv::GetPosReg_Response msg_;
};

class Init_GetPosReg_Response_j3
{
public:
  explicit Init_GetPosReg_Response_j3(::fanuc_msgs::srv::GetPosReg_Response & msg)
  : msg_(msg)
  {}
  Init_GetPosReg_Response_j4 j3(::fanuc_msgs::srv::GetPosReg_Response::_j3_type arg)
  {
    msg_.j3 = std::move(arg);
    return Init_GetPosReg_Response_j4(msg_);
  }

private:
  ::fanuc_msgs::srv::GetPosReg_Response msg_;
};

class Init_GetPosReg_Response_j2
{
public:
  explicit Init_GetPosReg_Response_j2(::fanuc_msgs::srv::GetPosReg_Response & msg)
  : msg_(msg)
  {}
  Init_GetPosReg_Response_j3 j2(::fanuc_msgs::srv::GetPosReg_Response::_j2_type arg)
  {
    msg_.j2 = std::move(arg);
    return Init_GetPosReg_Response_j3(msg_);
  }

private:
  ::fanuc_msgs::srv::GetPosReg_Response msg_;
};

class Init_GetPosReg_Response_j1
{
public:
  explicit Init_GetPosReg_Response_j1(::fanuc_msgs::srv::GetPosReg_Response & msg)
  : msg_(msg)
  {}
  Init_GetPosReg_Response_j2 j1(::fanuc_msgs::srv::GetPosReg_Response::_j1_type arg)
  {
    msg_.j1 = std::move(arg);
    return Init_GetPosReg_Response_j2(msg_);
  }

private:
  ::fanuc_msgs::srv::GetPosReg_Response msg_;
};

class Init_GetPosReg_Response_ext3
{
public:
  explicit Init_GetPosReg_Response_ext3(::fanuc_msgs::srv::GetPosReg_Response & msg)
  : msg_(msg)
  {}
  Init_GetPosReg_Response_j1 ext3(::fanuc_msgs::srv::GetPosReg_Response::_ext3_type arg)
  {
    msg_.ext3 = std::move(arg);
    return Init_GetPosReg_Response_j1(msg_);
  }

private:
  ::fanuc_msgs::srv::GetPosReg_Response msg_;
};

class Init_GetPosReg_Response_ext2
{
public:
  explicit Init_GetPosReg_Response_ext2(::fanuc_msgs::srv::GetPosReg_Response & msg)
  : msg_(msg)
  {}
  Init_GetPosReg_Response_ext3 ext2(::fanuc_msgs::srv::GetPosReg_Response::_ext2_type arg)
  {
    msg_.ext2 = std::move(arg);
    return Init_GetPosReg_Response_ext3(msg_);
  }

private:
  ::fanuc_msgs::srv::GetPosReg_Response msg_;
};

class Init_GetPosReg_Response_ext1
{
public:
  explicit Init_GetPosReg_Response_ext1(::fanuc_msgs::srv::GetPosReg_Response & msg)
  : msg_(msg)
  {}
  Init_GetPosReg_Response_ext2 ext1(::fanuc_msgs::srv::GetPosReg_Response::_ext1_type arg)
  {
    msg_.ext1 = std::move(arg);
    return Init_GetPosReg_Response_ext2(msg_);
  }

private:
  ::fanuc_msgs::srv::GetPosReg_Response msg_;
};

class Init_GetPosReg_Response_r
{
public:
  explicit Init_GetPosReg_Response_r(::fanuc_msgs::srv::GetPosReg_Response & msg)
  : msg_(msg)
  {}
  Init_GetPosReg_Response_ext1 r(::fanuc_msgs::srv::GetPosReg_Response::_r_type arg)
  {
    msg_.r = std::move(arg);
    return Init_GetPosReg_Response_ext1(msg_);
  }

private:
  ::fanuc_msgs::srv::GetPosReg_Response msg_;
};

class Init_GetPosReg_Response_p
{
public:
  explicit Init_GetPosReg_Response_p(::fanuc_msgs::srv::GetPosReg_Response & msg)
  : msg_(msg)
  {}
  Init_GetPosReg_Response_r p(::fanuc_msgs::srv::GetPosReg_Response::_p_type arg)
  {
    msg_.p = std::move(arg);
    return Init_GetPosReg_Response_r(msg_);
  }

private:
  ::fanuc_msgs::srv::GetPosReg_Response msg_;
};

class Init_GetPosReg_Response_w
{
public:
  explicit Init_GetPosReg_Response_w(::fanuc_msgs::srv::GetPosReg_Response & msg)
  : msg_(msg)
  {}
  Init_GetPosReg_Response_p w(::fanuc_msgs::srv::GetPosReg_Response::_w_type arg)
  {
    msg_.w = std::move(arg);
    return Init_GetPosReg_Response_p(msg_);
  }

private:
  ::fanuc_msgs::srv::GetPosReg_Response msg_;
};

class Init_GetPosReg_Response_z
{
public:
  explicit Init_GetPosReg_Response_z(::fanuc_msgs::srv::GetPosReg_Response & msg)
  : msg_(msg)
  {}
  Init_GetPosReg_Response_w z(::fanuc_msgs::srv::GetPosReg_Response::_z_type arg)
  {
    msg_.z = std::move(arg);
    return Init_GetPosReg_Response_w(msg_);
  }

private:
  ::fanuc_msgs::srv::GetPosReg_Response msg_;
};

class Init_GetPosReg_Response_y
{
public:
  explicit Init_GetPosReg_Response_y(::fanuc_msgs::srv::GetPosReg_Response & msg)
  : msg_(msg)
  {}
  Init_GetPosReg_Response_z y(::fanuc_msgs::srv::GetPosReg_Response::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_GetPosReg_Response_z(msg_);
  }

private:
  ::fanuc_msgs::srv::GetPosReg_Response msg_;
};

class Init_GetPosReg_Response_x
{
public:
  explicit Init_GetPosReg_Response_x(::fanuc_msgs::srv::GetPosReg_Response & msg)
  : msg_(msg)
  {}
  Init_GetPosReg_Response_y x(::fanuc_msgs::srv::GetPosReg_Response::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_GetPosReg_Response_y(msg_);
  }

private:
  ::fanuc_msgs::srv::GetPosReg_Response msg_;
};

class Init_GetPosReg_Response_turn6
{
public:
  explicit Init_GetPosReg_Response_turn6(::fanuc_msgs::srv::GetPosReg_Response & msg)
  : msg_(msg)
  {}
  Init_GetPosReg_Response_x turn6(::fanuc_msgs::srv::GetPosReg_Response::_turn6_type arg)
  {
    msg_.turn6 = std::move(arg);
    return Init_GetPosReg_Response_x(msg_);
  }

private:
  ::fanuc_msgs::srv::GetPosReg_Response msg_;
};

class Init_GetPosReg_Response_turn5
{
public:
  explicit Init_GetPosReg_Response_turn5(::fanuc_msgs::srv::GetPosReg_Response & msg)
  : msg_(msg)
  {}
  Init_GetPosReg_Response_turn6 turn5(::fanuc_msgs::srv::GetPosReg_Response::_turn5_type arg)
  {
    msg_.turn5 = std::move(arg);
    return Init_GetPosReg_Response_turn6(msg_);
  }

private:
  ::fanuc_msgs::srv::GetPosReg_Response msg_;
};

class Init_GetPosReg_Response_turn4
{
public:
  explicit Init_GetPosReg_Response_turn4(::fanuc_msgs::srv::GetPosReg_Response & msg)
  : msg_(msg)
  {}
  Init_GetPosReg_Response_turn5 turn4(::fanuc_msgs::srv::GetPosReg_Response::_turn4_type arg)
  {
    msg_.turn4 = std::move(arg);
    return Init_GetPosReg_Response_turn5(msg_);
  }

private:
  ::fanuc_msgs::srv::GetPosReg_Response msg_;
};

class Init_GetPosReg_Response_flip
{
public:
  explicit Init_GetPosReg_Response_flip(::fanuc_msgs::srv::GetPosReg_Response & msg)
  : msg_(msg)
  {}
  Init_GetPosReg_Response_turn4 flip(::fanuc_msgs::srv::GetPosReg_Response::_flip_type arg)
  {
    msg_.flip = std::move(arg);
    return Init_GetPosReg_Response_turn4(msg_);
  }

private:
  ::fanuc_msgs::srv::GetPosReg_Response msg_;
};

class Init_GetPosReg_Response_left
{
public:
  explicit Init_GetPosReg_Response_left(::fanuc_msgs::srv::GetPosReg_Response & msg)
  : msg_(msg)
  {}
  Init_GetPosReg_Response_flip left(::fanuc_msgs::srv::GetPosReg_Response::_left_type arg)
  {
    msg_.left = std::move(arg);
    return Init_GetPosReg_Response_flip(msg_);
  }

private:
  ::fanuc_msgs::srv::GetPosReg_Response msg_;
};

class Init_GetPosReg_Response_up
{
public:
  explicit Init_GetPosReg_Response_up(::fanuc_msgs::srv::GetPosReg_Response & msg)
  : msg_(msg)
  {}
  Init_GetPosReg_Response_left up(::fanuc_msgs::srv::GetPosReg_Response::_up_type arg)
  {
    msg_.up = std::move(arg);
    return Init_GetPosReg_Response_left(msg_);
  }

private:
  ::fanuc_msgs::srv::GetPosReg_Response msg_;
};

class Init_GetPosReg_Response_front
{
public:
  explicit Init_GetPosReg_Response_front(::fanuc_msgs::srv::GetPosReg_Response & msg)
  : msg_(msg)
  {}
  Init_GetPosReg_Response_up front(::fanuc_msgs::srv::GetPosReg_Response::_front_type arg)
  {
    msg_.front = std::move(arg);
    return Init_GetPosReg_Response_up(msg_);
  }

private:
  ::fanuc_msgs::srv::GetPosReg_Response msg_;
};

class Init_GetPosReg_Response_uframe
{
public:
  explicit Init_GetPosReg_Response_uframe(::fanuc_msgs::srv::GetPosReg_Response & msg)
  : msg_(msg)
  {}
  Init_GetPosReg_Response_front uframe(::fanuc_msgs::srv::GetPosReg_Response::_uframe_type arg)
  {
    msg_.uframe = std::move(arg);
    return Init_GetPosReg_Response_front(msg_);
  }

private:
  ::fanuc_msgs::srv::GetPosReg_Response msg_;
};

class Init_GetPosReg_Response_utool
{
public:
  explicit Init_GetPosReg_Response_utool(::fanuc_msgs::srv::GetPosReg_Response & msg)
  : msg_(msg)
  {}
  Init_GetPosReg_Response_uframe utool(::fanuc_msgs::srv::GetPosReg_Response::_utool_type arg)
  {
    msg_.utool = std::move(arg);
    return Init_GetPosReg_Response_uframe(msg_);
  }

private:
  ::fanuc_msgs::srv::GetPosReg_Response msg_;
};

class Init_GetPosReg_Response_representation
{
public:
  explicit Init_GetPosReg_Response_representation(::fanuc_msgs::srv::GetPosReg_Response & msg)
  : msg_(msg)
  {}
  Init_GetPosReg_Response_utool representation(::fanuc_msgs::srv::GetPosReg_Response::_representation_type arg)
  {
    msg_.representation = std::move(arg);
    return Init_GetPosReg_Response_utool(msg_);
  }

private:
  ::fanuc_msgs::srv::GetPosReg_Response msg_;
};

class Init_GetPosReg_Response_result
{
public:
  Init_GetPosReg_Response_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetPosReg_Response_representation result(::fanuc_msgs::srv::GetPosReg_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return Init_GetPosReg_Response_representation(msg_);
  }

private:
  ::fanuc_msgs::srv::GetPosReg_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::fanuc_msgs::srv::GetPosReg_Response>()
{
  return fanuc_msgs::srv::builder::Init_GetPosReg_Response_result();
}

}  // namespace fanuc_msgs

#endif  // FANUC_MSGS__SRV__DETAIL__GET_POS_REG__BUILDER_HPP_
