# generated from rosidl_generator_py/resource/_idl.py.em
# with input from custom_interfaces:srv/ImageProcessing.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ImageProcessing_Request(type):
    """Metaclass of message 'ImageProcessing_Request'."""

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
            module = import_type_support('custom_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'custom_interfaces.srv.ImageProcessing_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__image_processing__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__image_processing__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__image_processing__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__image_processing__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__image_processing__request

            from sensor_msgs.msg import Image
            if Image.__class__._TYPE_SUPPORT is None:
                Image.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ImageProcessing_Request(metaclass=Metaclass_ImageProcessing_Request):
    """Message class 'ImageProcessing_Request'."""

    __slots__ = [
        '_image',
    ]

    _fields_and_field_types = {
        'image': 'sensor_msgs/Image',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['sensor_msgs', 'msg'], 'Image'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from sensor_msgs.msg import Image
        self.image = kwargs.get('image', Image())

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
        if self.image != other.image:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def image(self):
        """Message field 'image'."""
        return self._image

    @image.setter
    def image(self, value):
        if __debug__:
            from sensor_msgs.msg import Image
            assert \
                isinstance(value, Image), \
                "The 'image' field must be a sub message of type 'Image'"
        self._image = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_ImageProcessing_Response(type):
    """Metaclass of message 'ImageProcessing_Response'."""

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
            module = import_type_support('custom_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'custom_interfaces.srv.ImageProcessing_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__image_processing__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__image_processing__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__image_processing__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__image_processing__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__image_processing__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ImageProcessing_Response(metaclass=Metaclass_ImageProcessing_Response):
    """Message class 'ImageProcessing_Response'."""

    __slots__ = [
        '_object_x',
        '_object_y',
        '_direction',
    ]

    _fields_and_field_types = {
        'object_x': 'float',
        'object_y': 'float',
        'direction': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.object_x = kwargs.get('object_x', float())
        self.object_y = kwargs.get('object_y', float())
        self.direction = kwargs.get('direction', str())

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
        if self.object_x != other.object_x:
            return False
        if self.object_y != other.object_y:
            return False
        if self.direction != other.direction:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def object_x(self):
        """Message field 'object_x'."""
        return self._object_x

    @object_x.setter
    def object_x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'object_x' field must be of type 'float'"
        self._object_x = value

    @property
    def object_y(self):
        """Message field 'object_y'."""
        return self._object_y

    @object_y.setter
    def object_y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'object_y' field must be of type 'float'"
        self._object_y = value

    @property
    def direction(self):
        """Message field 'direction'."""
        return self._direction

    @direction.setter
    def direction(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'direction' field must be of type 'str'"
        self._direction = value


class Metaclass_ImageProcessing(type):
    """Metaclass of service 'ImageProcessing'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('custom_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'custom_interfaces.srv.ImageProcessing')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__image_processing

            from custom_interfaces.srv import _image_processing
            if _image_processing.Metaclass_ImageProcessing_Request._TYPE_SUPPORT is None:
                _image_processing.Metaclass_ImageProcessing_Request.__import_type_support__()
            if _image_processing.Metaclass_ImageProcessing_Response._TYPE_SUPPORT is None:
                _image_processing.Metaclass_ImageProcessing_Response.__import_type_support__()


class ImageProcessing(metaclass=Metaclass_ImageProcessing):
    from custom_interfaces.srv._image_processing import ImageProcessing_Request as Request
    from custom_interfaces.srv._image_processing import ImageProcessing_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
