// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from hyperdog_msgs:msg/Limits.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "hyperdog_msgs/msg/detail/limits__functions.h"
#include "hyperdog_msgs/msg/detail/limits__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace hyperdog_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void Limits_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) hyperdog_msgs::msg::Limits(_init);
}

void Limits_fini_function(void * message_memory)
{
  auto typed_message = static_cast<hyperdog_msgs::msg::Limits *>(message_memory);
  typed_message->~Limits();
}

size_t size_function__Limits__eular_ang_range(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__Limits__eular_ang_range(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<int16_t, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__Limits__eular_ang_range(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<int16_t, 3> *>(untyped_member);
  return &member[index];
}

void fetch_function__Limits__eular_ang_range(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const int16_t *>(
    get_const_function__Limits__eular_ang_range(untyped_member, index));
  auto & value = *reinterpret_cast<int16_t *>(untyped_value);
  value = item;
}

void assign_function__Limits__eular_ang_range(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<int16_t *>(
    get_function__Limits__eular_ang_range(untyped_member, index));
  const auto & value = *reinterpret_cast<const int16_t *>(untyped_value);
  item = value;
}

size_t size_function__Limits__height_range(const void * untyped_member)
{
  (void)untyped_member;
  return 2;
}

const void * get_const_function__Limits__height_range(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<int16_t, 2> *>(untyped_member);
  return &member[index];
}

void * get_function__Limits__height_range(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<int16_t, 2> *>(untyped_member);
  return &member[index];
}

void fetch_function__Limits__height_range(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const int16_t *>(
    get_const_function__Limits__height_range(untyped_member, index));
  auto & value = *reinterpret_cast<int16_t *>(untyped_value);
  value = item;
}

void assign_function__Limits__height_range(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<int16_t *>(
    get_function__Limits__height_range(untyped_member, index));
  const auto & value = *reinterpret_cast<const int16_t *>(untyped_value);
  item = value;
}

size_t size_function__Limits__steplength_range(const void * untyped_member)
{
  (void)untyped_member;
  return 2;
}

const void * get_const_function__Limits__steplength_range(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<int16_t, 2> *>(untyped_member);
  return &member[index];
}

void * get_function__Limits__steplength_range(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<int16_t, 2> *>(untyped_member);
  return &member[index];
}

void fetch_function__Limits__steplength_range(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const int16_t *>(
    get_const_function__Limits__steplength_range(untyped_member, index));
  auto & value = *reinterpret_cast<int16_t *>(untyped_value);
  value = item;
}

void assign_function__Limits__steplength_range(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<int16_t *>(
    get_function__Limits__steplength_range(untyped_member, index));
  const auto & value = *reinterpret_cast<const int16_t *>(untyped_value);
  item = value;
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Limits_message_member_array[3] = {
  {
    "eular_ang_range",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(hyperdog_msgs::msg::Limits, eular_ang_range),  // bytes offset in struct
    nullptr,  // default value
    size_function__Limits__eular_ang_range,  // size() function pointer
    get_const_function__Limits__eular_ang_range,  // get_const(index) function pointer
    get_function__Limits__eular_ang_range,  // get(index) function pointer
    fetch_function__Limits__eular_ang_range,  // fetch(index, &value) function pointer
    assign_function__Limits__eular_ang_range,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "height_range",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    2,  // array size
    false,  // is upper bound
    offsetof(hyperdog_msgs::msg::Limits, height_range),  // bytes offset in struct
    nullptr,  // default value
    size_function__Limits__height_range,  // size() function pointer
    get_const_function__Limits__height_range,  // get_const(index) function pointer
    get_function__Limits__height_range,  // get(index) function pointer
    fetch_function__Limits__height_range,  // fetch(index, &value) function pointer
    assign_function__Limits__height_range,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "steplength_range",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    2,  // array size
    false,  // is upper bound
    offsetof(hyperdog_msgs::msg::Limits, steplength_range),  // bytes offset in struct
    nullptr,  // default value
    size_function__Limits__steplength_range,  // size() function pointer
    get_const_function__Limits__steplength_range,  // get_const(index) function pointer
    get_function__Limits__steplength_range,  // get(index) function pointer
    fetch_function__Limits__steplength_range,  // fetch(index, &value) function pointer
    assign_function__Limits__steplength_range,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Limits_message_members = {
  "hyperdog_msgs::msg",  // message namespace
  "Limits",  // message name
  3,  // number of fields
  sizeof(hyperdog_msgs::msg::Limits),
  Limits_message_member_array,  // message members
  Limits_init_function,  // function to initialize message memory (memory has to be allocated)
  Limits_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Limits_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Limits_message_members,
  get_message_typesupport_handle_function,
  &hyperdog_msgs__msg__Limits__get_type_hash,
  &hyperdog_msgs__msg__Limits__get_type_description,
  &hyperdog_msgs__msg__Limits__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace hyperdog_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<hyperdog_msgs::msg::Limits>()
{
  return &::hyperdog_msgs::msg::rosidl_typesupport_introspection_cpp::Limits_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, hyperdog_msgs, msg, Limits)() {
  return &::hyperdog_msgs::msg::rosidl_typesupport_introspection_cpp::Limits_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
