// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from my_interfaces:msg/Sphere.idl
// generated code does not contain a copyright notice

#ifndef MY_INTERFACES__MSG__DETAIL__SPHERE__TRAITS_HPP_
#define MY_INTERFACES__MSG__DETAIL__SPHERE__TRAITS_HPP_

#include "my_interfaces/msg/detail/sphere__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'center'
#include "geometry_msgs/msg/detail/point__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<my_interfaces::msg::Sphere>()
{
  return "my_interfaces::msg::Sphere";
}

template<>
inline const char * name<my_interfaces::msg::Sphere>()
{
  return "my_interfaces/msg/Sphere";
}

template<>
struct has_fixed_size<my_interfaces::msg::Sphere>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Point>::value> {};

template<>
struct has_bounded_size<my_interfaces::msg::Sphere>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Point>::value> {};

template<>
struct is_message<my_interfaces::msg::Sphere>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MY_INTERFACES__MSG__DETAIL__SPHERE__TRAITS_HPP_
