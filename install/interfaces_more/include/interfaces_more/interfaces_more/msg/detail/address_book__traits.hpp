// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from interfaces_more:msg/AddressBook.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES_MORE__MSG__DETAIL__ADDRESS_BOOK__TRAITS_HPP_
#define INTERFACES_MORE__MSG__DETAIL__ADDRESS_BOOK__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "interfaces_more/msg/detail/address_book__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace interfaces_more
{

namespace msg
{

inline void to_flow_style_yaml(
  const AddressBook & msg,
  std::ostream & out)
{
  out << "{";
  // member: first_name
  {
    out << "first_name: ";
    rosidl_generator_traits::value_to_yaml(msg.first_name, out);
    out << ", ";
  }

  // member: last_name
  {
    out << "last_name: ";
    rosidl_generator_traits::value_to_yaml(msg.last_name, out);
    out << ", ";
  }

  // member: phone_number
  {
    out << "phone_number: ";
    rosidl_generator_traits::value_to_yaml(msg.phone_number, out);
    out << ", ";
  }

  // member: phone_type
  {
    out << "phone_type: ";
    rosidl_generator_traits::value_to_yaml(msg.phone_type, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AddressBook & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: first_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "first_name: ";
    rosidl_generator_traits::value_to_yaml(msg.first_name, out);
    out << "\n";
  }

  // member: last_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "last_name: ";
    rosidl_generator_traits::value_to_yaml(msg.last_name, out);
    out << "\n";
  }

  // member: phone_number
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "phone_number: ";
    rosidl_generator_traits::value_to_yaml(msg.phone_number, out);
    out << "\n";
  }

  // member: phone_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "phone_type: ";
    rosidl_generator_traits::value_to_yaml(msg.phone_type, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AddressBook & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace interfaces_more

namespace rosidl_generator_traits
{

[[deprecated("use interfaces_more::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const interfaces_more::msg::AddressBook & msg,
  std::ostream & out, size_t indentation = 0)
{
  interfaces_more::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use interfaces_more::msg::to_yaml() instead")]]
inline std::string to_yaml(const interfaces_more::msg::AddressBook & msg)
{
  return interfaces_more::msg::to_yaml(msg);
}

template<>
inline const char * data_type<interfaces_more::msg::AddressBook>()
{
  return "interfaces_more::msg::AddressBook";
}

template<>
inline const char * name<interfaces_more::msg::AddressBook>()
{
  return "interfaces_more/msg/AddressBook";
}

template<>
struct has_fixed_size<interfaces_more::msg::AddressBook>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<interfaces_more::msg::AddressBook>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<interfaces_more::msg::AddressBook>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // INTERFACES_MORE__MSG__DETAIL__ADDRESS_BOOK__TRAITS_HPP_
