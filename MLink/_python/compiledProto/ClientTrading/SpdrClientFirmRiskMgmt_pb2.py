# -*- coding: utf-8 -*-
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: ClientTrading/SpdrClientFirmRiskMgmt.proto
"""Generated protocol buffer code."""
from google.protobuf.internal import builder as _builder
from google.protobuf import descriptor as _descriptor
from google.protobuf import descriptor_pool as _descriptor_pool
from google.protobuf import symbol_database as _symbol_database
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()


import spiderrock_common_pb2 as spiderrock__common__pb2
from google.protobuf import timestamp_pb2 as google_dot_protobuf_dot_timestamp__pb2


DESCRIPTOR = _descriptor_pool.Default().AddSerializedFile(b'\n*ClientTrading/SpdrClientFirmRiskMgmt.proto\x12\x13spiderrock.protobuf\x1a\x17spiderrock_common.proto\x1a\x1fgoogle/protobuf/timestamp.proto\"\xc5\x04\n\x16SpdrClientFirmRiskMgmt\x12\x33\n\x05_meta\x18\x01 \x01(\x0b\x32$.spiderrock.protobuf.MessageMetadata\x12>\n\x04pkey\x18\x02 \x01(\x0b\x32\x30.spiderrock.protobuf.SpdrClientFirmRiskMgmt.PKey\x12\x13\n\x0bnum_rejects\x18\x64 \x01(\x05\x12\r\n\x05\x61\x63\x63nt\x18g \x01(\t\x12/\n\x07sec_key\x18j \x01(\x0b\x32\x1e.spiderrock.protobuf.OptionKey\x12\x32\n\x08sec_type\x18m \x01(\x0e\x32 .spiderrock.protobuf.SpdrKeyType\x12\x34\n\x0bspdr_source\x18p \x01(\x0e\x32\x1f.spiderrock.protobuf.SpdrSource\x12\x11\n\tuser_name\x18s \x01(\t\x12\x13\n\x0breject_text\x18v \x01(\t\x12-\n\ttimestamp\x18y \x01(\x0b\x32\x1a.google.protobuf.Timestamp\x1a\x9f\x01\n\x04PKey\x12\x13\n\x0b\x63lient_firm\x18\n \x01(\t\x12.\n\x06ticker\x18\x0b \x01(\x0b\x32\x1e.spiderrock.protobuf.TickerKey\x12\x15\n\rorder_ex_dest\x18\x0c \x01(\t\x12;\n\x0frisk_mgmt_level\x18\r \x01(\x0e\x32\".spiderrock.protobuf.RiskMgmtLevelb\x06proto3')

_globals = globals()
_builder.BuildMessageAndEnumDescriptors(DESCRIPTOR, _globals)
_builder.BuildTopDescriptorsAndMessages(DESCRIPTOR, 'ClientTrading.SpdrClientFirmRiskMgmt_pb2', _globals)
if _descriptor._USE_C_DESCRIPTORS == False:

  DESCRIPTOR._options = None
  _globals['_SPDRCLIENTFIRMRISKMGMT']._serialized_start=126
  _globals['_SPDRCLIENTFIRMRISKMGMT']._serialized_end=707
  _globals['_SPDRCLIENTFIRMRISKMGMT_PKEY']._serialized_start=548
  _globals['_SPDRCLIENTFIRMRISKMGMT_PKEY']._serialized_end=707
# @@protoc_insertion_point(module_scope)
