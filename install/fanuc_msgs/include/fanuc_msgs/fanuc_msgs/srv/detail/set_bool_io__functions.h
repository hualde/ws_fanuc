// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from fanuc_msgs:srv/SetBoolIO.idl
// generated code does not contain a copyright notice

#ifndef FANUC_MSGS__SRV__DETAIL__SET_BOOL_IO__FUNCTIONS_H_
#define FANUC_MSGS__SRV__DETAIL__SET_BOOL_IO__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "fanuc_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "fanuc_msgs/srv/detail/set_bool_io__struct.h"

/// Initialize srv/SetBoolIO message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * fanuc_msgs__srv__SetBoolIO_Request
 * )) before or use
 * fanuc_msgs__srv__SetBoolIO_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_fanuc_msgs
bool
fanuc_msgs__srv__SetBoolIO_Request__init(fanuc_msgs__srv__SetBoolIO_Request * msg);

/// Finalize srv/SetBoolIO message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_fanuc_msgs
void
fanuc_msgs__srv__SetBoolIO_Request__fini(fanuc_msgs__srv__SetBoolIO_Request * msg);

/// Create srv/SetBoolIO message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * fanuc_msgs__srv__SetBoolIO_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_fanuc_msgs
fanuc_msgs__srv__SetBoolIO_Request *
fanuc_msgs__srv__SetBoolIO_Request__create();

/// Destroy srv/SetBoolIO message.
/**
 * It calls
 * fanuc_msgs__srv__SetBoolIO_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_fanuc_msgs
void
fanuc_msgs__srv__SetBoolIO_Request__destroy(fanuc_msgs__srv__SetBoolIO_Request * msg);

/// Check for srv/SetBoolIO message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_fanuc_msgs
bool
fanuc_msgs__srv__SetBoolIO_Request__are_equal(const fanuc_msgs__srv__SetBoolIO_Request * lhs, const fanuc_msgs__srv__SetBoolIO_Request * rhs);

/// Copy a srv/SetBoolIO message.
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
fanuc_msgs__srv__SetBoolIO_Request__copy(
  const fanuc_msgs__srv__SetBoolIO_Request * input,
  fanuc_msgs__srv__SetBoolIO_Request * output);

/// Initialize array of srv/SetBoolIO messages.
/**
 * It allocates the memory for the number of elements and calls
 * fanuc_msgs__srv__SetBoolIO_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_fanuc_msgs
bool
fanuc_msgs__srv__SetBoolIO_Request__Sequence__init(fanuc_msgs__srv__SetBoolIO_Request__Sequence * array, size_t size);

/// Finalize array of srv/SetBoolIO messages.
/**
 * It calls
 * fanuc_msgs__srv__SetBoolIO_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_fanuc_msgs
void
fanuc_msgs__srv__SetBoolIO_Request__Sequence__fini(fanuc_msgs__srv__SetBoolIO_Request__Sequence * array);

/// Create array of srv/SetBoolIO messages.
/**
 * It allocates the memory for the array and calls
 * fanuc_msgs__srv__SetBoolIO_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_fanuc_msgs
fanuc_msgs__srv__SetBoolIO_Request__Sequence *
fanuc_msgs__srv__SetBoolIO_Request__Sequence__create(size_t size);

/// Destroy array of srv/SetBoolIO messages.
/**
 * It calls
 * fanuc_msgs__srv__SetBoolIO_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_fanuc_msgs
void
fanuc_msgs__srv__SetBoolIO_Request__Sequence__destroy(fanuc_msgs__srv__SetBoolIO_Request__Sequence * array);

/// Check for srv/SetBoolIO message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_fanuc_msgs
bool
fanuc_msgs__srv__SetBoolIO_Request__Sequence__are_equal(const fanuc_msgs__srv__SetBoolIO_Request__Sequence * lhs, const fanuc_msgs__srv__SetBoolIO_Request__Sequence * rhs);

/// Copy an array of srv/SetBoolIO messages.
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
fanuc_msgs__srv__SetBoolIO_Request__Sequence__copy(
  const fanuc_msgs__srv__SetBoolIO_Request__Sequence * input,
  fanuc_msgs__srv__SetBoolIO_Request__Sequence * output);

/// Initialize srv/SetBoolIO message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * fanuc_msgs__srv__SetBoolIO_Response
 * )) before or use
 * fanuc_msgs__srv__SetBoolIO_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_fanuc_msgs
bool
fanuc_msgs__srv__SetBoolIO_Response__init(fanuc_msgs__srv__SetBoolIO_Response * msg);

/// Finalize srv/SetBoolIO message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_fanuc_msgs
void
fanuc_msgs__srv__SetBoolIO_Response__fini(fanuc_msgs__srv__SetBoolIO_Response * msg);

/// Create srv/SetBoolIO message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * fanuc_msgs__srv__SetBoolIO_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_fanuc_msgs
fanuc_msgs__srv__SetBoolIO_Response *
fanuc_msgs__srv__SetBoolIO_Response__create();

/// Destroy srv/SetBoolIO message.
/**
 * It calls
 * fanuc_msgs__srv__SetBoolIO_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_fanuc_msgs
void
fanuc_msgs__srv__SetBoolIO_Response__destroy(fanuc_msgs__srv__SetBoolIO_Response * msg);

/// Check for srv/SetBoolIO message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_fanuc_msgs
bool
fanuc_msgs__srv__SetBoolIO_Response__are_equal(const fanuc_msgs__srv__SetBoolIO_Response * lhs, const fanuc_msgs__srv__SetBoolIO_Response * rhs);

/// Copy a srv/SetBoolIO message.
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
fanuc_msgs__srv__SetBoolIO_Response__copy(
  const fanuc_msgs__srv__SetBoolIO_Response * input,
  fanuc_msgs__srv__SetBoolIO_Response * output);

/// Initialize array of srv/SetBoolIO messages.
/**
 * It allocates the memory for the number of elements and calls
 * fanuc_msgs__srv__SetBoolIO_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_fanuc_msgs
bool
fanuc_msgs__srv__SetBoolIO_Response__Sequence__init(fanuc_msgs__srv__SetBoolIO_Response__Sequence * array, size_t size);

/// Finalize array of srv/SetBoolIO messages.
/**
 * It calls
 * fanuc_msgs__srv__SetBoolIO_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_fanuc_msgs
void
fanuc_msgs__srv__SetBoolIO_Response__Sequence__fini(fanuc_msgs__srv__SetBoolIO_Response__Sequence * array);

/// Create array of srv/SetBoolIO messages.
/**
 * It allocates the memory for the array and calls
 * fanuc_msgs__srv__SetBoolIO_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_fanuc_msgs
fanuc_msgs__srv__SetBoolIO_Response__Sequence *
fanuc_msgs__srv__SetBoolIO_Response__Sequence__create(size_t size);

/// Destroy array of srv/SetBoolIO messages.
/**
 * It calls
 * fanuc_msgs__srv__SetBoolIO_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_fanuc_msgs
void
fanuc_msgs__srv__SetBoolIO_Response__Sequence__destroy(fanuc_msgs__srv__SetBoolIO_Response__Sequence * array);

/// Check for srv/SetBoolIO message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_fanuc_msgs
bool
fanuc_msgs__srv__SetBoolIO_Response__Sequence__are_equal(const fanuc_msgs__srv__SetBoolIO_Response__Sequence * lhs, const fanuc_msgs__srv__SetBoolIO_Response__Sequence * rhs);

/// Copy an array of srv/SetBoolIO messages.
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
fanuc_msgs__srv__SetBoolIO_Response__Sequence__copy(
  const fanuc_msgs__srv__SetBoolIO_Response__Sequence * input,
  fanuc_msgs__srv__SetBoolIO_Response__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // FANUC_MSGS__SRV__DETAIL__SET_BOOL_IO__FUNCTIONS_H_
