// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from custom_interfaces:srv/ImageProcessing.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "custom_interfaces/srv/detail/image_processing__rosidl_typesupport_introspection_c.h"
#include "custom_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "custom_interfaces/srv/detail/image_processing__functions.h"
#include "custom_interfaces/srv/detail/image_processing__struct.h"


// Include directives for member types
// Member `image`
#include "sensor_msgs/msg/image.h"
// Member `image`
#include "sensor_msgs/msg/detail/image__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ImageProcessing_Request__rosidl_typesupport_introspection_c__ImageProcessing_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  custom_interfaces__srv__ImageProcessing_Request__init(message_memory);
}

void ImageProcessing_Request__rosidl_typesupport_introspection_c__ImageProcessing_Request_fini_function(void * message_memory)
{
  custom_interfaces__srv__ImageProcessing_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ImageProcessing_Request__rosidl_typesupport_introspection_c__ImageProcessing_Request_message_member_array[1] = {
  {
    "image",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(custom_interfaces__srv__ImageProcessing_Request, image),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ImageProcessing_Request__rosidl_typesupport_introspection_c__ImageProcessing_Request_message_members = {
  "custom_interfaces__srv",  // message namespace
  "ImageProcessing_Request",  // message name
  1,  // number of fields
  sizeof(custom_interfaces__srv__ImageProcessing_Request),
  ImageProcessing_Request__rosidl_typesupport_introspection_c__ImageProcessing_Request_message_member_array,  // message members
  ImageProcessing_Request__rosidl_typesupport_introspection_c__ImageProcessing_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  ImageProcessing_Request__rosidl_typesupport_introspection_c__ImageProcessing_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ImageProcessing_Request__rosidl_typesupport_introspection_c__ImageProcessing_Request_message_type_support_handle = {
  0,
  &ImageProcessing_Request__rosidl_typesupport_introspection_c__ImageProcessing_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_custom_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_interfaces, srv, ImageProcessing_Request)() {
  ImageProcessing_Request__rosidl_typesupport_introspection_c__ImageProcessing_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sensor_msgs, msg, Image)();
  if (!ImageProcessing_Request__rosidl_typesupport_introspection_c__ImageProcessing_Request_message_type_support_handle.typesupport_identifier) {
    ImageProcessing_Request__rosidl_typesupport_introspection_c__ImageProcessing_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ImageProcessing_Request__rosidl_typesupport_introspection_c__ImageProcessing_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "custom_interfaces/srv/detail/image_processing__rosidl_typesupport_introspection_c.h"
// already included above
// #include "custom_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "custom_interfaces/srv/detail/image_processing__functions.h"
// already included above
// #include "custom_interfaces/srv/detail/image_processing__struct.h"


// Include directives for member types
// Member `direction`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ImageProcessing_Response__rosidl_typesupport_introspection_c__ImageProcessing_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  custom_interfaces__srv__ImageProcessing_Response__init(message_memory);
}

void ImageProcessing_Response__rosidl_typesupport_introspection_c__ImageProcessing_Response_fini_function(void * message_memory)
{
  custom_interfaces__srv__ImageProcessing_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ImageProcessing_Response__rosidl_typesupport_introspection_c__ImageProcessing_Response_message_member_array[3] = {
  {
    "object_x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(custom_interfaces__srv__ImageProcessing_Response, object_x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "object_y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(custom_interfaces__srv__ImageProcessing_Response, object_y),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "direction",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(custom_interfaces__srv__ImageProcessing_Response, direction),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ImageProcessing_Response__rosidl_typesupport_introspection_c__ImageProcessing_Response_message_members = {
  "custom_interfaces__srv",  // message namespace
  "ImageProcessing_Response",  // message name
  3,  // number of fields
  sizeof(custom_interfaces__srv__ImageProcessing_Response),
  ImageProcessing_Response__rosidl_typesupport_introspection_c__ImageProcessing_Response_message_member_array,  // message members
  ImageProcessing_Response__rosidl_typesupport_introspection_c__ImageProcessing_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  ImageProcessing_Response__rosidl_typesupport_introspection_c__ImageProcessing_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ImageProcessing_Response__rosidl_typesupport_introspection_c__ImageProcessing_Response_message_type_support_handle = {
  0,
  &ImageProcessing_Response__rosidl_typesupport_introspection_c__ImageProcessing_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_custom_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_interfaces, srv, ImageProcessing_Response)() {
  if (!ImageProcessing_Response__rosidl_typesupport_introspection_c__ImageProcessing_Response_message_type_support_handle.typesupport_identifier) {
    ImageProcessing_Response__rosidl_typesupport_introspection_c__ImageProcessing_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ImageProcessing_Response__rosidl_typesupport_introspection_c__ImageProcessing_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "custom_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "custom_interfaces/srv/detail/image_processing__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers custom_interfaces__srv__detail__image_processing__rosidl_typesupport_introspection_c__ImageProcessing_service_members = {
  "custom_interfaces__srv",  // service namespace
  "ImageProcessing",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // custom_interfaces__srv__detail__image_processing__rosidl_typesupport_introspection_c__ImageProcessing_Request_message_type_support_handle,
  NULL  // response message
  // custom_interfaces__srv__detail__image_processing__rosidl_typesupport_introspection_c__ImageProcessing_Response_message_type_support_handle
};

static rosidl_service_type_support_t custom_interfaces__srv__detail__image_processing__rosidl_typesupport_introspection_c__ImageProcessing_service_type_support_handle = {
  0,
  &custom_interfaces__srv__detail__image_processing__rosidl_typesupport_introspection_c__ImageProcessing_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_interfaces, srv, ImageProcessing_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_interfaces, srv, ImageProcessing_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_custom_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_interfaces, srv, ImageProcessing)() {
  if (!custom_interfaces__srv__detail__image_processing__rosidl_typesupport_introspection_c__ImageProcessing_service_type_support_handle.typesupport_identifier) {
    custom_interfaces__srv__detail__image_processing__rosidl_typesupport_introspection_c__ImageProcessing_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)custom_interfaces__srv__detail__image_processing__rosidl_typesupport_introspection_c__ImageProcessing_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_interfaces, srv, ImageProcessing_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_interfaces, srv, ImageProcessing_Response)()->data;
  }

  return &custom_interfaces__srv__detail__image_processing__rosidl_typesupport_introspection_c__ImageProcessing_service_type_support_handle;
}
