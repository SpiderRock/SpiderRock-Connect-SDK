# -*- coding: utf-8 -*-
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: FutSummaryData/FutureMarketSummary.proto
"""Generated protocol buffer code."""
from google.protobuf.internal import builder as _builder
from google.protobuf import descriptor as _descriptor
from google.protobuf import descriptor_pool as _descriptor_pool
from google.protobuf import symbol_database as _symbol_database
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()


import spiderrock_common_pb2 as spiderrock__common__pb2
from google.protobuf import timestamp_pb2 as google_dot_protobuf_dot_timestamp__pb2


DESCRIPTOR = _descriptor_pool.Default().AddSerializedFile(b'\n(FutSummaryData/FutureMarketSummary.proto\x12\x13spiderrock.protobuf\x1a\x17spiderrock_common.proto\x1a\x1fgoogle/protobuf/timestamp.proto\"\xd4\x05\n\x13\x46utureMarketSummary\x12\x33\n\x05_meta\x18\x01 \x01(\x0b\x32$.spiderrock.protobuf.MessageMetadata\x12;\n\x04pkey\x18\x02 \x01(\x0b\x32-.spiderrock.protobuf.FutureMarketSummary.PKey\x12\x31\n\ntrade_date\x18\x9e\x01 \x01(\x0b\x32\x1c.spiderrock.protobuf.DateKey\x12\x11\n\topn_price\x18\x64 \x01(\x01\x12\x11\n\tmrk_price\x18g \x01(\x01\x12\x11\n\tcls_price\x18j \x01(\x01\x12\x11\n\tmin_price\x18m \x01(\x01\x12\x11\n\tmax_price\x18p \x01(\x01\x12\x10\n\x08open_int\x18s \x01(\x05\x12\x11\n\tbid_count\x18v \x01(\x05\x12\x12\n\nbid_volume\x18y \x01(\x05\x12\x11\n\task_count\x18| \x01(\x05\x12\x12\n\nask_volume\x18\x7f \x01(\x05\x12\x12\n\tmid_count\x18\x82\x01 \x01(\x05\x12\x13\n\nmid_volume\x18\x85\x01 \x01(\x05\x12\x12\n\tprt_count\x18\x88\x01 \x01(\x05\x12\x13\n\nprt_volume\x18\x9f\x01 \x01(\x05\x12\x17\n\x0elast_prt_price\x18\xa0\x01 \x01(\x01\x12\x32\n\rlast_prt_dttm\x18\xa1\x01 \x01(\x0b\x32\x1a.google.protobuf.Timestamp\x12\x12\n\texp_count\x18\x8e\x01 \x01(\x05\x12\x12\n\texp_width\x18\x91\x01 \x01(\x01\x12\x15\n\x0c\x65xp_bid_size\x18\x94\x01 \x01(\x02\x12\x15\n\x0c\x65xp_ask_size\x18\x97\x01 \x01(\x02\x12.\n\ttimestamp\x18\x9d\x01 \x01(\x0b\x32\x1a.google.protobuf.Timestamp\x1a\x34\n\x04PKey\x12,\n\x04\x66key\x18\n \x01(\x0b\x32\x1e.spiderrock.protobuf.ExpiryKeyb\x06proto3')

_globals = globals()
_builder.BuildMessageAndEnumDescriptors(DESCRIPTOR, _globals)
_builder.BuildTopDescriptorsAndMessages(DESCRIPTOR, 'FutSummaryData.FutureMarketSummary_pb2', _globals)
if _descriptor._USE_C_DESCRIPTORS == False:

  DESCRIPTOR._options = None
  _globals['_FUTUREMARKETSUMMARY']._serialized_start=124
  _globals['_FUTUREMARKETSUMMARY']._serialized_end=848
  _globals['_FUTUREMARKETSUMMARY_PKEY']._serialized_start=796
  _globals['_FUTUREMARKETSUMMARY_PKEY']._serialized_end=848
# @@protoc_insertion_point(module_scope)
