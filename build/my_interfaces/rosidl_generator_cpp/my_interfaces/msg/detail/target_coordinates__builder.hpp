// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from my_interfaces:msg/TargetCoordinates.idl
// generated code does not contain a copyright notice

#ifndef MY_INTERFACES__MSG__DETAIL__TARGET_COORDINATES__BUILDER_HPP_
#define MY_INTERFACES__MSG__DETAIL__TARGET_COORDINATES__BUILDER_HPP_

#include "my_interfaces/msg/detail/target_coordinates__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace my_interfaces
{

namespace msg
{


}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_interfaces::msg::TargetCoordinates>()
{
  return ::my_interfaces::msg::TargetCoordinates(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace my_interfaces

#endif  // MY_INTERFACES__MSG__DETAIL__TARGET_COORDINATES__BUILDER_HPP_
