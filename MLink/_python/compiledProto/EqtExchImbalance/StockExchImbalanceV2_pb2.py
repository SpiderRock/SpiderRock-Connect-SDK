# -*- coding: utf-8 -*-
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: EqtExchImbalance/StockExchImbalanceV2.proto
"""Generated protocol buffer code."""
from google.protobuf.internal import builder as _builder
from google.protobuf import descriptor as _descriptor
from google.protobuf import descriptor_pool as _descriptor_pool
from google.protobuf import symbol_database as _symbol_database
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()


import spiderrock_common_pb2 as spiderrock__common__pb2
from google.protobuf import timestamp_pb2 as google_dot_protobuf_dot_timestamp__pb2


DESCRIPTOR = _descriptor_pool.Default().AddSerializedFile(b'\n+EqtExchImbalance/StockExchImbalanceV2.proto\x12\x13spiderrock.protobuf\x1a\x17spiderrock_common.proto\x1a\x1fgoogle/protobuf/timestamp.proto\"\xc8\x06\n\x14StockExchImbalanceV2\x12\x33\n\x05_meta\x18\x01 \x01(\x0b\x32$.spiderrock.protobuf.MessageMetadata\x12<\n\x04pkey\x18\x02 \x01(\x0b\x32..spiderrock.protobuf.StockExchImbalanceV2.PKey\x12\x14\n\x0creference_px\x18\x64 \x01(\x02\x12\x12\n\npaired_qty\x18g \x01(\x05\x12\x1b\n\x13total_imbalance_qty\x18j \x01(\x05\x12\x1c\n\x14market_imbalance_qty\x18m \x01(\x05\x12:\n\x0eimbalance_side\x18p \x01(\x0e\x32\".spiderrock.protobuf.ImbalanceSide\x12\x1e\n\x16\x63ontinuous_book_clr_px\x18s \x01(\x02\x12\x1b\n\x13\x63losing_only_clr_px\x18v \x01(\x02\x12\x16\n\x0essr_filling_px\x18y \x01(\x02\x12\x1b\n\x13indicative_match_px\x18| \x01(\x02\x12\x14\n\x0cupper_collar\x18\x7f \x01(\x02\x12\x15\n\x0clower_collar\x18\x82\x01 \x01(\x02\x12;\n\x0e\x61uction_status\x18\x85\x01 \x01(\x0e\x32\".spiderrock.protobuf.AuctionStatus\x12\x32\n\rfreeze_status\x18\x88\x01 \x01(\x0e\x32\x1a.spiderrock.protobuf.YesNo\x12\x17\n\x0enum_extensions\x18\x8b\x01 \x01(\x05\x12\x16\n\rnet_timestamp\x18\x8e\x01 \x01(\x03\x1a\xda\x01\n\x04PKey\x12.\n\x06ticker\x18\n \x01(\x0b\x32\x1e.spiderrock.protobuf.TickerKey\x12\x30\n\x0c\x61uction_time\x18\x0b \x01(\x0b\x32\x1a.google.protobuf.Timestamp\x12\x38\n\x0c\x61uction_type\x18\x0c \x01(\x0e\x32\".spiderrock.protobuf.AuctionReason\x12\x36\n\x08\x65xchange\x18\r \x01(\x0e\x32$.spiderrock.protobuf.PrimaryExchangeb\x06proto3')

_globals = globals()
_builder.BuildMessageAndEnumDescriptors(DESCRIPTOR, _globals)
_builder.BuildTopDescriptorsAndMessages(DESCRIPTOR, 'EqtExchImbalance.StockExchImbalanceV2_pb2', _globals)
if _descriptor._USE_C_DESCRIPTORS == False:

  DESCRIPTOR._options = None
  _globals['_STOCKEXCHIMBALANCEV2']._serialized_start=127
  _globals['_STOCKEXCHIMBALANCEV2']._serialized_end=967
  _globals['_STOCKEXCHIMBALANCEV2_PKEY']._serialized_start=749
  _globals['_STOCKEXCHIMBALANCEV2_PKEY']._serialized_end=967
# @@protoc_insertion_point(module_scope)