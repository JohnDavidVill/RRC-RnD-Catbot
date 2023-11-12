// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from hyperdog_msgs:msg/JoyCtrlCmds.idl
// generated code does not contain a copyright notice

#ifndef HYPERDOG_MSGS__MSG__DETAIL__JOY_CTRL_CMDS__BUILDER_HPP_
#define HYPERDOG_MSGS__MSG__DETAIL__JOY_CTRL_CMDS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "hyperdog_msgs/msg/detail/joy_ctrl_cmds__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace hyperdog_msgs
{

namespace msg
{

namespace builder
{

class Init_JoyCtrlCmds_gait_step
{
public:
  explicit Init_JoyCtrlCmds_gait_step(::hyperdog_msgs::msg::JoyCtrlCmds & msg)
  : msg_(msg)
  {}
  ::hyperdog_msgs::msg::JoyCtrlCmds gait_step(::hyperdog_msgs::msg::JoyCtrlCmds::_gait_step_type arg)
  {
    msg_.gait_step = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hyperdog_msgs::msg::JoyCtrlCmds msg_;
};

class Init_JoyCtrlCmds_pose
{
public:
  explicit Init_JoyCtrlCmds_pose(::hyperdog_msgs::msg::JoyCtrlCmds & msg)
  : msg_(msg)
  {}
  Init_JoyCtrlCmds_gait_step pose(::hyperdog_msgs::msg::JoyCtrlCmds::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return Init_JoyCtrlCmds_gait_step(msg_);
  }

private:
  ::hyperdog_msgs::msg::JoyCtrlCmds msg_;
};

class Init_JoyCtrlCmds_gait_type
{
public:
  explicit Init_JoyCtrlCmds_gait_type(::hyperdog_msgs::msg::JoyCtrlCmds & msg)
  : msg_(msg)
  {}
  Init_JoyCtrlCmds_pose gait_type(::hyperdog_msgs::msg::JoyCtrlCmds::_gait_type_type arg)
  {
    msg_.gait_type = std::move(arg);
    return Init_JoyCtrlCmds_pose(msg_);
  }

private:
  ::hyperdog_msgs::msg::JoyCtrlCmds msg_;
};

class Init_JoyCtrlCmds_states
{
public:
  Init_JoyCtrlCmds_states()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_JoyCtrlCmds_gait_type states(::hyperdog_msgs::msg::JoyCtrlCmds::_states_type arg)
  {
    msg_.states = std::move(arg);
    return Init_JoyCtrlCmds_gait_type(msg_);
  }

private:
  ::hyperdog_msgs::msg::JoyCtrlCmds msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::hyperdog_msgs::msg::JoyCtrlCmds>()
{
  return hyperdog_msgs::msg::builder::Init_JoyCtrlCmds_states();
}

}  // namespace hyperdog_msgs

#endif  // HYPERDOG_MSGS__MSG__DETAIL__JOY_CTRL_CMDS__BUILDER_HPP_
