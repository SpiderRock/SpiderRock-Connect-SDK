# -*- coding: utf-8 -*-
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: SpreadMktData/SpreadCloseMark.proto
"""Generated protocol buffer code."""
from google.protobuf.internal import builder as _builder
from google.protobuf import descriptor as _descriptor
from google.protobuf import descriptor_pool as _descriptor_pool
from google.protobuf import symbol_database as _symbol_database
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()


import spiderrock_common_pb2 as spiderrock__common__pb2
from google.protobuf import timestamp_pb2 as google_dot_protobuf_dot_timestamp__pb2


DESCRIPTOR = _descriptor_pool.Default().AddSerializedFile(b'\n#SpreadMktData/SpreadCloseMark.proto\x12\x13spiderrock.protobuf\x1a\x17spiderrock_common.proto\x1a\x1fgoogle/protobuf/timestamp.proto\"\xf2\x03\n\x0fSpreadCloseMark\x12\x33\n\x05_meta\x18\x01 \x01(\x0b\x32$.spiderrock.protobuf.MessageMetadata\x12\x37\n\x04pkey\x18\x02 \x01(\x0b\x32).spiderrock.protobuf.SpreadCloseMark.PKey\x12\x39\n\x0e\x63ls_mark_state\x18\x64 \x01(\x0e\x32!.spiderrock.protobuf.ClsMarkState\x12\x0f\n\x07opn_prc\x18g \x01(\x01\x12\x0f\n\x07min_prc\x18j \x01(\x01\x12\x0f\n\x07max_prc\x18m \x01(\x01\x12\x11\n\tprt_count\x18p \x01(\x05\x12\x12\n\nprt_volume\x18s \x01(\x05\x12\x14\n\x0c\x61vg_mkt_size\x18v \x01(\x01\x12\x15\n\ravg_mkt_width\x18y \x01(\x01\x12\x0f\n\x07\x62id_prc\x18| \x01(\x01\x12\x0f\n\x07\x61sk_prc\x18\x7f \x01(\x01\x12\x13\n\nsr_cls_prc\x18\x82\x01 \x01(\x01\x12\x12\n\tclose_prc\x18\x85\x01 \x01(\x01\x12.\n\ttimestamp\x18\x88\x01 \x01(\x0b\x32\x1a.google.protobuf.Timestamp\x1a\x34\n\x04PKey\x12,\n\x04skey\x18\n \x01(\x0b\x32\x1e.spiderrock.protobuf.TickerKeyb\x06proto3')

_globals = globals()
_builder.BuildMessageAndEnumDescriptors(DESCRIPTOR, _globals)
_builder.BuildTopDescriptorsAndMessages(DESCRIPTOR, 'SpreadMktData.SpreadCloseMark_pb2', _globals)
if _descriptor._USE_C_DESCRIPTORS == False:

  DESCRIPTOR._options = None
  _globals['_SPREADCLOSEMARK']._serialized_start=119
  _globals['_SPREADCLOSEMARK']._serialized_end=617
  _globals['_SPREADCLOSEMARK_PKEY']._serialized_start=565
  _globals['_SPREADCLOSEMARK_PKEY']._serialized_end=617
# @@protoc_insertion_point(module_scope)
