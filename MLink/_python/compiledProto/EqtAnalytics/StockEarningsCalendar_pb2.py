# -*- coding: utf-8 -*-
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: EqtAnalytics/StockEarningsCalendar.proto
"""Generated protocol buffer code."""
from google.protobuf.internal import builder as _builder
from google.protobuf import descriptor as _descriptor
from google.protobuf import descriptor_pool as _descriptor_pool
from google.protobuf import symbol_database as _symbol_database
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()


import spiderrock_common_pb2 as spiderrock__common__pb2
from google.protobuf import timestamp_pb2 as google_dot_protobuf_dot_timestamp__pb2


DESCRIPTOR = _descriptor_pool.Default().AddSerializedFile(b'\n(EqtAnalytics/StockEarningsCalendar.proto\x12\x13spiderrock.protobuf\x1a\x17spiderrock_common.proto\x1a\x1fgoogle/protobuf/timestamp.proto\"\xd6\x06\n\x15StockEarningsCalendar\x12\x33\n\x05_meta\x18\x01 \x01(\x0b\x32$.spiderrock.protobuf.MessageMetadata\x12=\n\x04pkey\x18\x02 \x01(\x0b\x32/.spiderrock.protobuf.StockEarningsCalendar.PKey\x12\x13\n\x0b\x65_move_hist\x18\x64 \x01(\x02\x12-\n\ttimestamp\x18g \x01(\x0b\x32\x1a.google.protobuf.Timestamp\x12?\n\x05\x65vent\x18j \x03(\x0b\x32\x30.spiderrock.protobuf.StockEarningsCalendar.Event\x1ah\n\x04PKey\x12.\n\x06ticker\x18\n \x01(\x0b\x32\x1e.spiderrock.protobuf.TickerKey\x12\x30\n\x06source\x18\x0b \x01(\x0e\x32 .spiderrock.protobuf.EventSource\x1a\xd9\x03\n\x05\x45vent\x12\x30\n\nevent_date\x18m \x01(\x0b\x32\x1c.spiderrock.protobuf.DateKey\x12\x12\n\nevent_time\x18p \x01(\t\x12\x34\n\x0b\x65\x61rn_status\x18s \x01(\x0e\x32\x1f.spiderrock.protobuf.EarnStatus\x12<\n\x0fguidance_issued\x18v \x01(\x0e\x32#.spiderrock.protobuf.GuidanceIssued\x12\x35\n\x0f\x65\x61rn_fiscal_qtr\x18y \x01(\x0b\x32\x1c.spiderrock.protobuf.DateKey\x12\x34\n\x0b\x65\x61rn_change\x18| \x01(\x0e\x32\x1f.spiderrock.protobuf.earnChange\x12\x15\n\rearn_pct_move\x18\x7f \x01(\x02\x12\x12\n\tprv_close\x18\x82\x01 \x01(\x02\x12\r\n\x04open\x18\x85\x01 \x01(\x02\x12\r\n\x04high\x18\x88\x01 \x01(\x02\x12\x0c\n\x03low\x18\x8b\x01 \x01(\x02\x12\x0e\n\x05\x63lose\x18\x8e\x01 \x01(\x02\x12\x30\n\tmove_date\x18\x91\x01 \x01(\x0b\x32\x1c.spiderrock.protobuf.DateKey\x12\x10\n\x07h_eMove\x18\x94\x01 \x01(\x02\x62\x06proto3')

_globals = globals()
_builder.BuildMessageAndEnumDescriptors(DESCRIPTOR, _globals)
_builder.BuildTopDescriptorsAndMessages(DESCRIPTOR, 'EqtAnalytics.StockEarningsCalendar_pb2', _globals)
if _descriptor._USE_C_DESCRIPTORS == False:

  DESCRIPTOR._options = None
  _globals['_STOCKEARNINGSCALENDAR']._serialized_start=124
  _globals['_STOCKEARNINGSCALENDAR']._serialized_end=978
  _globals['_STOCKEARNINGSCALENDAR_PKEY']._serialized_start=398
  _globals['_STOCKEARNINGSCALENDAR_PKEY']._serialized_end=502
  _globals['_STOCKEARNINGSCALENDAR_EVENT']._serialized_start=505
  _globals['_STOCKEARNINGSCALENDAR_EVENT']._serialized_end=978
# @@protoc_insertion_point(module_scope)
