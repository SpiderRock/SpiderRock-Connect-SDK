# -*- coding: utf-8 -*-
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: ClientControl/ClientStockLocate.proto
"""Generated protocol buffer code."""
from google.protobuf.internal import builder as _builder
from google.protobuf import descriptor as _descriptor
from google.protobuf import descriptor_pool as _descriptor_pool
from google.protobuf import symbol_database as _symbol_database
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()


import spiderrock_common_pb2 as spiderrock__common__pb2
from google.protobuf import timestamp_pb2 as google_dot_protobuf_dot_timestamp__pb2


DESCRIPTOR = _descriptor_pool.Default().AddSerializedFile(b'\n%ClientControl/ClientStockLocate.proto\x12\x13spiderrock.protobuf\x1a\x17spiderrock_common.proto\x1a\x1fgoogle/protobuf/timestamp.proto\"\xb5\x04\n\x11\x43lientStockLocate\x12\x33\n\x05_meta\x18\x01 \x01(\x0b\x32$.spiderrock.protobuf.MessageMetadata\x12\x39\n\x04pkey\x18\x02 \x01(\x0b\x32+.spiderrock.protobuf.ClientStockLocate.PKey\x12\x13\n\x0blocate_quan\x18\x64 \x01(\x05\x12\x34\n\x10is_locate_exempt\x18\x65 \x01(\x0e\x32\x1a.spiderrock.protobuf.YesNo\x12\x38\n\rlocate_source\x18\x66 \x01(\x0e\x32!.spiderrock.protobuf.LocateSource\x12\x13\n\x0bmodified_by\x18g \x01(\t\x12\x38\n\x0bmodified_in\x18h \x01(\x0e\x32#.spiderrock.protobuf.SysEnvironment\x12-\n\ttimestamp\x18i \x01(\x0b\x32\x1a.google.protobuf.Timestamp\x1a\xac\x01\n\x04PKey\x12.\n\x06ticker\x18\n \x01(\x0b\x32\x1e.spiderrock.protobuf.TickerKey\x12\x18\n\x10\x63ore_client_firm\x18\x0b \x01(\t\x12\x13\n\x0blocate_firm\x18\x0c \x01(\t\x12\x13\n\x0blocate_pool\x18\r \x01(\t\x12\x30\n\ntrade_date\x18\x0e \x01(\x0b\x32\x1c.spiderrock.protobuf.DateKeyb\x06proto3')

_globals = globals()
_builder.BuildMessageAndEnumDescriptors(DESCRIPTOR, _globals)
_builder.BuildTopDescriptorsAndMessages(DESCRIPTOR, 'ClientControl.ClientStockLocate_pb2', _globals)
if _descriptor._USE_C_DESCRIPTORS == False:

  DESCRIPTOR._options = None
  _globals['_CLIENTSTOCKLOCATE']._serialized_start=121
  _globals['_CLIENTSTOCKLOCATE']._serialized_end=686
  _globals['_CLIENTSTOCKLOCATE_PKEY']._serialized_start=514
  _globals['_CLIENTSTOCKLOCATE_PKEY']._serialized_end=686
# @@protoc_insertion_point(module_scope)
