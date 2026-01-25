// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from fanuc_msgs:srv/SetPayloadComp.idl
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
#include "fanuc_msgs/srv/detail/set_payload_comp__struct.h"
#include "fanuc_msgs/srv/detail/set_payload_comp__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool fanuc_msgs__srv__set_payload_comp__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[56];
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
    assert(strncmp("fanuc_msgs.srv._set_payload_comp.SetPayloadComp_Request", full_classname_dest, 55) == 0);
  }
  fanuc_msgs__srv__SetPayloadComp_Request * ros_message = _ros_message;
  {  // payload_schedule_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "payload_schedule_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->payload_schedule_id = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // mass
    PyObject * field = PyObject_GetAttrString(_pymsg, "mass");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->mass = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // cg_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "cg_x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->cg_x = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // cg_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "cg_y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->cg_y = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // cg_z
    PyObject * field = PyObject_GetAttrString(_pymsg, "cg_z");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->cg_z = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // in_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "in_x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->in_x = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // in_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "in_y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->in_y = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // in_z
    PyObject * field = PyObject_GetAttrString(_pymsg, "in_z");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->in_z = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * fanuc_msgs__srv__set_payload_comp__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SetPayloadComp_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("fanuc_msgs.srv._set_payload_comp");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SetPayloadComp_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  fanuc_msgs__srv__SetPayloadComp_Request * ros_message = (fanuc_msgs__srv__SetPayloadComp_Request *)raw_ros_message;
  {  // payload_schedule_id
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->payload_schedule_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "payload_schedule_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mass
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->mass);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mass", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cg_x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->cg_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cg_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cg_y
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->cg_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cg_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cg_z
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->cg_z);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cg_z", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // in_x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->in_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "in_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // in_y
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->in_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "in_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // in_z
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->in_z);
    {
      int rc = PyObject_SetAttrString(_pymessage, "in_z", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
// already included above
// #include <Python.h>
// already included above
// #include <stdbool.h>
// already included above
// #include "numpy/ndarrayobject.h"
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "fanuc_msgs/srv/detail/set_payload_comp__struct.h"
// already included above
// #include "fanuc_msgs/srv/detail/set_payload_comp__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool fanuc_msgs__srv__set_payload_comp__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[57];
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
    assert(strncmp("fanuc_msgs.srv._set_payload_comp.SetPayloadComp_Response", full_classname_dest, 56) == 0);
  }
  fanuc_msgs__srv__SetPayloadComp_Response * ros_message = _ros_message;
  {  // result
    PyObject * field = PyObject_GetAttrString(_pymsg, "result");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->result = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * fanuc_msgs__srv__set_payload_comp__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SetPayloadComp_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("fanuc_msgs.srv._set_payload_comp");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SetPayloadComp_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  fanuc_msgs__srv__SetPayloadComp_Response * ros_message = (fanuc_msgs__srv__SetPayloadComp_Response *)raw_ros_message;
  {  // result
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->result);
    {
      int rc = PyObject_SetAttrString(_pymessage, "result", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
