# generated from rosidl_generator_py/resource/_idl.py.em
# with input from fanuc_msgs:msg/IOType.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_IOType(type):
    """Metaclass of message 'IOType'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'AI': 'AI',
        'AO': 'AO',
        'DI': 'DI',
        'DO': 'DO',
        'RI': 'RI',
        'RO': 'RO',
        'SI': 'SI',
        'SO': 'SO',
        'WI': 'WI',
        'WO': 'WO',
        'UI': 'UI',
        'UO': 'UO',
        'WSI': 'WSI',
        'WSO': 'WSO',
        'F': 'F',
        'M': 'M',
        'GI': 'GI',
        'GO': 'GO',
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
                'fanuc_msgs.msg.IOType')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__io_type
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__io_type
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__io_type
            cls._TYPE_SUPPORT = module.type_support_msg__msg__io_type
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__io_type

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'AI': cls.__constants['AI'],
            'AO': cls.__constants['AO'],
            'DI': cls.__constants['DI'],
            'DO': cls.__constants['DO'],
            'RI': cls.__constants['RI'],
            'RO': cls.__constants['RO'],
            'SI': cls.__constants['SI'],
            'SO': cls.__constants['SO'],
            'WI': cls.__constants['WI'],
            'WO': cls.__constants['WO'],
            'UI': cls.__constants['UI'],
            'UO': cls.__constants['UO'],
            'WSI': cls.__constants['WSI'],
            'WSO': cls.__constants['WSO'],
            'F': cls.__constants['F'],
            'M': cls.__constants['M'],
            'GI': cls.__constants['GI'],
            'GO': cls.__constants['GO'],
        }

    @property
    def AI(self):
        """Message constant 'AI'."""
        return Metaclass_IOType.__constants['AI']

    @property
    def AO(self):
        """Message constant 'AO'."""
        return Metaclass_IOType.__constants['AO']

    @property
    def DI(self):
        """Message constant 'DI'."""
        return Metaclass_IOType.__constants['DI']

    @property
    def DO(self):
        """Message constant 'DO'."""
        return Metaclass_IOType.__constants['DO']

    @property
    def RI(self):
        """Message constant 'RI'."""
        return Metaclass_IOType.__constants['RI']

    @property
    def RO(self):
        """Message constant 'RO'."""
        return Metaclass_IOType.__constants['RO']

    @property
    def SI(self):
        """Message constant 'SI'."""
        return Metaclass_IOType.__constants['SI']

    @property
    def SO(self):
        """Message constant 'SO'."""
        return Metaclass_IOType.__constants['SO']

    @property
    def WI(self):
        """Message constant 'WI'."""
        return Metaclass_IOType.__constants['WI']

    @property
    def WO(self):
        """Message constant 'WO'."""
        return Metaclass_IOType.__constants['WO']

    @property
    def UI(self):
        """Message constant 'UI'."""
        return Metaclass_IOType.__constants['UI']

    @property
    def UO(self):
        """Message constant 'UO'."""
        return Metaclass_IOType.__constants['UO']

    @property
    def WSI(self):
        """Message constant 'WSI'."""
        return Metaclass_IOType.__constants['WSI']

    @property
    def WSO(self):
        """Message constant 'WSO'."""
        return Metaclass_IOType.__constants['WSO']

    @property
    def F(self):
        """Message constant 'F'."""
        return Metaclass_IOType.__constants['F']

    @property
    def M(self):
        """Message constant 'M'."""
        return Metaclass_IOType.__constants['M']

    @property
    def GI(self):
        """Message constant 'GI'."""
        return Metaclass_IOType.__constants['GI']

    @property
    def GO(self):
        """Message constant 'GO'."""
        return Metaclass_IOType.__constants['GO']


class IOType(metaclass=Metaclass_IOType):
    """
    Message class 'IOType'.

    Constants:
      AI
      AO
      DI
      DO
      RI
      RO
      SI
      SO
      WI
      WO
      UI
      UO
      WSI
      WSO
      F
      M
      GI
      GO
    """

    __slots__ = [
        '_type',
    ]

    _fields_and_field_types = {
        'type': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.type = kwargs.get('type', str())

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
        if self.type != other.type:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property  # noqa: A003
    def type(self):  # noqa: A003
        """Message field 'type'."""
        return self._type

    @type.setter  # noqa: A003
    def type(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'type' field must be of type 'str'"
        self._type = value
