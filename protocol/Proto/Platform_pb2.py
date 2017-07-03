# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: protocol/Proto/Platform.proto

from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import descriptor_pb2
# @@protoc_insertion_point(imports)




DESCRIPTOR = _descriptor.FileDescriptor(
  name='protocol/Proto/Platform.proto',
  package='protocol.platform',
  serialized_pb='\n\x1dprotocol/Proto/Platform.proto\x12\x11protocol.platform\"\xba\x01\n\x0fQQGameLoginData\x12\x0e\n\x06openID\x18\x01 \x01(\t\x12\x0f\n\x07openKey\x18\x02 \x01(\t\x12\r\n\x05pfKey\x18\x03 \x01(\t\x12\x11\n\tisBlueVip\x18\x04 \x01(\x08\x12\x15\n\risBlueYearVip\x18\x05 \x01(\x08\x12\x14\n\x0c\x62lueVipLevel\x18\x06 \x01(\r\x12\x10\n\x08nickName\x18\x07 \x01(\t\x12\x0e\n\x06gender\x18\x08 \x01(\t\x12\x15\n\risHighBlueVip\x18\t \x01(\x08\"\xc1\x01\n\x10LoginSessionData\x12\x10\n\x08\x63lientID\x18\x01 \x02(\r\x12\x13\n\x0b\x61\x63\x63ountName\x18\x02 \x02(\t\x12\x0f\n\x07isAdult\x18\x03 \x02(\x08\x12\x11\n\tchannelID\x18\x04 \x02(\r\x12\x0f\n\x07netType\x18\x05 \x02(\r\x12\x14\n\x0cplatformType\x18\x06 \x02(\r\x12;\n\x0fqqGameLoginData\x18\x07 \x01(\x0b\x32\".protocol.platform.QQGameLoginData\"4\n\rLoginFailData\x12\x10\n\x08\x63lientID\x18\x01 \x02(\r\x12\x11\n\terrorCode\x18\x02 \x02(\r\"^\n\rLoginSuccData\x12\x10\n\x08\x63lientID\x18\x01 \x02(\r\x12\x13\n\x0b\x61\x63\x63ountName\x18\x02 \x02(\t\x12\x11\n\tgatewayIP\x18\x03 \x02(\t\x12\x13\n\x0bgatewayPort\x18\x04 \x02(\r\"\x1e\n\tZoneState\x12\x11\n\tonlineNum\x18\x01 \x02(\r')




_QQGAMELOGINDATA = _descriptor.Descriptor(
  name='QQGameLoginData',
  full_name='protocol.platform.QQGameLoginData',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='openID', full_name='protocol.platform.QQGameLoginData.openID', index=0,
      number=1, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=unicode("", "utf-8"),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='openKey', full_name='protocol.platform.QQGameLoginData.openKey', index=1,
      number=2, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=unicode("", "utf-8"),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='pfKey', full_name='protocol.platform.QQGameLoginData.pfKey', index=2,
      number=3, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=unicode("", "utf-8"),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='isBlueVip', full_name='protocol.platform.QQGameLoginData.isBlueVip', index=3,
      number=4, type=8, cpp_type=7, label=1,
      has_default_value=False, default_value=False,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='isBlueYearVip', full_name='protocol.platform.QQGameLoginData.isBlueYearVip', index=4,
      number=5, type=8, cpp_type=7, label=1,
      has_default_value=False, default_value=False,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='blueVipLevel', full_name='protocol.platform.QQGameLoginData.blueVipLevel', index=5,
      number=6, type=13, cpp_type=3, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='nickName', full_name='protocol.platform.QQGameLoginData.nickName', index=6,
      number=7, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=unicode("", "utf-8"),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='gender', full_name='protocol.platform.QQGameLoginData.gender', index=7,
      number=8, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=unicode("", "utf-8"),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='isHighBlueVip', full_name='protocol.platform.QQGameLoginData.isHighBlueVip', index=8,
      number=9, type=8, cpp_type=7, label=1,
      has_default_value=False, default_value=False,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  options=None,
  is_extendable=False,
  extension_ranges=[],
  serialized_start=53,
  serialized_end=239,
)


_LOGINSESSIONDATA = _descriptor.Descriptor(
  name='LoginSessionData',
  full_name='protocol.platform.LoginSessionData',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='clientID', full_name='protocol.platform.LoginSessionData.clientID', index=0,
      number=1, type=13, cpp_type=3, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='accountName', full_name='protocol.platform.LoginSessionData.accountName', index=1,
      number=2, type=9, cpp_type=9, label=2,
      has_default_value=False, default_value=unicode("", "utf-8"),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='isAdult', full_name='protocol.platform.LoginSessionData.isAdult', index=2,
      number=3, type=8, cpp_type=7, label=2,
      has_default_value=False, default_value=False,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='channelID', full_name='protocol.platform.LoginSessionData.channelID', index=3,
      number=4, type=13, cpp_type=3, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='netType', full_name='protocol.platform.LoginSessionData.netType', index=4,
      number=5, type=13, cpp_type=3, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='platformType', full_name='protocol.platform.LoginSessionData.platformType', index=5,
      number=6, type=13, cpp_type=3, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='qqGameLoginData', full_name='protocol.platform.LoginSessionData.qqGameLoginData', index=6,
      number=7, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  options=None,
  is_extendable=False,
  extension_ranges=[],
  serialized_start=242,
  serialized_end=435,
)


_LOGINFAILDATA = _descriptor.Descriptor(
  name='LoginFailData',
  full_name='protocol.platform.LoginFailData',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='clientID', full_name='protocol.platform.LoginFailData.clientID', index=0,
      number=1, type=13, cpp_type=3, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='errorCode', full_name='protocol.platform.LoginFailData.errorCode', index=1,
      number=2, type=13, cpp_type=3, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  options=None,
  is_extendable=False,
  extension_ranges=[],
  serialized_start=437,
  serialized_end=489,
)


_LOGINSUCCDATA = _descriptor.Descriptor(
  name='LoginSuccData',
  full_name='protocol.platform.LoginSuccData',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='clientID', full_name='protocol.platform.LoginSuccData.clientID', index=0,
      number=1, type=13, cpp_type=3, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='accountName', full_name='protocol.platform.LoginSuccData.accountName', index=1,
      number=2, type=9, cpp_type=9, label=2,
      has_default_value=False, default_value=unicode("", "utf-8"),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='gatewayIP', full_name='protocol.platform.LoginSuccData.gatewayIP', index=2,
      number=3, type=9, cpp_type=9, label=2,
      has_default_value=False, default_value=unicode("", "utf-8"),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='gatewayPort', full_name='protocol.platform.LoginSuccData.gatewayPort', index=3,
      number=4, type=13, cpp_type=3, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  options=None,
  is_extendable=False,
  extension_ranges=[],
  serialized_start=491,
  serialized_end=585,
)


_ZONESTATE = _descriptor.Descriptor(
  name='ZoneState',
  full_name='protocol.platform.ZoneState',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='onlineNum', full_name='protocol.platform.ZoneState.onlineNum', index=0,
      number=1, type=13, cpp_type=3, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  options=None,
  is_extendable=False,
  extension_ranges=[],
  serialized_start=587,
  serialized_end=617,
)

_LOGINSESSIONDATA.fields_by_name['qqGameLoginData'].message_type = _QQGAMELOGINDATA
DESCRIPTOR.message_types_by_name['QQGameLoginData'] = _QQGAMELOGINDATA
DESCRIPTOR.message_types_by_name['LoginSessionData'] = _LOGINSESSIONDATA
DESCRIPTOR.message_types_by_name['LoginFailData'] = _LOGINFAILDATA
DESCRIPTOR.message_types_by_name['LoginSuccData'] = _LOGINSUCCDATA
DESCRIPTOR.message_types_by_name['ZoneState'] = _ZONESTATE

class QQGameLoginData(_message.Message):
  __metaclass__ = _reflection.GeneratedProtocolMessageType
  DESCRIPTOR = _QQGAMELOGINDATA

  # @@protoc_insertion_point(class_scope:protocol.platform.QQGameLoginData)

class LoginSessionData(_message.Message):
  __metaclass__ = _reflection.GeneratedProtocolMessageType
  DESCRIPTOR = _LOGINSESSIONDATA

  # @@protoc_insertion_point(class_scope:protocol.platform.LoginSessionData)

class LoginFailData(_message.Message):
  __metaclass__ = _reflection.GeneratedProtocolMessageType
  DESCRIPTOR = _LOGINFAILDATA

  # @@protoc_insertion_point(class_scope:protocol.platform.LoginFailData)

class LoginSuccData(_message.Message):
  __metaclass__ = _reflection.GeneratedProtocolMessageType
  DESCRIPTOR = _LOGINSUCCDATA

  # @@protoc_insertion_point(class_scope:protocol.platform.LoginSuccData)

class ZoneState(_message.Message):
  __metaclass__ = _reflection.GeneratedProtocolMessageType
  DESCRIPTOR = _ZONESTATE

  # @@protoc_insertion_point(class_scope:protocol.platform.ZoneState)


# @@protoc_insertion_point(module_scope)