// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from fanuc_msgs:srv/SetPosReg.idl
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
#include "fanuc_msgs/srv/detail/set_pos_reg__struct.h"
#include "fanuc_msgs/srv/detail/set_pos_reg__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool fanuc_msgs__srv__set_pos_reg__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[46];
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
    assert(strncmp("fanuc_msgs.srv._set_pos_reg.SetPosReg_Request", full_classname_dest, 45) == 0);
  }
  fanuc_msgs__srv__SetPosReg_Request * ros_message = _ros_message;
  {  // index
    PyObject * field = PyObject_GetAttrString(_pymsg, "index");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->index = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // representation
    PyObject * field = PyObject_GetAttrString(_pymsg, "representation");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->representation, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // utool
    PyObject * field = PyObject_GetAttrString(_pymsg, "utool");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->utool = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // uframe
    PyObject * field = PyObject_GetAttrString(_pymsg, "uframe");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->uframe = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // front
    PyObject * field = PyObject_GetAttrString(_pymsg, "front");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->front = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // up
    PyObject * field = PyObject_GetAttrString(_pymsg, "up");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->up = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // left
    PyObject * field = PyObject_GetAttrString(_pymsg, "left");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->left = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // flip
    PyObject * field = PyObject_GetAttrString(_pymsg, "flip");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->flip = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // turn4
    PyObject * field = PyObject_GetAttrString(_pymsg, "turn4");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->turn4 = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // turn5
    PyObject * field = PyObject_GetAttrString(_pymsg, "turn5");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->turn5 = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // turn6
    PyObject * field = PyObject_GetAttrString(_pymsg, "turn6");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->turn6 = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // x
    PyObject * field = PyObject_GetAttrString(_pymsg, "x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->x = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // y
    PyObject * field = PyObject_GetAttrString(_pymsg, "y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->y = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // z
    PyObject * field = PyObject_GetAttrString(_pymsg, "z");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->z = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // w
    PyObject * field = PyObject_GetAttrString(_pymsg, "w");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->w = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // p
    PyObject * field = PyObject_GetAttrString(_pymsg, "p");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->p = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // r
    PyObject * field = PyObject_GetAttrString(_pymsg, "r");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->r = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // ext1
    PyObject * field = PyObject_GetAttrString(_pymsg, "ext1");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->ext1 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // ext2
    PyObject * field = PyObject_GetAttrString(_pymsg, "ext2");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->ext2 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // ext3
    PyObject * field = PyObject_GetAttrString(_pymsg, "ext3");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->ext3 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // j1
    PyObject * field = PyObject_GetAttrString(_pymsg, "j1");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->j1 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // j2
    PyObject * field = PyObject_GetAttrString(_pymsg, "j2");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->j2 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // j3
    PyObject * field = PyObject_GetAttrString(_pymsg, "j3");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->j3 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // j4
    PyObject * field = PyObject_GetAttrString(_pymsg, "j4");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->j4 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // j5
    PyObject * field = PyObject_GetAttrString(_pymsg, "j5");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->j5 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // j6
    PyObject * field = PyObject_GetAttrString(_pymsg, "j6");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->j6 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // j7
    PyObject * field = PyObject_GetAttrString(_pymsg, "j7");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->j7 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // j8
    PyObject * field = PyObject_GetAttrString(_pymsg, "j8");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->j8 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // j9
    PyObject * field = PyObject_GetAttrString(_pymsg, "j9");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->j9 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * fanuc_msgs__srv__set_pos_reg__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SetPosReg_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("fanuc_msgs.srv._set_pos_reg");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SetPosReg_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  fanuc_msgs__srv__SetPosReg_Request * ros_message = (fanuc_msgs__srv__SetPosReg_Request *)raw_ros_message;
  {  // index
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->index);
    {
      int rc = PyObject_SetAttrString(_pymessage, "index", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // representation
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->representation.data,
      strlen(ros_message->representation.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "representation", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // utool
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->utool);
    {
      int rc = PyObject_SetAttrString(_pymessage, "utool", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // uframe
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->uframe);
    {
      int rc = PyObject_SetAttrString(_pymessage, "uframe", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // front
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->front);
    {
      int rc = PyObject_SetAttrString(_pymessage, "front", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // up
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->up);
    {
      int rc = PyObject_SetAttrString(_pymessage, "up", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // left
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->left);
    {
      int rc = PyObject_SetAttrString(_pymessage, "left", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // flip
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->flip);
    {
      int rc = PyObject_SetAttrString(_pymessage, "flip", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // turn4
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->turn4);
    {
      int rc = PyObject_SetAttrString(_pymessage, "turn4", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // turn5
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->turn5);
    {
      int rc = PyObject_SetAttrString(_pymessage, "turn5", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // turn6
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->turn6);
    {
      int rc = PyObject_SetAttrString(_pymessage, "turn6", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // y
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // z
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->z);
    {
      int rc = PyObject_SetAttrString(_pymessage, "z", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // w
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->w);
    {
      int rc = PyObject_SetAttrString(_pymessage, "w", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // p
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->p);
    {
      int rc = PyObject_SetAttrString(_pymessage, "p", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // r
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->r);
    {
      int rc = PyObject_SetAttrString(_pymessage, "r", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ext1
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->ext1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ext1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ext2
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->ext2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ext2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ext3
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->ext3);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ext3", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // j1
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->j1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "j1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // j2
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->j2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "j2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // j3
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->j3);
    {
      int rc = PyObject_SetAttrString(_pymessage, "j3", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // j4
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->j4);
    {
      int rc = PyObject_SetAttrString(_pymessage, "j4", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // j5
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->j5);
    {
      int rc = PyObject_SetAttrString(_pymessage, "j5", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // j6
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->j6);
    {
      int rc = PyObject_SetAttrString(_pymessage, "j6", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // j7
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->j7);
    {
      int rc = PyObject_SetAttrString(_pymessage, "j7", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // j8
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->j8);
    {
      int rc = PyObject_SetAttrString(_pymessage, "j8", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // j9
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->j9);
    {
      int rc = PyObject_SetAttrString(_pymessage, "j9", field);
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
// #include "fanuc_msgs/srv/detail/set_pos_reg__struct.h"
// already included above
// #include "fanuc_msgs/srv/detail/set_pos_reg__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool fanuc_msgs__srv__set_pos_reg__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[47];
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
    assert(strncmp("fanuc_msgs.srv._set_pos_reg.SetPosReg_Response", full_classname_dest, 46) == 0);
  }
  fanuc_msgs__srv__SetPosReg_Response * ros_message = _ros_message;
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
PyObject * fanuc_msgs__srv__set_pos_reg__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SetPosReg_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("fanuc_msgs.srv._set_pos_reg");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SetPosReg_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  fanuc_msgs__srv__SetPosReg_Response * ros_message = (fanuc_msgs__srv__SetPosReg_Response *)raw_ros_message;
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
