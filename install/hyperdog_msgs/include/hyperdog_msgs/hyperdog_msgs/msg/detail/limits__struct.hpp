// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from hyperdog_msgs:msg/Limits.idl
// generated code does not contain a copyright notice

#ifndef HYPERDOG_MSGS__MSG__DETAIL__LIMITS__STRUCT_HPP_
#define HYPERDOG_MSGS__MSG__DETAIL__LIMITS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__hyperdog_msgs__msg__Limits __attribute__((deprecated))
#else
# define DEPRECATED__hyperdog_msgs__msg__Limits __declspec(deprecated)
#endif

namespace hyperdog_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Limits_
{
  using Type = Limits_<ContainerAllocator>;

  explicit Limits_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->eular_ang_range[0] = 40;
      this->eular_ang_range[1] = 45;
      this->eular_ang_range[2] = 50;
      this->height_range[0] = 80;
      this->height_range[1] = 240;
      std::fill<typename std::array<int16_t, 2>::iterator, int16_t>(this->steplength_range.begin(), this->steplength_range.end(), 250);
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      std::fill<typename std::array<int16_t, 3>::iterator, int16_t>(this->eular_ang_range.begin(), this->eular_ang_range.end(), 0);
      std::fill<typename std::array<int16_t, 2>::iterator, int16_t>(this->height_range.begin(), this->height_range.end(), 0);
      std::fill<typename std::array<int16_t, 2>::iterator, int16_t>(this->steplength_range.begin(), this->steplength_range.end(), 0);
    }
  }

  explicit Limits_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : eular_ang_range(_alloc),
    height_range(_alloc),
    steplength_range(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->eular_ang_range[0] = 40;
      this->eular_ang_range[1] = 45;
      this->eular_ang_range[2] = 50;
      this->height_range[0] = 80;
      this->height_range[1] = 240;
      std::fill<typename std::array<int16_t, 2>::iterator, int16_t>(this->steplength_range.begin(), this->steplength_range.end(), 250);
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      std::fill<typename std::array<int16_t, 3>::iterator, int16_t>(this->eular_ang_range.begin(), this->eular_ang_range.end(), 0);
      std::fill<typename std::array<int16_t, 2>::iterator, int16_t>(this->height_range.begin(), this->height_range.end(), 0);
      std::fill<typename std::array<int16_t, 2>::iterator, int16_t>(this->steplength_range.begin(), this->steplength_range.end(), 0);
    }
  }

  // field types and members
  using _eular_ang_range_type =
    std::array<int16_t, 3>;
  _eular_ang_range_type eular_ang_range;
  using _height_range_type =
    std::array<int16_t, 2>;
  _height_range_type height_range;
  using _steplength_range_type =
    std::array<int16_t, 2>;
  _steplength_range_type steplength_range;

  // setters for named parameter idiom
  Type & set__eular_ang_range(
    const std::array<int16_t, 3> & _arg)
  {
    this->eular_ang_range = _arg;
    return *this;
  }
  Type & set__height_range(
    const std::array<int16_t, 2> & _arg)
  {
    this->height_range = _arg;
    return *this;
  }
  Type & set__steplength_range(
    const std::array<int16_t, 2> & _arg)
  {
    this->steplength_range = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    hyperdog_msgs::msg::Limits_<ContainerAllocator> *;
  using ConstRawPtr =
    const hyperdog_msgs::msg::Limits_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<hyperdog_msgs::msg::Limits_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<hyperdog_msgs::msg::Limits_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      hyperdog_msgs::msg::Limits_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<hyperdog_msgs::msg::Limits_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      hyperdog_msgs::msg::Limits_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<hyperdog_msgs::msg::Limits_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<hyperdog_msgs::msg::Limits_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<hyperdog_msgs::msg::Limits_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__hyperdog_msgs__msg__Limits
    std::shared_ptr<hyperdog_msgs::msg::Limits_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__hyperdog_msgs__msg__Limits
    std::shared_ptr<hyperdog_msgs::msg::Limits_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Limits_ & other) const
  {
    if (this->eular_ang_range != other.eular_ang_range) {
      return false;
    }
    if (this->height_range != other.height_range) {
      return false;
    }
    if (this->steplength_range != other.steplength_range) {
      return false;
    }
    return true;
  }
  bool operator!=(const Limits_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Limits_

// alias to use template instance with default allocator
using Limits =
  hyperdog_msgs::msg::Limits_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace hyperdog_msgs

#endif  // HYPERDOG_MSGS__MSG__DETAIL__LIMITS__STRUCT_HPP_
