// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from hyperdog_msgs:msg/Limits.idl
// generated code does not contain a copyright notice

#include "hyperdog_msgs/msg/detail/limits__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_hyperdog_msgs
const rosidl_type_hash_t *
hyperdog_msgs__msg__Limits__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xf2, 0x92, 0x0f, 0x09, 0x63, 0xc2, 0xbc, 0x16,
      0xd0, 0x6d, 0xfd, 0xfd, 0xe9, 0xe5, 0x7c, 0x71,
      0x94, 0xd8, 0x4a, 0xef, 0x75, 0xaf, 0x4b, 0xb7,
      0x4e, 0x4a, 0x2a, 0x8a, 0x80, 0x85, 0x1e, 0x7a,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char hyperdog_msgs__msg__Limits__TYPE_NAME[] = "hyperdog_msgs/msg/Limits";

// Define type names, field names, and default values
static char hyperdog_msgs__msg__Limits__FIELD_NAME__eular_ang_range[] = "eular_ang_range";
static char hyperdog_msgs__msg__Limits__DEFAULT_VALUE__eular_ang_range[] = "(40, 45, 50)";
static char hyperdog_msgs__msg__Limits__FIELD_NAME__height_range[] = "height_range";
static char hyperdog_msgs__msg__Limits__DEFAULT_VALUE__height_range[] = "(80, 240)";
static char hyperdog_msgs__msg__Limits__FIELD_NAME__steplength_range[] = "steplength_range";
static char hyperdog_msgs__msg__Limits__DEFAULT_VALUE__steplength_range[] = "(250, 250)";

static rosidl_runtime_c__type_description__Field hyperdog_msgs__msg__Limits__FIELDS[] = {
  {
    {hyperdog_msgs__msg__Limits__FIELD_NAME__eular_ang_range, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT16_ARRAY,
      3,
      0,
      {NULL, 0, 0},
    },
    {hyperdog_msgs__msg__Limits__DEFAULT_VALUE__eular_ang_range, 12, 12},
  },
  {
    {hyperdog_msgs__msg__Limits__FIELD_NAME__height_range, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT16_ARRAY,
      2,
      0,
      {NULL, 0, 0},
    },
    {hyperdog_msgs__msg__Limits__DEFAULT_VALUE__height_range, 9, 9},
  },
  {
    {hyperdog_msgs__msg__Limits__FIELD_NAME__steplength_range, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT16_ARRAY,
      2,
      0,
      {NULL, 0, 0},
    },
    {hyperdog_msgs__msg__Limits__DEFAULT_VALUE__steplength_range, 10, 10},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
hyperdog_msgs__msg__Limits__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {hyperdog_msgs__msg__Limits__TYPE_NAME, 24, 24},
      {hyperdog_msgs__msg__Limits__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# std_msgs/Header header\n"
  "\n"
  "int16[3] eular_ang_range  [40, 45, 50]\n"
  "int16[2] height_range   [80, 240]\n"
  "int16[2] steplength_range  [250, 250]\n"
  "";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
hyperdog_msgs__msg__Limits__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {hyperdog_msgs__msg__Limits__TYPE_NAME, 24, 24},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 138, 138},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
hyperdog_msgs__msg__Limits__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *hyperdog_msgs__msg__Limits__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
