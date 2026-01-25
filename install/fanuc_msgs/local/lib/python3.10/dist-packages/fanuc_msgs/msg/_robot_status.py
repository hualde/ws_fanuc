# generated from rosidl_generator_py/resource/_idl.py.em
# with input from fanuc_msgs:msg/RobotStatus.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_RobotStatus(type):
    """Metaclass of message 'RobotStatus'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'CONTACT_STOP_MODE_NONE': 0,
        'CONTACT_STOP_MODE_SAFE': 1,
        'CONTACT_STOP_MODE_STOP': 2,
        'CONTACT_STOP_MODE_DSBL': 3,
        'CONTACT_STOP_MODE_ESCP': 4,
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
                'fanuc_msgs.msg.RobotStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__robot_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__robot_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__robot_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__robot_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__robot_status

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'CONTACT_STOP_MODE_NONE': cls.__constants['CONTACT_STOP_MODE_NONE'],
            'CONTACT_STOP_MODE_SAFE': cls.__constants['CONTACT_STOP_MODE_SAFE'],
            'CONTACT_STOP_MODE_STOP': cls.__constants['CONTACT_STOP_MODE_STOP'],
            'CONTACT_STOP_MODE_DSBL': cls.__constants['CONTACT_STOP_MODE_DSBL'],
            'CONTACT_STOP_MODE_ESCP': cls.__constants['CONTACT_STOP_MODE_ESCP'],
        }

    @property
    def CONTACT_STOP_MODE_NONE(self):
        """Message constant 'CONTACT_STOP_MODE_NONE'."""
        return Metaclass_RobotStatus.__constants['CONTACT_STOP_MODE_NONE']

    @property
    def CONTACT_STOP_MODE_SAFE(self):
        """Message constant 'CONTACT_STOP_MODE_SAFE'."""
        return Metaclass_RobotStatus.__constants['CONTACT_STOP_MODE_SAFE']

    @property
    def CONTACT_STOP_MODE_STOP(self):
        """Message constant 'CONTACT_STOP_MODE_STOP'."""
        return Metaclass_RobotStatus.__constants['CONTACT_STOP_MODE_STOP']

    @property
    def CONTACT_STOP_MODE_DSBL(self):
        """Message constant 'CONTACT_STOP_MODE_DSBL'."""
        return Metaclass_RobotStatus.__constants['CONTACT_STOP_MODE_DSBL']

    @property
    def CONTACT_STOP_MODE_ESCP(self):
        """Message constant 'CONTACT_STOP_MODE_ESCP'."""
        return Metaclass_RobotStatus.__constants['CONTACT_STOP_MODE_ESCP']


class RobotStatus(metaclass=Metaclass_RobotStatus):
    """
    Message class 'RobotStatus'.

    Constants:
      CONTACT_STOP_MODE_NONE
      CONTACT_STOP_MODE_SAFE
      CONTACT_STOP_MODE_STOP
      CONTACT_STOP_MODE_DSBL
      CONTACT_STOP_MODE_ESCP
    """

    __slots__ = [
        '_in_error',
        '_tp_enabled',
        '_e_stopped',
        '_motion_possible',
        '_contact_stop_mode',
    ]

    _fields_and_field_types = {
        'in_error': 'boolean',
        'tp_enabled': 'boolean',
        'e_stopped': 'boolean',
        'motion_possible': 'boolean',
        'contact_stop_mode': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.in_error = kwargs.get('in_error', bool())
        self.tp_enabled = kwargs.get('tp_enabled', bool())
        self.e_stopped = kwargs.get('e_stopped', bool())
        self.motion_possible = kwargs.get('motion_possible', bool())
        self.contact_stop_mode = kwargs.get('contact_stop_mode', int())

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
        if self.in_error != other.in_error:
            return False
        if self.tp_enabled != other.tp_enabled:
            return False
        if self.e_stopped != other.e_stopped:
            return False
        if self.motion_possible != other.motion_possible:
            return False
        if self.contact_stop_mode != other.contact_stop_mode:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def in_error(self):
        """Message field 'in_error'."""
        return self._in_error

    @in_error.setter
    def in_error(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'in_error' field must be of type 'bool'"
        self._in_error = value

    @builtins.property
    def tp_enabled(self):
        """Message field 'tp_enabled'."""
        return self._tp_enabled

    @tp_enabled.setter
    def tp_enabled(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'tp_enabled' field must be of type 'bool'"
        self._tp_enabled = value

    @builtins.property
    def e_stopped(self):
        """Message field 'e_stopped'."""
        return self._e_stopped

    @e_stopped.setter
    def e_stopped(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'e_stopped' field must be of type 'bool'"
        self._e_stopped = value

    @builtins.property
    def motion_possible(self):
        """Message field 'motion_possible'."""
        return self._motion_possible

    @motion_possible.setter
    def motion_possible(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'motion_possible' field must be of type 'bool'"
        self._motion_possible = value

    @builtins.property
    def contact_stop_mode(self):
        """Message field 'contact_stop_mode'."""
        return self._contact_stop_mode

    @contact_stop_mode.setter
    def contact_stop_mode(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'contact_stop_mode' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'contact_stop_mode' field must be an unsigned integer in [0, 255]"
        self._contact_stop_mode = value
