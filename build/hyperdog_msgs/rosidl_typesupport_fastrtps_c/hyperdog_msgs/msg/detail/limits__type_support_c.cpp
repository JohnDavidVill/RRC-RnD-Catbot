// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from hyperdog_msgs:msg/Limits.idl
// generated code does not contain a copyright notice
#include "hyperdog_msgs/msg/detail/limits__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "hyperdog_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "hyperdog_msgs/msg/detail/limits__struct.h"
#include "hyperdog_msgs/msg/detail/limits__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _Limits__ros_msg_type = hyperdog_msgs__msg__Limits;

static bool _Limits__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Limits__ros_msg_type * ros_message = static_cast<const _Limits__ros_msg_type *>(untyped_ros_message);
  // Field name: eular_ang_range
  {
    size_t size = 3;
    auto array_ptr = ros_message->eular_ang_range;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: height_range
  {
    size_t size = 2;
    auto array_ptr = ros_message->height_range;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: steplength_range
  {
    size_t size = 2;
    auto array_ptr = ros_message->steplength_range;
    cdr.serializeArray(array_ptr, size);
  }

  return true;
}

static bool _Limits__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Limits__ros_msg_type * ros_message = static_cast<_Limits__ros_msg_type *>(untyped_ros_message);
  // Field name: eular_ang_range
  {
    size_t size = 3;
    auto array_ptr = ros_message->eular_ang_range;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: height_range
  {
    size_t size = 2;
    auto array_ptr = ros_message->height_range;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: steplength_range
  {
    size_t size = 2;
    auto array_ptr = ros_message->steplength_range;
    cdr.deserializeArray(array_ptr, size);
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_hyperdog_msgs
size_t get_serialized_size_hyperdog_msgs__msg__Limits(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Limits__ros_msg_type * ros_message = static_cast<const _Limits__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name eular_ang_range
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->eular_ang_range;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name height_range
  {
    size_t array_size = 2;
    auto array_ptr = ros_message->height_range;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name steplength_range
  {
    size_t array_size = 2;
    auto array_ptr = ros_message->steplength_range;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Limits__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_hyperdog_msgs__msg__Limits(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_hyperdog_msgs
size_t max_serialized_size_hyperdog_msgs__msg__Limits(
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

  // member: eular_ang_range
  {
    size_t array_size = 3;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: height_range
  {
    size_t array_size = 2;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: steplength_range
  {
    size_t array_size = 2;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _Limits__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_hyperdog_msgs__msg__Limits(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_Limits = {
  "hyperdog_msgs::msg",
  "Limits",
  _Limits__cdr_serialize,
  _Limits__cdr_deserialize,
  _Limits__get_serialized_size,
  _Limits__max_serialized_size
};

static rosidl_message_type_support_t _Limits__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Limits,
  get_message_typesupport_handle_function,
  &hyperdog_msgs__msg__Limits__get_type_hash,
  &hyperdog_msgs__msg__Limits__get_type_description,
  &hyperdog_msgs__msg__Limits__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, hyperdog_msgs, msg, Limits)() {
  return &_Limits__type_support;
}

#if defined(__cplusplus)
}
#endif
