# -*- coding: utf-8 -*-
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: MLinkWs/MLinkStreamAck.proto
"""Generated protocol buffer code."""
from google.protobuf.internal import builder as _builder
from google.protobuf import descriptor as _descriptor
from google.protobuf import descriptor_pool as _descriptor_pool
from google.protobuf import symbol_database as _symbol_database
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()


import spiderrock_common_pb2 as spiderrock__common__pb2


DESCRIPTOR = _descriptor_pool.Default().AddSerializedFile(b'\n\x1cMLinkWs/MLinkStreamAck.proto\x12\x13spiderrock.protobuf\x1a\x17spiderrock_common.proto\"\x9a\x02\n\x0eMLinkStreamAck\x12\x33\n\x05_meta\x18\x01 \x01(\x0b\x32$.spiderrock.protobuf.MessageMetadata\x12\x12\n\nsession_iD\x18\x64 \x01(\x05\x12\x10\n\x08query_iD\x18g \x01(\x03\x12\x15\n\rquery_send_ts\x18j \x01(\x03\x12\x13\n\x0bquery_label\x18m \x01(\t\x12/\n\x0bunsubscribe\x18p \x01(\x0e\x32\x1a.spiderrock.protobuf.YesNo\x12\x10\n\x08msg_name\x18s \x01(\t\x12.\n\x06result\x18v \x01(\x0e\x32\x1e.spiderrock.protobuf.AckResult\x12\x0e\n\x06\x64\x65tail\x18z \x01(\tb\x06proto3')

_globals = globals()
_builder.BuildMessageAndEnumDescriptors(DESCRIPTOR, _globals)
_builder.BuildTopDescriptorsAndMessages(DESCRIPTOR, 'MLinkWs.MLinkStreamAck_pb2', _globals)
if _descriptor._USE_C_DESCRIPTORS == False:

  DESCRIPTOR._options = None
  _globals['_MLINKSTREAMACK']._serialized_start=79
  _globals['_MLINKSTREAMACK']._serialized_end=361
# @@protoc_insertion_point(module_scope)