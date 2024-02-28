// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from gimbal_interface:msg/Gimbal.idl
// generated code does not contain a copyright notice

#ifndef GIMBAL_INTERFACE__MSG__DETAIL__GIMBAL__TRAITS_HPP_
#define GIMBAL_INTERFACE__MSG__DETAIL__GIMBAL__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "gimbal_interface/msg/detail/gimbal__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace gimbal_interface
{

namespace msg
{

inline void to_flow_style_yaml(
  const Gimbal & msg,
  std::ostream & out)
{
  out << "{";
  // member: pan
  {
    out << "pan: ";
    rosidl_generator_traits::value_to_yaml(msg.pan, out);
    out << ", ";
  }

  // member: tilt
  {
    out << "tilt: ";
    rosidl_generator_traits::value_to_yaml(msg.tilt, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Gimbal & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: pan
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pan: ";
    rosidl_generator_traits::value_to_yaml(msg.pan, out);
    out << "\n";
  }

  // member: tilt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tilt: ";
    rosidl_generator_traits::value_to_yaml(msg.tilt, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Gimbal & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace gimbal_interface

namespace rosidl_generator_traits
{

[[deprecated("use gimbal_interface::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const gimbal_interface::msg::Gimbal & msg,
  std::ostream & out, size_t indentation = 0)
{
  gimbal_interface::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use gimbal_interface::msg::to_yaml() instead")]]
inline std::string to_yaml(const gimbal_interface::msg::Gimbal & msg)
{
  return gimbal_interface::msg::to_yaml(msg);
}

template<>
inline const char * data_type<gimbal_interface::msg::Gimbal>()
{
  return "gimbal_interface::msg::Gimbal";
}

template<>
inline const char * name<gimbal_interface::msg::Gimbal>()
{
  return "gimbal_interface/msg/Gimbal";
}

template<>
struct has_fixed_size<gimbal_interface::msg::Gimbal>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<gimbal_interface::msg::Gimbal>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<gimbal_interface::msg::Gimbal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // GIMBAL_INTERFACE__MSG__DETAIL__GIMBAL__TRAITS_HPP_
