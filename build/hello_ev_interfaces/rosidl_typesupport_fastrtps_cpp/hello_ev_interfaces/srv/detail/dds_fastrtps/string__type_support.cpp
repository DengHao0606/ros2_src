// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from hello_ev_interfaces:srv/String.idl
// generated code does not contain a copyright notice
#include "hello_ev_interfaces/srv/detail/string__rosidl_typesupport_fastrtps_cpp.hpp"
#include "hello_ev_interfaces/srv/detail/string__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace hello_ev_interfaces
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_hello_ev_interfaces
cdr_serialize(
  const hello_ev_interfaces::srv::String_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: request
  cdr << ros_message.request;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_hello_ev_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  hello_ev_interfaces::srv::String_Request & ros_message)
{
  // Member: request
  cdr >> ros_message.request;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_hello_ev_interfaces
get_serialized_size(
  const hello_ev_interfaces::srv::String_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: request
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.request.size() + 1);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_hello_ev_interfaces
max_serialized_size_String_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: request
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

static bool _String_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const hello_ev_interfaces::srv::String_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _String_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<hello_ev_interfaces::srv::String_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _String_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const hello_ev_interfaces::srv::String_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _String_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_String_Request(full_bounded, 0);
}

static message_type_support_callbacks_t _String_Request__callbacks = {
  "hello_ev_interfaces::srv",
  "String_Request",
  _String_Request__cdr_serialize,
  _String_Request__cdr_deserialize,
  _String_Request__get_serialized_size,
  _String_Request__max_serialized_size
};

static rosidl_message_type_support_t _String_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_String_Request__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace hello_ev_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_hello_ev_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<hello_ev_interfaces::srv::String_Request>()
{
  return &hello_ev_interfaces::srv::typesupport_fastrtps_cpp::_String_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, hello_ev_interfaces, srv, String_Request)() {
  return &hello_ev_interfaces::srv::typesupport_fastrtps_cpp::_String_Request__handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include <limits>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
// already included above
// #include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace hello_ev_interfaces
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_hello_ev_interfaces
cdr_serialize(
  const hello_ev_interfaces::srv::String_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: response
  cdr << ros_message.response;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_hello_ev_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  hello_ev_interfaces::srv::String_Response & ros_message)
{
  // Member: response
  cdr >> ros_message.response;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_hello_ev_interfaces
get_serialized_size(
  const hello_ev_interfaces::srv::String_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: response
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.response.size() + 1);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_hello_ev_interfaces
max_serialized_size_String_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: response
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

static bool _String_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const hello_ev_interfaces::srv::String_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _String_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<hello_ev_interfaces::srv::String_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _String_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const hello_ev_interfaces::srv::String_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _String_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_String_Response(full_bounded, 0);
}

static message_type_support_callbacks_t _String_Response__callbacks = {
  "hello_ev_interfaces::srv",
  "String_Response",
  _String_Response__cdr_serialize,
  _String_Response__cdr_deserialize,
  _String_Response__get_serialized_size,
  _String_Response__max_serialized_size
};

static rosidl_message_type_support_t _String_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_String_Response__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace hello_ev_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_hello_ev_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<hello_ev_interfaces::srv::String_Response>()
{
  return &hello_ev_interfaces::srv::typesupport_fastrtps_cpp::_String_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, hello_ev_interfaces, srv, String_Response)() {
  return &hello_ev_interfaces::srv::typesupport_fastrtps_cpp::_String_Response__handle;
}

#ifdef __cplusplus
}
#endif

#include "rmw/error_handling.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support_decl.hpp"

namespace hello_ev_interfaces
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

static service_type_support_callbacks_t _String__callbacks = {
  "hello_ev_interfaces::srv",
  "String",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, hello_ev_interfaces, srv, String_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, hello_ev_interfaces, srv, String_Response)(),
};

static rosidl_service_type_support_t _String__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_String__callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace hello_ev_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_hello_ev_interfaces
const rosidl_service_type_support_t *
get_service_type_support_handle<hello_ev_interfaces::srv::String>()
{
  return &hello_ev_interfaces::srv::typesupport_fastrtps_cpp::_String__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, hello_ev_interfaces, srv, String)() {
  return &hello_ev_interfaces::srv::typesupport_fastrtps_cpp::_String__handle;
}

#ifdef __cplusplus
}
#endif
