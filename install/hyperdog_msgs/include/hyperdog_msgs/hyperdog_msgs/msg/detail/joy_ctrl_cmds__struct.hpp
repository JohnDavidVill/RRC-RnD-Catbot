// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from hyperdog_msgs:msg/JoyCtrlCmds.idl
// generated code does not contain a copyright notice

#ifndef HYPERDOG_MSGS__MSG__DETAIL__JOY_CTRL_CMDS__STRUCT_HPP_
#define HYPERDOG_MSGS__MSG__DETAIL__JOY_CTRL_CMDS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__struct.hpp"
// Member 'gait_step'
#include "geometry_msgs/msg/detail/vector3__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__hyperdog_msgs__msg__JoyCtrlCmds __attribute__((deprecated))
#else
# define DEPRECATED__hyperdog_msgs__msg__JoyCtrlCmds __declspec(deprecated)
#endif

namespace hyperdog_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct JoyCtrlCmds_
{
  using Type = JoyCtrlCmds_<ContainerAllocator>;

  explicit JoyCtrlCmds_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pose(_init),
    gait_step(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->gait_type = 0;
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      std::fill<typename std::array<bool, 3>::iterator, bool>(this->states.begin(), this->states.end(), false);
      this->gait_type = 0;
    }
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<bool, 3>::iterator, bool>(this->states.begin(), this->states.end(), false);
    }
  }

  explicit JoyCtrlCmds_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : states(_alloc),
    pose(_alloc, _init),
    gait_step(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->gait_type = 0;
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      std::fill<typename std::array<bool, 3>::iterator, bool>(this->states.begin(), this->states.end(), false);
      this->gait_type = 0;
    }
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<bool, 3>::iterator, bool>(this->states.begin(), this->states.end(), false);
    }
  }

  // field types and members
  using _states_type =
    std::array<bool, 3>;
  _states_type states;
  using _gait_type_type =
    uint8_t;
  _gait_type_type gait_type;
  using _pose_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _pose_type pose;
  using _gait_step_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _gait_step_type gait_step;

  // setters for named parameter idiom
  Type & set__states(
    const std::array<bool, 3> & _arg)
  {
    this->states = _arg;
    return *this;
  }
  Type & set__gait_type(
    const uint8_t & _arg)
  {
    this->gait_type = _arg;
    return *this;
  }
  Type & set__pose(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->pose = _arg;
    return *this;
  }
  Type & set__gait_step(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->gait_step = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    hyperdog_msgs::msg::JoyCtrlCmds_<ContainerAllocator> *;
  using ConstRawPtr =
    const hyperdog_msgs::msg::JoyCtrlCmds_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<hyperdog_msgs::msg::JoyCtrlCmds_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<hyperdog_msgs::msg::JoyCtrlCmds_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      hyperdog_msgs::msg::JoyCtrlCmds_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<hyperdog_msgs::msg::JoyCtrlCmds_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      hyperdog_msgs::msg::JoyCtrlCmds_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<hyperdog_msgs::msg::JoyCtrlCmds_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<hyperdog_msgs::msg::JoyCtrlCmds_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<hyperdog_msgs::msg::JoyCtrlCmds_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__hyperdog_msgs__msg__JoyCtrlCmds
    std::shared_ptr<hyperdog_msgs::msg::JoyCtrlCmds_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__hyperdog_msgs__msg__JoyCtrlCmds
    std::shared_ptr<hyperdog_msgs::msg::JoyCtrlCmds_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const JoyCtrlCmds_ & other) const
  {
    if (this->states != other.states) {
      return false;
    }
    if (this->gait_type != other.gait_type) {
      return false;
    }
    if (this->pose != other.pose) {
      return false;
    }
    if (this->gait_step != other.gait_step) {
      return false;
    }
    return true;
  }
  bool operator!=(const JoyCtrlCmds_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct JoyCtrlCmds_

// alias to use template instance with default allocator
using JoyCtrlCmds =
  hyperdog_msgs::msg::JoyCtrlCmds_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace hyperdog_msgs

#endif  // HYPERDOG_MSGS__MSG__DETAIL__JOY_CTRL_CMDS__STRUCT_HPP_
