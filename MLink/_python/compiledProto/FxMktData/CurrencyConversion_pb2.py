# -*- coding: utf-8 -*-
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: FxMktData/CurrencyConversion.proto
"""Generated protocol buffer code."""
from google.protobuf.internal import builder as _builder
from google.protobuf import descriptor as _descriptor
from google.protobuf import descriptor_pool as _descriptor_pool
from google.protobuf import symbol_database as _symbol_database
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()


import spiderrock_common_pb2 as spiderrock__common__pb2
from google.protobuf import timestamp_pb2 as google_dot_protobuf_dot_timestamp__pb2


DESCRIPTOR = _descriptor_pool.Default().AddSerializedFile(b'\n\"FxMktData/CurrencyConversion.proto\x12\x13spiderrock.protobuf\x1a\x17spiderrock_common.proto\x1a\x1fgoogle/protobuf/timestamp.proto\"\xbc\x02\n\x12\x43urrencyConversion\x12\x33\n\x05_meta\x18\x01 \x01(\x0b\x32$.spiderrock.protobuf.MessageMetadata\x12:\n\x04pkey\x18\x02 \x01(\x0b\x32,.spiderrock.protobuf.CurrencyConversion.PKey\x12\x14\n\x0c\x63onvert_rate\x18\x64 \x01(\x01\x12-\n\ttimestamp\x18\x65 \x01(\x0b\x32\x1a.google.protobuf.Timestamp\x1ap\n\x04PKey\x12\x33\n\x0csrc_currency\x18\n \x01(\x0e\x32\x1d.spiderrock.protobuf.Currency\x12\x33\n\x0ctgt_currency\x18\x0b \x01(\x0e\x32\x1d.spiderrock.protobuf.Currencyb\x06proto3')

_globals = globals()
_builder.BuildMessageAndEnumDescriptors(DESCRIPTOR, _globals)
_builder.BuildTopDescriptorsAndMessages(DESCRIPTOR, 'FxMktData.CurrencyConversion_pb2', _globals)
if _descriptor._USE_C_DESCRIPTORS == False:

  DESCRIPTOR._options = None
  _globals['_CURRENCYCONVERSION']._serialized_start=118
  _globals['_CURRENCYCONVERSION']._serialized_end=434
  _globals['_CURRENCYCONVERSION_PKEY']._serialized_start=322
  _globals['_CURRENCYCONVERSION_PKEY']._serialized_end=434
# @@protoc_insertion_point(module_scope)
