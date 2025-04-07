// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from hello_ev_interfaces:srv/String.idl
// generated code does not contain a copyright notice
#include "hello_ev_interfaces/srv/detail/string__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "hello_ev_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "hello_ev_interfaces/srv/detail/string__struct.h"
#include "hello_ev_interfaces/srv/detail/string__functions.h"
#include "fastcdr/Cdr.h"

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

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/string.h"  // request
#include "rosidl_runtime_c/string_functions.h"  // request

// forward declare type support functions


using _String_Request__ros_msg_type = hello_ev_interfaces__srv__String_Request;

static bool _String_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _String_Request__ros_msg_type * ros_message = static_cast<const _String_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: request
  {
    const rosidl_runtime_c__String * str = &ros_message->request;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

static bool _String_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _String_Request__ros_msg_type * ros_message = static_cast<_String_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: request
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->request.data) {
      rosidl_runtime_c__String__init(&ros_message->request);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->request,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'request'\n");
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_hello_ev_interfaces
size_t get_serialized_size_hello_ev_interfaces__srv__String_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _String_Request__ros_msg_type * ros_message = static_cast<const _String_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name request
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->request.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _String_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_hello_ev_interfaces__srv__String_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_hello_ev_interfaces
size_t max_serialized_size_hello_ev_interfaces__srv__String_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: request
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _String_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_hello_ev_interfaces__srv__String_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_String_Request = {
  "hello_ev_interfaces::srv",
  "String_Request",
  _String_Request__cdr_serialize,
  _String_Request__cdr_deserialize,
  _String_Request__get_serialized_size,
  _String_Request__max_serialized_size
};

static rosidl_message_type_support_t _String_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_String_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, hello_ev_interfaces, srv, String_Request)() {
  return &_String_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "hello_ev_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "hello_ev_interfaces/srv/detail/string__struct.h"
// already included above
// #include "hello_ev_interfaces/srv/detail/string__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

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

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

// already included above
// #include "rosidl_runtime_c/string.h"  // response
// already included above
// #include "rosidl_runtime_c/string_functions.h"  // response

// forward declare type support functions


using _String_Response__ros_msg_type = hello_ev_interfaces__srv__String_Response;

static bool _String_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _String_Response__ros_msg_type * ros_message = static_cast<const _String_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: response
  {
    const rosidl_runtime_c__String * str = &ros_message->response;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

static bool _String_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _String_Response__ros_msg_type * ros_message = static_cast<_String_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: response
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->response.data) {
      rosidl_runtime_c__String__init(&ros_message->response);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->response,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'response'\n");
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_hello_ev_interfaces
size_t get_serialized_size_hello_ev_interfaces__srv__String_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _String_Response__ros_msg_type * ros_message = static_cast<const _String_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name response
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->response.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _String_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_hello_ev_interfaces__srv__String_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_hello_ev_interfaces
size_t max_serialized_size_hello_ev_interfaces__srv__String_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: response
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _String_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_hello_ev_interfaces__srv__String_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_String_Response = {
  "hello_ev_interfaces::srv",
  "String_Response",
  _String_Response__cdr_serialize,
  _String_Response__cdr_deserialize,
  _String_Response__get_serialized_size,
  _String_Response__max_serialized_size
};

static rosidl_message_type_support_t _String_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_String_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, hello_ev_interfaces, srv, String_Response)() {
  return &_String_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "hello_ev_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "hello_ev_interfaces/srv/string.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t String__callbacks = {
  "hello_ev_interfaces::srv",
  "String",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, hello_ev_interfaces, srv, String_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, hello_ev_interfaces, srv, String_Response)(),
};

static rosidl_service_type_support_t String__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &String__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, hello_ev_interfaces, srv, String)() {
  return &String__handle;
}

#if defined(__cplusplus)
}
#endif
