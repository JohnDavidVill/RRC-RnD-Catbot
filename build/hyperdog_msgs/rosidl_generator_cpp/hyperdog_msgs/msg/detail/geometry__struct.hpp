// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from hyperdog_msgs:msg/Geometry.idl
// generated code does not contain a copyright notice

#ifndef HYPERDOG_MSGS__MSG__DETAIL__GEOMETRY__STRUCT_HPP_
#define HYPERDOG_MSGS__MSG__DETAIL__GEOMETRY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'fr'
// Member 'fl'
// Member 'br'
// Member 'bl'
#include "geometry_msgs/msg/detail/point32__struct.hpp"
// Member 'euler_ang'
#include "geometry_msgs/msg/detail/quaternion__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__hyperdog_msgs__msg__Geometry __attribute__((deprecated))
#else
# define DEPRECATED__hyperdog_msgs__msg__Geometry __declspec(deprecated)
#endif

namespace hyperdog_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Geometry_
{
  using Type = Geometry_<ContainerAllocator>;

  explicit Geometry_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : fr(_init),
    fl(_init),
    br(_init),
    bl(_init),
    euler_ang(_init)
  {
    (void)_init;
  }

  explicit Geometry_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : fr(_alloc, _init),
    fl(_alloc, _init),
    br(_alloc, _init),
    bl(_alloc, _init),
    euler_ang(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _fr_type =
    geometry_msgs::msg::Point32_<ContainerAllocator>;
  _fr_type fr;
  using _fl_type =
    geometry_msgs::msg::Point32_<ContainerAllocator>;
  _fl_type fl;
  using _br_type =
    geometry_msgs::msg::Point32_<ContainerAllocator>;
  _br_type br;
  using _bl_type =
    geometry_msgs::msg::Point32_<ContainerAllocator>;
  _bl_type bl;
  using _euler_ang_type =
    geometry_msgs::msg::Quaternion_<ContainerAllocator>;
  _euler_ang_type euler_ang;

  // setters for named parameter idiom
  Type & set__fr(
    const geometry_msgs::msg::Point32_<ContainerAllocator> & _arg)
  {
    this->fr = _arg;
    return *this;
  }
  Type & set__fl(
    const geometry_msgs::msg::Point32_<ContainerAllocator> & _arg)
  {
    this->fl = _arg;
    return *this;
  }
  Type & set__br(
    const geometry_msgs::msg::Point32_<ContainerAllocator> & _arg)
  {
    this->br = _arg;
    return *this;
  }
  Type & set__bl(
    const geometry_msgs::msg::Point32_<ContainerAllocator> & _arg)
  {
    this->bl = _arg;
    return *this;
  }
  Type & set__euler_ang(
    const geometry_msgs::msg::Quaternion_<ContainerAllocator> & _arg)
  {
    this->euler_ang = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    hyperdog_msgs::msg::Geometry_<ContainerAllocator> *;
  using ConstRawPtr =
    const hyperdog_msgs::msg::Geometry_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<hyperdog_msgs::msg::Geometry_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<hyperdog_msgs::msg::Geometry_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      hyperdog_msgs::msg::Geometry_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<hyperdog_msgs::msg::Geometry_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      hyperdog_msgs::msg::Geometry_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<hyperdog_msgs::msg::Geometry_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<hyperdog_msgs::msg::Geometry_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<hyperdog_msgs::msg::Geometry_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__hyperdog_msgs__msg__Geometry
    std::shared_ptr<hyperdog_msgs::msg::Geometry_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__hyperdog_msgs__msg__Geometry
    std::shared_ptr<hyperdog_msgs::msg::Geometry_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Geometry_ & other) const
  {
    if (this->fr != other.fr) {
      return false;
    }
    if (this->fl != other.fl) {
      return false;
    }
    if (this->br != other.br) {
      return false;
    }
    if (this->bl != other.bl) {
      return false;
    }
    if (this->euler_ang != other.euler_ang) {
      return false;
    }
    return true;
  }
  bool operator!=(const Geometry_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Geometry_

// alias to use template instance with default allocator
using Geometry =
  hyperdog_msgs::msg::Geometry_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace hyperdog_msgs

#endif  // HYPERDOG_MSGS__MSG__DETAIL__GEOMETRY__STRUCT_HPP_
