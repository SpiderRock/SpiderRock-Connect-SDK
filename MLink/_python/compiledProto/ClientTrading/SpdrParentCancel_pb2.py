# -*- coding: utf-8 -*-
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: ClientTrading/SpdrParentCancel.proto
"""Generated protocol buffer code."""
from google.protobuf.internal import builder as _builder
from google.protobuf import descriptor as _descriptor
from google.protobuf import descriptor_pool as _descriptor_pool
from google.protobuf import symbol_database as _symbol_database
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()


import spiderrock_common_pb2 as spiderrock__common__pb2
from google.protobuf import timestamp_pb2 as google_dot_protobuf_dot_timestamp__pb2


DESCRIPTOR = _descriptor_pool.Default().AddSerializedFile(b'\n$ClientTrading/SpdrParentCancel.proto\x12\x13spiderrock.protobuf\x1a\x17spiderrock_common.proto\x1a\x1fgoogle/protobuf/timestamp.proto\"\xf4\x03\n\x10SpdrParentCancel\x12\x33\n\x05_meta\x18\x01 \x01(\x0b\x32$.spiderrock.protobuf.MessageMetadata\x12\x38\n\x04pkey\x18\x02 \x01(\x0b\x32*.spiderrock.protobuf.SpdrParentCancel.PKey\x12<\n\x0fsys_environment\x18\x64 \x01(\x0e\x32#.spiderrock.protobuf.SysEnvironment\x12\x32\n\nrun_status\x18g \x01(\x0e\x32\x1e.spiderrock.protobuf.RunStatus\x12\x12\n\ncxl_reason\x18j \x01(\t\x12\x15\n\ralt_cancel_id\x18m \x01(\t\x12\x13\n\x0b\x65ngine_name\x18z \x01(\t\x12\x13\n\x0bmodified_by\x18s \x01(\t\x12\x38\n\x0bmodified_in\x18v \x01(\x0e\x32#.spiderrock.protobuf.SysEnvironment\x12-\n\ttimestamp\x18y \x01(\x0b\x32\x1a.google.protobuf.Timestamp\x1a\x41\n\x04PKey\x12\r\n\x05\x61\x63\x63nt\x18\n \x01(\t\x12\x15\n\rparent_number\x18\x0b \x01(\x03\x12\x13\n\x0b\x63lient_firm\x18\x0c \x01(\tb\x06proto3')

_globals = globals()
_builder.BuildMessageAndEnumDescriptors(DESCRIPTOR, _globals)
_builder.BuildTopDescriptorsAndMessages(DESCRIPTOR, 'ClientTrading.SpdrParentCancel_pb2', _globals)
if _descriptor._USE_C_DESCRIPTORS == False:

  DESCRIPTOR._options = None
  _globals['_SPDRPARENTCANCEL']._serialized_start=120
  _globals['_SPDRPARENTCANCEL']._serialized_end=620
  _globals['_SPDRPARENTCANCEL_PKEY']._serialized_start=555
  _globals['_SPDRPARENTCANCEL_PKEY']._serialized_end=620
# @@protoc_insertion_point(module_scope)