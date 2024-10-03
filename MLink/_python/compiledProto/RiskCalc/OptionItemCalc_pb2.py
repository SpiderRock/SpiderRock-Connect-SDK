# -*- coding: utf-8 -*-
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: RiskCalc/OptionItemCalc.proto
"""Generated protocol buffer code."""
from google.protobuf.internal import builder as _builder
from google.protobuf import descriptor as _descriptor
from google.protobuf import descriptor_pool as _descriptor_pool
from google.protobuf import symbol_database as _symbol_database
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()


import spiderrock_common_pb2 as spiderrock__common__pb2
from google.protobuf import timestamp_pb2 as google_dot_protobuf_dot_timestamp__pb2


DESCRIPTOR = _descriptor_pool.Default().AddSerializedFile(b'\n\x1dRiskCalc/OptionItemCalc.proto\x12\x13spiderrock.protobuf\x1a\x17spiderrock_common.proto\x1a\x1fgoogle/protobuf/timestamp.proto\"\xbd\x06\n\x0eOptionItemCalc\x12\x33\n\x05_meta\x18\x01 \x01(\x0b\x32$.spiderrock.protobuf.MessageMetadata\x12,\n\x04okey\x18\x64 \x01(\x0b\x32\x1e.spiderrock.protobuf.OptionKey\x12\x15\n\rbasket_number\x18\x65 \x01(\x03\x12\x32\n\x07\x65x_type\x18\x66 \x01(\x0e\x32!.spiderrock.protobuf.ExerciseType\x12\x32\n\x07\x65x_time\x18g \x01(\x0e\x32!.spiderrock.protobuf.ExerciseTime\x12\x34\n\x0btime_metric\x18h \x01(\x0e\x32\x1f.spiderrock.protobuf.TimeMetric\x12\x36\n\nprice_type\x18i \x01(\x0e\x32\".spiderrock.protobuf.CalcPriceType\x12\x36\n\nmodel_type\x18j \x01(\x0e\x32\".spiderrock.protobuf.CalcModelType\x12.\n\ninc_greeks\x18k \x01(\x0e\x32\x1a.spiderrock.protobuf.YesNo\x12\x0b\n\x03vol\x18l \x01(\x01\x12\r\n\x05u_prc\x18m \x01(\x01\x12\x0e\n\x06i_days\x18n \x01(\x05\x12\r\n\x05years\x18o \x01(\x01\x12\x0c\n\x04sdiv\x18p \x01(\x01\x12\x0c\n\x04rate\x18q \x01(\x01\x12\x0c\n\x04\x64\x64iv\x18r \x01(\x01\x12\x0f\n\x07\x64\x64iv_pV\x18s \x01(\x01\x12\r\n\x05price\x18t \x01(\x01\x12\x12\n\neff_strike\x18u \x01(\x01\x12\r\n\x05\x64\x65lta\x18v \x01(\x02\x12\r\n\x05gamma\x18w \x01(\x02\x12\r\n\x05theta\x18x \x01(\x02\x12\x0c\n\x04vega\x18y \x01(\x02\x12\r\n\x05volga\x18z \x01(\x02\x12\r\n\x05vanna\x18{ \x01(\x02\x12\x10\n\x08\x64\x65_decay\x18| \x01(\x02\x12\x0b\n\x03rho\x18} \x01(\x02\x12\x0b\n\x03phi\x18~ \x01(\x02\x12\x0e\n\x05\x65rror\x18\x82\x01 \x01(\t\x12\x15\n\x0cpricer_model\x18\x80\x01 \x01(\t\x12.\n\ttimestamp\x18\x81\x01 \x01(\x0b\x32\x1a.google.protobuf.Timestampb\x06proto3')

_globals = globals()
_builder.BuildMessageAndEnumDescriptors(DESCRIPTOR, _globals)
_builder.BuildTopDescriptorsAndMessages(DESCRIPTOR, 'RiskCalc.OptionItemCalc_pb2', _globals)
if _descriptor._USE_C_DESCRIPTORS == False:

  DESCRIPTOR._options = None
  _globals['_OPTIONITEMCALC']._serialized_start=113
  _globals['_OPTIONITEMCALC']._serialized_end=942
# @@protoc_insertion_point(module_scope)
