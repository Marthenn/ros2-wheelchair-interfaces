// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from wheelchair_interfaces:action/Move.idl
// generated code does not contain a copyright notice
#include "wheelchair_interfaces/action/detail/move__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `movement`
#include "rosidl_runtime_c/string_functions.h"

bool
wheelchair_interfaces__action__Move_Goal__init(wheelchair_interfaces__action__Move_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // movement
  if (!rosidl_runtime_c__String__init(&msg->movement)) {
    wheelchair_interfaces__action__Move_Goal__fini(msg);
    return false;
  }
  // angle
  msg->angle = 0.0f;
  return true;
}

void
wheelchair_interfaces__action__Move_Goal__fini(wheelchair_interfaces__action__Move_Goal * msg)
{
  if (!msg) {
    return;
  }
  // movement
  rosidl_runtime_c__String__fini(&msg->movement);
  // angle
}

bool
wheelchair_interfaces__action__Move_Goal__are_equal(const wheelchair_interfaces__action__Move_Goal * lhs, const wheelchair_interfaces__action__Move_Goal * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // movement
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->movement), &(rhs->movement)))
  {
    return false;
  }
  // angle
  if (lhs->angle != rhs->angle) {
    return false;
  }
  return true;
}

bool
wheelchair_interfaces__action__Move_Goal__copy(
  const wheelchair_interfaces__action__Move_Goal * input,
  wheelchair_interfaces__action__Move_Goal * output)
{
  if (!input || !output) {
    return false;
  }
  // movement
  if (!rosidl_runtime_c__String__copy(
      &(input->movement), &(output->movement)))
  {
    return false;
  }
  // angle
  output->angle = input->angle;
  return true;
}

wheelchair_interfaces__action__Move_Goal *
wheelchair_interfaces__action__Move_Goal__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wheelchair_interfaces__action__Move_Goal * msg = (wheelchair_interfaces__action__Move_Goal *)allocator.allocate(sizeof(wheelchair_interfaces__action__Move_Goal), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(wheelchair_interfaces__action__Move_Goal));
  bool success = wheelchair_interfaces__action__Move_Goal__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
wheelchair_interfaces__action__Move_Goal__destroy(wheelchair_interfaces__action__Move_Goal * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    wheelchair_interfaces__action__Move_Goal__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
wheelchair_interfaces__action__Move_Goal__Sequence__init(wheelchair_interfaces__action__Move_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wheelchair_interfaces__action__Move_Goal * data = NULL;

  if (size) {
    data = (wheelchair_interfaces__action__Move_Goal *)allocator.zero_allocate(size, sizeof(wheelchair_interfaces__action__Move_Goal), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = wheelchair_interfaces__action__Move_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        wheelchair_interfaces__action__Move_Goal__fini(&data[i - 1]);
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
wheelchair_interfaces__action__Move_Goal__Sequence__fini(wheelchair_interfaces__action__Move_Goal__Sequence * array)
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
      wheelchair_interfaces__action__Move_Goal__fini(&array->data[i]);
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

wheelchair_interfaces__action__Move_Goal__Sequence *
wheelchair_interfaces__action__Move_Goal__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wheelchair_interfaces__action__Move_Goal__Sequence * array = (wheelchair_interfaces__action__Move_Goal__Sequence *)allocator.allocate(sizeof(wheelchair_interfaces__action__Move_Goal__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = wheelchair_interfaces__action__Move_Goal__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
wheelchair_interfaces__action__Move_Goal__Sequence__destroy(wheelchair_interfaces__action__Move_Goal__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    wheelchair_interfaces__action__Move_Goal__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
wheelchair_interfaces__action__Move_Goal__Sequence__are_equal(const wheelchair_interfaces__action__Move_Goal__Sequence * lhs, const wheelchair_interfaces__action__Move_Goal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!wheelchair_interfaces__action__Move_Goal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
wheelchair_interfaces__action__Move_Goal__Sequence__copy(
  const wheelchair_interfaces__action__Move_Goal__Sequence * input,
  wheelchair_interfaces__action__Move_Goal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(wheelchair_interfaces__action__Move_Goal);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    wheelchair_interfaces__action__Move_Goal * data =
      (wheelchair_interfaces__action__Move_Goal *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!wheelchair_interfaces__action__Move_Goal__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          wheelchair_interfaces__action__Move_Goal__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!wheelchair_interfaces__action__Move_Goal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
wheelchair_interfaces__action__Move_Result__init(wheelchair_interfaces__action__Move_Result * msg)
{
  if (!msg) {
    return false;
  }
  // angle
  msg->angle = 0.0f;
  return true;
}

void
wheelchair_interfaces__action__Move_Result__fini(wheelchair_interfaces__action__Move_Result * msg)
{
  if (!msg) {
    return;
  }
  // angle
}

bool
wheelchair_interfaces__action__Move_Result__are_equal(const wheelchair_interfaces__action__Move_Result * lhs, const wheelchair_interfaces__action__Move_Result * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // angle
  if (lhs->angle != rhs->angle) {
    return false;
  }
  return true;
}

bool
wheelchair_interfaces__action__Move_Result__copy(
  const wheelchair_interfaces__action__Move_Result * input,
  wheelchair_interfaces__action__Move_Result * output)
{
  if (!input || !output) {
    return false;
  }
  // angle
  output->angle = input->angle;
  return true;
}

wheelchair_interfaces__action__Move_Result *
wheelchair_interfaces__action__Move_Result__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wheelchair_interfaces__action__Move_Result * msg = (wheelchair_interfaces__action__Move_Result *)allocator.allocate(sizeof(wheelchair_interfaces__action__Move_Result), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(wheelchair_interfaces__action__Move_Result));
  bool success = wheelchair_interfaces__action__Move_Result__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
wheelchair_interfaces__action__Move_Result__destroy(wheelchair_interfaces__action__Move_Result * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    wheelchair_interfaces__action__Move_Result__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
wheelchair_interfaces__action__Move_Result__Sequence__init(wheelchair_interfaces__action__Move_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wheelchair_interfaces__action__Move_Result * data = NULL;

  if (size) {
    data = (wheelchair_interfaces__action__Move_Result *)allocator.zero_allocate(size, sizeof(wheelchair_interfaces__action__Move_Result), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = wheelchair_interfaces__action__Move_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        wheelchair_interfaces__action__Move_Result__fini(&data[i - 1]);
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
wheelchair_interfaces__action__Move_Result__Sequence__fini(wheelchair_interfaces__action__Move_Result__Sequence * array)
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
      wheelchair_interfaces__action__Move_Result__fini(&array->data[i]);
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

wheelchair_interfaces__action__Move_Result__Sequence *
wheelchair_interfaces__action__Move_Result__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wheelchair_interfaces__action__Move_Result__Sequence * array = (wheelchair_interfaces__action__Move_Result__Sequence *)allocator.allocate(sizeof(wheelchair_interfaces__action__Move_Result__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = wheelchair_interfaces__action__Move_Result__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
wheelchair_interfaces__action__Move_Result__Sequence__destroy(wheelchair_interfaces__action__Move_Result__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    wheelchair_interfaces__action__Move_Result__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
wheelchair_interfaces__action__Move_Result__Sequence__are_equal(const wheelchair_interfaces__action__Move_Result__Sequence * lhs, const wheelchair_interfaces__action__Move_Result__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!wheelchair_interfaces__action__Move_Result__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
wheelchair_interfaces__action__Move_Result__Sequence__copy(
  const wheelchair_interfaces__action__Move_Result__Sequence * input,
  wheelchair_interfaces__action__Move_Result__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(wheelchair_interfaces__action__Move_Result);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    wheelchair_interfaces__action__Move_Result * data =
      (wheelchair_interfaces__action__Move_Result *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!wheelchair_interfaces__action__Move_Result__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          wheelchair_interfaces__action__Move_Result__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!wheelchair_interfaces__action__Move_Result__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
wheelchair_interfaces__action__Move_Feedback__init(wheelchair_interfaces__action__Move_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // angle
  msg->angle = 0.0f;
  return true;
}

void
wheelchair_interfaces__action__Move_Feedback__fini(wheelchair_interfaces__action__Move_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // angle
}

bool
wheelchair_interfaces__action__Move_Feedback__are_equal(const wheelchair_interfaces__action__Move_Feedback * lhs, const wheelchair_interfaces__action__Move_Feedback * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // angle
  if (lhs->angle != rhs->angle) {
    return false;
  }
  return true;
}

bool
wheelchair_interfaces__action__Move_Feedback__copy(
  const wheelchair_interfaces__action__Move_Feedback * input,
  wheelchair_interfaces__action__Move_Feedback * output)
{
  if (!input || !output) {
    return false;
  }
  // angle
  output->angle = input->angle;
  return true;
}

wheelchair_interfaces__action__Move_Feedback *
wheelchair_interfaces__action__Move_Feedback__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wheelchair_interfaces__action__Move_Feedback * msg = (wheelchair_interfaces__action__Move_Feedback *)allocator.allocate(sizeof(wheelchair_interfaces__action__Move_Feedback), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(wheelchair_interfaces__action__Move_Feedback));
  bool success = wheelchair_interfaces__action__Move_Feedback__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
wheelchair_interfaces__action__Move_Feedback__destroy(wheelchair_interfaces__action__Move_Feedback * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    wheelchair_interfaces__action__Move_Feedback__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
wheelchair_interfaces__action__Move_Feedback__Sequence__init(wheelchair_interfaces__action__Move_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wheelchair_interfaces__action__Move_Feedback * data = NULL;

  if (size) {
    data = (wheelchair_interfaces__action__Move_Feedback *)allocator.zero_allocate(size, sizeof(wheelchair_interfaces__action__Move_Feedback), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = wheelchair_interfaces__action__Move_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        wheelchair_interfaces__action__Move_Feedback__fini(&data[i - 1]);
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
wheelchair_interfaces__action__Move_Feedback__Sequence__fini(wheelchair_interfaces__action__Move_Feedback__Sequence * array)
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
      wheelchair_interfaces__action__Move_Feedback__fini(&array->data[i]);
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

wheelchair_interfaces__action__Move_Feedback__Sequence *
wheelchair_interfaces__action__Move_Feedback__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wheelchair_interfaces__action__Move_Feedback__Sequence * array = (wheelchair_interfaces__action__Move_Feedback__Sequence *)allocator.allocate(sizeof(wheelchair_interfaces__action__Move_Feedback__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = wheelchair_interfaces__action__Move_Feedback__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
wheelchair_interfaces__action__Move_Feedback__Sequence__destroy(wheelchair_interfaces__action__Move_Feedback__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    wheelchair_interfaces__action__Move_Feedback__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
wheelchair_interfaces__action__Move_Feedback__Sequence__are_equal(const wheelchair_interfaces__action__Move_Feedback__Sequence * lhs, const wheelchair_interfaces__action__Move_Feedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!wheelchair_interfaces__action__Move_Feedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
wheelchair_interfaces__action__Move_Feedback__Sequence__copy(
  const wheelchair_interfaces__action__Move_Feedback__Sequence * input,
  wheelchair_interfaces__action__Move_Feedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(wheelchair_interfaces__action__Move_Feedback);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    wheelchair_interfaces__action__Move_Feedback * data =
      (wheelchair_interfaces__action__Move_Feedback *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!wheelchair_interfaces__action__Move_Feedback__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          wheelchair_interfaces__action__Move_Feedback__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!wheelchair_interfaces__action__Move_Feedback__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `goal`
// already included above
// #include "wheelchair_interfaces/action/detail/move__functions.h"

bool
wheelchair_interfaces__action__Move_SendGoal_Request__init(wheelchair_interfaces__action__Move_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    wheelchair_interfaces__action__Move_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!wheelchair_interfaces__action__Move_Goal__init(&msg->goal)) {
    wheelchair_interfaces__action__Move_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
wheelchair_interfaces__action__Move_SendGoal_Request__fini(wheelchair_interfaces__action__Move_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  wheelchair_interfaces__action__Move_Goal__fini(&msg->goal);
}

bool
wheelchair_interfaces__action__Move_SendGoal_Request__are_equal(const wheelchair_interfaces__action__Move_SendGoal_Request * lhs, const wheelchair_interfaces__action__Move_SendGoal_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // goal
  if (!wheelchair_interfaces__action__Move_Goal__are_equal(
      &(lhs->goal), &(rhs->goal)))
  {
    return false;
  }
  return true;
}

bool
wheelchair_interfaces__action__Move_SendGoal_Request__copy(
  const wheelchair_interfaces__action__Move_SendGoal_Request * input,
  wheelchair_interfaces__action__Move_SendGoal_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // goal
  if (!wheelchair_interfaces__action__Move_Goal__copy(
      &(input->goal), &(output->goal)))
  {
    return false;
  }
  return true;
}

wheelchair_interfaces__action__Move_SendGoal_Request *
wheelchair_interfaces__action__Move_SendGoal_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wheelchair_interfaces__action__Move_SendGoal_Request * msg = (wheelchair_interfaces__action__Move_SendGoal_Request *)allocator.allocate(sizeof(wheelchair_interfaces__action__Move_SendGoal_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(wheelchair_interfaces__action__Move_SendGoal_Request));
  bool success = wheelchair_interfaces__action__Move_SendGoal_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
wheelchair_interfaces__action__Move_SendGoal_Request__destroy(wheelchair_interfaces__action__Move_SendGoal_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    wheelchair_interfaces__action__Move_SendGoal_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
wheelchair_interfaces__action__Move_SendGoal_Request__Sequence__init(wheelchair_interfaces__action__Move_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wheelchair_interfaces__action__Move_SendGoal_Request * data = NULL;

  if (size) {
    data = (wheelchair_interfaces__action__Move_SendGoal_Request *)allocator.zero_allocate(size, sizeof(wheelchair_interfaces__action__Move_SendGoal_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = wheelchair_interfaces__action__Move_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        wheelchair_interfaces__action__Move_SendGoal_Request__fini(&data[i - 1]);
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
wheelchair_interfaces__action__Move_SendGoal_Request__Sequence__fini(wheelchair_interfaces__action__Move_SendGoal_Request__Sequence * array)
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
      wheelchair_interfaces__action__Move_SendGoal_Request__fini(&array->data[i]);
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

wheelchair_interfaces__action__Move_SendGoal_Request__Sequence *
wheelchair_interfaces__action__Move_SendGoal_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wheelchair_interfaces__action__Move_SendGoal_Request__Sequence * array = (wheelchair_interfaces__action__Move_SendGoal_Request__Sequence *)allocator.allocate(sizeof(wheelchair_interfaces__action__Move_SendGoal_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = wheelchair_interfaces__action__Move_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
wheelchair_interfaces__action__Move_SendGoal_Request__Sequence__destroy(wheelchair_interfaces__action__Move_SendGoal_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    wheelchair_interfaces__action__Move_SendGoal_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
wheelchair_interfaces__action__Move_SendGoal_Request__Sequence__are_equal(const wheelchair_interfaces__action__Move_SendGoal_Request__Sequence * lhs, const wheelchair_interfaces__action__Move_SendGoal_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!wheelchair_interfaces__action__Move_SendGoal_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
wheelchair_interfaces__action__Move_SendGoal_Request__Sequence__copy(
  const wheelchair_interfaces__action__Move_SendGoal_Request__Sequence * input,
  wheelchair_interfaces__action__Move_SendGoal_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(wheelchair_interfaces__action__Move_SendGoal_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    wheelchair_interfaces__action__Move_SendGoal_Request * data =
      (wheelchair_interfaces__action__Move_SendGoal_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!wheelchair_interfaces__action__Move_SendGoal_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          wheelchair_interfaces__action__Move_SendGoal_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!wheelchair_interfaces__action__Move_SendGoal_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
wheelchair_interfaces__action__Move_SendGoal_Response__init(wheelchair_interfaces__action__Move_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    wheelchair_interfaces__action__Move_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
wheelchair_interfaces__action__Move_SendGoal_Response__fini(wheelchair_interfaces__action__Move_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

bool
wheelchair_interfaces__action__Move_SendGoal_Response__are_equal(const wheelchair_interfaces__action__Move_SendGoal_Response * lhs, const wheelchair_interfaces__action__Move_SendGoal_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // accepted
  if (lhs->accepted != rhs->accepted) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  return true;
}

bool
wheelchair_interfaces__action__Move_SendGoal_Response__copy(
  const wheelchair_interfaces__action__Move_SendGoal_Response * input,
  wheelchair_interfaces__action__Move_SendGoal_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // accepted
  output->accepted = input->accepted;
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  return true;
}

wheelchair_interfaces__action__Move_SendGoal_Response *
wheelchair_interfaces__action__Move_SendGoal_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wheelchair_interfaces__action__Move_SendGoal_Response * msg = (wheelchair_interfaces__action__Move_SendGoal_Response *)allocator.allocate(sizeof(wheelchair_interfaces__action__Move_SendGoal_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(wheelchair_interfaces__action__Move_SendGoal_Response));
  bool success = wheelchair_interfaces__action__Move_SendGoal_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
wheelchair_interfaces__action__Move_SendGoal_Response__destroy(wheelchair_interfaces__action__Move_SendGoal_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    wheelchair_interfaces__action__Move_SendGoal_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
wheelchair_interfaces__action__Move_SendGoal_Response__Sequence__init(wheelchair_interfaces__action__Move_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wheelchair_interfaces__action__Move_SendGoal_Response * data = NULL;

  if (size) {
    data = (wheelchair_interfaces__action__Move_SendGoal_Response *)allocator.zero_allocate(size, sizeof(wheelchair_interfaces__action__Move_SendGoal_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = wheelchair_interfaces__action__Move_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        wheelchair_interfaces__action__Move_SendGoal_Response__fini(&data[i - 1]);
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
wheelchair_interfaces__action__Move_SendGoal_Response__Sequence__fini(wheelchair_interfaces__action__Move_SendGoal_Response__Sequence * array)
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
      wheelchair_interfaces__action__Move_SendGoal_Response__fini(&array->data[i]);
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

wheelchair_interfaces__action__Move_SendGoal_Response__Sequence *
wheelchair_interfaces__action__Move_SendGoal_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wheelchair_interfaces__action__Move_SendGoal_Response__Sequence * array = (wheelchair_interfaces__action__Move_SendGoal_Response__Sequence *)allocator.allocate(sizeof(wheelchair_interfaces__action__Move_SendGoal_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = wheelchair_interfaces__action__Move_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
wheelchair_interfaces__action__Move_SendGoal_Response__Sequence__destroy(wheelchair_interfaces__action__Move_SendGoal_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    wheelchair_interfaces__action__Move_SendGoal_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
wheelchair_interfaces__action__Move_SendGoal_Response__Sequence__are_equal(const wheelchair_interfaces__action__Move_SendGoal_Response__Sequence * lhs, const wheelchair_interfaces__action__Move_SendGoal_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!wheelchair_interfaces__action__Move_SendGoal_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
wheelchair_interfaces__action__Move_SendGoal_Response__Sequence__copy(
  const wheelchair_interfaces__action__Move_SendGoal_Response__Sequence * input,
  wheelchair_interfaces__action__Move_SendGoal_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(wheelchair_interfaces__action__Move_SendGoal_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    wheelchair_interfaces__action__Move_SendGoal_Response * data =
      (wheelchair_interfaces__action__Move_SendGoal_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!wheelchair_interfaces__action__Move_SendGoal_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          wheelchair_interfaces__action__Move_SendGoal_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!wheelchair_interfaces__action__Move_SendGoal_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"

bool
wheelchair_interfaces__action__Move_GetResult_Request__init(wheelchair_interfaces__action__Move_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    wheelchair_interfaces__action__Move_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
wheelchair_interfaces__action__Move_GetResult_Request__fini(wheelchair_interfaces__action__Move_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

bool
wheelchair_interfaces__action__Move_GetResult_Request__are_equal(const wheelchair_interfaces__action__Move_GetResult_Request * lhs, const wheelchair_interfaces__action__Move_GetResult_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  return true;
}

bool
wheelchair_interfaces__action__Move_GetResult_Request__copy(
  const wheelchair_interfaces__action__Move_GetResult_Request * input,
  wheelchair_interfaces__action__Move_GetResult_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  return true;
}

wheelchair_interfaces__action__Move_GetResult_Request *
wheelchair_interfaces__action__Move_GetResult_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wheelchair_interfaces__action__Move_GetResult_Request * msg = (wheelchair_interfaces__action__Move_GetResult_Request *)allocator.allocate(sizeof(wheelchair_interfaces__action__Move_GetResult_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(wheelchair_interfaces__action__Move_GetResult_Request));
  bool success = wheelchair_interfaces__action__Move_GetResult_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
wheelchair_interfaces__action__Move_GetResult_Request__destroy(wheelchair_interfaces__action__Move_GetResult_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    wheelchair_interfaces__action__Move_GetResult_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
wheelchair_interfaces__action__Move_GetResult_Request__Sequence__init(wheelchair_interfaces__action__Move_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wheelchair_interfaces__action__Move_GetResult_Request * data = NULL;

  if (size) {
    data = (wheelchair_interfaces__action__Move_GetResult_Request *)allocator.zero_allocate(size, sizeof(wheelchair_interfaces__action__Move_GetResult_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = wheelchair_interfaces__action__Move_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        wheelchair_interfaces__action__Move_GetResult_Request__fini(&data[i - 1]);
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
wheelchair_interfaces__action__Move_GetResult_Request__Sequence__fini(wheelchair_interfaces__action__Move_GetResult_Request__Sequence * array)
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
      wheelchair_interfaces__action__Move_GetResult_Request__fini(&array->data[i]);
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

wheelchair_interfaces__action__Move_GetResult_Request__Sequence *
wheelchair_interfaces__action__Move_GetResult_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wheelchair_interfaces__action__Move_GetResult_Request__Sequence * array = (wheelchair_interfaces__action__Move_GetResult_Request__Sequence *)allocator.allocate(sizeof(wheelchair_interfaces__action__Move_GetResult_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = wheelchair_interfaces__action__Move_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
wheelchair_interfaces__action__Move_GetResult_Request__Sequence__destroy(wheelchair_interfaces__action__Move_GetResult_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    wheelchair_interfaces__action__Move_GetResult_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
wheelchair_interfaces__action__Move_GetResult_Request__Sequence__are_equal(const wheelchair_interfaces__action__Move_GetResult_Request__Sequence * lhs, const wheelchair_interfaces__action__Move_GetResult_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!wheelchair_interfaces__action__Move_GetResult_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
wheelchair_interfaces__action__Move_GetResult_Request__Sequence__copy(
  const wheelchair_interfaces__action__Move_GetResult_Request__Sequence * input,
  wheelchair_interfaces__action__Move_GetResult_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(wheelchair_interfaces__action__Move_GetResult_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    wheelchair_interfaces__action__Move_GetResult_Request * data =
      (wheelchair_interfaces__action__Move_GetResult_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!wheelchair_interfaces__action__Move_GetResult_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          wheelchair_interfaces__action__Move_GetResult_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!wheelchair_interfaces__action__Move_GetResult_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `result`
// already included above
// #include "wheelchair_interfaces/action/detail/move__functions.h"

bool
wheelchair_interfaces__action__Move_GetResult_Response__init(wheelchair_interfaces__action__Move_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!wheelchair_interfaces__action__Move_Result__init(&msg->result)) {
    wheelchair_interfaces__action__Move_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
wheelchair_interfaces__action__Move_GetResult_Response__fini(wheelchair_interfaces__action__Move_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  wheelchair_interfaces__action__Move_Result__fini(&msg->result);
}

bool
wheelchair_interfaces__action__Move_GetResult_Response__are_equal(const wheelchair_interfaces__action__Move_GetResult_Response * lhs, const wheelchair_interfaces__action__Move_GetResult_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // result
  if (!wheelchair_interfaces__action__Move_Result__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
wheelchair_interfaces__action__Move_GetResult_Response__copy(
  const wheelchair_interfaces__action__Move_GetResult_Response * input,
  wheelchair_interfaces__action__Move_GetResult_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  // result
  if (!wheelchair_interfaces__action__Move_Result__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

wheelchair_interfaces__action__Move_GetResult_Response *
wheelchair_interfaces__action__Move_GetResult_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wheelchair_interfaces__action__Move_GetResult_Response * msg = (wheelchair_interfaces__action__Move_GetResult_Response *)allocator.allocate(sizeof(wheelchair_interfaces__action__Move_GetResult_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(wheelchair_interfaces__action__Move_GetResult_Response));
  bool success = wheelchair_interfaces__action__Move_GetResult_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
wheelchair_interfaces__action__Move_GetResult_Response__destroy(wheelchair_interfaces__action__Move_GetResult_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    wheelchair_interfaces__action__Move_GetResult_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
wheelchair_interfaces__action__Move_GetResult_Response__Sequence__init(wheelchair_interfaces__action__Move_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wheelchair_interfaces__action__Move_GetResult_Response * data = NULL;

  if (size) {
    data = (wheelchair_interfaces__action__Move_GetResult_Response *)allocator.zero_allocate(size, sizeof(wheelchair_interfaces__action__Move_GetResult_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = wheelchair_interfaces__action__Move_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        wheelchair_interfaces__action__Move_GetResult_Response__fini(&data[i - 1]);
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
wheelchair_interfaces__action__Move_GetResult_Response__Sequence__fini(wheelchair_interfaces__action__Move_GetResult_Response__Sequence * array)
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
      wheelchair_interfaces__action__Move_GetResult_Response__fini(&array->data[i]);
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

wheelchair_interfaces__action__Move_GetResult_Response__Sequence *
wheelchair_interfaces__action__Move_GetResult_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wheelchair_interfaces__action__Move_GetResult_Response__Sequence * array = (wheelchair_interfaces__action__Move_GetResult_Response__Sequence *)allocator.allocate(sizeof(wheelchair_interfaces__action__Move_GetResult_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = wheelchair_interfaces__action__Move_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
wheelchair_interfaces__action__Move_GetResult_Response__Sequence__destroy(wheelchair_interfaces__action__Move_GetResult_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    wheelchair_interfaces__action__Move_GetResult_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
wheelchair_interfaces__action__Move_GetResult_Response__Sequence__are_equal(const wheelchair_interfaces__action__Move_GetResult_Response__Sequence * lhs, const wheelchair_interfaces__action__Move_GetResult_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!wheelchair_interfaces__action__Move_GetResult_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
wheelchair_interfaces__action__Move_GetResult_Response__Sequence__copy(
  const wheelchair_interfaces__action__Move_GetResult_Response__Sequence * input,
  wheelchair_interfaces__action__Move_GetResult_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(wheelchair_interfaces__action__Move_GetResult_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    wheelchair_interfaces__action__Move_GetResult_Response * data =
      (wheelchair_interfaces__action__Move_GetResult_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!wheelchair_interfaces__action__Move_GetResult_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          wheelchair_interfaces__action__Move_GetResult_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!wheelchair_interfaces__action__Move_GetResult_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `feedback`
// already included above
// #include "wheelchair_interfaces/action/detail/move__functions.h"

bool
wheelchair_interfaces__action__Move_FeedbackMessage__init(wheelchair_interfaces__action__Move_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    wheelchair_interfaces__action__Move_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!wheelchair_interfaces__action__Move_Feedback__init(&msg->feedback)) {
    wheelchair_interfaces__action__Move_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
wheelchair_interfaces__action__Move_FeedbackMessage__fini(wheelchair_interfaces__action__Move_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  wheelchair_interfaces__action__Move_Feedback__fini(&msg->feedback);
}

bool
wheelchair_interfaces__action__Move_FeedbackMessage__are_equal(const wheelchair_interfaces__action__Move_FeedbackMessage * lhs, const wheelchair_interfaces__action__Move_FeedbackMessage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // feedback
  if (!wheelchair_interfaces__action__Move_Feedback__are_equal(
      &(lhs->feedback), &(rhs->feedback)))
  {
    return false;
  }
  return true;
}

bool
wheelchair_interfaces__action__Move_FeedbackMessage__copy(
  const wheelchair_interfaces__action__Move_FeedbackMessage * input,
  wheelchair_interfaces__action__Move_FeedbackMessage * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // feedback
  if (!wheelchair_interfaces__action__Move_Feedback__copy(
      &(input->feedback), &(output->feedback)))
  {
    return false;
  }
  return true;
}

wheelchair_interfaces__action__Move_FeedbackMessage *
wheelchair_interfaces__action__Move_FeedbackMessage__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wheelchair_interfaces__action__Move_FeedbackMessage * msg = (wheelchair_interfaces__action__Move_FeedbackMessage *)allocator.allocate(sizeof(wheelchair_interfaces__action__Move_FeedbackMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(wheelchair_interfaces__action__Move_FeedbackMessage));
  bool success = wheelchair_interfaces__action__Move_FeedbackMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
wheelchair_interfaces__action__Move_FeedbackMessage__destroy(wheelchair_interfaces__action__Move_FeedbackMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    wheelchair_interfaces__action__Move_FeedbackMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
wheelchair_interfaces__action__Move_FeedbackMessage__Sequence__init(wheelchair_interfaces__action__Move_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wheelchair_interfaces__action__Move_FeedbackMessage * data = NULL;

  if (size) {
    data = (wheelchair_interfaces__action__Move_FeedbackMessage *)allocator.zero_allocate(size, sizeof(wheelchair_interfaces__action__Move_FeedbackMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = wheelchair_interfaces__action__Move_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        wheelchair_interfaces__action__Move_FeedbackMessage__fini(&data[i - 1]);
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
wheelchair_interfaces__action__Move_FeedbackMessage__Sequence__fini(wheelchair_interfaces__action__Move_FeedbackMessage__Sequence * array)
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
      wheelchair_interfaces__action__Move_FeedbackMessage__fini(&array->data[i]);
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

wheelchair_interfaces__action__Move_FeedbackMessage__Sequence *
wheelchair_interfaces__action__Move_FeedbackMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wheelchair_interfaces__action__Move_FeedbackMessage__Sequence * array = (wheelchair_interfaces__action__Move_FeedbackMessage__Sequence *)allocator.allocate(sizeof(wheelchair_interfaces__action__Move_FeedbackMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = wheelchair_interfaces__action__Move_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
wheelchair_interfaces__action__Move_FeedbackMessage__Sequence__destroy(wheelchair_interfaces__action__Move_FeedbackMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    wheelchair_interfaces__action__Move_FeedbackMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
wheelchair_interfaces__action__Move_FeedbackMessage__Sequence__are_equal(const wheelchair_interfaces__action__Move_FeedbackMessage__Sequence * lhs, const wheelchair_interfaces__action__Move_FeedbackMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!wheelchair_interfaces__action__Move_FeedbackMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
wheelchair_interfaces__action__Move_FeedbackMessage__Sequence__copy(
  const wheelchair_interfaces__action__Move_FeedbackMessage__Sequence * input,
  wheelchair_interfaces__action__Move_FeedbackMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(wheelchair_interfaces__action__Move_FeedbackMessage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    wheelchair_interfaces__action__Move_FeedbackMessage * data =
      (wheelchair_interfaces__action__Move_FeedbackMessage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!wheelchair_interfaces__action__Move_FeedbackMessage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          wheelchair_interfaces__action__Move_FeedbackMessage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!wheelchair_interfaces__action__Move_FeedbackMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
