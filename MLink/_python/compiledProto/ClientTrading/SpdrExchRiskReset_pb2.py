# -*- coding: utf-8 -*-
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: ClientTrading/SpdrExchRiskReset.proto
"""Generated protocol buffer code."""
from google.protobuf.internal import builder as _builder
from google.protobuf import descriptor as _descriptor
from google.protobuf import descriptor_pool as _descriptor_pool
from google.protobuf import symbol_database as _symbol_database
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()


import spiderrock_common_pb2 as spiderrock__common__pb2
from google.protobuf import timestamp_pb2 as google_dot_protobuf_dot_timestamp__pb2


DESCRIPTOR = _descriptor_pool.Default().AddSerializedFile(b'\n%ClientTrading/SpdrExchRiskReset.proto\x12\x13spiderrock.protobuf\x1a\x17spiderrock_common.proto\x1a\x1fgoogle/protobuf/timestamp.proto\"\xc4\x02\n\x11SpdrExchRiskReset\x12\x33\n\x05_meta\x18\x01 \x01(\x0b\x32$.spiderrock.protobuf.MessageMetadata\x12\x39\n\x04pkey\x18\x02 \x01(\x0b\x32+.spiderrock.protobuf.SpdrExchRiskReset.PKey\x12\x13\n\x0bmodified_by\x18\x64 \x01(\t\x12\x38\n\x0bmodified_in\x18g \x01(\x0e\x32#.spiderrock.protobuf.SysEnvironment\x12-\n\ttimestamp\x18j \x01(\x0b\x32\x1a.google.protobuf.Timestamp\x1a\x41\n\x04PKey\x12\x13\n\x0b\x63lient_firm\x18\n \x01(\t\x12\x0c\n\x04\x65xch\x18\x0b \x01(\t\x12\x16\n\x0esecurity_group\x18\x0c \x01(\tb\x06proto3')

_globals = globals()
_builder.BuildMessageAndEnumDescriptors(DESCRIPTOR, _globals)
_builder.BuildTopDescriptorsAndMessages(DESCRIPTOR, 'ClientTrading.SpdrExchRiskReset_pb2', _globals)
if _descriptor._USE_C_DESCRIPTORS == False:

  DESCRIPTOR._options = None
  _globals['_SPDREXCHRISKRESET']._serialized_start=121
  _globals['_SPDREXCHRISKRESET']._serialized_end=445
  _globals['_SPDREXCHRISKRESET_PKEY']._serialized_start=380
  _globals['_SPDREXCHRISKRESET_PKEY']._serialized_end=445
# @@protoc_insertion_point(module_scope)