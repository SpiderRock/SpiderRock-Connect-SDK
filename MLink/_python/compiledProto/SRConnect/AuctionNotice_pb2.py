# -*- coding: utf-8 -*-
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: SRConnect/AuctionNotice.proto
"""Generated protocol buffer code."""
from google.protobuf.internal import builder as _builder
from google.protobuf import descriptor as _descriptor
from google.protobuf import descriptor_pool as _descriptor_pool
from google.protobuf import symbol_database as _symbol_database
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()


import spiderrock_common_pb2 as spiderrock__common__pb2
from google.protobuf import timestamp_pb2 as google_dot_protobuf_dot_timestamp__pb2


DESCRIPTOR = _descriptor_pool.Default().AddSerializedFile(b'\n\x1dSRConnect/AuctionNotice.proto\x12\x13spiderrock.protobuf\x1a\x17spiderrock_common.proto\x1a\x1fgoogle/protobuf/timestamp.proto\"\xab\x15\n\rAuctionNotice\x12\x33\n\x05_meta\x18\x01 \x01(\x0b\x32$.spiderrock.protobuf.MessageMetadata\x12\x35\n\x04pkey\x18\x02 \x01(\x0b\x32\'.spiderrock.protobuf.AuctionNotice.PKey\x12.\n\x06ticker\x18k \x01(\x0b\x32\x1e.spiderrock.protobuf.TickerKey\x12\x30\n\ntrade_date\x18j \x01(\x0b\x32\x1c.spiderrock.protobuf.DateKey\x12\x33\n\x0fis_test_auction\x18h \x01(\x0e\x32\x1a.spiderrock.protobuf.YesNo\x12\x12\n\nshort_code\x18i \x01(\t\x12\x36\n\x0c\x61uction_type\x18\x64 \x01(\x0e\x32 .spiderrock.protobuf.AuctionType\x12\x38\n\rauction_event\x18\x65 \x01(\x0e\x32!.spiderrock.protobuf.AuctionEvent\x12\x17\n\x0esrc_auction_iD\x18\xa9\x01 \x01(\t\x12\x19\n\x10src_auction_type\x18\xaa\x01 \x01(\t\x12:\n\x0e\x61uction_source\x18g \x01(\x0e\x32\".spiderrock.protobuf.AuctionSource\x12\x10\n\x08industry\x18l \x01(\t\x12\x34\n\x0bsymbol_type\x18m \x01(\x0e\x32\x1f.spiderrock.protobuf.SymbolType\x12\x17\n\x0fu_avg_daily_vlm\x18n \x01(\x02\x12/\n\tcust_side\x18o \x01(\x0e\x32\x1c.spiderrock.protobuf.BuySell\x12\x10\n\x08\x63ust_qty\x18p \x01(\x05\x12\x10\n\x08\x63ust_prc\x18q \x01(\x01\x12\x30\n\x0chas_cust_prc\x18r \x01(\x0e\x32\x1a.spiderrock.protobuf.YesNo\x12\x36\n\x0e\x63ust_firm_type\x18\xa2\x01 \x01(\x0e\x32\x1d.spiderrock.protobuf.FirmType\x12\x18\n\x0f\x63ust_agent_mPID\x18\xa3\x01 \x01(\t\x12\x18\n\x10\x63ust_client_firm\x18s \x01(\t\x12\x18\n\x10\x63omm_enhancement\x18t \x01(\x02\x12\x34\n\x10\x63ust_comm_paying\x18u \x01(\x0e\x32\x1a.spiderrock.protobuf.YesNo\x12\x37\n\rcust_qty_cond\x18v \x01(\x0e\x32 .spiderrock.protobuf.CustQtyCond\x12\x18\n\x10\x61uction_duration\x18w \x01(\x05\x12\x14\n\x0cnum_opt_legs\x18x \x01(\x05\x12:\n\x0cspread_class\x18y \x01(\x0e\x32$.spiderrock.protobuf.ToolSpreadClass\x12\x37\n\nlimit_type\x18\xab\x01 \x01(\x0e\x32\".spiderrock.protobuf.SpdrLimitType\x12\x38\n\rspread_flavor\x18z \x01(\x0e\x32!.spiderrock.protobuf.SpreadFlavor\x12\x32\n\x0e\x63ontains_hedge\x18{ \x01(\x0e\x32\x1a.spiderrock.protobuf.YesNo\x12\x32\n\rcontains_flex\x18\xa4\x01 \x01(\x0e\x32\x1a.spiderrock.protobuf.YesNo\x12\x39\n\x14\x63ontains_multi_hedge\x18\xa5\x01 \x01(\x0e\x32\x1a.spiderrock.protobuf.YesNo\x12\r\n\x05u_bid\x18| \x01(\x01\x12\r\n\x05u_ask\x18} \x01(\x01\x12\x11\n\x08ref_uPrc\x18\xb8\x01 \x01(\x01\x12\x0f\n\x06net_de\x18\xac\x01 \x01(\x02\x12\x0f\n\x06net_ga\x18\xad\x01 \x01(\x02\x12\x0f\n\x06net_th\x18\xae\x01 \x01(\x02\x12\x0f\n\x06net_ve\x18\xaf\x01 \x01(\x02\x12\x15\n\x0cpkg_surf_prc\x18\xb0\x01 \x01(\x02\x12\x15\n\x0cpkg_theo_prc\x18\xb6\x01 \x01(\x02\x12\x14\n\x0bpkg_bid_prc\x18\xb1\x01 \x01(\x02\x12\x14\n\x0bpkg_ask_prc\x18\xb2\x01 \x01(\x02\x12\x14\n\x0bpoint_value\x18\xb3\x01 \x01(\x01\x12\x16\n\rsrc_timestamp\x18\xb4\x01 \x01(\x03\x12\x16\n\rnet_timestamp\x18\xb5\x01 \x01(\x03\x12.\n\ttimestamp\x18\xa6\x01 \x01(\x0b\x32\x1a.google.protobuf.Timestamp\x12\x41\n\x11include_sRNetwork\x18\x9d\x01 \x01(\x0e\x32%.spiderrock.protobuf.InclExclDisclose\x12X\n\x16\x64irected_counter_party\x18\x9e\x01 \x03(\x0b\x32\x37.spiderrock.protobuf.AuctionNotice.DirectedCounterParty\x12\x41\n\norder_legs\x18\x83\x01 \x03(\x0b\x32,.spiderrock.protobuf.AuctionNotice.OrderLegs\x1a\x1d\n\x04PKey\x12\x15\n\rnotice_number\x18\x0b \x01(\x03\x1a\x9c\x01\n\x14\x44irectedCounterParty\x12\x14\n\x0b\x63lient_firm\x18\x9f\x01 \x01(\t\x12\x39\n\tincl_excl\x18\xa0\x01 \x01(\x0e\x32%.spiderrock.protobuf.InclExclDisclose\x12\x33\n\x0eis_comm_paying\x18\xa1\x01 \x01(\x0e\x32\x1a.spiderrock.protobuf.YesNo\x1a\xde\x04\n\tOrderLegs\x12\x30\n\x07sec_key\x18\x84\x01 \x01(\x0b\x32\x1e.spiderrock.protobuf.OptionKey\x12\x33\n\x08sec_type\x18\x85\x01 \x01(\x0e\x32 .spiderrock.protobuf.SpdrKeyType\x12+\n\x04side\x18\x86\x01 \x01(\x0e\x32\x1c.spiderrock.protobuf.BuySell\x12\x0e\n\x05ratio\x18\x87\x01 \x01(\r\x12\x13\n\nund_per_cn\x18\x88\x01 \x01(\x05\x12\x32\n\x08\x65xp_type\x18\x8a\x01 \x01(\x0e\x32\x1f.spiderrock.protobuf.ExpiryType\x12\x0e\n\x05years\x18\x8b\x01 \x01(\x02\x12\r\n\x04rate\x18\x8c\x01 \x01(\x02\x12\x10\n\x07\x61tm_vol\x18\x8d\x01 \x01(\x02\x12\x10\n\x07\x64\x64iv_pv\x18\x8e\x01 \x01(\x02\x12\x0e\n\x05t_vol\x18\x8f\x01 \x01(\x02\x12\x0e\n\x05t_prc\x18\xb7\x01 \x01(\x02\x12\x0e\n\x05s_vol\x18\x90\x01 \x01(\x02\x12\x0e\n\x05s_div\x18\x91\x01 \x01(\x02\x12\x0e\n\x05s_prc\x18\x92\x01 \x01(\x02\x12\x0b\n\x02\x64\x65\x18\x93\x01 \x01(\x02\x12\x0b\n\x02ga\x18\x94\x01 \x01(\x02\x12\x0b\n\x02th\x18\x95\x01 \x01(\x02\x12\x0b\n\x02ve\x18\x96\x01 \x01(\x02\x12-\n\x08s_vol_ok\x18\xa8\x01 \x01(\x0e\x32\x1a.spiderrock.protobuf.YesNo\x12\x0e\n\x05o_bid\x18\x97\x01 \x01(\x02\x12\x11\n\x08o_bid_sz\x18\x98\x01 \x01(\x05\x12\x13\n\no_bid_mask\x18\x99\x01 \x01(\r\x12\x0e\n\x05o_ask\x18\x9a\x01 \x01(\x02\x12\x11\n\x08o_ask_sz\x18\x9b\x01 \x01(\x05\x12\x13\n\no_ask_mask\x18\x9c\x01 \x01(\rb\x06proto3')

_globals = globals()
_builder.BuildMessageAndEnumDescriptors(DESCRIPTOR, _globals)
_builder.BuildTopDescriptorsAndMessages(DESCRIPTOR, 'SRConnect.AuctionNotice_pb2', _globals)
if _descriptor._USE_C_DESCRIPTORS == False:

  DESCRIPTOR._options = None
  _globals['_AUCTIONNOTICE']._serialized_start=113
  _globals['_AUCTIONNOTICE']._serialized_end=2844
  _globals['_AUCTIONNOTICE_PKEY']._serialized_start=2047
  _globals['_AUCTIONNOTICE_PKEY']._serialized_end=2076
  _globals['_AUCTIONNOTICE_DIRECTEDCOUNTERPARTY']._serialized_start=2079
  _globals['_AUCTIONNOTICE_DIRECTEDCOUNTERPARTY']._serialized_end=2235
  _globals['_AUCTIONNOTICE_ORDERLEGS']._serialized_start=2238
  _globals['_AUCTIONNOTICE_ORDERLEGS']._serialized_end=2844
# @@protoc_insertion_point(module_scope)
