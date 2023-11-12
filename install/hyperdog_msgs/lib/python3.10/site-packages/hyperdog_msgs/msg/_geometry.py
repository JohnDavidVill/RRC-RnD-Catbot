# generated from rosidl_generator_py/resource/_idl.py.em
# with input from hyperdog_msgs:msg/Geometry.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Geometry(type):
    """Metaclass of message 'Geometry'."""

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
                'hyperdog_msgs.msg.Geometry')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__geometry
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__geometry
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__geometry
            cls._TYPE_SUPPORT = module.type_support_msg__msg__geometry
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__geometry

            from geometry_msgs.msg import Point32
            if Point32.__class__._TYPE_SUPPORT is None:
                Point32.__class__.__import_type_support__()

            from geometry_msgs.msg import Quaternion
            if Quaternion.__class__._TYPE_SUPPORT is None:
                Quaternion.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Geometry(metaclass=Metaclass_Geometry):
    """Message class 'Geometry'."""

    __slots__ = [
        '_fr',
        '_fl',
        '_br',
        '_bl',
        '_euler_ang',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'fr': 'geometry_msgs/Point32',
        'fl': 'geometry_msgs/Point32',
        'br': 'geometry_msgs/Point32',
        'bl': 'geometry_msgs/Point32',
        'euler_ang': 'geometry_msgs/Quaternion',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Point32'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Point32'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Point32'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Point32'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Quaternion'),  # noqa: E501
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
        from geometry_msgs.msg import Point32
        self.fr = kwargs.get('fr', Point32())
        from geometry_msgs.msg import Point32
        self.fl = kwargs.get('fl', Point32())
        from geometry_msgs.msg import Point32
        self.br = kwargs.get('br', Point32())
        from geometry_msgs.msg import Point32
        self.bl = kwargs.get('bl', Point32())
        from geometry_msgs.msg import Quaternion
        self.euler_ang = kwargs.get('euler_ang', Quaternion())

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
        if self.fr != other.fr:
            return False
        if self.fl != other.fl:
            return False
        if self.br != other.br:
            return False
        if self.bl != other.bl:
            return False
        if self.euler_ang != other.euler_ang:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def fr(self):
        """Message field 'fr'."""
        return self._fr

    @fr.setter
    def fr(self, value):
        if self._check_fields:
            from geometry_msgs.msg import Point32
            assert \
                isinstance(value, Point32), \
                "The 'fr' field must be a sub message of type 'Point32'"
        self._fr = value

    @builtins.property
    def fl(self):
        """Message field 'fl'."""
        return self._fl

    @fl.setter
    def fl(self, value):
        if self._check_fields:
            from geometry_msgs.msg import Point32
            assert \
                isinstance(value, Point32), \
                "The 'fl' field must be a sub message of type 'Point32'"
        self._fl = value

    @builtins.property
    def br(self):
        """Message field 'br'."""
        return self._br

    @br.setter
    def br(self, value):
        if self._check_fields:
            from geometry_msgs.msg import Point32
            assert \
                isinstance(value, Point32), \
                "The 'br' field must be a sub message of type 'Point32'"
        self._br = value

    @builtins.property
    def bl(self):
        """Message field 'bl'."""
        return self._bl

    @bl.setter
    def bl(self, value):
        if self._check_fields:
            from geometry_msgs.msg import Point32
            assert \
                isinstance(value, Point32), \
                "The 'bl' field must be a sub message of type 'Point32'"
        self._bl = value

    @builtins.property
    def euler_ang(self):
        """Message field 'euler_ang'."""
        return self._euler_ang

    @euler_ang.setter
    def euler_ang(self, value):
        if self._check_fields:
            from geometry_msgs.msg import Quaternion
            assert \
                isinstance(value, Quaternion), \
                "The 'euler_ang' field must be a sub message of type 'Quaternion'"
        self._euler_ang = value
