# -*- coding: utf-8 -*-
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: SRMLinkAnalytics/OptionOpenVega.proto
"""Generated protocol buffer code."""
from google.protobuf.internal import builder as _builder
from google.protobuf import descriptor as _descriptor
from google.protobuf import descriptor_pool as _descriptor_pool
from google.protobuf import symbol_database as _symbol_database
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()


import spiderrock_common_pb2 as spiderrock__common__pb2
from google.protobuf import timestamp_pb2 as google_dot_protobuf_dot_timestamp__pb2


DESCRIPTOR = _descriptor_pool.Default().AddSerializedFile(b'\n%SRMLinkAnalytics/OptionOpenVega.proto\x12\x13spiderrock.protobuf\x1a\x17spiderrock_common.proto\x1a\x1fgoogle/protobuf/timestamp.proto\"\xa5\x03\n\x0eOptionOpenVega\x12\x33\n\x05_meta\x18\x01 \x01(\x0b\x32$.spiderrock.protobuf.MessageMetadata\x12\x36\n\x04pkey\x18\x02 \x01(\x0b\x32(.spiderrock.protobuf.OptionOpenVega.PKey\x12\x32\n\x0ctrading_date\x18\x64 \x01(\x0b\x32\x1c.spiderrock.protobuf.DateKey\x12.\n\x06ticker\x18g \x01(\x0b\x32\x1e.spiderrock.protobuf.TickerKey\x12\x10\n\x08open_int\x18j \x01(\x05\x12\x0e\n\x06volume\x18m \x01(\x05\x12\x11\n\topen_vega\x18p \x01(\x02\x12\x13\n\x0bvega_volume\x18s \x01(\x02\x12\x13\n\x0bnum_options\x18v \x01(\x05\x12-\n\ttimestamp\x18y \x01(\x0b\x32\x1a.google.protobuf.Timestamp\x1a\x34\n\x04PKey\x12,\n\x04\x65key\x18\n \x01(\x0b\x32\x1e.spiderrock.protobuf.ExpiryKeyb\x06proto3')

_globals = globals()
_builder.BuildMessageAndEnumDescriptors(DESCRIPTOR, _globals)
_builder.BuildTopDescriptorsAndMessages(DESCRIPTOR, 'SRMLinkAnalytics.OptionOpenVega_pb2', _globals)
if _descriptor._USE_C_DESCRIPTORS == False:

  DESCRIPTOR._options = None
  _globals['_OPTIONOPENVEGA']._serialized_start=121
  _globals['_OPTIONOPENVEGA']._serialized_end=542
  _globals['_OPTIONOPENVEGA_PKEY']._serialized_start=490
  _globals['_OPTIONOPENVEGA_PKEY']._serialized_end=542
# @@protoc_insertion_point(module_scope)
