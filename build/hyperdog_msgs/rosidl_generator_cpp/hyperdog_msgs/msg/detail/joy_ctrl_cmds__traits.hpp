// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from hyperdog_msgs:msg/JoyCtrlCmds.idl
// generated code does not contain a copyright notice

#ifndef HYPERDOG_MSGS__MSG__DETAIL__JOY_CTRL_CMDS__TRAITS_HPP_
#define HYPERDOG_MSGS__MSG__DETAIL__JOY_CTRL_CMDS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "hyperdog_msgs/msg/detail/joy_ctrl_cmds__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__traits.hpp"
// Member 'gait_step'
#include "geometry_msgs/msg/detail/vector3__traits.hpp"

namespace hyperdog_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const JoyCtrlCmds & msg,
  std::ostream & out)
{
  out << "{";
  // member: states
  {
    if (msg.states.size() == 0) {
      out << "states: []";
    } else {
      out << "states: [";
      size_t pending_items = msg.states.size();
      for (auto item : msg.states) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: gait_type
  {
    out << "gait_type: ";
    rosidl_generator_traits::value_to_yaml(msg.gait_type, out);
    out << ", ";
  }

  // member: pose
  {
    out << "pose: ";
    to_flow_style_yaml(msg.pose, out);
    out << ", ";
  }

  // member: gait_step
  {
    out << "gait_step: ";
    to_flow_style_yaml(msg.gait_step, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const JoyCtrlCmds & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: states
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.states.size() == 0) {
      out << "states: []\n";
    } else {
      out << "states:\n";
      for (auto item : msg.states) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: gait_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gait_type: ";
    rosidl_generator_traits::value_to_yaml(msg.gait_type, out);
    out << "\n";
  }

  // member: pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pose:\n";
    to_block_style_yaml(msg.pose, out, indentation + 2);
  }

  // member: gait_step
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gait_step:\n";
    to_block_style_yaml(msg.gait_step, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const JoyCtrlCmds & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace hyperdog_msgs

namespace rosidl_generator_traits
{

[[deprecated("use hyperdog_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const hyperdog_msgs::msg::JoyCtrlCmds & msg,
  std::ostream & out, size_t indentation = 0)
{
  hyperdog_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use hyperdog_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const hyperdog_msgs::msg::JoyCtrlCmds & msg)
{
  return hyperdog_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<hyperdog_msgs::msg::JoyCtrlCmds>()
{
  return "hyperdog_msgs::msg::JoyCtrlCmds";
}

template<>
inline const char * name<hyperdog_msgs::msg::JoyCtrlCmds>()
{
  return "hyperdog_msgs/msg/JoyCtrlCmds";
}

template<>
struct has_fixed_size<hyperdog_msgs::msg::JoyCtrlCmds>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Pose>::value && has_fixed_size<geometry_msgs::msg::Vector3>::value> {};

template<>
struct has_bounded_size<hyperdog_msgs::msg::JoyCtrlCmds>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Pose>::value && has_bounded_size<geometry_msgs::msg::Vector3>::value> {};

template<>
struct is_message<hyperdog_msgs::msg::JoyCtrlCmds>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // HYPERDOG_MSGS__MSG__DETAIL__JOY_CTRL_CMDS__TRAITS_HPP_
