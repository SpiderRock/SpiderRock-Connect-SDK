# -*- coding: utf-8 -*-
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: RiskCalc/GetOptionPrice.proto
"""Generated protocol buffer code."""
from google.protobuf.internal import builder as _builder
from google.protobuf import descriptor as _descriptor
from google.protobuf import descriptor_pool as _descriptor_pool
from google.protobuf import symbol_database as _symbol_database
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()


import spiderrock_common_pb2 as spiderrock__common__pb2
from google.protobuf import timestamp_pb2 as google_dot_protobuf_dot_timestamp__pb2


DESCRIPTOR = _descriptor_pool.Default().AddSerializedFile(b'\n\x1dRiskCalc/GetOptionPrice.proto\x12\x13spiderrock.protobuf\x1a\x17spiderrock_common.proto\x1a\x1fgoogle/protobuf/timestamp.proto\"\x9b\x08\n\x0eGetOptionPrice\x12\x33\n\x05_meta\x18\x01 \x01(\x0b\x32$.spiderrock.protobuf.MessageMetadata\x12-\n\x04okey\x18\xc8\x01 \x01(\x0b\x32\x1e.spiderrock.protobuf.OptionKey\x12\x0c\n\x03vol\x18\xca\x01 \x01(\x01\x12\r\n\x05u_prc\x18s \x01(\x01\x12\r\n\x05years\x18v \x01(\x01\x12\r\n\x04sdiv\x18\xcb\x01 \x01(\x01\x12\r\n\x04rate\x18\xcc\x01 \x01(\x01\x12\x32\n\x07\x65x_type\x18\x7f \x01(\x0e\x32!.spiderrock.protobuf.ExerciseType\x12\x33\n\x07\x65x_time\x18\x82\x01 \x01(\x0e\x32!.spiderrock.protobuf.ExerciseTime\x12<\n\x10holiday_calendar\x18\xc9\x01 \x01(\x0e\x32!.spiderrock.protobuf.CalendarCode\x12\x35\n\x0btime_metric\x18\x85\x01 \x01(\x0e\x32\x1f.spiderrock.protobuf.TimeMetric\x12\x37\n\nmodel_type\x18\x91\x01 \x01(\x0e\x32\".spiderrock.protobuf.CalcModelType\x12\x35\n\x0b\x63\x61lc_engine\x18\x94\x01 \x01(\x0e\x32\x1f.spiderrock.protobuf.CalcEngine\x12/\n\ninc_greeks\x18\x97\x01 \x01(\x0e\x32\x1a.spiderrock.protobuf.YesNo\x12\x0e\n\x05price\x18\x9a\x01 \x01(\x01\x12\x13\n\neff_strike\x18\x9d\x01 \x01(\x01\x12\x0f\n\x06i_days\x18\xc5\x01 \x01(\x05\x12\r\n\x04\x64\x64iv\x18\xc6\x01 \x01(\x02\x12\x10\n\x07\x64\x64iv_pV\x18\xc7\x01 \x01(\x02\x12\x0e\n\x05\x64\x65lta\x18\xa3\x01 \x01(\x02\x12\x0e\n\x05gamma\x18\xa6\x01 \x01(\x02\x12\x0e\n\x05theta\x18\xa9\x01 \x01(\x02\x12\r\n\x04vega\x18\xac\x01 \x01(\x02\x12\x0e\n\x05volga\x18\xaf\x01 \x01(\x02\x12\x0e\n\x05vanna\x18\xb2\x01 \x01(\x02\x12\x11\n\x08\x64\x65_decay\x18\xb5\x01 \x01(\x02\x12\x0c\n\x03rho\x18\xb8\x01 \x01(\x02\x12\x0c\n\x03phi\x18\xbb\x01 \x01(\x02\x12\x0e\n\x05\x65rror\x18\xbe\x01 \x01(\t\x12\x15\n\x0cpricer_model\x18\xc1\x01 \x01(\t\x12.\n\ttimestamp\x18\xc4\x01 \x01(\x0b\x32\x1a.google.protobuf.Timestamp\x12P\n\x11\x64iscrete_dividend\x18\x88\x01 \x03(\x0b\x32\x34.spiderrock.protobuf.GetOptionPrice.DiscreteDividend\x1aN\n\x10\x44iscreteDividend\x12)\n\x04\x64\x61te\x18\x8b\x01 \x01(\x0b\x32\x1a.google.protobuf.Timestamp\x12\x0f\n\x06\x61mount\x18\x8e\x01 \x01(\x02\x62\x06proto3')

_globals = globals()
_builder.BuildMessageAndEnumDescriptors(DESCRIPTOR, _globals)
_builder.BuildTopDescriptorsAndMessages(DESCRIPTOR, 'RiskCalc.GetOptionPrice_pb2', _globals)
if _descriptor._USE_C_DESCRIPTORS == False:

  DESCRIPTOR._options = None
  _globals['_GETOPTIONPRICE']._serialized_start=113
  _globals['_GETOPTIONPRICE']._serialized_end=1164
  _globals['_GETOPTIONPRICE_DISCRETEDIVIDEND']._serialized_start=1086
  _globals['_GETOPTIONPRICE_DISCRETEDIVIDEND']._serialized_end=1164
# @@protoc_insertion_point(module_scope)
