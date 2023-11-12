// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from hyperdog_msgs:msg/Geometry.idl
// generated code does not contain a copyright notice

#ifndef HYPERDOG_MSGS__MSG__DETAIL__GEOMETRY__TRAITS_HPP_
#define HYPERDOG_MSGS__MSG__DETAIL__GEOMETRY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "hyperdog_msgs/msg/detail/geometry__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'fr'
// Member 'fl'
// Member 'br'
// Member 'bl'
#include "geometry_msgs/msg/detail/point32__traits.hpp"
// Member 'euler_ang'
#include "geometry_msgs/msg/detail/quaternion__traits.hpp"

namespace hyperdog_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Geometry & msg,
  std::ostream & out)
{
  out << "{";
  // member: fr
  {
    out << "fr: ";
    to_flow_style_yaml(msg.fr, out);
    out << ", ";
  }

  // member: fl
  {
    out << "fl: ";
    to_flow_style_yaml(msg.fl, out);
    out << ", ";
  }

  // member: br
  {
    out << "br: ";
    to_flow_style_yaml(msg.br, out);
    out << ", ";
  }

  // member: bl
  {
    out << "bl: ";
    to_flow_style_yaml(msg.bl, out);
    out << ", ";
  }

  // member: euler_ang
  {
    out << "euler_ang: ";
    to_flow_style_yaml(msg.euler_ang, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Geometry & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: fr
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fr:\n";
    to_block_style_yaml(msg.fr, out, indentation + 2);
  }

  // member: fl
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fl:\n";
    to_block_style_yaml(msg.fl, out, indentation + 2);
  }

  // member: br
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "br:\n";
    to_block_style_yaml(msg.br, out, indentation + 2);
  }

  // member: bl
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bl:\n";
    to_block_style_yaml(msg.bl, out, indentation + 2);
  }

  // member: euler_ang
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "euler_ang:\n";
    to_block_style_yaml(msg.euler_ang, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Geometry & msg, bool use_flow_style = false)
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
  const hyperdog_msgs::msg::Geometry & msg,
  std::ostream & out, size_t indentation = 0)
{
  hyperdog_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use hyperdog_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const hyperdog_msgs::msg::Geometry & msg)
{
  return hyperdog_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<hyperdog_msgs::msg::Geometry>()
{
  return "hyperdog_msgs::msg::Geometry";
}

template<>
inline const char * name<hyperdog_msgs::msg::Geometry>()
{
  return "hyperdog_msgs/msg/Geometry";
}

template<>
struct has_fixed_size<hyperdog_msgs::msg::Geometry>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Point32>::value && has_fixed_size<geometry_msgs::msg::Quaternion>::value> {};

template<>
struct has_bounded_size<hyperdog_msgs::msg::Geometry>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Point32>::value && has_bounded_size<geometry_msgs::msg::Quaternion>::value> {};

template<>
struct is_message<hyperdog_msgs::msg::Geometry>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // HYPERDOG_MSGS__MSG__DETAIL__GEOMETRY__TRAITS_HPP_
