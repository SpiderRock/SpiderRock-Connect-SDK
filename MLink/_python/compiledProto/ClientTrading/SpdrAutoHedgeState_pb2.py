# -*- coding: utf-8 -*-
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: ClientTrading/SpdrAutoHedgeState.proto
"""Generated protocol buffer code."""
from google.protobuf.internal import builder as _builder
from google.protobuf import descriptor as _descriptor
from google.protobuf import descriptor_pool as _descriptor_pool
from google.protobuf import symbol_database as _symbol_database
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()


import spiderrock_common_pb2 as spiderrock__common__pb2
from google.protobuf import timestamp_pb2 as google_dot_protobuf_dot_timestamp__pb2


DESCRIPTOR = _descriptor_pool.Default().AddSerializedFile(b'\n&ClientTrading/SpdrAutoHedgeState.proto\x12\x13spiderrock.protobuf\x1a\x17spiderrock_common.proto\x1a\x1fgoogle/protobuf/timestamp.proto\"\xa8\x0f\n\x12SpdrAutoHedgeState\x12\x33\n\x05_meta\x18\x01 \x01(\x0b\x32$.spiderrock.protobuf.MessageMetadata\x12:\n\x04pkey\x18\x02 \x01(\x0b\x32,.spiderrock.protobuf.SpdrAutoHedgeState.PKey\x12\x15\n\rgrouping_code\x18\x64 \x01(\x03\x12.\n\x06ticker\x18j \x01(\x0b\x32\x1e.spiderrock.protobuf.TickerKey\x12\x15\n\rsecurity_desc\x18m \x01(\t\x12\x36\n\nssale_flag\x18p \x01(\x0e\x32\".spiderrock.protobuf.ShortSaleFlag\x12\x39\n\rposition_type\x18\x87\x02 \x01(\x0e\x32!.spiderrock.protobuf.PositionType\x12\x39\n\x0bhedge_state\x18s \x01(\x0e\x32$.spiderrock.protobuf.HedgeGroupState\x12\x12\n\nhedge_text\x18v \x01(\t\x12\r\n\x05u_prc\x18y \x01(\x01\x12\x32\n\x0eis_delta_mixed\x18| \x01(\x0e\x32\x1a.spiderrock.protobuf.YesNo\x12\x19\n\x11\x61\x63\x63umulator_error\x18\x7f \x01(\t\x12\x16\n\rgrp_delta_bot\x18\x82\x01 \x01(\x01\x12\x16\n\rgrp_delta_sld\x18\x85\x01 \x01(\x01\x12\x17\n\x0egrp_dDelta_bot\x18\x88\x01 \x01(\x01\x12\x17\n\x0egrp_dDelta_sld\x18\x8b\x01 \x01(\x01\x12\x37\n\x12last_grp_fill_dttm\x18\x8e\x01 \x01(\x0b\x32\x1a.google.protobuf.Timestamp\x12\x17\n\x0e\x63trl_delta_bot\x18\x91\x01 \x01(\x01\x12\x17\n\x0e\x63trl_delta_sld\x18\x94\x01 \x01(\x01\x12\x18\n\x0f\x63trl_dDelta_bot\x18\x97\x01 \x01(\x01\x12\x18\n\x0f\x63trl_dDelta_sld\x18\x9a\x01 \x01(\x01\x12\x38\n\x13last_ctrl_fill_dttm\x18\x9d\x01 \x01(\x0b\x32\x1a.google.protobuf.Timestamp\x12\x13\n\nabs_opt_cn\x18\xa0\x01 \x01(\x05\x12\x12\n\tnet_delta\x18\xa3\x01 \x01(\x01\x12\x13\n\nnet_dDelta\x18\xa6\x01 \x01(\x01\x12\x18\n\x0fopen_hedge_time\x18\xa9\x01 \x01(\x02\x12\x19\n\x10hedge_target_vol\x18\xac\x01 \x01(\x02\x12\x1b\n\x12\x65xpected_prc_range\x18\xaf\x01 \x01(\x02\x12\x16\n\ropn_delta_bot\x18\xb2\x01 \x01(\x01\x12\x16\n\ropn_delta_sld\x18\xb5\x01 \x01(\x01\x12\x17\n\x0eopn_dDelta_bot\x18\xb8\x01 \x01(\x01\x12\x17\n\x0eopn_dDelta_sld\x18\xbb\x01 \x01(\x01\x12\x16\n\rcls_delta_bot\x18\xbe\x01 \x01(\x01\x12\x16\n\rcls_delta_sld\x18\xc1\x01 \x01(\x01\x12\x17\n\x0e\x63ls_dDelta_bot\x18\xc4\x01 \x01(\x01\x12\x17\n\x0e\x63ls_dDelta_sld\x18\xc7\x01 \x01(\x01\x12\x16\n\rslippage_pn_l\x18\xca\x01 \x01(\x02\x12\x1b\n\x12slippage_unit_pn_l\x18\xcd\x01 \x01(\x02\x12\x1b\n\x12slippage_norm_pn_l\x18\xd0\x01 \x01(\x02\x12\x18\n\x0fmin_dDelta_band\x18\xd3\x01 \x01(\x02\x12\x18\n\x0fmax_dDelta_band\x18\xd6\x01 \x01(\x02\x12\x18\n\x0f\x62_parent_number\x18\xd9\x01 \x01(\x03\x12\x16\n\rb_active_size\x18\xdc\x01 \x01(\x05\x12\x16\n\rb_brkr_status\x18\xdf\x01 \x01(\t\x12\x15\n\x0c\x62_brkr_error\x18\xe2\x01 \x01(\t\x12\x18\n\x0fs_parent_number\x18\xe5\x01 \x01(\x03\x12\x16\n\rs_active_size\x18\xe8\x01 \x01(\x05\x12\x16\n\rs_brkr_status\x18\xeb\x01 \x01(\t\x12\x15\n\x0cs_brkr_error\x18\xee\x01 \x01(\t\x12\x10\n\x07\x64\x64_mult\x18\xf1\x01 \x01(\x01\x12\x1a\n\x11underliers_per_cn\x18\xf4\x01 \x01(\x05\x12;\n\x0eunderlier_type\x18\xf7\x01 \x01(\x0e\x32\".spiderrock.protobuf.UnderlierType\x12\x14\n\x0bpoint_value\x18\xfa\x01 \x01(\x01\x12\x36\n\x0epoint_currency\x18\xfd\x01 \x01(\x0e\x32\x1d.spiderrock.protobuf.Currency\x12\x18\n\x0flive_hedge_mark\x18\x80\x02 \x01(\x01\x12\x14\n\x0bupdt_reason\x18\x83\x02 \x01(\t\x12.\n\ttimestamp\x18\x86\x02 \x01(\x0b\x32\x1a.google.protobuf.Timestamp\x1a\xb2\x01\n\x04PKey\x12\r\n\x05\x61\x63\x63nt\x18\n \x01(\t\x12\x15\n\rrisk_group_id\x18\x0b \x01(\x03\x12\x35\n\rhedge_sec_key\x18\x0c \x01(\x0b\x32\x1e.spiderrock.protobuf.ExpiryKey\x12\x38\n\x0ehedge_sec_type\x18\r \x01(\x0e\x32 .spiderrock.protobuf.SpdrKeyType\x12\x13\n\x0b\x63lient_firm\x18\x0e \x01(\tb\x06proto3')

_globals = globals()
_builder.BuildMessageAndEnumDescriptors(DESCRIPTOR, _globals)
_builder.BuildTopDescriptorsAndMessages(DESCRIPTOR, 'ClientTrading.SpdrAutoHedgeState_pb2', _globals)
if _descriptor._USE_C_DESCRIPTORS == False:

  DESCRIPTOR._options = None
  _globals['_SPDRAUTOHEDGESTATE']._serialized_start=122
  _globals['_SPDRAUTOHEDGESTATE']._serialized_end=2082
  _globals['_SPDRAUTOHEDGESTATE_PKEY']._serialized_start=1904
  _globals['_SPDRAUTOHEDGESTATE_PKEY']._serialized_end=2082
# @@protoc_insertion_point(module_scope)