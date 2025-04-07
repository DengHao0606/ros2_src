// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from hello_ev_interfaces:srv/String.idl
// generated code does not contain a copyright notice

#ifndef HELLO_EV_INTERFACES__SRV__DETAIL__STRING__BUILDER_HPP_
#define HELLO_EV_INTERFACES__SRV__DETAIL__STRING__BUILDER_HPP_

#include "hello_ev_interfaces/srv/detail/string__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace hello_ev_interfaces
{

namespace srv
{

namespace builder
{

class Init_String_Request_request
{
public:
  Init_String_Request_request()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::hello_ev_interfaces::srv::String_Request request(::hello_ev_interfaces::srv::String_Request::_request_type arg)
  {
    msg_.request = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hello_ev_interfaces::srv::String_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::hello_ev_interfaces::srv::String_Request>()
{
  return hello_ev_interfaces::srv::builder::Init_String_Request_request();
}

}  // namespace hello_ev_interfaces


namespace hello_ev_interfaces
{

namespace srv
{

namespace builder
{

class Init_String_Response_response
{
public:
  Init_String_Response_response()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::hello_ev_interfaces::srv::String_Response response(::hello_ev_interfaces::srv::String_Response::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hello_ev_interfaces::srv::String_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::hello_ev_interfaces::srv::String_Response>()
{
  return hello_ev_interfaces::srv::builder::Init_String_Response_response();
}

}  // namespace hello_ev_interfaces

#endif  // HELLO_EV_INTERFACES__SRV__DETAIL__STRING__BUILDER_HPP_
