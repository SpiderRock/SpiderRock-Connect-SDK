# -*- coding: utf-8 -*-
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: ClientControl/StockLocateResponse.proto
"""Generated protocol buffer code."""
from google.protobuf.internal import builder as _builder
from google.protobuf import descriptor as _descriptor
from google.protobuf import descriptor_pool as _descriptor_pool
from google.protobuf import symbol_database as _symbol_database
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()


import spiderrock_common_pb2 as spiderrock__common__pb2
from google.protobuf import timestamp_pb2 as google_dot_protobuf_dot_timestamp__pb2


DESCRIPTOR = _descriptor_pool.Default().AddSerializedFile(b'\n\'ClientControl/StockLocateResponse.proto\x12\x13spiderrock.protobuf\x1a\x17spiderrock_common.proto\x1a\x1fgoogle/protobuf/timestamp.proto\"\xa3\x05\n\x13StockLocateResponse\x12\x33\n\x05_meta\x18\x01 \x01(\x0b\x32$.spiderrock.protobuf.MessageMetadata\x12;\n\x04pkey\x18\x02 \x01(\x0b\x32-.spiderrock.protobuf.StockLocateResponse.PKey\x12\x14\n\x0crequest_quan\x18g \x01(\x05\x12\x13\n\x0blocate_quan\x18j \x01(\x05\x12\x38\n\rlocate_status\x18m \x01(\x0e\x32!.spiderrock.protobuf.LocateStatus\x12:\n\x0erequest_origin\x18y \x01(\x0e\x32\".spiderrock.protobuf.RequestOrigin\x12\x35\n\x11request_timestamp\x18| \x01(\x0b\x32\x1a.google.protobuf.Timestamp\x12\x14\n\x0bmodified_by\x18\x89\x01 \x01(\t\x12\x39\n\x0bmodified_in\x18\x82\x01 \x01(\x0e\x32#.spiderrock.protobuf.SysEnvironment\x12.\n\ttimestamp\x18\x85\x01 \x01(\x0b\x32\x1a.google.protobuf.Timestamp\x1a\xc0\x01\n\x04PKey\x12.\n\x06ticker\x18\n \x01(\x0b\x32\x1e.spiderrock.protobuf.TickerKey\x12\x18\n\x10\x63ore_client_firm\x18\x0b \x01(\t\x12\x13\n\x0blocate_firm\x18\x12 \x01(\t\x12\x13\n\x0blocate_pool\x18\x13 \x01(\t\x12\x30\n\ntrade_date\x18\x14 \x01(\x0b\x32\x1c.spiderrock.protobuf.DateKey\x12\x12\n\nrequest_iD\x18\x11 \x01(\x03\x62\x06proto3')

_globals = globals()
_builder.BuildMessageAndEnumDescriptors(DESCRIPTOR, _globals)
_builder.BuildTopDescriptorsAndMessages(DESCRIPTOR, 'ClientControl.StockLocateResponse_pb2', _globals)
if _descriptor._USE_C_DESCRIPTORS == False:

  DESCRIPTOR._options = None
  _globals['_STOCKLOCATERESPONSE']._serialized_start=123
  _globals['_STOCKLOCATERESPONSE']._serialized_end=798
  _globals['_STOCKLOCATERESPONSE_PKEY']._serialized_start=606
  _globals['_STOCKLOCATERESPONSE_PKEY']._serialized_end=798
# @@protoc_insertion_point(module_scope)
