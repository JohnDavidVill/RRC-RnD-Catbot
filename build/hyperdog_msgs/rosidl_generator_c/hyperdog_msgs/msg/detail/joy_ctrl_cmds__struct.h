// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from hyperdog_msgs:msg/JoyCtrlCmds.idl
// generated code does not contain a copyright notice

#ifndef HYPERDOG_MSGS__MSG__DETAIL__JOY_CTRL_CMDS__STRUCT_H_
#define HYPERDOG_MSGS__MSG__DETAIL__JOY_CTRL_CMDS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__struct.h"
// Member 'gait_step'
#include "geometry_msgs/msg/detail/vector3__struct.h"

/// Struct defined in msg/JoyCtrlCmds in the package hyperdog_msgs.
/**
  * std_msgs/Header header
 */
typedef struct hyperdog_msgs__msg__JoyCtrlCmds
{
  /// states represent the robot's states
  /// states[0] start
  /// states[1] walk
  /// states[2] side_move_mode
  bool states[3];
  /// This represent the type of selected gait: 0,1,2,3,....
  uint8_t gait_type;
  /// This represents the robot pose
  /// pose.position: slant-x, slant_y, height
  /// pose.orientation: roll, pitch, yaw
  geometry_msgs__msg__Pose pose;
  /// This represents the gait_step commands
  /// gait_step.x = steplen_x
  /// gait_step.y = steplen_y
  /// gait_step.z = swing_height
  geometry_msgs__msg__Vector3 gait_step;
} hyperdog_msgs__msg__JoyCtrlCmds;

// Struct for a sequence of hyperdog_msgs__msg__JoyCtrlCmds.
typedef struct hyperdog_msgs__msg__JoyCtrlCmds__Sequence
{
  hyperdog_msgs__msg__JoyCtrlCmds * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hyperdog_msgs__msg__JoyCtrlCmds__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // HYPERDOG_MSGS__MSG__DETAIL__JOY_CTRL_CMDS__STRUCT_H_
