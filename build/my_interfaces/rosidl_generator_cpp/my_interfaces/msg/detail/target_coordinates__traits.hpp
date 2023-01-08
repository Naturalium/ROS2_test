// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from my_interfaces:msg/TargetCoordinates.idl
// generated code does not contain a copyright notice

#ifndef MY_INTERFACES__MSG__DETAIL__TARGET_COORDINATES__TRAITS_HPP_
#define MY_INTERFACES__MSG__DETAIL__TARGET_COORDINATES__TRAITS_HPP_

#include "my_interfaces/msg/detail/target_coordinates__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<my_interfaces::msg::TargetCoordinates>()
{
  return "my_interfaces::msg::TargetCoordinates";
}

template<>
inline const char * name<my_interfaces::msg::TargetCoordinates>()
{
  return "my_interfaces/msg/TargetCoordinates";
}

template<>
struct has_fixed_size<my_interfaces::msg::TargetCoordinates>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<my_interfaces::msg::TargetCoordinates>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<my_interfaces::msg::TargetCoordinates>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MY_INTERFACES__MSG__DETAIL__TARGET_COORDINATES__TRAITS_HPP_
