# -*- coding: utf-8 -*-
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: ClientControl/AltSymbolMap.proto
"""Generated protocol buffer code."""
from google.protobuf.internal import builder as _builder
from google.protobuf import descriptor as _descriptor
from google.protobuf import descriptor_pool as _descriptor_pool
from google.protobuf import symbol_database as _symbol_database
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()


import spiderrock_common_pb2 as spiderrock__common__pb2
from google.protobuf import timestamp_pb2 as google_dot_protobuf_dot_timestamp__pb2


DESCRIPTOR = _descriptor_pool.Default().AddSerializedFile(b'\n ClientControl/AltSymbolMap.proto\x12\x13spiderrock.protobuf\x1a\x17spiderrock_common.proto\x1a\x1fgoogle/protobuf/timestamp.proto\"\x8d\x08\n\x0c\x41ltSymbolMap\x12\x33\n\x05_meta\x18\x01 \x01(\x0b\x32$.spiderrock.protobuf.MessageMetadata\x12\x34\n\x04pkey\x18\x02 \x01(\x0b\x32&.spiderrock.protobuf.AltSymbolMap.PKey\x12\r\n\x05\x61\x63\x63nt\x18\x64 \x01(\t\x12\x11\n\talt_accnt\x18g \x01(\t\x12\x15\n\ralt_user_name\x18j \x01(\t\x12\x10\n\x08strategy\x18m \x01(\t\x12\x12\n\nuser_data1\x18p \x01(\t\x12\x12\n\nuser_data2\x18s \x01(\t\x12\x12\n\nchild_data\x18v \x01(\t\x12\x1b\n\x12ticket_locate_firm\x18\x9d\x01 \x01(\t\x12\x1b\n\x12ticket_locate_pool\x18\x9e\x01 \x01(\t\x12\x1b\n\x12stk_exec_brkr_code\x18\x8d\x01 \x01(\t\x12\x1b\n\x12\x66ut_exec_brkr_code\x18\x8e\x01 \x01(\t\x12\x1f\n\x16\x65qt_opt_exec_brkr_code\x18\x8f\x01 \x01(\t\x12\x1f\n\x16\x66ut_opt_exec_brkr_code\x18\x90\x01 \x01(\t\x12\x14\n\x0bmodified_by\x18\x85\x01 \x01(\t\x12\x39\n\x0bmodified_in\x18\x88\x01 \x01(\x0e\x32#.spiderrock.protobuf.SysEnvironment\x12.\n\ttimestamp\x18\x8b\x01 \x01(\x0b\x32\x1a.google.protobuf.Timestamp\x12\x44\n\x0c\x61lt_clearing\x18\x91\x01 \x03(\x0b\x32-.spiderrock.protobuf.AltSymbolMap.AltClearing\x1a^\n\x04PKey\x12.\n\x06ticker\x18\n \x01(\x0b\x32\x1e.spiderrock.protobuf.TickerKey\x12\x11\n\tsrc_accnt\x18\r \x01(\t\x12\x13\n\x0b\x63lient_firm\x18\x0c \x01(\t\x1a\xad\x02\n\x0b\x41ltClearing\x12\x17\n\x0e\x65xec_brkr_code\x18\x92\x01 \x01(\t\x12\x10\n\x07\x65x_dest\x18\x93\x01 \x01(\t\x12\x35\n\rclr_flip_type\x18\x94\x01 \x01(\x0e\x32\x1d.spiderrock.protobuf.FlipType\x12\x16\n\rclr_flip_firm\x18\x95\x01 \x01(\t\x12\x17\n\x0e\x63lr_flip_accnt\x18\x96\x01 \x01(\t\x12\x12\n\tclr_agent\x18\x97\x01 \x01(\t\x12\x13\n\nclr_tax_iD\x18\x98\x01 \x01(\t\x12\x18\n\x0f\x65xec_brkr_accnt\x18\x99\x01 \x01(\t\x12\x1a\n\x11\x65xec_brkr_cl_firm\x18\x9a\x01 \x01(\t\x12\x1c\n\x13\x65xec_brkr_user_name\x18\x9b\x01 \x01(\t\x12\x0e\n\x05\x62\x61\x64ge\x18\x9c\x01 \x01(\tb\x06proto3')

_globals = globals()
_builder.BuildMessageAndEnumDescriptors(DESCRIPTOR, _globals)
_builder.BuildTopDescriptorsAndMessages(DESCRIPTOR, 'ClientControl.AltSymbolMap_pb2', _globals)
if _descriptor._USE_C_DESCRIPTORS == False:

  DESCRIPTOR._options = None
  _globals['_ALTSYMBOLMAP']._serialized_start=116
  _globals['_ALTSYMBOLMAP']._serialized_end=1153
  _globals['_ALTSYMBOLMAP_PKEY']._serialized_start=755
  _globals['_ALTSYMBOLMAP_PKEY']._serialized_end=849
  _globals['_ALTSYMBOLMAP_ALTCLEARING']._serialized_start=852
  _globals['_ALTSYMBOLMAP_ALTCLEARING']._serialized_end=1153
# @@protoc_insertion_point(module_scope)
