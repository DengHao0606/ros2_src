// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from custom_interfaces:srv/ImageProcessing.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACES__SRV__DETAIL__IMAGE_PROCESSING__TRAITS_HPP_
#define CUSTOM_INTERFACES__SRV__DETAIL__IMAGE_PROCESSING__TRAITS_HPP_

#include "custom_interfaces/srv/detail/image_processing__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'image'
#include "sensor_msgs/msg/detail/image__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<custom_interfaces::srv::ImageProcessing_Request>()
{
  return "custom_interfaces::srv::ImageProcessing_Request";
}

template<>
inline const char * name<custom_interfaces::srv::ImageProcessing_Request>()
{
  return "custom_interfaces/srv/ImageProcessing_Request";
}

template<>
struct has_fixed_size<custom_interfaces::srv::ImageProcessing_Request>
  : std::integral_constant<bool, has_fixed_size<sensor_msgs::msg::Image>::value> {};

template<>
struct has_bounded_size<custom_interfaces::srv::ImageProcessing_Request>
  : std::integral_constant<bool, has_bounded_size<sensor_msgs::msg::Image>::value> {};

template<>
struct is_message<custom_interfaces::srv::ImageProcessing_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<custom_interfaces::srv::ImageProcessing_Response>()
{
  return "custom_interfaces::srv::ImageProcessing_Response";
}

template<>
inline const char * name<custom_interfaces::srv::ImageProcessing_Response>()
{
  return "custom_interfaces/srv/ImageProcessing_Response";
}

template<>
struct has_fixed_size<custom_interfaces::srv::ImageProcessing_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<custom_interfaces::srv::ImageProcessing_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<custom_interfaces::srv::ImageProcessing_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<custom_interfaces::srv::ImageProcessing>()
{
  return "custom_interfaces::srv::ImageProcessing";
}

template<>
inline const char * name<custom_interfaces::srv::ImageProcessing>()
{
  return "custom_interfaces/srv/ImageProcessing";
}

template<>
struct has_fixed_size<custom_interfaces::srv::ImageProcessing>
  : std::integral_constant<
    bool,
    has_fixed_size<custom_interfaces::srv::ImageProcessing_Request>::value &&
    has_fixed_size<custom_interfaces::srv::ImageProcessing_Response>::value
  >
{
};

template<>
struct has_bounded_size<custom_interfaces::srv::ImageProcessing>
  : std::integral_constant<
    bool,
    has_bounded_size<custom_interfaces::srv::ImageProcessing_Request>::value &&
    has_bounded_size<custom_interfaces::srv::ImageProcessing_Response>::value
  >
{
};

template<>
struct is_service<custom_interfaces::srv::ImageProcessing>
  : std::true_type
{
};

template<>
struct is_service_request<custom_interfaces::srv::ImageProcessing_Request>
  : std::true_type
{
};

template<>
struct is_service_response<custom_interfaces::srv::ImageProcessing_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // CUSTOM_INTERFACES__SRV__DETAIL__IMAGE_PROCESSING__TRAITS_HPP_
