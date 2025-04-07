// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from hello_ev_interfaces:srv/String.idl
// generated code does not contain a copyright notice

#ifndef HELLO_EV_INTERFACES__SRV__DETAIL__STRING__STRUCT_HPP_
#define HELLO_EV_INTERFACES__SRV__DETAIL__STRING__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__hello_ev_interfaces__srv__String_Request __attribute__((deprecated))
#else
# define DEPRECATED__hello_ev_interfaces__srv__String_Request __declspec(deprecated)
#endif

namespace hello_ev_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct String_Request_
{
  using Type = String_Request_<ContainerAllocator>;

  explicit String_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->request = "";
    }
  }

  explicit String_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : request(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->request = "";
    }
  }

  // field types and members
  using _request_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _request_type request;

  // setters for named parameter idiom
  Type & set__request(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->request = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    hello_ev_interfaces::srv::String_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const hello_ev_interfaces::srv::String_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<hello_ev_interfaces::srv::String_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<hello_ev_interfaces::srv::String_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      hello_ev_interfaces::srv::String_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<hello_ev_interfaces::srv::String_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      hello_ev_interfaces::srv::String_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<hello_ev_interfaces::srv::String_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<hello_ev_interfaces::srv::String_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<hello_ev_interfaces::srv::String_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__hello_ev_interfaces__srv__String_Request
    std::shared_ptr<hello_ev_interfaces::srv::String_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__hello_ev_interfaces__srv__String_Request
    std::shared_ptr<hello_ev_interfaces::srv::String_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const String_Request_ & other) const
  {
    if (this->request != other.request) {
      return false;
    }
    return true;
  }
  bool operator!=(const String_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct String_Request_

// alias to use template instance with default allocator
using String_Request =
  hello_ev_interfaces::srv::String_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace hello_ev_interfaces


#ifndef _WIN32
# define DEPRECATED__hello_ev_interfaces__srv__String_Response __attribute__((deprecated))
#else
# define DEPRECATED__hello_ev_interfaces__srv__String_Response __declspec(deprecated)
#endif

namespace hello_ev_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct String_Response_
{
  using Type = String_Response_<ContainerAllocator>;

  explicit String_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->response = "";
    }
  }

  explicit String_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : response(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->response = "";
    }
  }

  // field types and members
  using _response_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__response(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    hello_ev_interfaces::srv::String_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const hello_ev_interfaces::srv::String_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<hello_ev_interfaces::srv::String_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<hello_ev_interfaces::srv::String_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      hello_ev_interfaces::srv::String_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<hello_ev_interfaces::srv::String_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      hello_ev_interfaces::srv::String_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<hello_ev_interfaces::srv::String_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<hello_ev_interfaces::srv::String_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<hello_ev_interfaces::srv::String_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__hello_ev_interfaces__srv__String_Response
    std::shared_ptr<hello_ev_interfaces::srv::String_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__hello_ev_interfaces__srv__String_Response
    std::shared_ptr<hello_ev_interfaces::srv::String_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const String_Response_ & other) const
  {
    if (this->response != other.response) {
      return false;
    }
    return true;
  }
  bool operator!=(const String_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct String_Response_

// alias to use template instance with default allocator
using String_Response =
  hello_ev_interfaces::srv::String_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace hello_ev_interfaces

namespace hello_ev_interfaces
{

namespace srv
{

struct String
{
  using Request = hello_ev_interfaces::srv::String_Request;
  using Response = hello_ev_interfaces::srv::String_Response;
};

}  // namespace srv

}  // namespace hello_ev_interfaces

#endif  // HELLO_EV_INTERFACES__SRV__DETAIL__STRING__STRUCT_HPP_
