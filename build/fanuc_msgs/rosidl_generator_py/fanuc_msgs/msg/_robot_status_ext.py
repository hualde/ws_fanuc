# generated from rosidl_generator_py/resource/_idl.py.em
# with input from fanuc_msgs:msg/RobotStatusExt.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_RobotStatusExt(type):
    """Metaclass of message 'RobotStatusExt'."""

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
                'fanuc_msgs.msg.RobotStatusExt')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__robot_status_ext
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__robot_status_ext
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__robot_status_ext
            cls._TYPE_SUPPORT = module.type_support_msg__msg__robot_status_ext
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__robot_status_ext

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class RobotStatusExt(metaclass=Metaclass_RobotStatusExt):
    """Message class 'RobotStatusExt'."""

    __slots__ = [
        '_error_code',
        '_in_motion',
        '_drives_powered',
        '_gen_override',
        '_speed_clamp_limit',
        '_control_mode',
    ]

    _fields_and_field_types = {
        'error_code': 'string',
        'in_motion': 'boolean',
        'drives_powered': 'boolean',
        'gen_override': 'int32',
        'speed_clamp_limit': 'float',
        'control_mode': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.error_code = kwargs.get('error_code', str())
        self.in_motion = kwargs.get('in_motion', bool())
        self.drives_powered = kwargs.get('drives_powered', bool())
        self.gen_override = kwargs.get('gen_override', int())
        self.speed_clamp_limit = kwargs.get('speed_clamp_limit', float())
        self.control_mode = kwargs.get('control_mode', str())

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
        if self.error_code != other.error_code:
            return False
        if self.in_motion != other.in_motion:
            return False
        if self.drives_powered != other.drives_powered:
            return False
        if self.gen_override != other.gen_override:
            return False
        if self.speed_clamp_limit != other.speed_clamp_limit:
            return False
        if self.control_mode != other.control_mode:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def error_code(self):
        """Message field 'error_code'."""
        return self._error_code

    @error_code.setter
    def error_code(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'error_code' field must be of type 'str'"
        self._error_code = value

    @builtins.property
    def in_motion(self):
        """Message field 'in_motion'."""
        return self._in_motion

    @in_motion.setter
    def in_motion(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'in_motion' field must be of type 'bool'"
        self._in_motion = value

    @builtins.property
    def drives_powered(self):
        """Message field 'drives_powered'."""
        return self._drives_powered

    @drives_powered.setter
    def drives_powered(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'drives_powered' field must be of type 'bool'"
        self._drives_powered = value

    @builtins.property
    def gen_override(self):
        """Message field 'gen_override'."""
        return self._gen_override

    @gen_override.setter
    def gen_override(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'gen_override' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'gen_override' field must be an integer in [-2147483648, 2147483647]"
        self._gen_override = value

    @builtins.property
    def speed_clamp_limit(self):
        """Message field 'speed_clamp_limit'."""
        return self._speed_clamp_limit

    @speed_clamp_limit.setter
    def speed_clamp_limit(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'speed_clamp_limit' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'speed_clamp_limit' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._speed_clamp_limit = value

    @builtins.property
    def control_mode(self):
        """Message field 'control_mode'."""
        return self._control_mode

    @control_mode.setter
    def control_mode(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'control_mode' field must be of type 'str'"
        self._control_mode = value
