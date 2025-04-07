// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from hello_ev_interfaces:srv/String.idl
// generated code does not contain a copyright notice
#include "hello_ev_interfaces/srv/detail/string__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `request`
#include "rosidl_runtime_c/string_functions.h"

bool
hello_ev_interfaces__srv__String_Request__init(hello_ev_interfaces__srv__String_Request * msg)
{
  if (!msg) {
    return false;
  }
  // request
  if (!rosidl_runtime_c__String__init(&msg->request)) {
    hello_ev_interfaces__srv__String_Request__fini(msg);
    return false;
  }
  return true;
}

void
hello_ev_interfaces__srv__String_Request__fini(hello_ev_interfaces__srv__String_Request * msg)
{
  if (!msg) {
    return;
  }
  // request
  rosidl_runtime_c__String__fini(&msg->request);
}

bool
hello_ev_interfaces__srv__String_Request__are_equal(const hello_ev_interfaces__srv__String_Request * lhs, const hello_ev_interfaces__srv__String_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // request
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  return true;
}

bool
hello_ev_interfaces__srv__String_Request__copy(
  const hello_ev_interfaces__srv__String_Request * input,
  hello_ev_interfaces__srv__String_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // request
  if (!rosidl_runtime_c__String__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  return true;
}

hello_ev_interfaces__srv__String_Request *
hello_ev_interfaces__srv__String_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hello_ev_interfaces__srv__String_Request * msg = (hello_ev_interfaces__srv__String_Request *)allocator.allocate(sizeof(hello_ev_interfaces__srv__String_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(hello_ev_interfaces__srv__String_Request));
  bool success = hello_ev_interfaces__srv__String_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
hello_ev_interfaces__srv__String_Request__destroy(hello_ev_interfaces__srv__String_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    hello_ev_interfaces__srv__String_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
hello_ev_interfaces__srv__String_Request__Sequence__init(hello_ev_interfaces__srv__String_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hello_ev_interfaces__srv__String_Request * data = NULL;

  if (size) {
    data = (hello_ev_interfaces__srv__String_Request *)allocator.zero_allocate(size, sizeof(hello_ev_interfaces__srv__String_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = hello_ev_interfaces__srv__String_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        hello_ev_interfaces__srv__String_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
hello_ev_interfaces__srv__String_Request__Sequence__fini(hello_ev_interfaces__srv__String_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      hello_ev_interfaces__srv__String_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

hello_ev_interfaces__srv__String_Request__Sequence *
hello_ev_interfaces__srv__String_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hello_ev_interfaces__srv__String_Request__Sequence * array = (hello_ev_interfaces__srv__String_Request__Sequence *)allocator.allocate(sizeof(hello_ev_interfaces__srv__String_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = hello_ev_interfaces__srv__String_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
hello_ev_interfaces__srv__String_Request__Sequence__destroy(hello_ev_interfaces__srv__String_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    hello_ev_interfaces__srv__String_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
hello_ev_interfaces__srv__String_Request__Sequence__are_equal(const hello_ev_interfaces__srv__String_Request__Sequence * lhs, const hello_ev_interfaces__srv__String_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!hello_ev_interfaces__srv__String_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
hello_ev_interfaces__srv__String_Request__Sequence__copy(
  const hello_ev_interfaces__srv__String_Request__Sequence * input,
  hello_ev_interfaces__srv__String_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(hello_ev_interfaces__srv__String_Request);
    hello_ev_interfaces__srv__String_Request * data =
      (hello_ev_interfaces__srv__String_Request *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!hello_ev_interfaces__srv__String_Request__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          hello_ev_interfaces__srv__String_Request__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!hello_ev_interfaces__srv__String_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `response`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
hello_ev_interfaces__srv__String_Response__init(hello_ev_interfaces__srv__String_Response * msg)
{
  if (!msg) {
    return false;
  }
  // response
  if (!rosidl_runtime_c__String__init(&msg->response)) {
    hello_ev_interfaces__srv__String_Response__fini(msg);
    return false;
  }
  return true;
}

void
hello_ev_interfaces__srv__String_Response__fini(hello_ev_interfaces__srv__String_Response * msg)
{
  if (!msg) {
    return;
  }
  // response
  rosidl_runtime_c__String__fini(&msg->response);
}

bool
hello_ev_interfaces__srv__String_Response__are_equal(const hello_ev_interfaces__srv__String_Response * lhs, const hello_ev_interfaces__srv__String_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // response
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
hello_ev_interfaces__srv__String_Response__copy(
  const hello_ev_interfaces__srv__String_Response * input,
  hello_ev_interfaces__srv__String_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // response
  if (!rosidl_runtime_c__String__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

hello_ev_interfaces__srv__String_Response *
hello_ev_interfaces__srv__String_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hello_ev_interfaces__srv__String_Response * msg = (hello_ev_interfaces__srv__String_Response *)allocator.allocate(sizeof(hello_ev_interfaces__srv__String_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(hello_ev_interfaces__srv__String_Response));
  bool success = hello_ev_interfaces__srv__String_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
hello_ev_interfaces__srv__String_Response__destroy(hello_ev_interfaces__srv__String_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    hello_ev_interfaces__srv__String_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
hello_ev_interfaces__srv__String_Response__Sequence__init(hello_ev_interfaces__srv__String_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hello_ev_interfaces__srv__String_Response * data = NULL;

  if (size) {
    data = (hello_ev_interfaces__srv__String_Response *)allocator.zero_allocate(size, sizeof(hello_ev_interfaces__srv__String_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = hello_ev_interfaces__srv__String_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        hello_ev_interfaces__srv__String_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
hello_ev_interfaces__srv__String_Response__Sequence__fini(hello_ev_interfaces__srv__String_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      hello_ev_interfaces__srv__String_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

hello_ev_interfaces__srv__String_Response__Sequence *
hello_ev_interfaces__srv__String_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hello_ev_interfaces__srv__String_Response__Sequence * array = (hello_ev_interfaces__srv__String_Response__Sequence *)allocator.allocate(sizeof(hello_ev_interfaces__srv__String_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = hello_ev_interfaces__srv__String_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
hello_ev_interfaces__srv__String_Response__Sequence__destroy(hello_ev_interfaces__srv__String_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    hello_ev_interfaces__srv__String_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
hello_ev_interfaces__srv__String_Response__Sequence__are_equal(const hello_ev_interfaces__srv__String_Response__Sequence * lhs, const hello_ev_interfaces__srv__String_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!hello_ev_interfaces__srv__String_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
hello_ev_interfaces__srv__String_Response__Sequence__copy(
  const hello_ev_interfaces__srv__String_Response__Sequence * input,
  hello_ev_interfaces__srv__String_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(hello_ev_interfaces__srv__String_Response);
    hello_ev_interfaces__srv__String_Response * data =
      (hello_ev_interfaces__srv__String_Response *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!hello_ev_interfaces__srv__String_Response__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          hello_ev_interfaces__srv__String_Response__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!hello_ev_interfaces__srv__String_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
