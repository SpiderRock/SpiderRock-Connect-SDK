# -*- coding: utf-8 -*-
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: OptMarkData/OptionCloseMark.proto
"""Generated protocol buffer code."""
from google.protobuf.internal import builder as _builder
from google.protobuf import descriptor as _descriptor
from google.protobuf import descriptor_pool as _descriptor_pool
from google.protobuf import symbol_database as _symbol_database
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()


import spiderrock_common_pb2 as spiderrock__common__pb2
from google.protobuf import timestamp_pb2 as google_dot_protobuf_dot_timestamp__pb2


DESCRIPTOR = _descriptor_pool.Default().AddSerializedFile(b'\n!OptMarkData/OptionCloseMark.proto\x12\x13spiderrock.protobuf\x1a\x17spiderrock_common.proto\x1a\x1fgoogle/protobuf/timestamp.proto\"\xc7\t\n\x0fOptionCloseMark\x12\x33\n\x05_meta\x18\x01 \x01(\x0b\x32$.spiderrock.protobuf.MessageMetadata\x12\x37\n\x04pkey\x18\x02 \x01(\x0b\x32).spiderrock.protobuf.OptionCloseMark.PKey\x12/\n\x06ticker\x18\xd4\x01 \x01(\x0b\x32\x1e.spiderrock.protobuf.TickerKey\x12\x30\n\ntrade_date\x18\x64 \x01(\x0b\x32\x1c.spiderrock.protobuf.DateKey\x12\x39\n\x0e\x63ls_mark_state\x18g \x01(\x0e\x32!.spiderrock.protobuf.ClsMarkState\x12\r\n\x05u_bid\x18j \x01(\x01\x12\r\n\x05u_ask\x18m \x01(\x01\x12\x10\n\x08u_sr_cls\x18p \x01(\x01\x12\x0f\n\x07u_close\x18s \x01(\x01\x12\x0f\n\x07\x62id_prc\x18v \x01(\x02\x12\x0f\n\x07\x61sk_prc\x18y \x01(\x02\x12\x12\n\nsr_cls_prc\x18| \x01(\x01\x12\x11\n\tclose_prc\x18\x7f \x01(\x01\x12\x32\n\rhas_sRCls_prc\x18\x82\x01 \x01(\x0e\x32\x1a.spiderrock.protobuf.YesNo\x12\x32\n\rhas_close_prc\x18\x85\x01 \x01(\x0e\x32\x1a.spiderrock.protobuf.YesNo\x12\x31\n\x0chas_uCls_prc\x18\xd1\x01 \x01(\x0e\x32\x1a.spiderrock.protobuf.YesNo\x12\x0f\n\x06\x62id_iV\x18\x88\x01 \x01(\x02\x12\x0f\n\x06\x61sk_iV\x18\x8b\x01 \x01(\x02\x12\x0f\n\x06sr_prc\x18\x8e\x01 \x01(\x02\x12\x0f\n\x06sr_vol\x18\x91\x01 \x01(\x02\x12\x30\n\x06sr_src\x18\x94\x01 \x01(\x0e\x32\x1f.spiderrock.protobuf.MarkSource\x12\x0b\n\x02\x64\x65\x18\x97\x01 \x01(\x02\x12\x0b\n\x02ga\x18\x9a\x01 \x01(\x02\x12\x0b\n\x02th\x18\x9d\x01 \x01(\x02\x12\x0b\n\x02ve\x18\xa0\x01 \x01(\x02\x12\x0b\n\x02vo\x18\xa3\x01 \x01(\x02\x12\x0b\n\x02va\x18\xa6\x01 \x01(\x02\x12\x0b\n\x02rh\x18\xa9\x01 \x01(\x02\x12\x0b\n\x02ph\x18\xac\x01 \x01(\x02\x12\x11\n\x08sr_slope\x18\xaf\x01 \x01(\x02\x12\x11\n\x08\x64\x65_decay\x18\xb2\x01 \x01(\x02\x12\r\n\x04sdiv\x18\xb5\x01 \x01(\x02\x12\r\n\x04\x64\x64iv\x18\xb8\x01 \x01(\x02\x12\x10\n\x07\x64\x64iv_pv\x18\xd2\x01 \x01(\x02\x12\r\n\x04rate\x18\xbb\x01 \x01(\x02\x12\x0f\n\x06i_days\x18\xd3\x01 \x01(\x05\x12\x0e\n\x05years\x18\xbe\x01 \x01(\x02\x12\x0e\n\x05\x65rror\x18\xc1\x01 \x01(\x05\x12\x16\n\ropen_interest\x18\xc4\x01 \x01(\x05\x12\x12\n\tprt_count\x18\xc7\x01 \x01(\x05\x12\x13\n\nprt_volume\x18\xca\x01 \x01(\x05\x12\x37\n\x12sr_close_mark_dttm\x18\xcd\x01 \x01(\x0b\x32\x1a.google.protobuf.Timestamp\x12/\n\nconfig_now\x18\xd5\x01 \x01(\x0b\x32\x1a.google.protobuf.Timestamp\x12.\n\ttimestamp\x18\xd0\x01 \x01(\x0b\x32\x1a.google.protobuf.Timestamp\x1a\x34\n\x04PKey\x12,\n\x04okey\x18\n \x01(\x0b\x32\x1e.spiderrock.protobuf.OptionKeyb\x06proto3')

_globals = globals()
_builder.BuildMessageAndEnumDescriptors(DESCRIPTOR, _globals)
_builder.BuildTopDescriptorsAndMessages(DESCRIPTOR, 'OptMarkData.OptionCloseMark_pb2', _globals)
if _descriptor._USE_C_DESCRIPTORS == False:

  DESCRIPTOR._options = None
  _globals['_OPTIONCLOSEMARK']._serialized_start=117
  _globals['_OPTIONCLOSEMARK']._serialized_end=1340
  _globals['_OPTIONCLOSEMARK_PKEY']._serialized_start=1288
  _globals['_OPTIONCLOSEMARK_PKEY']._serialized_end=1340
# @@protoc_insertion_point(module_scope)
