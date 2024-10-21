# -*- coding: utf-8 -*-
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: SRConnect/NoticeExecReport.proto
"""Generated protocol buffer code."""
from google.protobuf.internal import builder as _builder
from google.protobuf import descriptor as _descriptor
from google.protobuf import descriptor_pool as _descriptor_pool
from google.protobuf import symbol_database as _symbol_database
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()


import spiderrock_common_pb2 as spiderrock__common__pb2
from google.protobuf import timestamp_pb2 as google_dot_protobuf_dot_timestamp__pb2


DESCRIPTOR = _descriptor_pool.Default().AddSerializedFile(b'\n SRConnect/NoticeExecReport.proto\x12\x13spiderrock.protobuf\x1a\x17spiderrock_common.proto\x1a\x1fgoogle/protobuf/timestamp.proto\"\xa0\x0e\n\x10NoticeExecReport\x12\x33\n\x05_meta\x18\x01 \x01(\x0b\x32$.spiderrock.protobuf.MessageMetadata\x12\x38\n\x04pkey\x18\x02 \x01(\x0b\x32*.spiderrock.protobuf.NoticeExecReport.PKey\x12.\n\x06ticker\x18} \x01(\x0b\x32\x1e.spiderrock.protobuf.TickerKey\x12\x30\n\ntrade_date\x18~ \x01(\x0b\x32\x1c.spiderrock.protobuf.DateKey\x12\x0e\n\x05\x61\x63\x63nt\x18\x8b\x01 \x01(\t\x12\x14\n\x0b\x63lient_firm\x18\x8c\x01 \x01(\t\x12\x30\n\x0bnotice_dttm\x18\x8d\x01 \x01(\x0b\x32\x1a.google.protobuf.Timestamp\x12\x13\n\x0bresponse_id\x18\x64 \x01(\t\x12\x35\n\x0bresp_origin\x18\x8e\x01 \x01(\x0e\x32\x1f.spiderrock.protobuf.SpdrSource\x12\x36\n\nstage_type\x18\x65 \x01(\x0e\x32\".spiderrock.protobuf.SpdrStageType\x12\x37\n\x0c\x61uction_type\x18\x8f\x01 \x01(\x0e\x32 .spiderrock.protobuf.AuctionType\x12;\n\x0e\x61uction_source\x18\x90\x01 \x01(\x0e\x32\".spiderrock.protobuf.AuctionSource\x12-\n\tresp_dttm\x18\x7f \x01(\x0b\x32\x1a.google.protobuf.Timestamp\x12/\n\tresp_side\x18\x66 \x01(\x0e\x32\x1c.spiderrock.protobuf.BuySell\x12\x11\n\tresp_size\x18g \x01(\x05\x12\x18\n\x10resp_active_size\x18h \x01(\x05\x12\x12\n\nresp_price\x18i \x01(\x01\x12\x10\n\x08ref_uPrc\x18j \x01(\x01\x12\x0e\n\x06ref_de\x18k \x01(\x02\x12\x0e\n\x06ref_ga\x18l \x01(\x02\x12\x33\n\nround_rule\x18\x80\x01 \x01(\x0e\x32\x1e.spiderrock.protobuf.RoundRule\x12\x15\n\x0cstep_up_incr\x18\x81\x01 \x01(\x01\x12\x15\n\rrisk_group_id\x18m \x01(\x03\x12\x10\n\x08strategy\x18n \x01(\t\x12\x12\n\nuser_data1\x18o \x01(\t\x12\x39\n\x0bresp_status\x18p \x01(\x0e\x32$.spiderrock.protobuf.SpdrOrderStatus\x12\x13\n\x0bresp_detail\x18q \x01(\t\x12\x12\n\tlast_uPrc\x18\x91\x01 \x01(\x01\x12\x17\n\x0elast_trial_prc\x18\x92\x01 \x01(\x01\x12\x13\n\nleaves_qty\x18\x93\x01 \x01(\x05\x12\x15\n\x0c\x63um_fill_qty\x18\x82\x01 \x01(\x05\x12\x17\n\x0e\x61vg_fill_price\x18\x83\x01 \x01(\x01\x12\x14\n\x0b\x61\x64\x64_latency\x18\x94\x01 \x01(\x01\x12\x14\n\x0b\x61\x63k_latency\x18\x95\x01 \x01(\x01\x12;\n\x0fresponse_result\x18\x84\x01 \x01(\x0e\x32!.spiderrock.protobuf.NoticeResult\x12\x16\n\rresponse_time\x18\x85\x01 \x01(\x05\x12\x12\n\tprt_price\x18\x86\x01 \x01(\x01\x12\x11\n\x08prt_size\x18\x87\x01 \x01(\x05\x12-\n\x08prt_time\x18\x88\x01 \x01(\x0b\x32\x1a.google.protobuf.Timestamp\x12\x11\n\x08prt_uBid\x18\x96\x01 \x01(\x01\x12\x11\n\x08prt_uAsk\x18\x97\x01 \x01(\x01\x12-\n\ttimestamp\x18| \x01(\x0b\x32\x1a.google.protobuf.Timestamp\x12\x43\n\norder_legs\x18t \x03(\x0b\x32/.spiderrock.protobuf.NoticeExecReport.OrderLegs\x1a\x39\n\x04PKey\x12\x15\n\rnotice_number\x18\r \x01(\x03\x12\x1a\n\x12\x62\x61se_parent_number\x18\x0e \x01(\x03\x1a\x9e\x02\n\tOrderLegs\x12/\n\x07sec_key\x18u \x01(\x0b\x32\x1e.spiderrock.protobuf.OptionKey\x12\x32\n\x08sec_type\x18v \x01(\x0e\x32 .spiderrock.protobuf.SpdrKeyType\x12*\n\x04side\x18w \x01(\x0e\x32\x1c.spiderrock.protobuf.BuySell\x12\r\n\x05ratio\x18x \x01(\x05\x12;\n\rposition_type\x18y \x01(\x0e\x32$.spiderrock.protobuf.LegPositionType\x12\x18\n\x10leg_cum_fill_qty\x18z \x01(\x05\x12\x1a\n\x12leg_avg_fill_price\x18{ \x01(\x01\x62\x06proto3')

_globals = globals()
_builder.BuildMessageAndEnumDescriptors(DESCRIPTOR, _globals)
_builder.BuildTopDescriptorsAndMessages(DESCRIPTOR, 'SRConnect.NoticeExecReport_pb2', _globals)
if _descriptor._USE_C_DESCRIPTORS == False:

  DESCRIPTOR._options = None
  _globals['_NOTICEEXECREPORT']._serialized_start=116
  _globals['_NOTICEEXECREPORT']._serialized_end=1940
  _globals['_NOTICEEXECREPORT_PKEY']._serialized_start=1594
  _globals['_NOTICEEXECREPORT_PKEY']._serialized_end=1651
  _globals['_NOTICEEXECREPORT_ORDERLEGS']._serialized_start=1654
  _globals['_NOTICEEXECREPORT_ORDERLEGS']._serialized_end=1940
# @@protoc_insertion_point(module_scope)