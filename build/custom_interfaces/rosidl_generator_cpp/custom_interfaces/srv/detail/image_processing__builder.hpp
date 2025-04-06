// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_interfaces:srv/ImageProcessing.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACES__SRV__DETAIL__IMAGE_PROCESSING__BUILDER_HPP_
#define CUSTOM_INTERFACES__SRV__DETAIL__IMAGE_PROCESSING__BUILDER_HPP_

#include "custom_interfaces/srv/detail/image_processing__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace custom_interfaces
{

namespace srv
{

namespace builder
{

class Init_ImageProcessing_Request_image
{
public:
  Init_ImageProcessing_Request_image()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::custom_interfaces::srv::ImageProcessing_Request image(::custom_interfaces::srv::ImageProcessing_Request::_image_type arg)
  {
    msg_.image = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_interfaces::srv::ImageProcessing_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_interfaces::srv::ImageProcessing_Request>()
{
  return custom_interfaces::srv::builder::Init_ImageProcessing_Request_image();
}

}  // namespace custom_interfaces


namespace custom_interfaces
{

namespace srv
{

namespace builder
{

class Init_ImageProcessing_Response_direction
{
public:
  explicit Init_ImageProcessing_Response_direction(::custom_interfaces::srv::ImageProcessing_Response & msg)
  : msg_(msg)
  {}
  ::custom_interfaces::srv::ImageProcessing_Response direction(::custom_interfaces::srv::ImageProcessing_Response::_direction_type arg)
  {
    msg_.direction = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_interfaces::srv::ImageProcessing_Response msg_;
};

class Init_ImageProcessing_Response_object_y
{
public:
  explicit Init_ImageProcessing_Response_object_y(::custom_interfaces::srv::ImageProcessing_Response & msg)
  : msg_(msg)
  {}
  Init_ImageProcessing_Response_direction object_y(::custom_interfaces::srv::ImageProcessing_Response::_object_y_type arg)
  {
    msg_.object_y = std::move(arg);
    return Init_ImageProcessing_Response_direction(msg_);
  }

private:
  ::custom_interfaces::srv::ImageProcessing_Response msg_;
};

class Init_ImageProcessing_Response_object_x
{
public:
  Init_ImageProcessing_Response_object_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ImageProcessing_Response_object_y object_x(::custom_interfaces::srv::ImageProcessing_Response::_object_x_type arg)
  {
    msg_.object_x = std::move(arg);
    return Init_ImageProcessing_Response_object_y(msg_);
  }

private:
  ::custom_interfaces::srv::ImageProcessing_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_interfaces::srv::ImageProcessing_Response>()
{
  return custom_interfaces::srv::builder::Init_ImageProcessing_Response_object_x();
}

}  // namespace custom_interfaces

#endif  // CUSTOM_INTERFACES__SRV__DETAIL__IMAGE_PROCESSING__BUILDER_HPP_
