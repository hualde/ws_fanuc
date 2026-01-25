// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from fanuc_msgs:msg/RobotStatusExt.idl
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
#include "fanuc_msgs/msg/detail/robot_status_ext__struct.h"
#include "fanuc_msgs/msg/detail/robot_status_ext__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool fanuc_msgs__msg__robot_status_ext__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[48];
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
    assert(strncmp("fanuc_msgs.msg._robot_status_ext.RobotStatusExt", full_classname_dest, 47) == 0);
  }
  fanuc_msgs__msg__RobotStatusExt * ros_message = _ros_message;
  {  // error_code
    PyObject * field = PyObject_GetAttrString(_pymsg, "error_code");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->error_code, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // in_motion
    PyObject * field = PyObject_GetAttrString(_pymsg, "in_motion");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->in_motion = (Py_True == field);
    Py_DECREF(field);
  }
  {  // drives_powered
    PyObject * field = PyObject_GetAttrString(_pymsg, "drives_powered");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->drives_powered = (Py_True == field);
    Py_DECREF(field);
  }
  {  // gen_override
    PyObject * field = PyObject_GetAttrString(_pymsg, "gen_override");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->gen_override = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // speed_clamp_limit
    PyObject * field = PyObject_GetAttrString(_pymsg, "speed_clamp_limit");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->speed_clamp_limit = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // control_mode
    PyObject * field = PyObject_GetAttrString(_pymsg, "control_mode");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->control_mode, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * fanuc_msgs__msg__robot_status_ext__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of RobotStatusExt */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("fanuc_msgs.msg._robot_status_ext");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "RobotStatusExt");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  fanuc_msgs__msg__RobotStatusExt * ros_message = (fanuc_msgs__msg__RobotStatusExt *)raw_ros_message;
  {  // error_code
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->error_code.data,
      strlen(ros_message->error_code.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "error_code", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // in_motion
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->in_motion ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "in_motion", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // drives_powered
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->drives_powered ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "drives_powered", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gen_override
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->gen_override);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gen_override", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // speed_clamp_limit
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->speed_clamp_limit);
    {
      int rc = PyObject_SetAttrString(_pymessage, "speed_clamp_limit", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // control_mode
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->control_mode.data,
      strlen(ros_message->control_mode.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "control_mode", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
