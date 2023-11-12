// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from hyperdog_msgs:msg/Geometry.idl
// generated code does not contain a copyright notice

#include "hyperdog_msgs/msg/detail/geometry__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_hyperdog_msgs
const rosidl_type_hash_t *
hyperdog_msgs__msg__Geometry__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x66, 0xf4, 0x48, 0x6c, 0xd8, 0xc0, 0x73, 0xe1,
      0xdb, 0x23, 0x49, 0x9d, 0x1d, 0x31, 0xd7, 0x4d,
      0x8b, 0x4e, 0x2e, 0x76, 0xaf, 0xa7, 0xac, 0xf1,
      0x0d, 0x99, 0x9e, 0x11, 0x35, 0xa8, 0x9e, 0x91,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "geometry_msgs/msg/detail/quaternion__functions.h"
#include "geometry_msgs/msg/detail/point32__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t geometry_msgs__msg__Point32__EXPECTED_HASH = {1, {
    0x2f, 0xc4, 0xdb, 0x7c, 0xae, 0x16, 0xa4, 0x58,
    0x2c, 0x79, 0xa5, 0x6b, 0x66, 0x17, 0x3a, 0x8d,
    0x48, 0xd5, 0x2c, 0x7d, 0xc5, 0x20, 0xdd, 0xc5,
    0x5a, 0x0d, 0x4b, 0xcf, 0x2a, 0x4b, 0xfd, 0xbc,
  }};
static const rosidl_type_hash_t geometry_msgs__msg__Quaternion__EXPECTED_HASH = {1, {
    0x8a, 0x76, 0x5f, 0x66, 0x77, 0x8c, 0x8f, 0xf7,
    0xc8, 0xab, 0x94, 0xaf, 0xcc, 0x59, 0x0a, 0x2e,
    0xd5, 0x32, 0x5a, 0x1d, 0x9a, 0x07, 0x6f, 0xff,
    0xf3, 0x8f, 0xbc, 0xe3, 0x6f, 0x45, 0x86, 0x84,
  }};
#endif

static char hyperdog_msgs__msg__Geometry__TYPE_NAME[] = "hyperdog_msgs/msg/Geometry";
static char geometry_msgs__msg__Point32__TYPE_NAME[] = "geometry_msgs/msg/Point32";
static char geometry_msgs__msg__Quaternion__TYPE_NAME[] = "geometry_msgs/msg/Quaternion";

// Define type names, field names, and default values
static char hyperdog_msgs__msg__Geometry__FIELD_NAME__fr[] = "fr";
static char hyperdog_msgs__msg__Geometry__FIELD_NAME__fl[] = "fl";
static char hyperdog_msgs__msg__Geometry__FIELD_NAME__br[] = "br";
static char hyperdog_msgs__msg__Geometry__FIELD_NAME__bl[] = "bl";
static char hyperdog_msgs__msg__Geometry__FIELD_NAME__euler_ang[] = "euler_ang";

static rosidl_runtime_c__type_description__Field hyperdog_msgs__msg__Geometry__FIELDS[] = {
  {
    {hyperdog_msgs__msg__Geometry__FIELD_NAME__fr, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {geometry_msgs__msg__Point32__TYPE_NAME, 25, 25},
    },
    {NULL, 0, 0},
  },
  {
    {hyperdog_msgs__msg__Geometry__FIELD_NAME__fl, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {geometry_msgs__msg__Point32__TYPE_NAME, 25, 25},
    },
    {NULL, 0, 0},
  },
  {
    {hyperdog_msgs__msg__Geometry__FIELD_NAME__br, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {geometry_msgs__msg__Point32__TYPE_NAME, 25, 25},
    },
    {NULL, 0, 0},
  },
  {
    {hyperdog_msgs__msg__Geometry__FIELD_NAME__bl, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {geometry_msgs__msg__Point32__TYPE_NAME, 25, 25},
    },
    {NULL, 0, 0},
  },
  {
    {hyperdog_msgs__msg__Geometry__FIELD_NAME__euler_ang, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {geometry_msgs__msg__Quaternion__TYPE_NAME, 28, 28},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription hyperdog_msgs__msg__Geometry__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {geometry_msgs__msg__Point32__TYPE_NAME, 25, 25},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Quaternion__TYPE_NAME, 28, 28},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
hyperdog_msgs__msg__Geometry__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {hyperdog_msgs__msg__Geometry__TYPE_NAME, 26, 26},
      {hyperdog_msgs__msg__Geometry__FIELDS, 5, 5},
    },
    {hyperdog_msgs__msg__Geometry__REFERENCED_TYPE_DESCRIPTIONS, 2, 2},
  };
  if (!constructed) {
    assert(0 == memcmp(&geometry_msgs__msg__Point32__EXPECTED_HASH, geometry_msgs__msg__Point32__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = geometry_msgs__msg__Point32__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Quaternion__EXPECTED_HASH, geometry_msgs__msg__Quaternion__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = geometry_msgs__msg__Quaternion__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# information of pose of the each leg and orientation of the body\n"
  "\n"
  "\n"
  "geometry_msgs/Point32 fr\n"
  "geometry_msgs/Point32 fl\n"
  "geometry_msgs/Point32 br\n"
  "geometry_msgs/Point32 bl\n"
  "geometry_msgs/Quaternion euler_ang\n"
  "";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
hyperdog_msgs__msg__Geometry__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {hyperdog_msgs__msg__Geometry__TYPE_NAME, 26, 26},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 204, 204},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
hyperdog_msgs__msg__Geometry__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[3];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 3, 3};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *hyperdog_msgs__msg__Geometry__get_individual_type_description_source(NULL),
    sources[1] = *geometry_msgs__msg__Point32__get_individual_type_description_source(NULL);
    sources[2] = *geometry_msgs__msg__Quaternion__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
