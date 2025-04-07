// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from hello_ev_interfaces:srv/String.idl
// generated code does not contain a copyright notice

#ifndef HELLO_EV_INTERFACES__SRV__DETAIL__STRING__STRUCT_H_
#define HELLO_EV_INTERFACES__SRV__DETAIL__STRING__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'request'
#include "rosidl_runtime_c/string.h"

// Struct defined in srv/String in the package hello_ev_interfaces.
typedef struct hello_ev_interfaces__srv__String_Request
{
  rosidl_runtime_c__String request;
} hello_ev_interfaces__srv__String_Request;

// Struct for a sequence of hello_ev_interfaces__srv__String_Request.
typedef struct hello_ev_interfaces__srv__String_Request__Sequence
{
  hello_ev_interfaces__srv__String_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hello_ev_interfaces__srv__String_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'response'
// already included above
// #include "rosidl_runtime_c/string.h"

// Struct defined in srv/String in the package hello_ev_interfaces.
typedef struct hello_ev_interfaces__srv__String_Response
{
  rosidl_runtime_c__String response;
} hello_ev_interfaces__srv__String_Response;

// Struct for a sequence of hello_ev_interfaces__srv__String_Response.
typedef struct hello_ev_interfaces__srv__String_Response__Sequence
{
  hello_ev_interfaces__srv__String_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hello_ev_interfaces__srv__String_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // HELLO_EV_INTERFACES__SRV__DETAIL__STRING__STRUCT_H_
