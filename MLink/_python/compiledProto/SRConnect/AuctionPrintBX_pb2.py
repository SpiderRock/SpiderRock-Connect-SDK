# -*- coding: utf-8 -*-
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: SRConnect/AuctionPrintBX.proto
"""Generated protocol buffer code."""
from google.protobuf.internal import builder as _builder
from google.protobuf import descriptor as _descriptor
from google.protobuf import descriptor_pool as _descriptor_pool
from google.protobuf import symbol_database as _symbol_database
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()


import spiderrock_common_pb2 as spiderrock__common__pb2
from google.protobuf import timestamp_pb2 as google_dot_protobuf_dot_timestamp__pb2


DESCRIPTOR = _descriptor_pool.Default().AddSerializedFile(b'\n\x1eSRConnect/AuctionPrintBX.proto\x12\x13spiderrock.protobuf\x1a\x17spiderrock_common.proto\x1a\x1fgoogle/protobuf/timestamp.proto\"\xd9\x0c\n\x0e\x41uctionPrintBX\x12\x33\n\x05_meta\x18\x01 \x01(\x0b\x32$.spiderrock.protobuf.MessageMetadata\x12\x36\n\x04pkey\x18\x02 \x01(\x0b\x32(.spiderrock.protobuf.AuctionPrintBX.PKey\x12.\n\x06ticker\x18\x64 \x01(\x0b\x32\x1e.spiderrock.protobuf.TickerKey\x12\x30\n\ntrade_date\x18\x65 \x01(\x0b\x32\x1c.spiderrock.protobuf.DateKey\x12\x33\n\x0fis_test_auction\x18\x66 \x01(\x0e\x32\x1a.spiderrock.protobuf.YesNo\x12/\n\x0bnotice_time\x18g \x01(\x0b\x32\x1a.google.protobuf.Timestamp\x12\x36\n\x0c\x61uction_type\x18h \x01(\x0e\x32 .spiderrock.protobuf.AuctionType\x12:\n\x0e\x61uction_source\x18i \x01(\x0e\x32\".spiderrock.protobuf.AuctionSource\x12\x31\n\rcontains_flex\x18j \x01(\x0e\x32\x1a.spiderrock.protobuf.YesNo\x12,\n\x04root\x18k \x01(\x0b\x32\x1e.spiderrock.protobuf.TickerKey\x12,\n\x06\x65xpiry\x18l \x01(\x0b\x32\x1c.spiderrock.protobuf.DateKey\x12\x11\n\tlo_strike\x18m \x01(\x01\x12\x11\n\thi_strike\x18n \x01(\x01\x12\x10\n\x08industry\x18o \x01(\t\x12\x34\n\x0bsymbol_type\x18p \x01(\x0e\x32\x1f.spiderrock.protobuf.SymbolType\x12\x17\n\x0fu_avg_daily_vlm\x18q \x01(\x02\x12/\n\tcust_side\x18r \x01(\x0e\x32\x1c.spiderrock.protobuf.BuySell\x12\x10\n\x08\x63ust_qty\x18s \x01(\x05\x12\x10\n\x08\x63ust_prc\x18t \x01(\x01\x12\x30\n\x0chas_cust_prc\x18u \x01(\x0e\x32\x1a.spiderrock.protobuf.YesNo\x12\x35\n\x0e\x63ust_firm_type\x18v \x01(\x0e\x32\x1d.spiderrock.protobuf.FirmType\x12\x17\n\x0f\x63ust_agent_mPID\x18w \x01(\t\x12\x18\n\x10\x63omm_enhancement\x18x \x01(\x02\x12\x13\n\x0bnotice_uBid\x18y \x01(\x01\x12\x13\n\x0bnotice_uAsk\x18z \x01(\x01\x12\x14\n\x0cnet_surf_prc\x18{ \x01(\x02\x12\x0e\n\x06i_days\x18| \x01(\x01\x12\x0f\n\x07i_years\x18} \x01(\x01\x12\x12\n\nmoney_rate\x18~ \x01(\x01\x12\x11\n\tstrike_pv\x18\x7f \x01(\x01\x12\x12\n\tprt_price\x18\x80\x01 \x01(\x01\x12\x13\n\nprt_price2\x18\x81\x01 \x01(\x01\x12\x11\n\x08prt_size\x18\x82\x01 \x01(\x05\x12\x12\n\tprt_size2\x18\x83\x01 \x01(\x05\x12-\n\x08prt_time\x18\x84\x01 \x01(\x0b\x32\x1a.google.protobuf.Timestamp\x12/\n\x08prt_type\x18\x85\x01 \x01(\x0e\x32\x1c.spiderrock.protobuf.PrtType\x12\x11\n\x08prt_uPrc\x18\x86\x01 \x01(\x01\x12\x15\n\x0cprt_surf_prc\x18\x87\x01 \x01(\x02\x12\x17\n\x0eprt_money_rate\x18\x88\x01 \x01(\x01\x12\x10\n\x07u_prc1m\x18\x89\x01 \x01(\x02\x12\x12\n\tbid_prc1m\x18\x8a\x01 \x01(\x02\x12\x12\n\task_prc1m\x18\x8b\x01 \x01(\x02\x12\x13\n\nsurf_prc1m\x18\x8c\x01 \x01(\x02\x12\x14\n\x0bsurf_rate1m\x18\x8d\x01 \x01(\x01\x12\x11\n\x08u_prc10m\x18\x8e\x01 \x01(\x02\x12\x13\n\nbid_prc10m\x18\x8f\x01 \x01(\x02\x12\x13\n\nask_prc10m\x18\x90\x01 \x01(\x02\x12\x14\n\x0bsurf_prc10m\x18\x91\x01 \x01(\x02\x12\x15\n\x0csurf_rate10m\x18\x92\x01 \x01(\x01\x12.\n\ttimestamp\x18\x93\x01 \x01(\x0b\x32\x1a.google.protobuf.Timestamp\x1a\x1d\n\x04PKey\x12\x15\n\rnotice_number\x18\n \x01(\x03\x62\x06proto3')

_globals = globals()
_builder.BuildMessageAndEnumDescriptors(DESCRIPTOR, _globals)
_builder.BuildTopDescriptorsAndMessages(DESCRIPTOR, 'SRConnect.AuctionPrintBX_pb2', _globals)
if _descriptor._USE_C_DESCRIPTORS == False:

  DESCRIPTOR._options = None
  _globals['_AUCTIONPRINTBX']._serialized_start=114
  _globals['_AUCTIONPRINTBX']._serialized_end=1739
  _globals['_AUCTIONPRINTBX_PKEY']._serialized_start=1710
  _globals['_AUCTIONPRINTBX_PKEY']._serialized_end=1739
# @@protoc_insertion_point(module_scope)