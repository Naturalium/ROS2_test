// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from my_interfaces:msg/TargetCoordinates.idl
// generated code does not contain a copyright notice

#ifndef MY_INTERFACES__MSG__DETAIL__TARGET_COORDINATES__STRUCT_H_
#define MY_INTERFACES__MSG__DETAIL__TARGET_COORDINATES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/TargetCoordinates in the package my_interfaces.
typedef struct my_interfaces__msg__TargetCoordinates
{
  uint8_t structure_needs_at_least_one_member;
} my_interfaces__msg__TargetCoordinates;

// Struct for a sequence of my_interfaces__msg__TargetCoordinates.
typedef struct my_interfaces__msg__TargetCoordinates__Sequence
{
  my_interfaces__msg__TargetCoordinates * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_interfaces__msg__TargetCoordinates__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MY_INTERFACES__MSG__DETAIL__TARGET_COORDINATES__STRUCT_H_
