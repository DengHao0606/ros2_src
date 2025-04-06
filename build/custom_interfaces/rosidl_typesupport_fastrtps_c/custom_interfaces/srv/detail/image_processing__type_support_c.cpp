// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from custom_interfaces:srv/ImageProcessing.idl
// generated code does not contain a copyright notice
#include "custom_interfaces/srv/detail/image_processing__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "custom_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "custom_interfaces/srv/detail/image_processing__struct.h"
#include "custom_interfaces/srv/detail/image_processing__functions.h"
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

#include "sensor_msgs/msg/detail/image__functions.h"  // image

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_custom_interfaces
size_t get_serialized_size_sensor_msgs__msg__Image(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_custom_interfaces
size_t max_serialized_size_sensor_msgs__msg__Image(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_custom_interfaces
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, sensor_msgs, msg, Image)();


using _ImageProcessing_Request__ros_msg_type = custom_interfaces__srv__ImageProcessing_Request;

static bool _ImageProcessing_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ImageProcessing_Request__ros_msg_type * ros_message = static_cast<const _ImageProcessing_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: image
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, sensor_msgs, msg, Image
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->image, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _ImageProcessing_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ImageProcessing_Request__ros_msg_type * ros_message = static_cast<_ImageProcessing_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: image
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, sensor_msgs, msg, Image
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->image))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_custom_interfaces
size_t get_serialized_size_custom_interfaces__srv__ImageProcessing_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ImageProcessing_Request__ros_msg_type * ros_message = static_cast<const _ImageProcessing_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name image

  current_alignment += get_serialized_size_sensor_msgs__msg__Image(
    &(ros_message->image), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _ImageProcessing_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_custom_interfaces__srv__ImageProcessing_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_custom_interfaces
size_t max_serialized_size_custom_interfaces__srv__ImageProcessing_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: image
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_sensor_msgs__msg__Image(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _ImageProcessing_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_custom_interfaces__srv__ImageProcessing_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_ImageProcessing_Request = {
  "custom_interfaces::srv",
  "ImageProcessing_Request",
  _ImageProcessing_Request__cdr_serialize,
  _ImageProcessing_Request__cdr_deserialize,
  _ImageProcessing_Request__get_serialized_size,
  _ImageProcessing_Request__max_serialized_size
};

static rosidl_message_type_support_t _ImageProcessing_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ImageProcessing_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, custom_interfaces, srv, ImageProcessing_Request)() {
  return &_ImageProcessing_Request__type_support;
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
// #include "custom_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "custom_interfaces/srv/detail/image_processing__struct.h"
// already included above
// #include "custom_interfaces/srv/detail/image_processing__functions.h"
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

#include "rosidl_runtime_c/string.h"  // direction
#include "rosidl_runtime_c/string_functions.h"  // direction

// forward declare type support functions


using _ImageProcessing_Response__ros_msg_type = custom_interfaces__srv__ImageProcessing_Response;

static bool _ImageProcessing_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ImageProcessing_Response__ros_msg_type * ros_message = static_cast<const _ImageProcessing_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: object_x
  {
    cdr << ros_message->object_x;
  }

  // Field name: object_y
  {
    cdr << ros_message->object_y;
  }

  // Field name: direction
  {
    const rosidl_runtime_c__String * str = &ros_message->direction;
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

static bool _ImageProcessing_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ImageProcessing_Response__ros_msg_type * ros_message = static_cast<_ImageProcessing_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: object_x
  {
    cdr >> ros_message->object_x;
  }

  // Field name: object_y
  {
    cdr >> ros_message->object_y;
  }

  // Field name: direction
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->direction.data) {
      rosidl_runtime_c__String__init(&ros_message->direction);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->direction,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'direction'\n");
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_custom_interfaces
size_t get_serialized_size_custom_interfaces__srv__ImageProcessing_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ImageProcessing_Response__ros_msg_type * ros_message = static_cast<const _ImageProcessing_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name object_x
  {
    size_t item_size = sizeof(ros_message->object_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name object_y
  {
    size_t item_size = sizeof(ros_message->object_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name direction
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->direction.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _ImageProcessing_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_custom_interfaces__srv__ImageProcessing_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_custom_interfaces
size_t max_serialized_size_custom_interfaces__srv__ImageProcessing_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: object_x
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: object_y
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: direction
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

static size_t _ImageProcessing_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_custom_interfaces__srv__ImageProcessing_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_ImageProcessing_Response = {
  "custom_interfaces::srv",
  "ImageProcessing_Response",
  _ImageProcessing_Response__cdr_serialize,
  _ImageProcessing_Response__cdr_deserialize,
  _ImageProcessing_Response__get_serialized_size,
  _ImageProcessing_Response__max_serialized_size
};

static rosidl_message_type_support_t _ImageProcessing_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ImageProcessing_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, custom_interfaces, srv, ImageProcessing_Response)() {
  return &_ImageProcessing_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "custom_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "custom_interfaces/srv/image_processing.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t ImageProcessing__callbacks = {
  "custom_interfaces::srv",
  "ImageProcessing",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, custom_interfaces, srv, ImageProcessing_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, custom_interfaces, srv, ImageProcessing_Response)(),
};

static rosidl_service_type_support_t ImageProcessing__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &ImageProcessing__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, custom_interfaces, srv, ImageProcessing)() {
  return &ImageProcessing__handle;
}

#if defined(__cplusplus)
}
#endif
