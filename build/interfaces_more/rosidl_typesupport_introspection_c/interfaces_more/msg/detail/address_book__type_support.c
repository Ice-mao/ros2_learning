// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from interfaces_more:msg/AddressBook.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "interfaces_more/msg/detail/address_book__rosidl_typesupport_introspection_c.h"
#include "interfaces_more/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "interfaces_more/msg/detail/address_book__functions.h"
#include "interfaces_more/msg/detail/address_book__struct.h"


// Include directives for member types
// Member `first_name`
// Member `last_name`
// Member `phone_number`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void interfaces_more__msg__AddressBook__rosidl_typesupport_introspection_c__AddressBook_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  interfaces_more__msg__AddressBook__init(message_memory);
}

void interfaces_more__msg__AddressBook__rosidl_typesupport_introspection_c__AddressBook_fini_function(void * message_memory)
{
  interfaces_more__msg__AddressBook__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember interfaces_more__msg__AddressBook__rosidl_typesupport_introspection_c__AddressBook_message_member_array[4] = {
  {
    "first_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces_more__msg__AddressBook, first_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "last_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces_more__msg__AddressBook, last_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "phone_number",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces_more__msg__AddressBook, phone_number),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "phone_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces_more__msg__AddressBook, phone_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers interfaces_more__msg__AddressBook__rosidl_typesupport_introspection_c__AddressBook_message_members = {
  "interfaces_more__msg",  // message namespace
  "AddressBook",  // message name
  4,  // number of fields
  sizeof(interfaces_more__msg__AddressBook),
  interfaces_more__msg__AddressBook__rosidl_typesupport_introspection_c__AddressBook_message_member_array,  // message members
  interfaces_more__msg__AddressBook__rosidl_typesupport_introspection_c__AddressBook_init_function,  // function to initialize message memory (memory has to be allocated)
  interfaces_more__msg__AddressBook__rosidl_typesupport_introspection_c__AddressBook_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t interfaces_more__msg__AddressBook__rosidl_typesupport_introspection_c__AddressBook_message_type_support_handle = {
  0,
  &interfaces_more__msg__AddressBook__rosidl_typesupport_introspection_c__AddressBook_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_interfaces_more
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interfaces_more, msg, AddressBook)() {
  if (!interfaces_more__msg__AddressBook__rosidl_typesupport_introspection_c__AddressBook_message_type_support_handle.typesupport_identifier) {
    interfaces_more__msg__AddressBook__rosidl_typesupport_introspection_c__AddressBook_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &interfaces_more__msg__AddressBook__rosidl_typesupport_introspection_c__AddressBook_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
