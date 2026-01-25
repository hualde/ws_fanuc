# generated from rosidl_generator_py/resource/_idl.py.em
# with input from fanuc_msgs:srv/SetPayloadComp.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SetPayloadComp_Request(type):
    """Metaclass of message 'SetPayloadComp_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('fanuc_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'fanuc_msgs.srv.SetPayloadComp_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__set_payload_comp__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__set_payload_comp__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__set_payload_comp__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__set_payload_comp__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__set_payload_comp__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SetPayloadComp_Request(metaclass=Metaclass_SetPayloadComp_Request):
    """Message class 'SetPayloadComp_Request'."""

    __slots__ = [
        '_payload_schedule_id',
        '_mass',
        '_cg_x',
        '_cg_y',
        '_cg_z',
        '_in_x',
        '_in_y',
        '_in_z',
    ]

    _fields_and_field_types = {
        'payload_schedule_id': 'uint16',
        'mass': 'float',
        'cg_x': 'float',
        'cg_y': 'float',
        'cg_z': 'float',
        'in_x': 'float',
        'in_y': 'float',
        'in_z': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.payload_schedule_id = kwargs.get('payload_schedule_id', int())
        self.mass = kwargs.get('mass', float())
        self.cg_x = kwargs.get('cg_x', float())
        self.cg_y = kwargs.get('cg_y', float())
        self.cg_z = kwargs.get('cg_z', float())
        self.in_x = kwargs.get('in_x', float())
        self.in_y = kwargs.get('in_y', float())
        self.in_z = kwargs.get('in_z', float())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.payload_schedule_id != other.payload_schedule_id:
            return False
        if self.mass != other.mass:
            return False
        if self.cg_x != other.cg_x:
            return False
        if self.cg_y != other.cg_y:
            return False
        if self.cg_z != other.cg_z:
            return False
        if self.in_x != other.in_x:
            return False
        if self.in_y != other.in_y:
            return False
        if self.in_z != other.in_z:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def payload_schedule_id(self):
        """Message field 'payload_schedule_id'."""
        return self._payload_schedule_id

    @payload_schedule_id.setter
    def payload_schedule_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'payload_schedule_id' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'payload_schedule_id' field must be an unsigned integer in [0, 65535]"
        self._payload_schedule_id = value

    @builtins.property
    def mass(self):
        """Message field 'mass'."""
        return self._mass

    @mass.setter
    def mass(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'mass' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'mass' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._mass = value

    @builtins.property
    def cg_x(self):
        """Message field 'cg_x'."""
        return self._cg_x

    @cg_x.setter
    def cg_x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'cg_x' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'cg_x' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._cg_x = value

    @builtins.property
    def cg_y(self):
        """Message field 'cg_y'."""
        return self._cg_y

    @cg_y.setter
    def cg_y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'cg_y' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'cg_y' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._cg_y = value

    @builtins.property
    def cg_z(self):
        """Message field 'cg_z'."""
        return self._cg_z

    @cg_z.setter
    def cg_z(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'cg_z' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'cg_z' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._cg_z = value

    @builtins.property
    def in_x(self):
        """Message field 'in_x'."""
        return self._in_x

    @in_x.setter
    def in_x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'in_x' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'in_x' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._in_x = value

    @builtins.property
    def in_y(self):
        """Message field 'in_y'."""
        return self._in_y

    @in_y.setter
    def in_y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'in_y' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'in_y' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._in_y = value

    @builtins.property
    def in_z(self):
        """Message field 'in_z'."""
        return self._in_z

    @in_z.setter
    def in_z(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'in_z' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'in_z' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._in_z = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_SetPayloadComp_Response(type):
    """Metaclass of message 'SetPayloadComp_Response'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('fanuc_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'fanuc_msgs.srv.SetPayloadComp_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__set_payload_comp__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__set_payload_comp__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__set_payload_comp__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__set_payload_comp__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__set_payload_comp__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SetPayloadComp_Response(metaclass=Metaclass_SetPayloadComp_Response):
    """Message class 'SetPayloadComp_Response'."""

    __slots__ = [
        '_result',
    ]

    _fields_and_field_types = {
        'result': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.result = kwargs.get('result', int())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.result != other.result:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def result(self):
        """Message field 'result'."""
        return self._result

    @result.setter
    def result(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'result' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'result' field must be an integer in [-2147483648, 2147483647]"
        self._result = value


class Metaclass_SetPayloadComp(type):
    """Metaclass of service 'SetPayloadComp'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('fanuc_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'fanuc_msgs.srv.SetPayloadComp')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__set_payload_comp

            from fanuc_msgs.srv import _set_payload_comp
            if _set_payload_comp.Metaclass_SetPayloadComp_Request._TYPE_SUPPORT is None:
                _set_payload_comp.Metaclass_SetPayloadComp_Request.__import_type_support__()
            if _set_payload_comp.Metaclass_SetPayloadComp_Response._TYPE_SUPPORT is None:
                _set_payload_comp.Metaclass_SetPayloadComp_Response.__import_type_support__()


class SetPayloadComp(metaclass=Metaclass_SetPayloadComp):
    from fanuc_msgs.srv._set_payload_comp import SetPayloadComp_Request as Request
    from fanuc_msgs.srv._set_payload_comp import SetPayloadComp_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
