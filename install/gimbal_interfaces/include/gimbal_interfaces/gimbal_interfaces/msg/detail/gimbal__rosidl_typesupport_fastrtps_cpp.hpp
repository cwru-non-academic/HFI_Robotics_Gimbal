// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from gimbal_interfaces:msg/Gimbal.idl
// generated code does not contain a copyright notice

#ifndef GIMBAL_INTERFACES__MSG__DETAIL__GIMBAL__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define GIMBAL_INTERFACES__MSG__DETAIL__GIMBAL__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "gimbal_interfaces/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "gimbal_interfaces/msg/detail/gimbal__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace gimbal_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_gimbal_interfaces
cdr_serialize(
  const gimbal_interfaces::msg::Gimbal & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_gimbal_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  gimbal_interfaces::msg::Gimbal & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_gimbal_interfaces
get_serialized_size(
  const gimbal_interfaces::msg::Gimbal & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_gimbal_interfaces
max_serialized_size_Gimbal(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace gimbal_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_gimbal_interfaces
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, gimbal_interfaces, msg, Gimbal)();

#ifdef __cplusplus
}
#endif

#endif  // GIMBAL_INTERFACES__MSG__DETAIL__GIMBAL__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
