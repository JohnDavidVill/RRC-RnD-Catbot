# generated from rosidl_generator_py/resource/_idl.py.em
# with input from hyperdog_msgs:msg/Limits.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

# Member 'eular_ang_range'
# Member 'height_range'
# Member 'steplength_range'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Limits(type):
    """Metaclass of message 'Limits'."""

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
            module = import_type_support('hyperdog_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'hyperdog_msgs.msg.Limits')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__limits
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__limits
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__limits
            cls._TYPE_SUPPORT = module.type_support_msg__msg__limits
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__limits

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'EULAR_ANG_RANGE__DEFAULT': numpy.array((40, 45, 50, ), dtype=numpy.int16),
            'HEIGHT_RANGE__DEFAULT': numpy.array((80, 240, ), dtype=numpy.int16),
            'STEPLENGTH_RANGE__DEFAULT': numpy.array((250, 250, ), dtype=numpy.int16),
        }

    @property
    def EULAR_ANG_RANGE__DEFAULT(cls):
        """Return default value for message field 'eular_ang_range'."""
        return numpy.array((40, 45, 50, ), dtype=numpy.int16)

    @property
    def HEIGHT_RANGE__DEFAULT(cls):
        """Return default value for message field 'height_range'."""
        return numpy.array((80, 240, ), dtype=numpy.int16)

    @property
    def STEPLENGTH_RANGE__DEFAULT(cls):
        """Return default value for message field 'steplength_range'."""
        return numpy.array((250, 250, ), dtype=numpy.int16)


class Limits(metaclass=Metaclass_Limits):
    """Message class 'Limits'."""

    __slots__ = [
        '_eular_ang_range',
        '_height_range',
        '_steplength_range',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'eular_ang_range': 'int16[3]',
        'height_range': 'int16[2]',
        'steplength_range': 'int16[2]',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('int16'), 3),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('int16'), 2),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('int16'), 2),  # noqa: E501
    )

    def __init__(self, **kwargs):
        if 'check_fields' in kwargs:
            self._check_fields = kwargs['check_fields']
        else:
            self._check_fields = ros_python_check_fields == '1'
        if self._check_fields:
            assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
                'Invalid arguments passed to constructor: %s' % \
                ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.eular_ang_range = kwargs.get(
            'eular_ang_range', Limits.EULAR_ANG_RANGE__DEFAULT)
        self.height_range = kwargs.get(
            'height_range', Limits.HEIGHT_RANGE__DEFAULT)
        self.steplength_range = kwargs.get(
            'steplength_range', Limits.STEPLENGTH_RANGE__DEFAULT)

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.get_fields_and_field_types().keys(), self.SLOT_TYPES):
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
                    if self._check_fields:
                        assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if all(self.eular_ang_range != other.eular_ang_range):
            return False
        if all(self.height_range != other.height_range):
            return False
        if all(self.steplength_range != other.steplength_range):
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def eular_ang_range(self):
        """Message field 'eular_ang_range'."""
        return self._eular_ang_range

    @eular_ang_range.setter
    def eular_ang_range(self, value):
        if self._check_fields:
            if isinstance(value, numpy.ndarray):
                assert value.dtype == numpy.int16, \
                    "The 'eular_ang_range' numpy.ndarray() must have the dtype of 'numpy.int16'"
                assert value.size == 3, \
                    "The 'eular_ang_range' numpy.ndarray() must have a size of 3"
                self._eular_ang_range = value
                return
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 3 and
                 all(isinstance(v, int) for v in value) and
                 all(val >= -32768 and val < 32768 for val in value)), \
                "The 'eular_ang_range' field must be a set or sequence with length 3 and each value of type 'int' and each integer in [-32768, 32767]"
        self._eular_ang_range = numpy.array(value, dtype=numpy.int16)

    @builtins.property
    def height_range(self):
        """Message field 'height_range'."""
        return self._height_range

    @height_range.setter
    def height_range(self, value):
        if self._check_fields:
            if isinstance(value, numpy.ndarray):
                assert value.dtype == numpy.int16, \
                    "The 'height_range' numpy.ndarray() must have the dtype of 'numpy.int16'"
                assert value.size == 2, \
                    "The 'height_range' numpy.ndarray() must have a size of 2"
                self._height_range = value
                return
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 2 and
                 all(isinstance(v, int) for v in value) and
                 all(val >= -32768 and val < 32768 for val in value)), \
                "The 'height_range' field must be a set or sequence with length 2 and each value of type 'int' and each integer in [-32768, 32767]"
        self._height_range = numpy.array(value, dtype=numpy.int16)

    @builtins.property
    def steplength_range(self):
        """Message field 'steplength_range'."""
        return self._steplength_range

    @steplength_range.setter
    def steplength_range(self, value):
        if self._check_fields:
            if isinstance(value, numpy.ndarray):
                assert value.dtype == numpy.int16, \
                    "The 'steplength_range' numpy.ndarray() must have the dtype of 'numpy.int16'"
                assert value.size == 2, \
                    "The 'steplength_range' numpy.ndarray() must have a size of 2"
                self._steplength_range = value
                return
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 2 and
                 all(isinstance(v, int) for v in value) and
                 all(val >= -32768 and val < 32768 for val in value)), \
                "The 'steplength_range' field must be a set or sequence with length 2 and each value of type 'int' and each integer in [-32768, 32767]"
        self._steplength_range = numpy.array(value, dtype=numpy.int16)
