# -*- coding: utf-8 -*-
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: SRConnect/NoticeCancel.proto
"""Generated protocol buffer code."""
from google.protobuf.internal import builder as _builder
from google.protobuf import descriptor as _descriptor
from google.protobuf import descriptor_pool as _descriptor_pool
from google.protobuf import symbol_database as _symbol_database
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()


import spiderrock_common_pb2 as spiderrock__common__pb2
from google.protobuf import timestamp_pb2 as google_dot_protobuf_dot_timestamp__pb2


DESCRIPTOR = _descriptor_pool.Default().AddSerializedFile(b'\n\x1cSRConnect/NoticeCancel.proto\x12\x13spiderrock.protobuf\x1a\x17spiderrock_common.proto\x1a\x1fgoogle/protobuf/timestamp.proto\"\xeb\x01\n\x0cNoticeCancel\x12\x33\n\x05_meta\x18\x01 \x01(\x0b\x32$.spiderrock.protobuf.MessageMetadata\x12\x34\n\x04pkey\x18\x02 \x01(\x0b\x32&.spiderrock.protobuf.NoticeCancel.PKey\x12-\n\ttimestamp\x18\x64 \x01(\x0b\x32\x1a.google.protobuf.Timestamp\x1a\x41\n\x04PKey\x12\x15\n\rnotice_number\x18\n \x01(\x03\x12\r\n\x05\x61\x63\x63nt\x18\x0b \x01(\t\x12\x13\n\x0b\x63lient_firm\x18\x0c \x01(\tb\x06proto3')

_globals = globals()
_builder.BuildMessageAndEnumDescriptors(DESCRIPTOR, _globals)
_builder.BuildTopDescriptorsAndMessages(DESCRIPTOR, 'SRConnect.NoticeCancel_pb2', _globals)
if _descriptor._USE_C_DESCRIPTORS == False:

  DESCRIPTOR._options = None
  _globals['_NOTICECANCEL']._serialized_start=112
  _globals['_NOTICECANCEL']._serialized_end=347
  _globals['_NOTICECANCEL_PKEY']._serialized_start=282
  _globals['_NOTICECANCEL_PKEY']._serialized_end=347
# @@protoc_insertion_point(module_scope)