# -*- coding: utf-8 -*-
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: SRMLinkAnalytics/OptionLookback.proto
"""Generated protocol buffer code."""
from google.protobuf.internal import builder as _builder
from google.protobuf import descriptor as _descriptor
from google.protobuf import descriptor_pool as _descriptor_pool
from google.protobuf import symbol_database as _symbol_database
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()


import spiderrock_common_pb2 as spiderrock__common__pb2
from google.protobuf import timestamp_pb2 as google_dot_protobuf_dot_timestamp__pb2


DESCRIPTOR = _descriptor_pool.Default().AddSerializedFile(b'\n%SRMLinkAnalytics/OptionLookback.proto\x12\x13spiderrock.protobuf\x1a\x17spiderrock_common.proto\x1a\x1fgoogle/protobuf/timestamp.proto\"\xdf\x03\n\x0eOptionLookback\x12\x33\n\x05_meta\x18\x01 \x01(\x0b\x32$.spiderrock.protobuf.MessageMetadata\x12\x36\n\x04pkey\x18\x02 \x01(\x0b\x32(.spiderrock.protobuf.OptionLookback.PKey\x12\x30\n\ntrade_date\x18\x64 \x01(\x0b\x32\x1c.spiderrock.protobuf.DateKey\x12\r\n\x05u_prc\x18g \x01(\x01\x12\n\n\x02\x64\x65\x18j \x01(\x02\x12\n\n\x02ve\x18m \x01(\x02\x12\x13\n\x0b\x65ma_bid_prc\x18p \x01(\x02\x12\x13\n\x0b\x65ma_ask_prc\x18s \x01(\x02\x12\x14\n\x0c\x65ma_bid_size\x18v \x01(\x02\x12\x14\n\x0c\x65ma_ask_size\x18y \x01(\x02\x12\x10\n\x08\x65ma_sPrc\x18| \x01(\x02\x12\x10\n\x08\x65ma_sVol\x18\x7f \x01(\x02\x12\x11\n\x08\x65ma_sDiv\x18\x82\x01 \x01(\x02\x12\x14\n\x0b\x65ma_atm_vol\x18\x85\x01 \x01(\x02\x12.\n\ttimestamp\x18\x88\x01 \x01(\x0b\x32\x1a.google.protobuf.Timestamp\x1a\x34\n\x04PKey\x12,\n\x04okey\x18\n \x01(\x0b\x32\x1e.spiderrock.protobuf.OptionKeyb\x06proto3')

_globals = globals()
_builder.BuildMessageAndEnumDescriptors(DESCRIPTOR, _globals)
_builder.BuildTopDescriptorsAndMessages(DESCRIPTOR, 'SRMLinkAnalytics.OptionLookback_pb2', _globals)
if _descriptor._USE_C_DESCRIPTORS == False:

  DESCRIPTOR._options = None
  _globals['_OPTIONLOOKBACK']._serialized_start=121
  _globals['_OPTIONLOOKBACK']._serialized_end=600
  _globals['_OPTIONLOOKBACK_PKEY']._serialized_start=548
  _globals['_OPTIONLOOKBACK_PKEY']._serialized_end=600
# @@protoc_insertion_point(module_scope)
