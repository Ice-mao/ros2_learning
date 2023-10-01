// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interfaces_more:msg/AddressBook.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES_MORE__MSG__DETAIL__ADDRESS_BOOK__BUILDER_HPP_
#define INTERFACES_MORE__MSG__DETAIL__ADDRESS_BOOK__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "interfaces_more/msg/detail/address_book__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace interfaces_more
{

namespace msg
{

namespace builder
{

class Init_AddressBook_phone_type
{
public:
  explicit Init_AddressBook_phone_type(::interfaces_more::msg::AddressBook & msg)
  : msg_(msg)
  {}
  ::interfaces_more::msg::AddressBook phone_type(::interfaces_more::msg::AddressBook::_phone_type_type arg)
  {
    msg_.phone_type = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces_more::msg::AddressBook msg_;
};

class Init_AddressBook_phone_number
{
public:
  explicit Init_AddressBook_phone_number(::interfaces_more::msg::AddressBook & msg)
  : msg_(msg)
  {}
  Init_AddressBook_phone_type phone_number(::interfaces_more::msg::AddressBook::_phone_number_type arg)
  {
    msg_.phone_number = std::move(arg);
    return Init_AddressBook_phone_type(msg_);
  }

private:
  ::interfaces_more::msg::AddressBook msg_;
};

class Init_AddressBook_last_name
{
public:
  explicit Init_AddressBook_last_name(::interfaces_more::msg::AddressBook & msg)
  : msg_(msg)
  {}
  Init_AddressBook_phone_number last_name(::interfaces_more::msg::AddressBook::_last_name_type arg)
  {
    msg_.last_name = std::move(arg);
    return Init_AddressBook_phone_number(msg_);
  }

private:
  ::interfaces_more::msg::AddressBook msg_;
};

class Init_AddressBook_first_name
{
public:
  Init_AddressBook_first_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AddressBook_last_name first_name(::interfaces_more::msg::AddressBook::_first_name_type arg)
  {
    msg_.first_name = std::move(arg);
    return Init_AddressBook_last_name(msg_);
  }

private:
  ::interfaces_more::msg::AddressBook msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces_more::msg::AddressBook>()
{
  return interfaces_more::msg::builder::Init_AddressBook_first_name();
}

}  // namespace interfaces_more

#endif  // INTERFACES_MORE__MSG__DETAIL__ADDRESS_BOOK__BUILDER_HPP_
