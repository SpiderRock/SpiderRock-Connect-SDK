# -*- coding: utf-8 -*-
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: FutureDefinition/CCodeDefinition.proto
"""Generated protocol buffer code."""
from google.protobuf.internal import builder as _builder
from google.protobuf import descriptor as _descriptor
from google.protobuf import descriptor_pool as _descriptor_pool
from google.protobuf import symbol_database as _symbol_database
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()


import spiderrock_common_pb2 as spiderrock__common__pb2
from google.protobuf import timestamp_pb2 as google_dot_protobuf_dot_timestamp__pb2


DESCRIPTOR = _descriptor_pool.Default().AddSerializedFile(b'\n&FutureDefinition/CCodeDefinition.proto\x12\x13spiderrock.protobuf\x1a\x17spiderrock_common.proto\x1a\x1fgoogle/protobuf/timestamp.proto\"\xd2\x07\n\x0f\x43\x43odeDefinition\x12\x33\n\x05_meta\x18\x01 \x01(\x0b\x32$.spiderrock.protobuf.MessageMetadata\x12\x37\n\x04pkey\x18\x02 \x01(\x0b\x32).spiderrock.protobuf.CCodeDefinition.PKey\x12-\n\x07\x66utexch\x18\x64 \x01(\x0e\x32\x1c.spiderrock.protobuf.FutExch\x12.\n\x06ticker\x18g \x01(\x0b\x32\x1e.spiderrock.protobuf.TickerKey\x12\x34\n\x0bsettle_time\x18j \x01(\x0e\x32\x1f.spiderrock.protobuf.SettleTime\x12\x16\n\x0eposition_limit\x18m \x01(\x05\x12\x12\n\ntick_value\x18p \x01(\x02\x12\x13\n\x0bpoint_value\x18s \x01(\x02\x12\x35\n\x0epoint_currency\x18v \x01(\x0e\x32\x1d.spiderrock.protobuf.Currency\x12\x15\n\rprice_scaling\x18y \x01(\x02\x12\x19\n\x11underliers_per_cn\x18| \x01(\x05\x12:\n\x0eunderlier_type\x18\x7f \x01(\x0e\x32\".spiderrock.protobuf.UnderlierType\x12\x16\n\rclearing_code\x18\x82\x01 \x01(\t\x12\x11\n\x08ric_root\x18\xa4\x01 \x01(\t\x12\x11\n\x08\x62\x62g_root\x18\x88\x01 \x01(\t\x12\x32\n\tbbg_group\x18\x8b\x01 \x01(\x0e\x32\x1e.spiderrock.protobuf.YellowKey\x12\x15\n\x0cgmi_exchange\x18\x8e\x01 \x01(\t\x12\x14\n\x0bgmi_product\x18\x91\x01 \x01(\t\x12\x15\n\x0cgmi_sub_type\x18\x94\x01 \x01(\t\x12\x1e\n\x15\x64isplay_price_scaling\x18\x97\x01 \x01(\x02\x12\x17\n\x0estrike_scaling\x18\x9a\x01 \x01(\x02\x12\x14\n\x0b\x64\x65scription\x18\x9d\x01 \x01(\t\x12\x16\n\rmarket_center\x18\xa0\x01 \x01(\t\x12;\n\x0etrading_period\x18\xa5\x01 \x01(\x0e\x32\".spiderrock.protobuf.TradingPeriod\x12.\n\ttimestamp\x18\xa3\x01 \x01(\x0b\x32\x1a.google.protobuf.Timestamp\x12\x15\n\x0cric_code__v7\x18\x88\' \x01(\t\x1a\x35\n\x04PKey\x12-\n\x05\x63\x63ode\x18\n \x01(\x0b\x32\x1e.spiderrock.protobuf.TickerKeyb\x06proto3')

_globals = globals()
_builder.BuildMessageAndEnumDescriptors(DESCRIPTOR, _globals)
_builder.BuildTopDescriptorsAndMessages(DESCRIPTOR, 'FutureDefinition.CCodeDefinition_pb2', _globals)
if _descriptor._USE_C_DESCRIPTORS == False:

  DESCRIPTOR._options = None
  _globals['_CCODEDEFINITION']._serialized_start=122
  _globals['_CCODEDEFINITION']._serialized_end=1100
  _globals['_CCODEDEFINITION_PKEY']._serialized_start=1047
  _globals['_CCODEDEFINITION_PKEY']._serialized_end=1100
# @@protoc_insertion_point(module_scope)
