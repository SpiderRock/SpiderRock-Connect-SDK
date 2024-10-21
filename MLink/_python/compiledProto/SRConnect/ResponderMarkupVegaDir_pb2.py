# -*- coding: utf-8 -*-
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: SRConnect/ResponderMarkupVegaDir.proto
"""Generated protocol buffer code."""
from google.protobuf.internal import builder as _builder
from google.protobuf import descriptor as _descriptor
from google.protobuf import descriptor_pool as _descriptor_pool
from google.protobuf import symbol_database as _symbol_database
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()


import spiderrock_common_pb2 as spiderrock__common__pb2
from google.protobuf import timestamp_pb2 as google_dot_protobuf_dot_timestamp__pb2


DESCRIPTOR = _descriptor_pool.Default().AddSerializedFile(b'\n&SRConnect/ResponderMarkupVegaDir.proto\x12\x13spiderrock.protobuf\x1a\x17spiderrock_common.proto\x1a\x1fgoogle/protobuf/timestamp.proto\"\xb7\x0c\n\x16ResponderMarkupVegaDir\x12\x33\n\x05_meta\x18\x01 \x01(\x0b\x32$.spiderrock.protobuf.MessageMetadata\x12>\n\x04pkey\x18\x02 \x01(\x0b\x32\x30.spiderrock.protobuf.ResponderMarkupVegaDir.PKey\x12\x11\n\tuser_name\x18\x64 \x01(\t\x12/\n\x0bis_disabled\x18\x65 \x01(\x0e\x32\x1a.spiderrock.protobuf.YesNo\x12\x34\n\x10\x63\x61n_include_flex\x18\x66 \x01(\x0e\x32\x1a.spiderrock.protobuf.YesNo\x12\x35\n\x11\x63\x61n_include_stock\x18g \x01(\x0e\x32\x1a.spiderrock.protobuf.YesNo\x12-\n\x07\x63p_flag\x18h \x01(\x0e\x32\x1c.spiderrock.protobuf.CallPut\x12\x11\n\tmin_years\x18i \x01(\x02\x12\x11\n\tmax_years\x18j \x01(\x02\x12.\n\nmin_expiry\x18k \x01(\x0b\x32\x1a.google.protobuf.Timestamp\x12.\n\nmax_expiry\x18l \x01(\x0b\x32\x1a.google.protobuf.Timestamp\x12\x12\n\nmin_xDelta\x18m \x01(\x02\x12\x12\n\nmax_xDelta\x18n \x01(\x02\x12\x12\n\nmin_strike\x18o \x01(\x01\x12\x12\n\nmax_strike\x18p \x01(\x01\x12\x1a\n\x12min_surf_edge_prem\x18q \x01(\x02\x12\x19\n\x11min_surf_edge_vol\x18r \x01(\x02\x12\x34\n\x10inc_fees_in_resp\x18s \x01(\x0e\x32\x1a.spiderrock.protobuf.YesNo\x12\x32\n\nround_rule\x18t \x01(\x0e\x32\x1e.spiderrock.protobuf.RoundRule\x12\x19\n\x11max_response_size\x18u \x01(\x05\x12\x19\n\x11max_response_vega\x18v \x01(\x02\x12\x1b\n\x13total_response_vega\x18w \x01(\x02\x12\x1e\n\x16total_response_wt_vega\x18x \x01(\x02\x12\x32\n\nauto_hedge\x18y \x01(\x0e\x32\x1e.spiderrock.protobuf.AutoHedge\x12\x38\n\x10hedge_instrument\x18z \x01(\x0e\x32\x1e.spiderrock.protobuf.HedgeInst\x12\x35\n\rhedge_sec_key\x18{ \x01(\x0b\x32\x1e.spiderrock.protobuf.ExpiryKey\x12\x18\n\x10hedge_beta_ratio\x18| \x01(\x02\x12\x34\n\x0bhedge_scope\x18} \x01(\x0e\x32\x1f.spiderrock.protobuf.HedgeScope\x12\x39\n\rhedge_session\x18~ \x01(\x0e\x32\".spiderrock.protobuf.MarketSession\x12\x15\n\rrisk_group_id\x18\x7f \x01(\x03\x12\x14\n\x0bnum_notices\x18\x81\x01 \x01(\x03\x12\x19\n\x10num_notices_pass\x18\x82\x01 \x01(\x03\x12\x16\n\rnum_responses\x18\x83\x01 \x01(\x03\x12\x13\n\nqty_traded\x18\x84\x01 \x01(\x05\x12\x14\n\x0bvega_traded\x18\x85\x01 \x01(\x01\x12\x14\n\x0bmodified_by\x18\x86\x01 \x01(\t\x12\x39\n\x0bmodified_in\x18\x87\x01 \x01(\x0e\x32#.spiderrock.protobuf.SysEnvironment\x12.\n\ttimestamp\x18\x88\x01 \x01(\x0b\x32\x1a.google.protobuf.Timestamp\x1a\xa1\x01\n\x04PKey\x12\r\n\x05\x61\x63\x63nt\x18\n \x01(\t\x12\x13\n\x0b\x63lient_firm\x18\x0b \x01(\t\x12.\n\x06ticker\x18\x0c \x01(\x0b\x32\x1e.spiderrock.protobuf.TickerKey\x12/\n\tresp_side\x18\r \x01(\x0e\x32\x1c.spiderrock.protobuf.BuySell\x12\x14\n\x0c\x65xpiry_group\x18\x0e \x01(\x05\x62\x06proto3')

_globals = globals()
_builder.BuildMessageAndEnumDescriptors(DESCRIPTOR, _globals)
_builder.BuildTopDescriptorsAndMessages(DESCRIPTOR, 'SRConnect.ResponderMarkupVegaDir_pb2', _globals)
if _descriptor._USE_C_DESCRIPTORS == False:

  DESCRIPTOR._options = None
  _globals['_RESPONDERMARKUPVEGADIR']._serialized_start=122
  _globals['_RESPONDERMARKUPVEGADIR']._serialized_end=1713
  _globals['_RESPONDERMARKUPVEGADIR_PKEY']._serialized_start=1552
  _globals['_RESPONDERMARKUPVEGADIR_PKEY']._serialized_end=1713
# @@protoc_insertion_point(module_scope)