# -*- coding: utf-8 -*-
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: ClientRisk/ProductRiskSummaryV5.proto
"""Generated protocol buffer code."""
from google.protobuf.internal import builder as _builder
from google.protobuf import descriptor as _descriptor
from google.protobuf import descriptor_pool as _descriptor_pool
from google.protobuf import symbol_database as _symbol_database
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()


import spiderrock_common_pb2 as spiderrock__common__pb2
from google.protobuf import timestamp_pb2 as google_dot_protobuf_dot_timestamp__pb2


DESCRIPTOR = _descriptor_pool.Default().AddSerializedFile(b'\n%ClientRisk/ProductRiskSummaryV5.proto\x12\x13spiderrock.protobuf\x1a\x17spiderrock_common.proto\x1a\x1fgoogle/protobuf/timestamp.proto\"\xa7\x1f\n\x14ProductRiskSummaryV5\x12\x33\n\x05_meta\x18\x01 \x01(\x0b\x32$.spiderrock.protobuf.MessageMetadata\x12<\n\x04pkey\x18\x02 \x01(\x0b\x32..spiderrock.protobuf.ProductRiskSummaryV5.PKey\x12\x11\n\tln_dDelta\x18j \x01(\x01\x12\x11\n\tsh_dDelta\x18m \x01(\x01\x12\x19\n\x11\x66ut_mkt_value_mid\x18p \x01(\x01\x12\x19\n\x11opt_mkt_value_mid\x18s \x01(\x01\x12\x19\n\x11opt_mkt_value_vol\x18v \x01(\x01\x12\x16\n\x0e\x66\x63_abs_cur_pos\x18y \x01(\x05\x12\x16\n\x0e\x66\x63_abs_opn_clr\x18| \x01(\x05\x12\x16\n\x0e\x66\x63_abs_opn_prv\x18\x7f \x01(\x05\x12\x17\n\x0e\x66\x63_abs_opn_pos\x18\x82\x01 \x01(\x05\x12\x17\n\x0e\x66\x63_abs_opn_brk\x18\x85\x01 \x01(\x05\x12\x17\n\x0e\x66\x63_net_cur_pos\x18\x88\x01 \x01(\x05\x12\x0f\n\x06\x66\x63_bot\x18\x8b\x01 \x01(\x05\x12\x0f\n\x06\x66\x63_sld\x18\x8e\x01 \x01(\x05\x12\x13\n\nfc_bot_hdg\x18\x91\x01 \x01(\x05\x12\x13\n\nfc_sld_hdg\x18\x94\x01 \x01(\x05\x12\x13\n\nfc_bot_trh\x18\x97\x01 \x01(\x05\x12\x13\n\nfc_sld_trh\x18\x9a\x01 \x01(\x05\x12\x13\n\nfc_bot_opn\x18\x9d\x01 \x01(\x05\x12\x13\n\nfc_sld_opn\x18\xa0\x01 \x01(\x05\x12\x13\n\nfc_bot_trd\x18\xa3\x01 \x01(\x05\x12\x13\n\nfc_sld_trd\x18\xa6\x01 \x01(\x05\x12\x13\n\nfc_mny_bot\x18\xa9\x01 \x01(\x01\x12\x13\n\nfc_mny_sld\x18\xac\x01 \x01(\x01\x12\x31\n\x0cmax_fut_dttm\x18\xaf\x01 \x01(\x0b\x32\x1a.google.protobuf.Timestamp\x12\x13\n\nfc_pnl_mid\x18\xb2\x01 \x01(\x02\x12\x13\n\nfc_pnl_clr\x18\xb5\x01 \x01(\x02\x12\x13\n\nfc_pnl_day\x18\xb8\x01 \x01(\x02\x12\x1a\n\x11op_cn_abs_cur_pos\x18\xbb\x01 \x01(\x05\x12\x1a\n\x11op_cn_abs_opn_clr\x18\xbe\x01 \x01(\x05\x12\x1a\n\x11op_cn_abs_opn_prv\x18\xc1\x01 \x01(\x05\x12\x1a\n\x11op_cn_abs_opn_pos\x18\xc4\x01 \x01(\x05\x12\x1a\n\x11op_cn_abs_opn_brk\x18\xc7\x01 \x01(\x05\x12\x17\n\x0eop_cn_pos_call\x18\xca\x01 \x01(\x05\x12\x16\n\rop_cn_pos_put\x18\xcd\x01 \x01(\x05\x12\x17\n\x0eop_cn_abs_pair\x18\xd0\x01 \x01(\x05\x12\x1c\n\x13op_cn_abs_atm_equiv\x18\xd3\x01 \x01(\x02\x12\x12\n\top_cn_bot\x18\xd6\x01 \x01(\x05\x12\x12\n\top_cn_sld\x18\xd9\x01 \x01(\x05\x12\x13\n\nop_mny_bot\x18\xdc\x01 \x01(\x01\x12\x13\n\nop_mny_sld\x18\xdf\x01 \x01(\x01\x12\x14\n\x0bop_prem_bot\x18\xe2\x01 \x01(\x02\x12\x14\n\x0bop_prem_sld\x18\xe5\x01 \x01(\x02\x12\x31\n\x0cmax_opt_dttm\x18\xe8\x01 \x01(\x0b\x32\x1a.google.protobuf.Timestamp\x12\x13\n\nop_pnl_vol\x18\xeb\x01 \x01(\x01\x12\x13\n\nop_pnl_mid\x18\xee\x01 \x01(\x01\x12\x13\n\nop_pnl_clr\x18\xf1\x01 \x01(\x01\x12\x13\n\nop_pnl_brk\x18\xf4\x01 \x01(\x02\x12\x13\n\nop_pnl_day\x18\xf7\x01 \x01(\x02\x12\x16\n\rop_dn_pnl_day\x18\xfa\x01 \x01(\x02\x12\x14\n\x0bop_day_vega\x18\xfd\x01 \x01(\x02\x12\x15\n\x0cop_day_wVega\x18\x80\x02 \x01(\x02\x12\x15\n\x0cop_day_tVega\x18\x83\x02 \x01(\x02\x12\x17\n\x0eop_day_wt_vega\x18\x86\x02 \x01(\x02\x12\x15\n\x0cop_day_theta\x18\x89\x02 \x01(\x02\x12\x15\n\x0cop_day_delta\x18\x8c\x02 \x01(\x02\x12\x15\n\x0cop_trd_delta\x18\x8f\x02 \x01(\x02\x12\x17\n\x0e\x63ont_hedge_pnl\x18\x92\x02 \x01(\x02\x12\x18\n\x0f\x63ont_hedge_pnl1\x18\x95\x02 \x01(\x02\x12\x17\n\x0eop_edge_opened\x18\x98\x02 \x01(\x02\x12\x17\n\x0eop_edge_closed\x18\x9b\x02 \x01(\x02\x12\x0f\n\x06pnl_dn\x18\x9e\x02 \x01(\x02\x12\x0f\n\x06pnl_de\x18\xa1\x02 \x01(\x02\x12\x0f\n\x06pnl_sl\x18\xa4\x02 \x01(\x02\x12\x0f\n\x06pnl_ga\x18\xa7\x02 \x01(\x02\x12\x0f\n\x06pnl_th\x18\xaa\x02 \x01(\x02\x12\x0f\n\x06pnl_ve\x18\xad\x02 \x01(\x02\x12\x0f\n\x06pnl_vo\x18\xb0\x02 \x01(\x02\x12\x0f\n\x06pnl_va\x18\xb3\x02 \x01(\x02\x12\x10\n\x07pnl_err\x18\xb6\x02 \x01(\x02\x12\x11\n\x08pnl_rate\x18\xb9\x02 \x01(\x02\x12\x11\n\x08pnl_sDiv\x18\xbc\x02 \x01(\x02\x12\x11\n\x08pnl_dDiv\x18\xbf\x02 \x01(\x02\x12\x0f\n\x06pnl_te\x18\xc2\x02 \x01(\x02\x12\x16\n\rpct_iv_change\x18\xc5\x02 \x01(\x02\x12\x14\n\x0bpct_iv_vega\x18\xc8\x02 \x01(\x02\x12\x16\n\rpct_tv_change\x18\xcb\x02 \x01(\x02\x12\x14\n\x0bpct_tv_vega\x18\xce\x02 \x01(\x02\x12\x16\n\rfut_width_mny\x18\xd1\x02 \x01(\x02\x12\x16\n\ropt_width_mny\x18\xd4\x02 \x01(\x02\x12\x13\n\nday_dDelta\x18\xd7\x02 \x01(\x02\x12\x0e\n\x05\x64\x65lta\x18\xda\x02 \x01(\x02\x12\x0f\n\x06\x64\x64\x65lta\x18\xdd\x02 \x01(\x02\x12\x11\n\x08\x64\x65_decay\x18\xe0\x02 \x01(\x02\x12\x11\n\x08\x64\x64_decay\x18\xe3\x02 \x01(\x02\x12\x0e\n\x05gamma\x18\xe6\x02 \x01(\x02\x12\x10\n\x07\x64_gamma\x18\xe9\x02 \x01(\x02\x12\x0e\n\x05theta\x18\xec\x02 \x01(\x02\x12\x0c\n\x03rho\x18\xef\x02 \x01(\x02\x12\r\n\x04vega\x18\xf2\x02 \x01(\x02\x12\x0f\n\x06t_vega\x18\xf5\x02 \x01(\x02\x12\x0f\n\x06w_vega\x18\xf8\x02 \x01(\x02\x12\x10\n\x07wt_vega\x18\xfb\x02 \x01(\x02\x12\x10\n\x07ivol_ve\x18\xfe\x02 \x01(\x02\x12\x0e\n\x05volga\x18\x81\x03 \x01(\x02\x12\x0e\n\x05vanna\x18\x84\x03 \x01(\x02\x12\x0e\n\x05slope\x18\x87\x03 \x01(\x02\x12\x0e\n\x05\x61vega\x18\x8a\x03 \x01(\x02\x12\x0f\n\x06\x61theta\x18\x8d\x03 \x01(\x02\x12\x14\n\x0bhedge_gamma\x18\x90\x03 \x01(\x02\x12\x15\n\x0chedge_dGamma\x18\x93\x03 \x01(\x02\x12\x14\n\x0bprem_ov_par\x18\x96\x03 \x01(\x02\x12\x11\n\x08wt_ve_dd\x18\x99\x03 \x01(\x02\x12\x11\n\x08wt_ve_dn\x18\x9c\x03 \x01(\x02\x12\x11\n\x08wt_ve_at\x18\x9f\x03 \x01(\x02\x12\x11\n\x08wt_ve_up\x18\xa2\x03 \x01(\x02\x12\x11\n\x08wt_ve_du\x18\xa5\x03 \x01(\x02\x12\x11\n\x08wt_ve_m1\x18\xa8\x03 \x01(\x02\x12\x11\n\x08wt_ve_m2\x18\xab\x03 \x01(\x02\x12\x11\n\x08wt_ve_m3\x18\xae\x03 \x01(\x02\x12\x11\n\x08wt_ve_m4\x18\xb1\x03 \x01(\x02\x12\x11\n\x08wt_ve_m5\x18\xb4\x03 \x01(\x02\x12\x12\n\topn_delta\x18\xb7\x03 \x01(\x02\x12\x13\n\nopn_dDelta\x18\xba\x03 \x01(\x02\x12\x12\n\tpos_delta\x18\xbd\x03 \x01(\x02\x12\x13\n\npos_dDelta\x18\xc0\x03 \x01(\x02\x12\x0f\n\x06pin_xX\x18\xc5\x04 \x01(\x02\x12\x15\n\x0copn_de_below\x18\xc6\x04 \x01(\x02\x12\x15\n\x0copn_de_above\x18\xc7\x04 \x01(\x02\x12\x16\n\ropn_dDe_below\x18\xc8\x04 \x01(\x02\x12\x16\n\ropn_dDe_above\x18\xc9\x04 \x01(\x02\x12\x15\n\x0cpos_de_below\x18\xca\x04 \x01(\x02\x12\x15\n\x0cpos_de_above\x18\xcb\x04 \x01(\x02\x12\x16\n\rpos_dDe_below\x18\xcc\x04 \x01(\x02\x12\x16\n\rpos_dDe_above\x18\xcd\x04 \x01(\x02\x12\x1b\n\x12pos_hedge_delta_ex\x18\xc3\x03 \x01(\x02\x12\x1c\n\x13pos_hedge_dDelta_ex\x18\xc6\x03 \x01(\x02\x12\x0f\n\x06t_edge\x18\xc9\x03 \x01(\x02\x12\x14\n\x0bt_edge_mult\x18\xcc\x03 \x01(\x02\x12\x12\n\tt_edge_pr\x18\xcf\x03 \x01(\x02\x12\x17\n\x0et_edge_mult_pr\x18\xd2\x03 \x01(\x02\x12\x18\n\x0fnum_tVol_errors\x18\xd5\x03 \x01(\x05\x12\x11\n\x08pair_pnl\x18\xd8\x03 \x01(\x02\x12\x15\n\x0cpos_tEdge_wV\x18\xdb\x03 \x01(\x02\x12\x15\n\x0cneg_tEdge_wV\x18\xde\x03 \x01(\x02\x12\x15\n\x0c\x62\x61\x64_tEdge_wV\x18\xe1\x03 \x01(\x02\x12\x16\n\rpos_tEdge_pnl\x18\xe4\x03 \x01(\x02\x12\x16\n\rneg_tEdge_pnl\x18\xe7\x03 \x01(\x02\x12\x16\n\rbad_tEdge_pnl\x18\xea\x03 \x01(\x02\x12\x0f\n\x06span01\x18\xed\x03 \x01(\x02\x12\x0f\n\x06span02\x18\xf0\x03 \x01(\x02\x12\x0f\n\x06span03\x18\xf3\x03 \x01(\x02\x12\x0f\n\x06span04\x18\xf6\x03 \x01(\x02\x12\x0f\n\x06span05\x18\xf9\x03 \x01(\x02\x12\x0f\n\x06span06\x18\xfc\x03 \x01(\x02\x12\x0f\n\x06span07\x18\xff\x03 \x01(\x02\x12\x0f\n\x06span08\x18\x82\x04 \x01(\x02\x12\x0f\n\x06span09\x18\x85\x04 \x01(\x02\x12\x0f\n\x06span10\x18\x88\x04 \x01(\x02\x12\x0f\n\x06span11\x18\x8b\x04 \x01(\x02\x12\x0f\n\x06span12\x18\x8e\x04 \x01(\x02\x12\x0f\n\x06span13\x18\x91\x04 \x01(\x02\x12\x0f\n\x06span14\x18\x94\x04 \x01(\x02\x12\x0f\n\x06span15\x18\x97\x04 \x01(\x02\x12\x0f\n\x06span16\x18\x9a\x04 \x01(\x02\x12\x15\n\x0c\x66ut_liq_risk\x18\x9d\x04 \x01(\x02\x12\x15\n\x0copt_liq_risk\x18\xa0\x04 \x01(\x02\x12\x12\n\tfc_bot_c0\x18\xa3\x04 \x01(\x05\x12\x12\n\tfc_sld_c0\x18\xa6\x04 \x01(\x05\x12\x12\n\tfc_mny_c0\x18\xa9\x04 \x01(\x02\x12\x12\n\tfc_bot_c1\x18\xac\x04 \x01(\x05\x12\x12\n\tfc_sld_c1\x18\xaf\x04 \x01(\x05\x12\x12\n\tfc_mny_c1\x18\xb2\x04 \x01(\x02\x12\x13\n\nfut_margin\x18\xb5\x04 \x01(\x02\x12\x17\n\x0enum_fut_errors\x18\xb8\x04 \x01(\x05\x12\x17\n\x0enum_opt_errors\x18\xbb\x04 \x01(\x05\x12\x37\n\rfut_mark_flag\x18\xbe\x04 \x01(\x0e\x32\x1f.spiderrock.protobuf.MktErrFlag\x12\x37\n\ropt_mark_flag\x18\xc1\x04 \x01(\x0e\x32\x1f.spiderrock.protobuf.MktErrFlag\x12.\n\ttimestamp\x18\xc4\x04 \x01(\x0b\x32\x1a.google.protobuf.Timestamp\x1a\xc4\x01\n\x04PKey\x12.\n\x06ticker\x18\n \x01(\x0b\x32\x1e.spiderrock.protobuf.TickerKey\x12\r\n\x05\x61\x63\x63nt\x18\x0b \x01(\t\x12\x30\n\ntrade_date\x18\x0c \x01(\x0b\x32\x1c.spiderrock.protobuf.DateKey\x12\x36\n\x0crisk_session\x18\r \x01(\x0e\x32 .spiderrock.protobuf.RiskSession\x12\x13\n\x0b\x63lient_firm\x18\x0e \x01(\tb\x06proto3')

_globals = globals()
_builder.BuildMessageAndEnumDescriptors(DESCRIPTOR, _globals)
_builder.BuildTopDescriptorsAndMessages(DESCRIPTOR, 'ClientRisk.ProductRiskSummaryV5_pb2', _globals)
if _descriptor._USE_C_DESCRIPTORS == False:

  DESCRIPTOR._options = None
  _globals['_PRODUCTRISKSUMMARYV5']._serialized_start=121
  _globals['_PRODUCTRISKSUMMARYV5']._serialized_end=4128
  _globals['_PRODUCTRISKSUMMARYV5_PKEY']._serialized_start=3932
  _globals['_PRODUCTRISKSUMMARYV5_PKEY']._serialized_end=4128
# @@protoc_insertion_point(module_scope)