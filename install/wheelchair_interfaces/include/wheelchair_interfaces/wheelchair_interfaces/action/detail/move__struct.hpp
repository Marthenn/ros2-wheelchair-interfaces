// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from wheelchair_interfaces:action/Move.idl
// generated code does not contain a copyright notice

#ifndef WHEELCHAIR_INTERFACES__ACTION__DETAIL__MOVE__STRUCT_HPP_
#define WHEELCHAIR_INTERFACES__ACTION__DETAIL__MOVE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__wheelchair_interfaces__action__Move_Goal __attribute__((deprecated))
#else
# define DEPRECATED__wheelchair_interfaces__action__Move_Goal __declspec(deprecated)
#endif

namespace wheelchair_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Move_Goal_
{
  using Type = Move_Goal_<ContainerAllocator>;

  explicit Move_Goal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->angle = 0.0f;
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->movement = "";
      this->angle = 0.0f;
    }
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->movement = "";
    }
  }

  explicit Move_Goal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : movement(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->angle = 0.0f;
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->movement = "";
      this->angle = 0.0f;
    }
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->movement = "";
    }
  }

  // field types and members
  using _movement_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _movement_type movement;
  using _angle_type =
    float;
  _angle_type angle;

  // setters for named parameter idiom
  Type & set__movement(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->movement = _arg;
    return *this;
  }
  Type & set__angle(
    const float & _arg)
  {
    this->angle = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    wheelchair_interfaces::action::Move_Goal_<ContainerAllocator> *;
  using ConstRawPtr =
    const wheelchair_interfaces::action::Move_Goal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<wheelchair_interfaces::action::Move_Goal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<wheelchair_interfaces::action::Move_Goal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      wheelchair_interfaces::action::Move_Goal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<wheelchair_interfaces::action::Move_Goal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      wheelchair_interfaces::action::Move_Goal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<wheelchair_interfaces::action::Move_Goal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<wheelchair_interfaces::action::Move_Goal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<wheelchair_interfaces::action::Move_Goal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__wheelchair_interfaces__action__Move_Goal
    std::shared_ptr<wheelchair_interfaces::action::Move_Goal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__wheelchair_interfaces__action__Move_Goal
    std::shared_ptr<wheelchair_interfaces::action::Move_Goal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Move_Goal_ & other) const
  {
    if (this->movement != other.movement) {
      return false;
    }
    if (this->angle != other.angle) {
      return false;
    }
    return true;
  }
  bool operator!=(const Move_Goal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Move_Goal_

// alias to use template instance with default allocator
using Move_Goal =
  wheelchair_interfaces::action::Move_Goal_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace wheelchair_interfaces


#ifndef _WIN32
# define DEPRECATED__wheelchair_interfaces__action__Move_Result __attribute__((deprecated))
#else
# define DEPRECATED__wheelchair_interfaces__action__Move_Result __declspec(deprecated)
#endif

namespace wheelchair_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Move_Result_
{
  using Type = Move_Result_<ContainerAllocator>;

  explicit Move_Result_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->angle = 0.0f;
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->angle = 0.0f;
    }
  }

  explicit Move_Result_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->angle = 0.0f;
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->angle = 0.0f;
    }
  }

  // field types and members
  using _angle_type =
    float;
  _angle_type angle;

  // setters for named parameter idiom
  Type & set__angle(
    const float & _arg)
  {
    this->angle = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    wheelchair_interfaces::action::Move_Result_<ContainerAllocator> *;
  using ConstRawPtr =
    const wheelchair_interfaces::action::Move_Result_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<wheelchair_interfaces::action::Move_Result_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<wheelchair_interfaces::action::Move_Result_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      wheelchair_interfaces::action::Move_Result_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<wheelchair_interfaces::action::Move_Result_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      wheelchair_interfaces::action::Move_Result_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<wheelchair_interfaces::action::Move_Result_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<wheelchair_interfaces::action::Move_Result_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<wheelchair_interfaces::action::Move_Result_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__wheelchair_interfaces__action__Move_Result
    std::shared_ptr<wheelchair_interfaces::action::Move_Result_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__wheelchair_interfaces__action__Move_Result
    std::shared_ptr<wheelchair_interfaces::action::Move_Result_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Move_Result_ & other) const
  {
    if (this->angle != other.angle) {
      return false;
    }
    return true;
  }
  bool operator!=(const Move_Result_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Move_Result_

// alias to use template instance with default allocator
using Move_Result =
  wheelchair_interfaces::action::Move_Result_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace wheelchair_interfaces


#ifndef _WIN32
# define DEPRECATED__wheelchair_interfaces__action__Move_Feedback __attribute__((deprecated))
#else
# define DEPRECATED__wheelchair_interfaces__action__Move_Feedback __declspec(deprecated)
#endif

namespace wheelchair_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Move_Feedback_
{
  using Type = Move_Feedback_<ContainerAllocator>;

  explicit Move_Feedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->angle = 0.0f;
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->angle = 0.0f;
    }
  }

  explicit Move_Feedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->angle = 0.0f;
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->angle = 0.0f;
    }
  }

  // field types and members
  using _angle_type =
    float;
  _angle_type angle;

  // setters for named parameter idiom
  Type & set__angle(
    const float & _arg)
  {
    this->angle = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    wheelchair_interfaces::action::Move_Feedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const wheelchair_interfaces::action::Move_Feedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<wheelchair_interfaces::action::Move_Feedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<wheelchair_interfaces::action::Move_Feedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      wheelchair_interfaces::action::Move_Feedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<wheelchair_interfaces::action::Move_Feedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      wheelchair_interfaces::action::Move_Feedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<wheelchair_interfaces::action::Move_Feedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<wheelchair_interfaces::action::Move_Feedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<wheelchair_interfaces::action::Move_Feedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__wheelchair_interfaces__action__Move_Feedback
    std::shared_ptr<wheelchair_interfaces::action::Move_Feedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__wheelchair_interfaces__action__Move_Feedback
    std::shared_ptr<wheelchair_interfaces::action::Move_Feedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Move_Feedback_ & other) const
  {
    if (this->angle != other.angle) {
      return false;
    }
    return true;
  }
  bool operator!=(const Move_Feedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Move_Feedback_

// alias to use template instance with default allocator
using Move_Feedback =
  wheelchair_interfaces::action::Move_Feedback_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace wheelchair_interfaces


// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'goal'
#include "wheelchair_interfaces/action/detail/move__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__wheelchair_interfaces__action__Move_SendGoal_Request __attribute__((deprecated))
#else
# define DEPRECATED__wheelchair_interfaces__action__Move_SendGoal_Request __declspec(deprecated)
#endif

namespace wheelchair_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Move_SendGoal_Request_
{
  using Type = Move_SendGoal_Request_<ContainerAllocator>;

  explicit Move_SendGoal_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    goal(_init)
  {
    (void)_init;
  }

  explicit Move_SendGoal_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    goal(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _goal_type =
    wheelchair_interfaces::action::Move_Goal_<ContainerAllocator>;
  _goal_type goal;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__goal(
    const wheelchair_interfaces::action::Move_Goal_<ContainerAllocator> & _arg)
  {
    this->goal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    wheelchair_interfaces::action::Move_SendGoal_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const wheelchair_interfaces::action::Move_SendGoal_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<wheelchair_interfaces::action::Move_SendGoal_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<wheelchair_interfaces::action::Move_SendGoal_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      wheelchair_interfaces::action::Move_SendGoal_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<wheelchair_interfaces::action::Move_SendGoal_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      wheelchair_interfaces::action::Move_SendGoal_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<wheelchair_interfaces::action::Move_SendGoal_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<wheelchair_interfaces::action::Move_SendGoal_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<wheelchair_interfaces::action::Move_SendGoal_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__wheelchair_interfaces__action__Move_SendGoal_Request
    std::shared_ptr<wheelchair_interfaces::action::Move_SendGoal_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__wheelchair_interfaces__action__Move_SendGoal_Request
    std::shared_ptr<wheelchair_interfaces::action::Move_SendGoal_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Move_SendGoal_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    return true;
  }
  bool operator!=(const Move_SendGoal_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Move_SendGoal_Request_

// alias to use template instance with default allocator
using Move_SendGoal_Request =
  wheelchair_interfaces::action::Move_SendGoal_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace wheelchair_interfaces


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__wheelchair_interfaces__action__Move_SendGoal_Response __attribute__((deprecated))
#else
# define DEPRECATED__wheelchair_interfaces__action__Move_SendGoal_Response __declspec(deprecated)
#endif

namespace wheelchair_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Move_SendGoal_Response_
{
  using Type = Move_SendGoal_Response_<ContainerAllocator>;

  explicit Move_SendGoal_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  explicit Move_SendGoal_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  // field types and members
  using _accepted_type =
    bool;
  _accepted_type accepted;
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;

  // setters for named parameter idiom
  Type & set__accepted(
    const bool & _arg)
  {
    this->accepted = _arg;
    return *this;
  }
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    wheelchair_interfaces::action::Move_SendGoal_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const wheelchair_interfaces::action::Move_SendGoal_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<wheelchair_interfaces::action::Move_SendGoal_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<wheelchair_interfaces::action::Move_SendGoal_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      wheelchair_interfaces::action::Move_SendGoal_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<wheelchair_interfaces::action::Move_SendGoal_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      wheelchair_interfaces::action::Move_SendGoal_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<wheelchair_interfaces::action::Move_SendGoal_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<wheelchair_interfaces::action::Move_SendGoal_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<wheelchair_interfaces::action::Move_SendGoal_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__wheelchair_interfaces__action__Move_SendGoal_Response
    std::shared_ptr<wheelchair_interfaces::action::Move_SendGoal_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__wheelchair_interfaces__action__Move_SendGoal_Response
    std::shared_ptr<wheelchair_interfaces::action::Move_SendGoal_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Move_SendGoal_Response_ & other) const
  {
    if (this->accepted != other.accepted) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const Move_SendGoal_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Move_SendGoal_Response_

// alias to use template instance with default allocator
using Move_SendGoal_Response =
  wheelchair_interfaces::action::Move_SendGoal_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace wheelchair_interfaces

namespace wheelchair_interfaces
{

namespace action
{

struct Move_SendGoal
{
  using Request = wheelchair_interfaces::action::Move_SendGoal_Request;
  using Response = wheelchair_interfaces::action::Move_SendGoal_Response;
};

}  // namespace action

}  // namespace wheelchair_interfaces


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__wheelchair_interfaces__action__Move_GetResult_Request __attribute__((deprecated))
#else
# define DEPRECATED__wheelchair_interfaces__action__Move_GetResult_Request __declspec(deprecated)
#endif

namespace wheelchair_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Move_GetResult_Request_
{
  using Type = Move_GetResult_Request_<ContainerAllocator>;

  explicit Move_GetResult_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init)
  {
    (void)_init;
  }

  explicit Move_GetResult_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    wheelchair_interfaces::action::Move_GetResult_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const wheelchair_interfaces::action::Move_GetResult_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<wheelchair_interfaces::action::Move_GetResult_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<wheelchair_interfaces::action::Move_GetResult_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      wheelchair_interfaces::action::Move_GetResult_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<wheelchair_interfaces::action::Move_GetResult_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      wheelchair_interfaces::action::Move_GetResult_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<wheelchair_interfaces::action::Move_GetResult_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<wheelchair_interfaces::action::Move_GetResult_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<wheelchair_interfaces::action::Move_GetResult_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__wheelchair_interfaces__action__Move_GetResult_Request
    std::shared_ptr<wheelchair_interfaces::action::Move_GetResult_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__wheelchair_interfaces__action__Move_GetResult_Request
    std::shared_ptr<wheelchair_interfaces::action::Move_GetResult_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Move_GetResult_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const Move_GetResult_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Move_GetResult_Request_

// alias to use template instance with default allocator
using Move_GetResult_Request =
  wheelchair_interfaces::action::Move_GetResult_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace wheelchair_interfaces


// Include directives for member types
// Member 'result'
// already included above
// #include "wheelchair_interfaces/action/detail/move__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__wheelchair_interfaces__action__Move_GetResult_Response __attribute__((deprecated))
#else
# define DEPRECATED__wheelchair_interfaces__action__Move_GetResult_Response __declspec(deprecated)
#endif

namespace wheelchair_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Move_GetResult_Response_
{
  using Type = Move_GetResult_Response_<ContainerAllocator>;

  explicit Move_GetResult_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  explicit Move_GetResult_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  // field types and members
  using _status_type =
    int8_t;
  _status_type status;
  using _result_type =
    wheelchair_interfaces::action::Move_Result_<ContainerAllocator>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__status(
    const int8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__result(
    const wheelchair_interfaces::action::Move_Result_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    wheelchair_interfaces::action::Move_GetResult_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const wheelchair_interfaces::action::Move_GetResult_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<wheelchair_interfaces::action::Move_GetResult_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<wheelchair_interfaces::action::Move_GetResult_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      wheelchair_interfaces::action::Move_GetResult_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<wheelchair_interfaces::action::Move_GetResult_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      wheelchair_interfaces::action::Move_GetResult_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<wheelchair_interfaces::action::Move_GetResult_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<wheelchair_interfaces::action::Move_GetResult_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<wheelchair_interfaces::action::Move_GetResult_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__wheelchair_interfaces__action__Move_GetResult_Response
    std::shared_ptr<wheelchair_interfaces::action::Move_GetResult_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__wheelchair_interfaces__action__Move_GetResult_Response
    std::shared_ptr<wheelchair_interfaces::action::Move_GetResult_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Move_GetResult_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const Move_GetResult_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Move_GetResult_Response_

// alias to use template instance with default allocator
using Move_GetResult_Response =
  wheelchair_interfaces::action::Move_GetResult_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace wheelchair_interfaces

namespace wheelchair_interfaces
{

namespace action
{

struct Move_GetResult
{
  using Request = wheelchair_interfaces::action::Move_GetResult_Request;
  using Response = wheelchair_interfaces::action::Move_GetResult_Response;
};

}  // namespace action

}  // namespace wheelchair_interfaces


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'feedback'
// already included above
// #include "wheelchair_interfaces/action/detail/move__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__wheelchair_interfaces__action__Move_FeedbackMessage __attribute__((deprecated))
#else
# define DEPRECATED__wheelchair_interfaces__action__Move_FeedbackMessage __declspec(deprecated)
#endif

namespace wheelchair_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Move_FeedbackMessage_
{
  using Type = Move_FeedbackMessage_<ContainerAllocator>;

  explicit Move_FeedbackMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    feedback(_init)
  {
    (void)_init;
  }

  explicit Move_FeedbackMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    feedback(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _feedback_type =
    wheelchair_interfaces::action::Move_Feedback_<ContainerAllocator>;
  _feedback_type feedback;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__feedback(
    const wheelchair_interfaces::action::Move_Feedback_<ContainerAllocator> & _arg)
  {
    this->feedback = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    wheelchair_interfaces::action::Move_FeedbackMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const wheelchair_interfaces::action::Move_FeedbackMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<wheelchair_interfaces::action::Move_FeedbackMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<wheelchair_interfaces::action::Move_FeedbackMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      wheelchair_interfaces::action::Move_FeedbackMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<wheelchair_interfaces::action::Move_FeedbackMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      wheelchair_interfaces::action::Move_FeedbackMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<wheelchair_interfaces::action::Move_FeedbackMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<wheelchair_interfaces::action::Move_FeedbackMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<wheelchair_interfaces::action::Move_FeedbackMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__wheelchair_interfaces__action__Move_FeedbackMessage
    std::shared_ptr<wheelchair_interfaces::action::Move_FeedbackMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__wheelchair_interfaces__action__Move_FeedbackMessage
    std::shared_ptr<wheelchair_interfaces::action::Move_FeedbackMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Move_FeedbackMessage_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const Move_FeedbackMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Move_FeedbackMessage_

// alias to use template instance with default allocator
using Move_FeedbackMessage =
  wheelchair_interfaces::action::Move_FeedbackMessage_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace wheelchair_interfaces

#include "action_msgs/srv/cancel_goal.hpp"
#include "action_msgs/msg/goal_info.hpp"
#include "action_msgs/msg/goal_status_array.hpp"

namespace wheelchair_interfaces
{

namespace action
{

struct Move
{
  /// The goal message defined in the action definition.
  using Goal = wheelchair_interfaces::action::Move_Goal;
  /// The result message defined in the action definition.
  using Result = wheelchair_interfaces::action::Move_Result;
  /// The feedback message defined in the action definition.
  using Feedback = wheelchair_interfaces::action::Move_Feedback;

  struct Impl
  {
    /// The send_goal service using a wrapped version of the goal message as a request.
    using SendGoalService = wheelchair_interfaces::action::Move_SendGoal;
    /// The get_result service using a wrapped version of the result message as a response.
    using GetResultService = wheelchair_interfaces::action::Move_GetResult;
    /// The feedback message with generic fields which wraps the feedback message.
    using FeedbackMessage = wheelchair_interfaces::action::Move_FeedbackMessage;

    /// The generic service to cancel a goal.
    using CancelGoalService = action_msgs::srv::CancelGoal;
    /// The generic message for the status of a goal.
    using GoalStatusMessage = action_msgs::msg::GoalStatusArray;
  };
};

typedef struct Move Move;

}  // namespace action

}  // namespace wheelchair_interfaces

#endif  // WHEELCHAIR_INTERFACES__ACTION__DETAIL__MOVE__STRUCT_HPP_
