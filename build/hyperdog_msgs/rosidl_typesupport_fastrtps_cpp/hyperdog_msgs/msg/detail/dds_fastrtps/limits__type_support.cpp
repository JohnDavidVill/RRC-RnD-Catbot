// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from hyperdog_msgs:msg/Limits.idl
// generated code does not contain a copyright notice
#include "hyperdog_msgs/msg/detail/limits__rosidl_typesupport_fastrtps_cpp.hpp"
#include "hyperdog_msgs/msg/detail/limits__functions.h"
#include "hyperdog_msgs/msg/detail/limits__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace hyperdog_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_hyperdog_msgs
cdr_serialize(
  const hyperdog_msgs::msg::Limits & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: eular_ang_range
  {
    cdr << ros_message.eular_ang_range;
  }
  // Member: height_range
  {
    cdr << ros_message.height_range;
  }
  // Member: steplength_range
  {
    cdr << ros_message.steplength_range;
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_hyperdog_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  hyperdog_msgs::msg::Limits & ros_message)
{
  // Member: eular_ang_range
  {
    cdr >> ros_message.eular_ang_range;
  }

  // Member: height_range
  {
    cdr >> ros_message.height_range;
  }

  // Member: steplength_range
  {
    cdr >> ros_message.steplength_range;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_hyperdog_msgs
get_serialized_size(
  const hyperdog_msgs::msg::Limits & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: eular_ang_range
  {
    size_t array_size = 3;
    size_t item_size = sizeof(ros_message.eular_ang_range[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: height_range
  {
    size_t array_size = 2;
    size_t item_size = sizeof(ros_message.height_range[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: steplength_range
  {
    size_t array_size = 2;
    size_t item_size = sizeof(ros_message.steplength_range[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_hyperdog_msgs
max_serialized_size_Limits(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: eular_ang_range
  {
    size_t array_size = 3;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: height_range
  {
    size_t array_size = 2;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: steplength_range
  {
    size_t array_size = 2;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  return current_alignment - initial_alignment;
}

static bool _Limits__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const hyperdog_msgs::msg::Limits *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Limits__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<hyperdog_msgs::msg::Limits *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Limits__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const hyperdog_msgs::msg::Limits *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Limits__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_Limits(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _Limits__callbacks = {
  "hyperdog_msgs::msg",
  "Limits",
  _Limits__cdr_serialize,
  _Limits__cdr_deserialize,
  _Limits__get_serialized_size,
  _Limits__max_serialized_size
};

static rosidl_message_type_support_t _Limits__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Limits__callbacks,
  get_message_typesupport_handle_function,
  &hyperdog_msgs__msg__Limits__get_type_hash,
  &hyperdog_msgs__msg__Limits__get_type_description,
  &hyperdog_msgs__msg__Limits__get_type_description_sources,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace hyperdog_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_hyperdog_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<hyperdog_msgs::msg::Limits>()
{
  return &hyperdog_msgs::msg::typesupport_fastrtps_cpp::_Limits__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, hyperdog_msgs, msg, Limits)() {
  return &hyperdog_msgs::msg::typesupport_fastrtps_cpp::_Limits__handle;
}

#ifdef __cplusplus
}
#endif
