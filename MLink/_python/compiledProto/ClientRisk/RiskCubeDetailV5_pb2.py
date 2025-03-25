# -*- coding: utf-8 -*-
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: ClientRisk/RiskCubeDetailV5.proto
"""Generated protocol buffer code."""
from google.protobuf.internal import builder as _builder
from google.protobuf import descriptor as _descriptor
from google.protobuf import descriptor_pool as _descriptor_pool
from google.protobuf import symbol_database as _symbol_database
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()


import spiderrock_common_pb2 as spiderrock__common__pb2
from google.protobuf import timestamp_pb2 as google_dot_protobuf_dot_timestamp__pb2


DESCRIPTOR = _descriptor_pool.Default().AddSerializedFile(b'\n!ClientRisk/RiskCubeDetailV5.proto\x12\x13spiderrock.protobuf\x1a\x17spiderrock_common.proto\x1a\x1fgoogle/protobuf/timestamp.proto\"\xa0\x1e\n\x10RiskCubeDetailV5\x12\x33\n\x05_meta\x18\x01 \x01(\x0b\x32$.spiderrock.protobuf.MessageMetadata\x12\x38\n\x04pkey\x18\x02 \x01(\x0b\x32*.spiderrock.protobuf.RiskCubeDetailV5.PKey\x12\x35\n\x07version\x18\x64 \x01(\x0e\x32$.spiderrock.protobuf.RiskCubeVersion\x12\x15\n\rclearing_firm\x18j \x01(\t\x12\x16\n\x0e\x63learing_accnt\x18m \x01(\t\x12\x18\n\x10risk_server_code\x18p \x01(\t\x12\x13\n\x0bview_group1\x18s \x01(\t\x12\x13\n\x0bview_group2\x18v \x01(\t\x12\x13\n\x0bview_group3\x18y \x01(\t\x12.\n\x06ticker\x18| \x01(\x0b\x32\x1e.spiderrock.protobuf.TickerKey\x12\x12\n\nrisk_class\x18\x7f \x01(\t\x12\x35\n\x0bsymbol_type\x18\x82\x01 \x01(\x0e\x32\x1f.spiderrock.protobuf.SymbolType\x12\r\n\x04\x62\x65ta\x18\x85\x01 \x01(\x02\x12\x35\n\x0b\x62\x65ta_source\x18\x88\x01 \x01(\x0e\x32\x1f.spiderrock.protobuf.BetaSource\x12\x0f\n\x06sector\x18\x8b\x01 \x01(\t\x12\x10\n\x07ind_num\x18\x8e\x01 \x01(\x05\x12\x10\n\x07sub_num\x18\x91\x01 \x01(\x05\x12\x10\n\x07grp_num\x18\x94\x01 \x01(\x05\x12\x10\n\x07nbr_num\x18\x97\x01 \x01(\x05\x12\x0f\n\x06\x65_days\x18\x9a\x01 \x01(\x05\x12\x0f\n\x06\x64_days\x18\x9d\x01 \x01(\x05\x12\x10\n\x07x_delta\x18\xa0\x01 \x01(\x02\x12/\n\x08\x65xp_code\x18\xa3\x01 \x01(\x0e\x32\x1c.spiderrock.protobuf.ExpCode\x12\x31\n\tskew_code\x18\xa6\x01 \x01(\x0e\x32\x1d.spiderrock.protobuf.SkewCode\x12\x34\n\x0b\x65_days_code\x18\xa9\x01 \x01(\x0e\x32\x1e.spiderrock.protobuf.EDaysCode\x12\x34\n\x0bi_vol_range\x18\xac\x01 \x01(\x0e\x32\x1e.spiderrock.protobuf.iVolRange\x12\x10\n\x07skew_dD\x18\xaf\x01 \x01(\x02\x12\x10\n\x07skew_dN\x18\xb2\x01 \x01(\x02\x12\x10\n\x07skew_aT\x18\xb5\x01 \x01(\x02\x12\x10\n\x07skew_uP\x18\xb8\x01 \x01(\x02\x12\x10\n\x07skew_dU\x18\xbb\x01 \x01(\x02\x12\x13\n\nsh_opn_pos\x18\xbe\x01 \x01(\x05\x12\x13\n\nfc_opn_pos\x18\xc1\x01 \x01(\x05\x12\x13\n\ncn_opn_pos\x18\xc4\x01 \x01(\x05\x12\x15\n\x0c\x63n_atm_equiv\x18\xc7\x01 \x01(\x02\x12\x0f\n\x06sh_bot\x18\xca\x01 \x01(\x05\x12\x0f\n\x06sh_sld\x18\xcd\x01 \x01(\x05\x12\x14\n\x0bsh_sld_shrt\x18\xd0\x01 \x01(\x05\x12\x0f\n\x06\x66\x63_bot\x18\xd3\x01 \x01(\x05\x12\x0f\n\x06\x66\x63_sld\x18\xd6\x01 \x01(\x05\x12\x0f\n\x06\x63n_bot\x18\xd9\x01 \x01(\x05\x12\x0f\n\x06\x63n_sld\x18\xdc\x01 \x01(\x05\x12\x12\n\tcn_opened\x18\xdf\x01 \x01(\x05\x12\x12\n\tcn_closed\x18\xe2\x01 \x01(\x05\x12\x10\n\x07opn_dir\x18\xe5\x01 \x01(\t\x12\x10\n\x07pos_dir\x18\xe8\x01 \x01(\t\x12\x15\n\x0cunit_opn_pos\x18\xeb\x01 \x01(\x05\x12\x15\n\x0cunit_cur_pos\x18\xee\x01 \x01(\x05\x12\x15\n\x0cunit_qty_bot\x18\xf1\x01 \x01(\x05\x12\x15\n\x0cunit_qty_sld\x18\xf4\x01 \x01(\x05\x12\x10\n\x07\x64\x61y_pnl\x18\xf7\x01 \x01(\x02\x12\x13\n\nday_dn_pnl\x18\xfa\x01 \x01(\x02\x12\x16\n\rday_trd_delta\x18\xfd\x01 \x01(\x02\x12\x17\n\x0e\x64\x61y_trd_dDelta\x18\x80\x02 \x01(\x02\x12\x16\n\rday_trd_gamma\x18\x83\x02 \x01(\x02\x12\x17\n\x0e\x64\x61y_trd_dGamma\x18\x86\x02 \x01(\x02\x12\x15\n\x0c\x64\x61y_trd_vega\x18\x89\x02 \x01(\x02\x12\x16\n\rday_trd_wVega\x18\x8c\x02 \x01(\x02\x12\x16\n\rday_trd_tVega\x18\x8f\x02 \x01(\x02\x12\x18\n\x0f\x64\x61y_trd_wt_vega\x18\x92\x02 \x01(\x02\x12\x16\n\rday_trd_theta\x18\x95\x02 \x01(\x02\x12\x18\n\x0f\x64\x61y_edge_opened\x18\x98\x02 \x01(\x02\x12\x18\n\x0f\x64\x61y_edge_closed\x18\x9b\x02 \x01(\x02\x12\x14\n\x0b\x64\x61y_mny_bot\x18\x9e\x02 \x01(\x01\x12\x14\n\x0b\x64\x61y_mny_sld\x18\xa1\x02 \x01(\x01\x12\x19\n\x10opn_pnl_vol_mark\x18\xa4\x02 \x01(\x02\x12\x19\n\x10opn_pnl_mid_mark\x18\xa7\x02 \x01(\x02\x12\x19\n\x10opn_pnl_clr_mark\x18\xaa\x02 \x01(\x02\x12\x19\n\x10opn_mark_brk_mny\x18\xad\x02 \x01(\x02\x12\x16\n\ropn_theo_edge\x18\xb0\x02 \x01(\x02\x12\x16\n\rpos_theo_edge\x18\xb3\x02 \x01(\x02\x12\x13\n\nt_vol_move\x18\xb6\x02 \x01(\x02\x12\x14\n\x0bt_edge_move\x18\xb9\x02 \x01(\x02\x12\x0f\n\x06t_edge\x18\xbc\x02 \x01(\x02\x12\x13\n\nopn_pnl_de\x18\xbf\x02 \x01(\x02\x12\x13\n\nopn_pnl_ga\x18\xc2\x02 \x01(\x02\x12\x13\n\nopn_pnl_th\x18\xc5\x02 \x01(\x02\x12\x13\n\nopn_pnl_ve\x18\xc8\x02 \x01(\x02\x12\x13\n\nopn_pnl_vo\x18\xcb\x02 \x01(\x02\x12\x13\n\nopn_pnl_va\x18\xce\x02 \x01(\x02\x12\x13\n\nopn_pnl_sl\x18\xd1\x02 \x01(\x02\x12\x15\n\x0copn_pnl_rate\x18\xd4\x02 \x01(\x02\x12\x15\n\x0copn_pnl_sDiv\x18\xd7\x02 \x01(\x02\x12\x15\n\x0copn_pnl_dDiv\x18\xda\x02 \x01(\x02\x12\x14\n\x0bopn_pnl_err\x18\xdd\x02 \x01(\x02\x12\x18\n\x0fopn_edge_change\x18\xe0\x02 \x01(\x02\x12\x12\n\tpos_delta\x18\xe3\x02 \x01(\x02\x12\x13\n\npos_dDelta\x18\xe6\x02 \x01(\x02\x12\x12\n\tpos_dBeta\x18\xe9\x02 \x01(\x02\x12\x12\n\tpos_gamma\x18\xec\x02 \x01(\x02\x12\x13\n\npos_dGamma\x18\xef\x02 \x01(\x02\x12\x11\n\x08pos_vega\x18\xf2\x02 \x01(\x02\x12\x12\n\tpos_wVega\x18\xf5\x02 \x01(\x02\x12\x12\n\tpos_tVega\x18\xf8\x02 \x01(\x02\x12\x14\n\x0bpos_wt_vega\x18\xfb\x02 \x01(\x02\x12\x12\n\tpos_volga\x18\xfe\x02 \x01(\x02\x12\x12\n\tpos_vanna\x18\x81\x03 \x01(\x02\x12\x12\n\tpos_theta\x18\x84\x03 \x01(\x02\x12\x10\n\x07pos_rho\x18\x87\x03 \x01(\x02\x12\x10\n\x07pos_phi\x18\x8a\x03 \x01(\x02\x12\x13\n\npos_hDelta\x18\xf7\x03 \x01(\x02\x12\x14\n\x0bpos_hDDelta\x18\xf8\x03 \x01(\x02\x12\x13\n\npos_hGamma\x18\xf9\x03 \x01(\x02\x12\x15\n\x0cpos_hDGaamma\x18\xfa\x03 \x01(\x02\x12\x15\n\x0cpos_notional\x18\x8d\x03 \x01(\x02\x12\x16\n\rpos_mkt_value\x18\x90\x03 \x01(\x02\x12\x16\n\rpos_prem_oPar\x18\x93\x03 \x01(\x02\x12\x10\n\x07\x61tm_vol\x18\x96\x03 \x01(\x02\x12\x10\n\x07sym_vol\x18\x99\x03 \x01(\x02\x12\x11\n\x08sr_slope\x18\x9c\x03 \x01(\x02\x12\x11\n\x08prc_sVol\x18\x9f\x03 \x01(\x02\x12\x11\n\x08prc_tOpx\x18\xa2\x03 \x01(\x02\x12\x11\n\x08prc_yOpx\x18\xa5\x03 \x01(\x02\x12\x11\n\x08prc_uPrc\x18\xa8\x03 \x01(\x02\x12\x12\n\tprc_years\x18\xab\x03 \x01(\x02\x12\x11\n\x08prc_rate\x18\xae\x03 \x01(\x02\x12\x11\n\x08prc_sdiv\x18\xb1\x03 \x01(\x02\x12\x11\n\x08prc_ddiv\x18\xb4\x03 \x01(\x02\x12\x14\n\x0bu_prc_ratio\x18\xb7\x03 \x01(\x02\x12\x13\n\nu_prc_move\x18\xba\x03 \x01(\x02\x12\x13\n\ni_vol_move\x18\xbd\x03 \x01(\x02\x12\x13\n\nex_div_amt\x18\xc0\x03 \x01(\x02\x12\x14\n\x0b\x62orrow_rate\x18\xc3\x03 \x01(\x02\x12\x13\n\nmodel_type\x18\xc6\x03 \x01(\x05\x12\x1a\n\x11underliers_per_cn\x18\xc9\x03 \x01(\x05\x12;\n\x0eunderlier_type\x18\xcc\x03 \x01(\x0e\x32\".spiderrock.protobuf.UnderlierType\x12\x14\n\x0bpoint_value\x18\xcf\x03 \x01(\x02\x12\x36\n\x0epoint_currency\x18\xd2\x03 \x01(\x0e\x32\x1d.spiderrock.protobuf.Currency\x12\x13\n\ntick_value\x18\xd5\x03 \x01(\x02\x12\x34\n\nmultihedge\x18\xd8\x03 \x01(\x0e\x32\x1f.spiderrock.protobuf.Multihedge\x12:\n\x11multihedge_source\x18\xdb\x03 \x01(\x0b\x32\x1e.spiderrock.protobuf.TickerKey\x12\x1b\n\x12multihedge_pVRatio\x18\xde\x03 \x01(\x02\x12\x18\n\x0fspan_prc_inc_up\x18\xe1\x03 \x01(\x02\x12\x18\n\x0fspan_prc_inc_dn\x18\xe4\x03 \x01(\x02\x12\x15\n\x0cspan_vol_inc\x18\xe7\x03 \x01(\x02\x12\x35\n\rprc_span_type\x18\xea\x03 \x01(\x0e\x32\x1d.spiderrock.protobuf.SpanType\x12\x35\n\rvol_span_type\x18\xed\x03 \x01(\x0e\x32\x1d.spiderrock.protobuf.SpanType\x12\x42\n\x12span_pricing_model\x18\xf0\x03 \x01(\x0e\x32%.spiderrock.protobuf.SpanPricingModel\x12\x35\n\x0bmargin_type\x18\xf3\x03 \x01(\x0e\x32\x1f.spiderrock.protobuf.MarginType\x12.\n\ttimestamp\x18\xf6\x03 \x01(\x0b\x32\x1a.google.protobuf.Timestamp\x1a\xf5\x01\n\x04PKey\x12\r\n\x05\x61\x63\x63nt\x18\n \x01(\t\x12/\n\x07sec_key\x18\x0b \x01(\x0b\x32\x1e.spiderrock.protobuf.OptionKey\x12.\n\x08sec_type\x18\x0c \x01(\x0e\x32\x1c.spiderrock.protobuf.SecType\x12\x30\n\ntrade_date\x18\r \x01(\x0b\x32\x1c.spiderrock.protobuf.DateKey\x12\x36\n\x0crisk_session\x18\x0e \x01(\x0e\x32 .spiderrock.protobuf.RiskSession\x12\x13\n\x0b\x63lient_firm\x18\x0f \x01(\tb\x06proto3')

_globals = globals()
_builder.BuildMessageAndEnumDescriptors(DESCRIPTOR, _globals)
_builder.BuildTopDescriptorsAndMessages(DESCRIPTOR, 'ClientRisk.RiskCubeDetailV5_pb2', _globals)
if _descriptor._USE_C_DESCRIPTORS == False:

  DESCRIPTOR._options = None
  _globals['_RISKCUBEDETAILV5']._serialized_start=117
  _globals['_RISKCUBEDETAILV5']._serialized_end=3989
  _globals['_RISKCUBEDETAILV5_PKEY']._serialized_start=3744
  _globals['_RISKCUBEDETAILV5_PKEY']._serialized_end=3989
# @@protoc_insertion_point(module_scope)
