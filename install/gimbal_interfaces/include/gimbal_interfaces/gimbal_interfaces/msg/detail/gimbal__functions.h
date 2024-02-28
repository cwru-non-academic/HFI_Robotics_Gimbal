// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from gimbal_interfaces:msg/Gimbal.idl
// generated code does not contain a copyright notice

#ifndef GIMBAL_INTERFACES__MSG__DETAIL__GIMBAL__FUNCTIONS_H_
#define GIMBAL_INTERFACES__MSG__DETAIL__GIMBAL__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "gimbal_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "gimbal_interfaces/msg/detail/gimbal__struct.h"

/// Initialize msg/Gimbal message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * gimbal_interfaces__msg__Gimbal
 * )) before or use
 * gimbal_interfaces__msg__Gimbal__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_gimbal_interfaces
bool
gimbal_interfaces__msg__Gimbal__init(gimbal_interfaces__msg__Gimbal * msg);

/// Finalize msg/Gimbal message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_gimbal_interfaces
void
gimbal_interfaces__msg__Gimbal__fini(gimbal_interfaces__msg__Gimbal * msg);

/// Create msg/Gimbal message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * gimbal_interfaces__msg__Gimbal__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_gimbal_interfaces
gimbal_interfaces__msg__Gimbal *
gimbal_interfaces__msg__Gimbal__create();

/// Destroy msg/Gimbal message.
/**
 * It calls
 * gimbal_interfaces__msg__Gimbal__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_gimbal_interfaces
void
gimbal_interfaces__msg__Gimbal__destroy(gimbal_interfaces__msg__Gimbal * msg);

/// Check for msg/Gimbal message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_gimbal_interfaces
bool
gimbal_interfaces__msg__Gimbal__are_equal(const gimbal_interfaces__msg__Gimbal * lhs, const gimbal_interfaces__msg__Gimbal * rhs);

/// Copy a msg/Gimbal message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_gimbal_interfaces
bool
gimbal_interfaces__msg__Gimbal__copy(
  const gimbal_interfaces__msg__Gimbal * input,
  gimbal_interfaces__msg__Gimbal * output);

/// Initialize array of msg/Gimbal messages.
/**
 * It allocates the memory for the number of elements and calls
 * gimbal_interfaces__msg__Gimbal__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_gimbal_interfaces
bool
gimbal_interfaces__msg__Gimbal__Sequence__init(gimbal_interfaces__msg__Gimbal__Sequence * array, size_t size);

/// Finalize array of msg/Gimbal messages.
/**
 * It calls
 * gimbal_interfaces__msg__Gimbal__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_gimbal_interfaces
void
gimbal_interfaces__msg__Gimbal__Sequence__fini(gimbal_interfaces__msg__Gimbal__Sequence * array);

/// Create array of msg/Gimbal messages.
/**
 * It allocates the memory for the array and calls
 * gimbal_interfaces__msg__Gimbal__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_gimbal_interfaces
gimbal_interfaces__msg__Gimbal__Sequence *
gimbal_interfaces__msg__Gimbal__Sequence__create(size_t size);

/// Destroy array of msg/Gimbal messages.
/**
 * It calls
 * gimbal_interfaces__msg__Gimbal__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_gimbal_interfaces
void
gimbal_interfaces__msg__Gimbal__Sequence__destroy(gimbal_interfaces__msg__Gimbal__Sequence * array);

/// Check for msg/Gimbal message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_gimbal_interfaces
bool
gimbal_interfaces__msg__Gimbal__Sequence__are_equal(const gimbal_interfaces__msg__Gimbal__Sequence * lhs, const gimbal_interfaces__msg__Gimbal__Sequence * rhs);

/// Copy an array of msg/Gimbal messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_gimbal_interfaces
bool
gimbal_interfaces__msg__Gimbal__Sequence__copy(
  const gimbal_interfaces__msg__Gimbal__Sequence * input,
  gimbal_interfaces__msg__Gimbal__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // GIMBAL_INTERFACES__MSG__DETAIL__GIMBAL__FUNCTIONS_H_
