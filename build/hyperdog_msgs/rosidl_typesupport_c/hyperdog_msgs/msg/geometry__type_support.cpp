// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from hyperdog_msgs:msg/Geometry.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "hyperdog_msgs/msg/detail/geometry__struct.h"
#include "hyperdog_msgs/msg/detail/geometry__type_support.h"
#include "hyperdog_msgs/msg/detail/geometry__functions.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace hyperdog_msgs
{

namespace msg
{

namespace rosidl_typesupport_c
{

typedef struct _Geometry_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Geometry_type_support_ids_t;

static const _Geometry_type_support_ids_t _Geometry_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Geometry_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Geometry_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Geometry_type_support_symbol_names_t _Geometry_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, hyperdog_msgs, msg, Geometry)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hyperdog_msgs, msg, Geometry)),
  }
};

typedef struct _Geometry_type_support_data_t
{
  void * data[2];
} _Geometry_type_support_data_t;

static _Geometry_type_support_data_t _Geometry_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Geometry_message_typesupport_map = {
  2,
  "hyperdog_msgs",
  &_Geometry_message_typesupport_ids.typesupport_identifier[0],
  &_Geometry_message_typesupport_symbol_names.symbol_name[0],
  &_Geometry_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Geometry_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Geometry_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &hyperdog_msgs__msg__Geometry__get_type_hash,
  &hyperdog_msgs__msg__Geometry__get_type_description,
  &hyperdog_msgs__msg__Geometry__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace msg

}  // namespace hyperdog_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, hyperdog_msgs, msg, Geometry)() {
  return &::hyperdog_msgs::msg::rosidl_typesupport_c::Geometry_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
