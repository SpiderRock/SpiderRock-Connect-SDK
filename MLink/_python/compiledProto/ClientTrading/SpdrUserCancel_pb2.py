# -*- coding: utf-8 -*-
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: ClientTrading/SpdrUserCancel.proto
"""Generated protocol buffer code."""
from google.protobuf.internal import builder as _builder
from google.protobuf import descriptor as _descriptor
from google.protobuf import descriptor_pool as _descriptor_pool
from google.protobuf import symbol_database as _symbol_database
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()


import spiderrock_common_pb2 as spiderrock__common__pb2
from google.protobuf import timestamp_pb2 as google_dot_protobuf_dot_timestamp__pb2


DESCRIPTOR = _descriptor_pool.Default().AddSerializedFile(b'\n\"ClientTrading/SpdrUserCancel.proto\x12\x13spiderrock.protobuf\x1a\x17spiderrock_common.proto\x1a\x1fgoogle/protobuf/timestamp.proto\"\xca\x03\n\x0eSpdrUserCancel\x12\x33\n\x05_meta\x18\x01 \x01(\x0b\x32$.spiderrock.protobuf.MessageMetadata\x12\x36\n\x04pkey\x18\x02 \x01(\x0b\x32(.spiderrock.protobuf.SpdrUserCancel.PKey\x12<\n\x0fsys_environment\x18\x64 \x01(\x0e\x32#.spiderrock.protobuf.SysEnvironment\x12\x32\n\nrun_status\x18g \x01(\x0e\x32\x1e.spiderrock.protobuf.RunStatus\x12\x12\n\ncxl_reason\x18j \x01(\t\x12\x13\n\x0b\x65ngine_name\x18w \x01(\t\x12\x13\n\x0bmodified_by\x18p \x01(\t\x12\x38\n\x0bmodified_in\x18s \x01(\x0e\x32#.spiderrock.protobuf.SysEnvironment\x12-\n\ttimestamp\x18v \x01(\x0b\x32\x1a.google.protobuf.Timestamp\x1a\x32\n\x04PKey\x12\x15\n\rcxl_user_name\x18\n \x01(\t\x12\x13\n\x0b\x63lient_firm\x18\x0b \x01(\tb\x06proto3')

_globals = globals()
_builder.BuildMessageAndEnumDescriptors(DESCRIPTOR, _globals)
_builder.BuildTopDescriptorsAndMessages(DESCRIPTOR, 'ClientTrading.SpdrUserCancel_pb2', _globals)
if _descriptor._USE_C_DESCRIPTORS == False:

  DESCRIPTOR._options = None
  _globals['_SPDRUSERCANCEL']._serialized_start=118
  _globals['_SPDRUSERCANCEL']._serialized_end=576
  _globals['_SPDRUSERCANCEL_PKEY']._serialized_start=526
  _globals['_SPDRUSERCANCEL_PKEY']._serialized_end=576
# @@protoc_insertion_point(module_scope)