// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from arucosrvmsg:msg/ArucoMarkers.idl
// generated code does not contain a copyright notice

#ifndef ARUCOSRVMSG__MSG__DETAIL__ARUCO_MARKERS__FUNCTIONS_H_
#define ARUCOSRVMSG__MSG__DETAIL__ARUCO_MARKERS__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "arucosrvmsg/msg/rosidl_generator_c__visibility_control.h"

#include "arucosrvmsg/msg/detail/aruco_markers__struct.h"

/// Initialize msg/ArucoMarkers message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * arucosrvmsg__msg__ArucoMarkers
 * )) before or use
 * arucosrvmsg__msg__ArucoMarkers__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_arucosrvmsg
bool
arucosrvmsg__msg__ArucoMarkers__init(arucosrvmsg__msg__ArucoMarkers * msg);

/// Finalize msg/ArucoMarkers message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_arucosrvmsg
void
arucosrvmsg__msg__ArucoMarkers__fini(arucosrvmsg__msg__ArucoMarkers * msg);

/// Create msg/ArucoMarkers message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * arucosrvmsg__msg__ArucoMarkers__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_arucosrvmsg
arucosrvmsg__msg__ArucoMarkers *
arucosrvmsg__msg__ArucoMarkers__create();

/// Destroy msg/ArucoMarkers message.
/**
 * It calls
 * arucosrvmsg__msg__ArucoMarkers__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_arucosrvmsg
void
arucosrvmsg__msg__ArucoMarkers__destroy(arucosrvmsg__msg__ArucoMarkers * msg);

/// Check for msg/ArucoMarkers message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_arucosrvmsg
bool
arucosrvmsg__msg__ArucoMarkers__are_equal(const arucosrvmsg__msg__ArucoMarkers * lhs, const arucosrvmsg__msg__ArucoMarkers * rhs);

/// Copy a msg/ArucoMarkers message.
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
ROSIDL_GENERATOR_C_PUBLIC_arucosrvmsg
bool
arucosrvmsg__msg__ArucoMarkers__copy(
  const arucosrvmsg__msg__ArucoMarkers * input,
  arucosrvmsg__msg__ArucoMarkers * output);

/// Initialize array of msg/ArucoMarkers messages.
/**
 * It allocates the memory for the number of elements and calls
 * arucosrvmsg__msg__ArucoMarkers__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_arucosrvmsg
bool
arucosrvmsg__msg__ArucoMarkers__Sequence__init(arucosrvmsg__msg__ArucoMarkers__Sequence * array, size_t size);

/// Finalize array of msg/ArucoMarkers messages.
/**
 * It calls
 * arucosrvmsg__msg__ArucoMarkers__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_arucosrvmsg
void
arucosrvmsg__msg__ArucoMarkers__Sequence__fini(arucosrvmsg__msg__ArucoMarkers__Sequence * array);

/// Create array of msg/ArucoMarkers messages.
/**
 * It allocates the memory for the array and calls
 * arucosrvmsg__msg__ArucoMarkers__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_arucosrvmsg
arucosrvmsg__msg__ArucoMarkers__Sequence *
arucosrvmsg__msg__ArucoMarkers__Sequence__create(size_t size);

/// Destroy array of msg/ArucoMarkers messages.
/**
 * It calls
 * arucosrvmsg__msg__ArucoMarkers__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_arucosrvmsg
void
arucosrvmsg__msg__ArucoMarkers__Sequence__destroy(arucosrvmsg__msg__ArucoMarkers__Sequence * array);

/// Check for msg/ArucoMarkers message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_arucosrvmsg
bool
arucosrvmsg__msg__ArucoMarkers__Sequence__are_equal(const arucosrvmsg__msg__ArucoMarkers__Sequence * lhs, const arucosrvmsg__msg__ArucoMarkers__Sequence * rhs);

/// Copy an array of msg/ArucoMarkers messages.
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
ROSIDL_GENERATOR_C_PUBLIC_arucosrvmsg
bool
arucosrvmsg__msg__ArucoMarkers__Sequence__copy(
  const arucosrvmsg__msg__ArucoMarkers__Sequence * input,
  arucosrvmsg__msg__ArucoMarkers__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // ARUCOSRVMSG__MSG__DETAIL__ARUCO_MARKERS__FUNCTIONS_H_
