# -*- coding: utf-8 -*-
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: ClientLive/StockRegSHOStatus.proto
"""Generated protocol buffer code."""
from google.protobuf.internal import builder as _builder
from google.protobuf import descriptor as _descriptor
from google.protobuf import descriptor_pool as _descriptor_pool
from google.protobuf import symbol_database as _symbol_database
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()


import spiderrock_common_pb2 as spiderrock__common__pb2
from google.protobuf import timestamp_pb2 as google_dot_protobuf_dot_timestamp__pb2


DESCRIPTOR = _descriptor_pool.Default().AddSerializedFile(b'\n\"ClientLive/StockRegSHOStatus.proto\x12\x13spiderrock.protobuf\x1a\x17spiderrock_common.proto\x1a\x1fgoogle/protobuf/timestamp.proto\"\xa4\x02\n\x11StockRegSHOStatus\x12\x33\n\x05_meta\x18\x01 \x01(\x0b\x32$.spiderrock.protobuf.MessageMetadata\x12\x39\n\x04pkey\x18\x02 \x01(\x0b\x32+.spiderrock.protobuf.StockRegSHOStatus.PKey\x12\x38\n\rreg_sHOStatus\x18\x64 \x01(\x0e\x32!.spiderrock.protobuf.RegSHOStatus\x12-\n\ttimestamp\x18g \x01(\x0b\x32\x1a.google.protobuf.Timestamp\x1a\x36\n\x04PKey\x12.\n\x06ticker\x18\n \x01(\x0b\x32\x1e.spiderrock.protobuf.TickerKeyb\x06proto3')

_globals = globals()
_builder.BuildMessageAndEnumDescriptors(DESCRIPTOR, _globals)
_builder.BuildTopDescriptorsAndMessages(DESCRIPTOR, 'ClientLive.StockRegSHOStatus_pb2', _globals)
if _descriptor._USE_C_DESCRIPTORS == False:

  DESCRIPTOR._options = None
  _globals['_STOCKREGSHOSTATUS']._serialized_start=118
  _globals['_STOCKREGSHOSTATUS']._serialized_end=410
  _globals['_STOCKREGSHOSTATUS_PKEY']._serialized_start=356
  _globals['_STOCKREGSHOSTATUS_PKEY']._serialized_end=410
# @@protoc_insertion_point(module_scope)
