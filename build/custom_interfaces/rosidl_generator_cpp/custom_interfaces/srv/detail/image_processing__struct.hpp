// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from custom_interfaces:srv/ImageProcessing.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACES__SRV__DETAIL__IMAGE_PROCESSING__STRUCT_HPP_
#define CUSTOM_INTERFACES__SRV__DETAIL__IMAGE_PROCESSING__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'image'
#include "sensor_msgs/msg/detail/image__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__custom_interfaces__srv__ImageProcessing_Request __attribute__((deprecated))
#else
# define DEPRECATED__custom_interfaces__srv__ImageProcessing_Request __declspec(deprecated)
#endif

namespace custom_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ImageProcessing_Request_
{
  using Type = ImageProcessing_Request_<ContainerAllocator>;

  explicit ImageProcessing_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : image(_init)
  {
    (void)_init;
  }

  explicit ImageProcessing_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : image(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _image_type =
    sensor_msgs::msg::Image_<ContainerAllocator>;
  _image_type image;

  // setters for named parameter idiom
  Type & set__image(
    const sensor_msgs::msg::Image_<ContainerAllocator> & _arg)
  {
    this->image = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    custom_interfaces::srv::ImageProcessing_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const custom_interfaces::srv::ImageProcessing_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<custom_interfaces::srv::ImageProcessing_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<custom_interfaces::srv::ImageProcessing_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      custom_interfaces::srv::ImageProcessing_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<custom_interfaces::srv::ImageProcessing_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      custom_interfaces::srv::ImageProcessing_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<custom_interfaces::srv::ImageProcessing_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<custom_interfaces::srv::ImageProcessing_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<custom_interfaces::srv::ImageProcessing_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__custom_interfaces__srv__ImageProcessing_Request
    std::shared_ptr<custom_interfaces::srv::ImageProcessing_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__custom_interfaces__srv__ImageProcessing_Request
    std::shared_ptr<custom_interfaces::srv::ImageProcessing_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ImageProcessing_Request_ & other) const
  {
    if (this->image != other.image) {
      return false;
    }
    return true;
  }
  bool operator!=(const ImageProcessing_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ImageProcessing_Request_

// alias to use template instance with default allocator
using ImageProcessing_Request =
  custom_interfaces::srv::ImageProcessing_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace custom_interfaces


#ifndef _WIN32
# define DEPRECATED__custom_interfaces__srv__ImageProcessing_Response __attribute__((deprecated))
#else
# define DEPRECATED__custom_interfaces__srv__ImageProcessing_Response __declspec(deprecated)
#endif

namespace custom_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ImageProcessing_Response_
{
  using Type = ImageProcessing_Response_<ContainerAllocator>;

  explicit ImageProcessing_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->object_x = 0.0f;
      this->object_y = 0.0f;
      this->direction = "";
    }
  }

  explicit ImageProcessing_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : direction(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->object_x = 0.0f;
      this->object_y = 0.0f;
      this->direction = "";
    }
  }

  // field types and members
  using _object_x_type =
    float;
  _object_x_type object_x;
  using _object_y_type =
    float;
  _object_y_type object_y;
  using _direction_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _direction_type direction;

  // setters for named parameter idiom
  Type & set__object_x(
    const float & _arg)
  {
    this->object_x = _arg;
    return *this;
  }
  Type & set__object_y(
    const float & _arg)
  {
    this->object_y = _arg;
    return *this;
  }
  Type & set__direction(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->direction = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    custom_interfaces::srv::ImageProcessing_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const custom_interfaces::srv::ImageProcessing_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<custom_interfaces::srv::ImageProcessing_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<custom_interfaces::srv::ImageProcessing_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      custom_interfaces::srv::ImageProcessing_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<custom_interfaces::srv::ImageProcessing_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      custom_interfaces::srv::ImageProcessing_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<custom_interfaces::srv::ImageProcessing_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<custom_interfaces::srv::ImageProcessing_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<custom_interfaces::srv::ImageProcessing_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__custom_interfaces__srv__ImageProcessing_Response
    std::shared_ptr<custom_interfaces::srv::ImageProcessing_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__custom_interfaces__srv__ImageProcessing_Response
    std::shared_ptr<custom_interfaces::srv::ImageProcessing_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ImageProcessing_Response_ & other) const
  {
    if (this->object_x != other.object_x) {
      return false;
    }
    if (this->object_y != other.object_y) {
      return false;
    }
    if (this->direction != other.direction) {
      return false;
    }
    return true;
  }
  bool operator!=(const ImageProcessing_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ImageProcessing_Response_

// alias to use template instance with default allocator
using ImageProcessing_Response =
  custom_interfaces::srv::ImageProcessing_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace custom_interfaces

namespace custom_interfaces
{

namespace srv
{

struct ImageProcessing
{
  using Request = custom_interfaces::srv::ImageProcessing_Request;
  using Response = custom_interfaces::srv::ImageProcessing_Response;
};

}  // namespace srv

}  // namespace custom_interfaces

#endif  // CUSTOM_INTERFACES__SRV__DETAIL__IMAGE_PROCESSING__STRUCT_HPP_
