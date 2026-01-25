// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from fanuc_msgs:msg/RobotStatus.idl
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
#include "fanuc_msgs/msg/detail/robot_status__struct.h"
#include "fanuc_msgs/msg/detail/robot_status__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool fanuc_msgs__msg__robot_status__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[41];
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
    assert(strncmp("fanuc_msgs.msg._robot_status.RobotStatus", full_classname_dest, 40) == 0);
  }
  fanuc_msgs__msg__RobotStatus * ros_message = _ros_message;
  {  // in_error
    PyObject * field = PyObject_GetAttrString(_pymsg, "in_error");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->in_error = (Py_True == field);
    Py_DECREF(field);
  }
  {  // tp_enabled
    PyObject * field = PyObject_GetAttrString(_pymsg, "tp_enabled");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->tp_enabled = (Py_True == field);
    Py_DECREF(field);
  }
  {  // e_stopped
    PyObject * field = PyObject_GetAttrString(_pymsg, "e_stopped");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->e_stopped = (Py_True == field);
    Py_DECREF(field);
  }
  {  // motion_possible
    PyObject * field = PyObject_GetAttrString(_pymsg, "motion_possible");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->motion_possible = (Py_True == field);
    Py_DECREF(field);
  }
  {  // contact_stop_mode
    PyObject * field = PyObject_GetAttrString(_pymsg, "contact_stop_mode");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->contact_stop_mode = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * fanuc_msgs__msg__robot_status__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of RobotStatus */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("fanuc_msgs.msg._robot_status");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "RobotStatus");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  fanuc_msgs__msg__RobotStatus * ros_message = (fanuc_msgs__msg__RobotStatus *)raw_ros_message;
  {  // in_error
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->in_error ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "in_error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // tp_enabled
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->tp_enabled ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "tp_enabled", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // e_stopped
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->e_stopped ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "e_stopped", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // motion_possible
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->motion_possible ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "motion_possible", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // contact_stop_mode
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->contact_stop_mode);
    {
      int rc = PyObject_SetAttrString(_pymessage, "contact_stop_mode", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
