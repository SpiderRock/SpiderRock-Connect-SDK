# -*- coding: utf-8 -*-
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: ClientTrading/SpdrExchRiskMgmt.proto
"""Generated protocol buffer code."""
from google.protobuf.internal import builder as _builder
from google.protobuf import descriptor as _descriptor
from google.protobuf import descriptor_pool as _descriptor_pool
from google.protobuf import symbol_database as _symbol_database
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()


import spiderrock_common_pb2 as spiderrock__common__pb2
from google.protobuf import timestamp_pb2 as google_dot_protobuf_dot_timestamp__pb2


DESCRIPTOR = _descriptor_pool.Default().AddSerializedFile(b'\n$ClientTrading/SpdrExchRiskMgmt.proto\x12\x13spiderrock.protobuf\x1a\x17spiderrock_common.proto\x1a\x1fgoogle/protobuf/timestamp.proto\"\xf5\x04\n\x10SpdrExchRiskMgmt\x12\x33\n\x05_meta\x18\x01 \x01(\x0b\x32$.spiderrock.protobuf.MessageMetadata\x12\x38\n\x04pkey\x18\x02 \x01(\x0b\x32*.spiderrock.protobuf.SpdrExchRiskMgmt.PKey\x12/\n\x06status\x18\x64 \x01(\x0e\x32\x1f.spiderrock.protobuf.RiskStatus\x12\x13\n\x0bnum_rejects\x18g \x01(\x05\x12/\n\x07sec_key\x18j \x01(\x0b\x32\x1e.spiderrock.protobuf.OptionKey\x12\x32\n\x08sec_type\x18m \x01(\x0e\x32 .spiderrock.protobuf.SpdrKeyType\x12\r\n\x05\x61\x63\x63nt\x18p \x01(\t\x12\x13\n\x0breject_text\x18s \x01(\t\x12\x34\n\x0bspdr_source\x18v \x01(\x0e\x32\x1f.spiderrock.protobuf.SpdrSource\x12+\n\x07\x65xpires\x18y \x01(\x0b\x32\x1a.google.protobuf.Timestamp\x12\x13\n\x0bmodified_by\x18| \x01(\t\x12\x38\n\x0bmodified_in\x18\x7f \x01(\x0e\x32#.spiderrock.protobuf.SysEnvironment\x12.\n\ttimestamp\x18\x82\x01 \x01(\x0b\x32\x1a.google.protobuf.Timestamp\x1a\x41\n\x04PKey\x12\x13\n\x0b\x63lient_firm\x18\n \x01(\t\x12\x0c\n\x04\x65xch\x18\x0b \x01(\t\x12\x16\n\x0esecurity_group\x18\x0c \x01(\tb\x06proto3')

_globals = globals()
_builder.BuildMessageAndEnumDescriptors(DESCRIPTOR, _globals)
_builder.BuildTopDescriptorsAndMessages(DESCRIPTOR, 'ClientTrading.SpdrExchRiskMgmt_pb2', _globals)
if _descriptor._USE_C_DESCRIPTORS == False:

  DESCRIPTOR._options = None
  _globals['_SPDREXCHRISKMGMT']._serialized_start=120
  _globals['_SPDREXCHRISKMGMT']._serialized_end=749
  _globals['_SPDREXCHRISKMGMT_PKEY']._serialized_start=684
  _globals['_SPDREXCHRISKMGMT_PKEY']._serialized_end=749
# @@protoc_insertion_point(module_scope)
