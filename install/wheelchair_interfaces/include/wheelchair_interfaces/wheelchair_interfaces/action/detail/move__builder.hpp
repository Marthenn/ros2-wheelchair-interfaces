// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from wheelchair_interfaces:action/Move.idl
// generated code does not contain a copyright notice

#ifndef WHEELCHAIR_INTERFACES__ACTION__DETAIL__MOVE__BUILDER_HPP_
#define WHEELCHAIR_INTERFACES__ACTION__DETAIL__MOVE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "wheelchair_interfaces/action/detail/move__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace wheelchair_interfaces
{

namespace action
{

namespace builder
{

class Init_Move_Goal_angle
{
public:
  explicit Init_Move_Goal_angle(::wheelchair_interfaces::action::Move_Goal & msg)
  : msg_(msg)
  {}
  ::wheelchair_interfaces::action::Move_Goal angle(::wheelchair_interfaces::action::Move_Goal::_angle_type arg)
  {
    msg_.angle = std::move(arg);
    return std::move(msg_);
  }

private:
  ::wheelchair_interfaces::action::Move_Goal msg_;
};

class Init_Move_Goal_movement
{
public:
  Init_Move_Goal_movement()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Move_Goal_angle movement(::wheelchair_interfaces::action::Move_Goal::_movement_type arg)
  {
    msg_.movement = std::move(arg);
    return Init_Move_Goal_angle(msg_);
  }

private:
  ::wheelchair_interfaces::action::Move_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::wheelchair_interfaces::action::Move_Goal>()
{
  return wheelchair_interfaces::action::builder::Init_Move_Goal_movement();
}

}  // namespace wheelchair_interfaces


namespace wheelchair_interfaces
{

namespace action
{

namespace builder
{

class Init_Move_Result_angle
{
public:
  Init_Move_Result_angle()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::wheelchair_interfaces::action::Move_Result angle(::wheelchair_interfaces::action::Move_Result::_angle_type arg)
  {
    msg_.angle = std::move(arg);
    return std::move(msg_);
  }

private:
  ::wheelchair_interfaces::action::Move_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::wheelchair_interfaces::action::Move_Result>()
{
  return wheelchair_interfaces::action::builder::Init_Move_Result_angle();
}

}  // namespace wheelchair_interfaces


namespace wheelchair_interfaces
{

namespace action
{

namespace builder
{

class Init_Move_Feedback_angle
{
public:
  Init_Move_Feedback_angle()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::wheelchair_interfaces::action::Move_Feedback angle(::wheelchair_interfaces::action::Move_Feedback::_angle_type arg)
  {
    msg_.angle = std::move(arg);
    return std::move(msg_);
  }

private:
  ::wheelchair_interfaces::action::Move_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::wheelchair_interfaces::action::Move_Feedback>()
{
  return wheelchair_interfaces::action::builder::Init_Move_Feedback_angle();
}

}  // namespace wheelchair_interfaces


namespace wheelchair_interfaces
{

namespace action
{

namespace builder
{

class Init_Move_SendGoal_Request_goal
{
public:
  explicit Init_Move_SendGoal_Request_goal(::wheelchair_interfaces::action::Move_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::wheelchair_interfaces::action::Move_SendGoal_Request goal(::wheelchair_interfaces::action::Move_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::wheelchair_interfaces::action::Move_SendGoal_Request msg_;
};

class Init_Move_SendGoal_Request_goal_id
{
public:
  Init_Move_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Move_SendGoal_Request_goal goal_id(::wheelchair_interfaces::action::Move_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Move_SendGoal_Request_goal(msg_);
  }

private:
  ::wheelchair_interfaces::action::Move_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::wheelchair_interfaces::action::Move_SendGoal_Request>()
{
  return wheelchair_interfaces::action::builder::Init_Move_SendGoal_Request_goal_id();
}

}  // namespace wheelchair_interfaces


namespace wheelchair_interfaces
{

namespace action
{

namespace builder
{

class Init_Move_SendGoal_Response_stamp
{
public:
  explicit Init_Move_SendGoal_Response_stamp(::wheelchair_interfaces::action::Move_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::wheelchair_interfaces::action::Move_SendGoal_Response stamp(::wheelchair_interfaces::action::Move_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::wheelchair_interfaces::action::Move_SendGoal_Response msg_;
};

class Init_Move_SendGoal_Response_accepted
{
public:
  Init_Move_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Move_SendGoal_Response_stamp accepted(::wheelchair_interfaces::action::Move_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_Move_SendGoal_Response_stamp(msg_);
  }

private:
  ::wheelchair_interfaces::action::Move_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::wheelchair_interfaces::action::Move_SendGoal_Response>()
{
  return wheelchair_interfaces::action::builder::Init_Move_SendGoal_Response_accepted();
}

}  // namespace wheelchair_interfaces


namespace wheelchair_interfaces
{

namespace action
{

namespace builder
{

class Init_Move_GetResult_Request_goal_id
{
public:
  Init_Move_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::wheelchair_interfaces::action::Move_GetResult_Request goal_id(::wheelchair_interfaces::action::Move_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::wheelchair_interfaces::action::Move_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::wheelchair_interfaces::action::Move_GetResult_Request>()
{
  return wheelchair_interfaces::action::builder::Init_Move_GetResult_Request_goal_id();
}

}  // namespace wheelchair_interfaces


namespace wheelchair_interfaces
{

namespace action
{

namespace builder
{

class Init_Move_GetResult_Response_result
{
public:
  explicit Init_Move_GetResult_Response_result(::wheelchair_interfaces::action::Move_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::wheelchair_interfaces::action::Move_GetResult_Response result(::wheelchair_interfaces::action::Move_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::wheelchair_interfaces::action::Move_GetResult_Response msg_;
};

class Init_Move_GetResult_Response_status
{
public:
  Init_Move_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Move_GetResult_Response_result status(::wheelchair_interfaces::action::Move_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_Move_GetResult_Response_result(msg_);
  }

private:
  ::wheelchair_interfaces::action::Move_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::wheelchair_interfaces::action::Move_GetResult_Response>()
{
  return wheelchair_interfaces::action::builder::Init_Move_GetResult_Response_status();
}

}  // namespace wheelchair_interfaces


namespace wheelchair_interfaces
{

namespace action
{

namespace builder
{

class Init_Move_FeedbackMessage_feedback
{
public:
  explicit Init_Move_FeedbackMessage_feedback(::wheelchair_interfaces::action::Move_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::wheelchair_interfaces::action::Move_FeedbackMessage feedback(::wheelchair_interfaces::action::Move_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::wheelchair_interfaces::action::Move_FeedbackMessage msg_;
};

class Init_Move_FeedbackMessage_goal_id
{
public:
  Init_Move_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Move_FeedbackMessage_feedback goal_id(::wheelchair_interfaces::action::Move_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Move_FeedbackMessage_feedback(msg_);
  }

private:
  ::wheelchair_interfaces::action::Move_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::wheelchair_interfaces::action::Move_FeedbackMessage>()
{
  return wheelchair_interfaces::action::builder::Init_Move_FeedbackMessage_goal_id();
}

}  // namespace wheelchair_interfaces

#endif  // WHEELCHAIR_INTERFACES__ACTION__DETAIL__MOVE__BUILDER_HPP_
