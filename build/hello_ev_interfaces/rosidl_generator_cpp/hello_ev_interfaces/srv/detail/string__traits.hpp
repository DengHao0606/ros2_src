// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from hello_ev_interfaces:srv/String.idl
// generated code does not contain a copyright notice

#ifndef HELLO_EV_INTERFACES__SRV__DETAIL__STRING__TRAITS_HPP_
#define HELLO_EV_INTERFACES__SRV__DETAIL__STRING__TRAITS_HPP_

#include "hello_ev_interfaces/srv/detail/string__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<hello_ev_interfaces::srv::String_Request>()
{
  return "hello_ev_interfaces::srv::String_Request";
}

template<>
inline const char * name<hello_ev_interfaces::srv::String_Request>()
{
  return "hello_ev_interfaces/srv/String_Request";
}

template<>
struct has_fixed_size<hello_ev_interfaces::srv::String_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<hello_ev_interfaces::srv::String_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<hello_ev_interfaces::srv::String_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<hello_ev_interfaces::srv::String_Response>()
{
  return "hello_ev_interfaces::srv::String_Response";
}

template<>
inline const char * name<hello_ev_interfaces::srv::String_Response>()
{
  return "hello_ev_interfaces/srv/String_Response";
}

template<>
struct has_fixed_size<hello_ev_interfaces::srv::String_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<hello_ev_interfaces::srv::String_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<hello_ev_interfaces::srv::String_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<hello_ev_interfaces::srv::String>()
{
  return "hello_ev_interfaces::srv::String";
}

template<>
inline const char * name<hello_ev_interfaces::srv::String>()
{
  return "hello_ev_interfaces/srv/String";
}

template<>
struct has_fixed_size<hello_ev_interfaces::srv::String>
  : std::integral_constant<
    bool,
    has_fixed_size<hello_ev_interfaces::srv::String_Request>::value &&
    has_fixed_size<hello_ev_interfaces::srv::String_Response>::value
  >
{
};

template<>
struct has_bounded_size<hello_ev_interfaces::srv::String>
  : std::integral_constant<
    bool,
    has_bounded_size<hello_ev_interfaces::srv::String_Request>::value &&
    has_bounded_size<hello_ev_interfaces::srv::String_Response>::value
  >
{
};

template<>
struct is_service<hello_ev_interfaces::srv::String>
  : std::true_type
{
};

template<>
struct is_service_request<hello_ev_interfaces::srv::String_Request>
  : std::true_type
{
};

template<>
struct is_service_response<hello_ev_interfaces::srv::String_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // HELLO_EV_INTERFACES__SRV__DETAIL__STRING__TRAITS_HPP_
