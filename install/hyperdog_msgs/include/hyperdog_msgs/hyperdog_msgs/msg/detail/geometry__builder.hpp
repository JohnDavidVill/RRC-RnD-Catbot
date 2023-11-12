// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from hyperdog_msgs:msg/Geometry.idl
// generated code does not contain a copyright notice

#ifndef HYPERDOG_MSGS__MSG__DETAIL__GEOMETRY__BUILDER_HPP_
#define HYPERDOG_MSGS__MSG__DETAIL__GEOMETRY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "hyperdog_msgs/msg/detail/geometry__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace hyperdog_msgs
{

namespace msg
{

namespace builder
{

class Init_Geometry_euler_ang
{
public:
  explicit Init_Geometry_euler_ang(::hyperdog_msgs::msg::Geometry & msg)
  : msg_(msg)
  {}
  ::hyperdog_msgs::msg::Geometry euler_ang(::hyperdog_msgs::msg::Geometry::_euler_ang_type arg)
  {
    msg_.euler_ang = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hyperdog_msgs::msg::Geometry msg_;
};

class Init_Geometry_bl
{
public:
  explicit Init_Geometry_bl(::hyperdog_msgs::msg::Geometry & msg)
  : msg_(msg)
  {}
  Init_Geometry_euler_ang bl(::hyperdog_msgs::msg::Geometry::_bl_type arg)
  {
    msg_.bl = std::move(arg);
    return Init_Geometry_euler_ang(msg_);
  }

private:
  ::hyperdog_msgs::msg::Geometry msg_;
};

class Init_Geometry_br
{
public:
  explicit Init_Geometry_br(::hyperdog_msgs::msg::Geometry & msg)
  : msg_(msg)
  {}
  Init_Geometry_bl br(::hyperdog_msgs::msg::Geometry::_br_type arg)
  {
    msg_.br = std::move(arg);
    return Init_Geometry_bl(msg_);
  }

private:
  ::hyperdog_msgs::msg::Geometry msg_;
};

class Init_Geometry_fl
{
public:
  explicit Init_Geometry_fl(::hyperdog_msgs::msg::Geometry & msg)
  : msg_(msg)
  {}
  Init_Geometry_br fl(::hyperdog_msgs::msg::Geometry::_fl_type arg)
  {
    msg_.fl = std::move(arg);
    return Init_Geometry_br(msg_);
  }

private:
  ::hyperdog_msgs::msg::Geometry msg_;
};

class Init_Geometry_fr
{
public:
  Init_Geometry_fr()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Geometry_fl fr(::hyperdog_msgs::msg::Geometry::_fr_type arg)
  {
    msg_.fr = std::move(arg);
    return Init_Geometry_fl(msg_);
  }

private:
  ::hyperdog_msgs::msg::Geometry msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::hyperdog_msgs::msg::Geometry>()
{
  return hyperdog_msgs::msg::builder::Init_Geometry_fr();
}

}  // namespace hyperdog_msgs

#endif  // HYPERDOG_MSGS__MSG__DETAIL__GEOMETRY__BUILDER_HPP_
