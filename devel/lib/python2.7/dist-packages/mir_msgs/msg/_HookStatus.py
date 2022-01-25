# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from mir_msgs/HookStatus.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import mir_msgs.msg

class HookStatus(genpy.Message):
  _md5sum = "1bce86e4d0caff20e36c78d3bd47f560"
  _type = "mir_msgs/HookStatus"
  _has_header = False  # flag to mark the presence of a Header object
  _full_text = """bool available
float32 length
float32 height
float32 angle
bool braked

bool trolley_attached
Trolley trolley

================================================================================
MSG: mir_msgs/Trolley
int32 id
float32 length
float32 width
float32 height
float32 offset_locked_wheels
"""
  __slots__ = ['available','length','height','angle','braked','trolley_attached','trolley']
  _slot_types = ['bool','float32','float32','float32','bool','bool','mir_msgs/Trolley']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       available,length,height,angle,braked,trolley_attached,trolley

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(HookStatus, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.available is None:
        self.available = False
      if self.length is None:
        self.length = 0.
      if self.height is None:
        self.height = 0.
      if self.angle is None:
        self.angle = 0.
      if self.braked is None:
        self.braked = False
      if self.trolley_attached is None:
        self.trolley_attached = False
      if self.trolley is None:
        self.trolley = mir_msgs.msg.Trolley()
    else:
      self.available = False
      self.length = 0.
      self.height = 0.
      self.angle = 0.
      self.braked = False
      self.trolley_attached = False
      self.trolley = mir_msgs.msg.Trolley()

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      _x = self
      buff.write(_get_struct_B3f2Bi4f().pack(_x.available, _x.length, _x.height, _x.angle, _x.braked, _x.trolley_attached, _x.trolley.id, _x.trolley.length, _x.trolley.width, _x.trolley.height, _x.trolley.offset_locked_wheels))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    if python3:
      codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      if self.trolley is None:
        self.trolley = mir_msgs.msg.Trolley()
      end = 0
      _x = self
      start = end
      end += 35
      (_x.available, _x.length, _x.height, _x.angle, _x.braked, _x.trolley_attached, _x.trolley.id, _x.trolley.length, _x.trolley.width, _x.trolley.height, _x.trolley.offset_locked_wheels,) = _get_struct_B3f2Bi4f().unpack(str[start:end])
      self.available = bool(self.available)
      self.braked = bool(self.braked)
      self.trolley_attached = bool(self.trolley_attached)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self
      buff.write(_get_struct_B3f2Bi4f().pack(_x.available, _x.length, _x.height, _x.angle, _x.braked, _x.trolley_attached, _x.trolley.id, _x.trolley.length, _x.trolley.width, _x.trolley.height, _x.trolley.offset_locked_wheels))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    if python3:
      codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      if self.trolley is None:
        self.trolley = mir_msgs.msg.Trolley()
      end = 0
      _x = self
      start = end
      end += 35
      (_x.available, _x.length, _x.height, _x.angle, _x.braked, _x.trolley_attached, _x.trolley.id, _x.trolley.length, _x.trolley.width, _x.trolley.height, _x.trolley.offset_locked_wheels,) = _get_struct_B3f2Bi4f().unpack(str[start:end])
      self.available = bool(self.available)
      self.braked = bool(self.braked)
      self.trolley_attached = bool(self.trolley_attached)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_B3f2Bi4f = None
def _get_struct_B3f2Bi4f():
    global _struct_B3f2Bi4f
    if _struct_B3f2Bi4f is None:
        _struct_B3f2Bi4f = struct.Struct("<B3f2Bi4f")
    return _struct_B3f2Bi4f
