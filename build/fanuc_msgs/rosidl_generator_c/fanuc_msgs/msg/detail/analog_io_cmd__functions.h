// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from fanuc_msgs:msg/AnalogIOCmd.idl
// generated code does not contain a copyright notice

#ifndef FANUC_MSGS__MSG__DETAIL__ANALOG_IO_CMD__FUNCTIONS_H_
#define FANUC_MSGS__MSG__DETAIL__ANALOG_IO_CMD__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "fanuc_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "fanuc_msgs/msg/detail/analog_io_cmd__struct.h"

/// Initialize msg/AnalogIOCmd message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * fanuc_msgs__msg__AnalogIOCmd
 * )) before or use
 * fanuc_msgs__msg__AnalogIOCmd__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_fanuc_msgs
bool
fanuc_msgs__msg__AnalogIOCmd__init(fanuc_msgs__msg__AnalogIOCmd * msg);

/// Finalize msg/AnalogIOCmd message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_fanuc_msgs
void
fanuc_msgs__msg__AnalogIOCmd__fini(fanuc_msgs__msg__AnalogIOCmd * msg);

/// Create msg/AnalogIOCmd message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * fanuc_msgs__msg__AnalogIOCmd__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_fanuc_msgs
fanuc_msgs__msg__AnalogIOCmd *
fanuc_msgs__msg__AnalogIOCmd__create();

/// Destroy msg/AnalogIOCmd message.
/**
 * It calls
 * fanuc_msgs__msg__AnalogIOCmd__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_fanuc_msgs
void
fanuc_msgs__msg__AnalogIOCmd__destroy(fanuc_msgs__msg__AnalogIOCmd * msg);

/// Check for msg/AnalogIOCmd message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_fanuc_msgs
bool
fanuc_msgs__msg__AnalogIOCmd__are_equal(const fanuc_msgs__msg__AnalogIOCmd * lhs, const fanuc_msgs__msg__AnalogIOCmd * rhs);

/// Copy a msg/AnalogIOCmd message.
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
ROSIDL_GENERATOR_C_PUBLIC_fanuc_msgs
bool
fanuc_msgs__msg__AnalogIOCmd__copy(
  const fanuc_msgs__msg__AnalogIOCmd * input,
  fanuc_msgs__msg__AnalogIOCmd * output);

/// Initialize array of msg/AnalogIOCmd messages.
/**
 * It allocates the memory for the number of elements and calls
 * fanuc_msgs__msg__AnalogIOCmd__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_fanuc_msgs
bool
fanuc_msgs__msg__AnalogIOCmd__Sequence__init(fanuc_msgs__msg__AnalogIOCmd__Sequence * array, size_t size);

/// Finalize array of msg/AnalogIOCmd messages.
/**
 * It calls
 * fanuc_msgs__msg__AnalogIOCmd__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_fanuc_msgs
void
fanuc_msgs__msg__AnalogIOCmd__Sequence__fini(fanuc_msgs__msg__AnalogIOCmd__Sequence * array);

/// Create array of msg/AnalogIOCmd messages.
/**
 * It allocates the memory for the array and calls
 * fanuc_msgs__msg__AnalogIOCmd__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_fanuc_msgs
fanuc_msgs__msg__AnalogIOCmd__Sequence *
fanuc_msgs__msg__AnalogIOCmd__Sequence__create(size_t size);

/// Destroy array of msg/AnalogIOCmd messages.
/**
 * It calls
 * fanuc_msgs__msg__AnalogIOCmd__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_fanuc_msgs
void
fanuc_msgs__msg__AnalogIOCmd__Sequence__destroy(fanuc_msgs__msg__AnalogIOCmd__Sequence * array);

/// Check for msg/AnalogIOCmd message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_fanuc_msgs
bool
fanuc_msgs__msg__AnalogIOCmd__Sequence__are_equal(const fanuc_msgs__msg__AnalogIOCmd__Sequence * lhs, const fanuc_msgs__msg__AnalogIOCmd__Sequence * rhs);

/// Copy an array of msg/AnalogIOCmd messages.
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
ROSIDL_GENERATOR_C_PUBLIC_fanuc_msgs
bool
fanuc_msgs__msg__AnalogIOCmd__Sequence__copy(
  const fanuc_msgs__msg__AnalogIOCmd__Sequence * input,
  fanuc_msgs__msg__AnalogIOCmd__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // FANUC_MSGS__MSG__DETAIL__ANALOG_IO_CMD__FUNCTIONS_H_
