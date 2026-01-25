# generated from rosidl_generator_py/resource/_idl.py.em
# with input from fanuc_msgs:srv/SetPosReg.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SetPosReg_Request(type):
    """Metaclass of message 'SetPosReg_Request'."""

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
                'fanuc_msgs.srv.SetPosReg_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__set_pos_reg__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__set_pos_reg__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__set_pos_reg__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__set_pos_reg__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__set_pos_reg__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SetPosReg_Request(metaclass=Metaclass_SetPosReg_Request):
    """Message class 'SetPosReg_Request'."""

    __slots__ = [
        '_index',
        '_representation',
        '_utool',
        '_uframe',
        '_front',
        '_up',
        '_left',
        '_flip',
        '_turn4',
        '_turn5',
        '_turn6',
        '_x',
        '_y',
        '_z',
        '_w',
        '_p',
        '_r',
        '_ext1',
        '_ext2',
        '_ext3',
        '_j1',
        '_j2',
        '_j3',
        '_j4',
        '_j5',
        '_j6',
        '_j7',
        '_j8',
        '_j9',
    ]

    _fields_and_field_types = {
        'index': 'uint16',
        'representation': 'string',
        'utool': 'uint8',
        'uframe': 'uint8',
        'front': 'uint8',
        'up': 'uint8',
        'left': 'uint8',
        'flip': 'uint8',
        'turn4': 'int8',
        'turn5': 'int8',
        'turn6': 'int8',
        'x': 'float',
        'y': 'float',
        'z': 'float',
        'w': 'float',
        'p': 'float',
        'r': 'float',
        'ext1': 'float',
        'ext2': 'float',
        'ext3': 'float',
        'j1': 'float',
        'j2': 'float',
        'j3': 'float',
        'j4': 'float',
        'j5': 'float',
        'j6': 'float',
        'j7': 'float',
        'j8': 'float',
        'j9': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
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
        self.index = kwargs.get('index', int())
        self.representation = kwargs.get('representation', str())
        self.utool = kwargs.get('utool', int())
        self.uframe = kwargs.get('uframe', int())
        self.front = kwargs.get('front', int())
        self.up = kwargs.get('up', int())
        self.left = kwargs.get('left', int())
        self.flip = kwargs.get('flip', int())
        self.turn4 = kwargs.get('turn4', int())
        self.turn5 = kwargs.get('turn5', int())
        self.turn6 = kwargs.get('turn6', int())
        self.x = kwargs.get('x', float())
        self.y = kwargs.get('y', float())
        self.z = kwargs.get('z', float())
        self.w = kwargs.get('w', float())
        self.p = kwargs.get('p', float())
        self.r = kwargs.get('r', float())
        self.ext1 = kwargs.get('ext1', float())
        self.ext2 = kwargs.get('ext2', float())
        self.ext3 = kwargs.get('ext3', float())
        self.j1 = kwargs.get('j1', float())
        self.j2 = kwargs.get('j2', float())
        self.j3 = kwargs.get('j3', float())
        self.j4 = kwargs.get('j4', float())
        self.j5 = kwargs.get('j5', float())
        self.j6 = kwargs.get('j6', float())
        self.j7 = kwargs.get('j7', float())
        self.j8 = kwargs.get('j8', float())
        self.j9 = kwargs.get('j9', float())

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
        if self.index != other.index:
            return False
        if self.representation != other.representation:
            return False
        if self.utool != other.utool:
            return False
        if self.uframe != other.uframe:
            return False
        if self.front != other.front:
            return False
        if self.up != other.up:
            return False
        if self.left != other.left:
            return False
        if self.flip != other.flip:
            return False
        if self.turn4 != other.turn4:
            return False
        if self.turn5 != other.turn5:
            return False
        if self.turn6 != other.turn6:
            return False
        if self.x != other.x:
            return False
        if self.y != other.y:
            return False
        if self.z != other.z:
            return False
        if self.w != other.w:
            return False
        if self.p != other.p:
            return False
        if self.r != other.r:
            return False
        if self.ext1 != other.ext1:
            return False
        if self.ext2 != other.ext2:
            return False
        if self.ext3 != other.ext3:
            return False
        if self.j1 != other.j1:
            return False
        if self.j2 != other.j2:
            return False
        if self.j3 != other.j3:
            return False
        if self.j4 != other.j4:
            return False
        if self.j5 != other.j5:
            return False
        if self.j6 != other.j6:
            return False
        if self.j7 != other.j7:
            return False
        if self.j8 != other.j8:
            return False
        if self.j9 != other.j9:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def index(self):
        """Message field 'index'."""
        return self._index

    @index.setter
    def index(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'index' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'index' field must be an unsigned integer in [0, 65535]"
        self._index = value

    @builtins.property
    def representation(self):
        """Message field 'representation'."""
        return self._representation

    @representation.setter
    def representation(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'representation' field must be of type 'str'"
        self._representation = value

    @builtins.property
    def utool(self):
        """Message field 'utool'."""
        return self._utool

    @utool.setter
    def utool(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'utool' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'utool' field must be an unsigned integer in [0, 255]"
        self._utool = value

    @builtins.property
    def uframe(self):
        """Message field 'uframe'."""
        return self._uframe

    @uframe.setter
    def uframe(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'uframe' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'uframe' field must be an unsigned integer in [0, 255]"
        self._uframe = value

    @builtins.property
    def front(self):
        """Message field 'front'."""
        return self._front

    @front.setter
    def front(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'front' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'front' field must be an unsigned integer in [0, 255]"
        self._front = value

    @builtins.property
    def up(self):
        """Message field 'up'."""
        return self._up

    @up.setter
    def up(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'up' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'up' field must be an unsigned integer in [0, 255]"
        self._up = value

    @builtins.property
    def left(self):
        """Message field 'left'."""
        return self._left

    @left.setter
    def left(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'left' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'left' field must be an unsigned integer in [0, 255]"
        self._left = value

    @builtins.property
    def flip(self):
        """Message field 'flip'."""
        return self._flip

    @flip.setter
    def flip(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'flip' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'flip' field must be an unsigned integer in [0, 255]"
        self._flip = value

    @builtins.property
    def turn4(self):
        """Message field 'turn4'."""
        return self._turn4

    @turn4.setter
    def turn4(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'turn4' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'turn4' field must be an integer in [-128, 127]"
        self._turn4 = value

    @builtins.property
    def turn5(self):
        """Message field 'turn5'."""
        return self._turn5

    @turn5.setter
    def turn5(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'turn5' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'turn5' field must be an integer in [-128, 127]"
        self._turn5 = value

    @builtins.property
    def turn6(self):
        """Message field 'turn6'."""
        return self._turn6

    @turn6.setter
    def turn6(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'turn6' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'turn6' field must be an integer in [-128, 127]"
        self._turn6 = value

    @builtins.property
    def x(self):
        """Message field 'x'."""
        return self._x

    @x.setter
    def x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'x' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'x' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._x = value

    @builtins.property
    def y(self):
        """Message field 'y'."""
        return self._y

    @y.setter
    def y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'y' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'y' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._y = value

    @builtins.property
    def z(self):
        """Message field 'z'."""
        return self._z

    @z.setter
    def z(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'z' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'z' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._z = value

    @builtins.property
    def w(self):
        """Message field 'w'."""
        return self._w

    @w.setter
    def w(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'w' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'w' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._w = value

    @builtins.property
    def p(self):
        """Message field 'p'."""
        return self._p

    @p.setter
    def p(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'p' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'p' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._p = value

    @builtins.property
    def r(self):
        """Message field 'r'."""
        return self._r

    @r.setter
    def r(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'r' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'r' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._r = value

    @builtins.property
    def ext1(self):
        """Message field 'ext1'."""
        return self._ext1

    @ext1.setter
    def ext1(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'ext1' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'ext1' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._ext1 = value

    @builtins.property
    def ext2(self):
        """Message field 'ext2'."""
        return self._ext2

    @ext2.setter
    def ext2(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'ext2' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'ext2' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._ext2 = value

    @builtins.property
    def ext3(self):
        """Message field 'ext3'."""
        return self._ext3

    @ext3.setter
    def ext3(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'ext3' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'ext3' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._ext3 = value

    @builtins.property
    def j1(self):
        """Message field 'j1'."""
        return self._j1

    @j1.setter
    def j1(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'j1' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'j1' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._j1 = value

    @builtins.property
    def j2(self):
        """Message field 'j2'."""
        return self._j2

    @j2.setter
    def j2(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'j2' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'j2' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._j2 = value

    @builtins.property
    def j3(self):
        """Message field 'j3'."""
        return self._j3

    @j3.setter
    def j3(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'j3' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'j3' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._j3 = value

    @builtins.property
    def j4(self):
        """Message field 'j4'."""
        return self._j4

    @j4.setter
    def j4(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'j4' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'j4' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._j4 = value

    @builtins.property
    def j5(self):
        """Message field 'j5'."""
        return self._j5

    @j5.setter
    def j5(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'j5' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'j5' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._j5 = value

    @builtins.property
    def j6(self):
        """Message field 'j6'."""
        return self._j6

    @j6.setter
    def j6(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'j6' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'j6' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._j6 = value

    @builtins.property
    def j7(self):
        """Message field 'j7'."""
        return self._j7

    @j7.setter
    def j7(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'j7' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'j7' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._j7 = value

    @builtins.property
    def j8(self):
        """Message field 'j8'."""
        return self._j8

    @j8.setter
    def j8(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'j8' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'j8' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._j8 = value

    @builtins.property
    def j9(self):
        """Message field 'j9'."""
        return self._j9

    @j9.setter
    def j9(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'j9' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'j9' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._j9 = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_SetPosReg_Response(type):
    """Metaclass of message 'SetPosReg_Response'."""

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
                'fanuc_msgs.srv.SetPosReg_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__set_pos_reg__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__set_pos_reg__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__set_pos_reg__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__set_pos_reg__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__set_pos_reg__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SetPosReg_Response(metaclass=Metaclass_SetPosReg_Response):
    """Message class 'SetPosReg_Response'."""

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


class Metaclass_SetPosReg(type):
    """Metaclass of service 'SetPosReg'."""

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
                'fanuc_msgs.srv.SetPosReg')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__set_pos_reg

            from fanuc_msgs.srv import _set_pos_reg
            if _set_pos_reg.Metaclass_SetPosReg_Request._TYPE_SUPPORT is None:
                _set_pos_reg.Metaclass_SetPosReg_Request.__import_type_support__()
            if _set_pos_reg.Metaclass_SetPosReg_Response._TYPE_SUPPORT is None:
                _set_pos_reg.Metaclass_SetPosReg_Response.__import_type_support__()


class SetPosReg(metaclass=Metaclass_SetPosReg):
    from fanuc_msgs.srv._set_pos_reg import SetPosReg_Request as Request
    from fanuc_msgs.srv._set_pos_reg import SetPosReg_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
