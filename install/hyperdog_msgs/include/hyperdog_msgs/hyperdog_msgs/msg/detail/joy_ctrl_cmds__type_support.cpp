// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from hyperdog_msgs:msg/JoyCtrlCmds.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "hyperdog_msgs/msg/detail/joy_ctrl_cmds__functions.h"
#include "hyperdog_msgs/msg/detail/joy_ctrl_cmds__struct.hpp"
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

void JoyCtrlCmds_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) hyperdog_msgs::msg::JoyCtrlCmds(_init);
}

void JoyCtrlCmds_fini_function(void * message_memory)
{
  auto typed_message = static_cast<hyperdog_msgs::msg::JoyCtrlCmds *>(message_memory);
  typed_message->~JoyCtrlCmds();
}

size_t size_function__JoyCtrlCmds__states(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__JoyCtrlCmds__states(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<bool, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__JoyCtrlCmds__states(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<bool, 3> *>(untyped_member);
  return &member[index];
}

void fetch_function__JoyCtrlCmds__states(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const bool *>(
    get_const_function__JoyCtrlCmds__states(untyped_member, index));
  auto & value = *reinterpret_cast<bool *>(untyped_value);
  value = item;
}

void assign_function__JoyCtrlCmds__states(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<bool *>(
    get_function__JoyCtrlCmds__states(untyped_member, index));
  const auto & value = *reinterpret_cast<const bool *>(untyped_value);
  item = value;
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember JoyCtrlCmds_message_member_array[4] = {
  {
    "states",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(hyperdog_msgs::msg::JoyCtrlCmds, states),  // bytes offset in struct
    nullptr,  // default value
    size_function__JoyCtrlCmds__states,  // size() function pointer
    get_const_function__JoyCtrlCmds__states,  // get_const(index) function pointer
    get_function__JoyCtrlCmds__states,  // get(index) function pointer
    fetch_function__JoyCtrlCmds__states,  // fetch(index, &value) function pointer
    assign_function__JoyCtrlCmds__states,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "gait_type",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hyperdog_msgs::msg::JoyCtrlCmds, gait_type),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "pose",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::Pose>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hyperdog_msgs::msg::JoyCtrlCmds, pose),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "gait_step",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::Vector3>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hyperdog_msgs::msg::JoyCtrlCmds, gait_step),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers JoyCtrlCmds_message_members = {
  "hyperdog_msgs::msg",  // message namespace
  "JoyCtrlCmds",  // message name
  4,  // number of fields
  sizeof(hyperdog_msgs::msg::JoyCtrlCmds),
  JoyCtrlCmds_message_member_array,  // message members
  JoyCtrlCmds_init_function,  // function to initialize message memory (memory has to be allocated)
  JoyCtrlCmds_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t JoyCtrlCmds_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &JoyCtrlCmds_message_members,
  get_message_typesupport_handle_function,
  &hyperdog_msgs__msg__JoyCtrlCmds__get_type_hash,
  &hyperdog_msgs__msg__JoyCtrlCmds__get_type_description,
  &hyperdog_msgs__msg__JoyCtrlCmds__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace hyperdog_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<hyperdog_msgs::msg::JoyCtrlCmds>()
{
  return &::hyperdog_msgs::msg::rosidl_typesupport_introspection_cpp::JoyCtrlCmds_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, hyperdog_msgs, msg, JoyCtrlCmds)() {
  return &::hyperdog_msgs::msg::rosidl_typesupport_introspection_cpp::JoyCtrlCmds_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
