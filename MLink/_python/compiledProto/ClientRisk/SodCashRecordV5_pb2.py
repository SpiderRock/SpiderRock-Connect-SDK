# -*- coding: utf-8 -*-
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: ClientRisk/SodCashRecordV5.proto
"""Generated protocol buffer code."""
from google.protobuf.internal import builder as _builder
from google.protobuf import descriptor as _descriptor
from google.protobuf import descriptor_pool as _descriptor_pool
from google.protobuf import symbol_database as _symbol_database
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()


import spiderrock_common_pb2 as spiderrock__common__pb2
from google.protobuf import timestamp_pb2 as google_dot_protobuf_dot_timestamp__pb2


DESCRIPTOR = _descriptor_pool.Default().AddSerializedFile(b'\n ClientRisk/SodCashRecordV5.proto\x12\x13spiderrock.protobuf\x1a\x17spiderrock_common.proto\x1a\x1fgoogle/protobuf/timestamp.proto\"\xe1\x04\n\x0fSodCashRecordV5\x12\x33\n\x05_meta\x18\x01 \x01(\x0b\x32$.spiderrock.protobuf.MessageMetadata\x12\x37\n\x04pkey\x18\x02 \x01(\x0b\x32).spiderrock.protobuf.SodCashRecordV5.PKey\x12\x16\n\x0esr_cash_amount\x18\x64 \x01(\x01\x12\x17\n\x0f\x63lr_cash_amount\x18g \x01(\x01\x12\x0f\n\x07\x63omment\x18j \x01(\t\x12-\n\ttimestamp\x18m \x01(\x0b\x32\x1a.google.protobuf.Timestamp\x1a\xee\x02\n\x04PKey\x12\r\n\x05\x61\x63\x63nt\x18\n \x01(\t\x12/\n\x08\x63urrency\x18\x0b \x01(\x0e\x32\x1d.spiderrock.protobuf.Currency\x12\x30\n\ntrade_date\x18\x0c \x01(\x0b\x32\x1c.spiderrock.protobuf.DateKey\x12<\n\x0fsrc_transaction\x18\r \x01(\x0e\x32#.spiderrock.protobuf.SrcTransaction\x12\x33\n\x0bsrc_sec_key\x18\x0e \x01(\x0b\x32\x1e.spiderrock.protobuf.OptionKey\x12\x36\n\x0csrc_sec_type\x18\x0f \x01(\x0e\x32 .spiderrock.protobuf.SpdrKeyType\x12\x34\n\x0esrc_trade_date\x18\x10 \x01(\x0b\x32\x1c.spiderrock.protobuf.DateKey\x12\x13\n\x0b\x63lient_firm\x18\x11 \x01(\tb\x06proto3')

_globals = globals()
_builder.BuildMessageAndEnumDescriptors(DESCRIPTOR, _globals)
_builder.BuildTopDescriptorsAndMessages(DESCRIPTOR, 'ClientRisk.SodCashRecordV5_pb2', _globals)
if _descriptor._USE_C_DESCRIPTORS == False:

  DESCRIPTOR._options = None
  _globals['_SODCASHRECORDV5']._serialized_start=116
  _globals['_SODCASHRECORDV5']._serialized_end=725
  _globals['_SODCASHRECORDV5_PKEY']._serialized_start=359
  _globals['_SODCASHRECORDV5_PKEY']._serialized_end=725
# @@protoc_insertion_point(module_scope)
