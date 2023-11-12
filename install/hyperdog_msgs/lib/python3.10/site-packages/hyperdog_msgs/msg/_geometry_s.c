// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from hyperdog_msgs:msg/Geometry.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "hyperdog_msgs/msg/detail/geometry__struct.h"
#include "hyperdog_msgs/msg/detail/geometry__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__point32__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__point32__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__point32__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__point32__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__point32__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__point32__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__point32__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__point32__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__quaternion__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__quaternion__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool hyperdog_msgs__msg__geometry__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[37];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("hyperdog_msgs.msg._geometry.Geometry", full_classname_dest, 36) == 0);
  }
  hyperdog_msgs__msg__Geometry * ros_message = _ros_message;
  {  // fr
    PyObject * field = PyObject_GetAttrString(_pymsg, "fr");
    if (!field) {
      return false;
    }
    if (!geometry_msgs__msg__point32__convert_from_py(field, &ros_message->fr)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // fl
    PyObject * field = PyObject_GetAttrString(_pymsg, "fl");
    if (!field) {
      return false;
    }
    if (!geometry_msgs__msg__point32__convert_from_py(field, &ros_message->fl)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // br
    PyObject * field = PyObject_GetAttrString(_pymsg, "br");
    if (!field) {
      return false;
    }
    if (!geometry_msgs__msg__point32__convert_from_py(field, &ros_message->br)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // bl
    PyObject * field = PyObject_GetAttrString(_pymsg, "bl");
    if (!field) {
      return false;
    }
    if (!geometry_msgs__msg__point32__convert_from_py(field, &ros_message->bl)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // euler_ang
    PyObject * field = PyObject_GetAttrString(_pymsg, "euler_ang");
    if (!field) {
      return false;
    }
    if (!geometry_msgs__msg__quaternion__convert_from_py(field, &ros_message->euler_ang)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * hyperdog_msgs__msg__geometry__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Geometry */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("hyperdog_msgs.msg._geometry");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Geometry");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  hyperdog_msgs__msg__Geometry * ros_message = (hyperdog_msgs__msg__Geometry *)raw_ros_message;
  {  // fr
    PyObject * field = NULL;
    field = geometry_msgs__msg__point32__convert_to_py(&ros_message->fr);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "fr", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // fl
    PyObject * field = NULL;
    field = geometry_msgs__msg__point32__convert_to_py(&ros_message->fl);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "fl", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // br
    PyObject * field = NULL;
    field = geometry_msgs__msg__point32__convert_to_py(&ros_message->br);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "br", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // bl
    PyObject * field = NULL;
    field = geometry_msgs__msg__point32__convert_to_py(&ros_message->bl);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "bl", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // euler_ang
    PyObject * field = NULL;
    field = geometry_msgs__msg__quaternion__convert_to_py(&ros_message->euler_ang);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "euler_ang", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
