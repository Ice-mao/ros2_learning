// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from interfaces_more:msg/AddressBook.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES_MORE__MSG__DETAIL__ADDRESS_BOOK__STRUCT_H_
#define INTERFACES_MORE__MSG__DETAIL__ADDRESS_BOOK__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'PHONE_TYPE_HOME'.
enum
{
  interfaces_more__msg__AddressBook__PHONE_TYPE_HOME = 0
};

/// Constant 'PHONE_TYPE_WORK'.
enum
{
  interfaces_more__msg__AddressBook__PHONE_TYPE_WORK = 1
};

/// Constant 'PHONE_TYPE_MOBILE'.
enum
{
  interfaces_more__msg__AddressBook__PHONE_TYPE_MOBILE = 2
};

// Include directives for member types
// Member 'first_name'
// Member 'last_name'
// Member 'phone_number'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/AddressBook in the package interfaces_more.
typedef struct interfaces_more__msg__AddressBook
{
  rosidl_runtime_c__String first_name;
  rosidl_runtime_c__String last_name;
  rosidl_runtime_c__String phone_number;
  uint8_t phone_type;
} interfaces_more__msg__AddressBook;

// Struct for a sequence of interfaces_more__msg__AddressBook.
typedef struct interfaces_more__msg__AddressBook__Sequence
{
  interfaces_more__msg__AddressBook * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaces_more__msg__AddressBook__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INTERFACES_MORE__MSG__DETAIL__ADDRESS_BOOK__STRUCT_H_
