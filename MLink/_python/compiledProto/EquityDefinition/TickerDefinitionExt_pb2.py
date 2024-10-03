# -*- coding: utf-8 -*-
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: EquityDefinition/TickerDefinitionExt.proto
"""Generated protocol buffer code."""
from google.protobuf.internal import builder as _builder
from google.protobuf import descriptor as _descriptor
from google.protobuf import descriptor_pool as _descriptor_pool
from google.protobuf import symbol_database as _symbol_database
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()


import spiderrock_common_pb2 as spiderrock__common__pb2
from google.protobuf import timestamp_pb2 as google_dot_protobuf_dot_timestamp__pb2


DESCRIPTOR = _descriptor_pool.Default().AddSerializedFile(b'\n*EquityDefinition/TickerDefinitionExt.proto\x12\x13spiderrock.protobuf\x1a\x17spiderrock_common.proto\x1a\x1fgoogle/protobuf/timestamp.proto\"\xfc\x0b\n\x13TickerDefinitionExt\x12\x33\n\x05_meta\x18\x01 \x01(\x0b\x32$.spiderrock.protobuf.MessageMetadata\x12;\n\x04pkey\x18\x02 \x01(\x0b\x32-.spiderrock.protobuf.TickerDefinitionExt.PKey\x12\x34\n\x0bsymbol_type\x18\x64 \x01(\x0e\x32\x1f.spiderrock.protobuf.SymbolType\x12\x0c\n\x04name\x18g \x01(\t\x12\x13\n\x0bissuer_name\x18j \x01(\t\x12\x17\n\x0f\x63ntry_of_incorp\x18m \x01(\t\x12\x11\n\tpar_value\x18p \x01(\x02\x12\x1a\n\x12par_value_currency\x18s \x01(\t\x12\x13\n\x0bpoint_value\x18v \x01(\x02\x12\x35\n\x0epoint_currency\x18y \x01(\x0e\x32\x1d.spiderrock.protobuf.Currency\x12:\n\x0cprimary_exch\x18| \x01(\x0e\x32$.spiderrock.protobuf.PrimaryExchange\x12\x0e\n\x06\x61lt_iD\x18\x7f \x01(\x05\x12\x0c\n\x03mic\x18\x82\x01 \x01(\t\x12\x10\n\x07mic_seg\x18\x85\x01 \x01(\t\x12\x0f\n\x06symbol\x18\x88\x01 \x01(\t\x12\x14\n\x0bissue_class\x18\x8b\x01 \x01(\t\x12\x14\n\x0bsecurity_iD\x18\x8e\x01 \x01(\x05\x12\x0c\n\x03sic\x18\x91\x01 \x01(\t\x12\x0c\n\x03\x63ik\x18\x94\x01 \x01(\t\x12\r\n\x04gics\x18\x97\x01 \x01(\t\x12\x0c\n\x03lei\x18\x9a\x01 \x01(\t\x12\x0e\n\x05naics\x18\x9d\x01 \x01(\t\x12\x0c\n\x03\x63\x66i\x18\xa0\x01 \x01(\t\x12\x0c\n\x03\x63ic\x18\xa3\x01 \x01(\t\x12\r\n\x04\x66isn\x18\xa6\x01 \x01(\t\x12\r\n\x04isin\x18\xa9\x01 \x01(\t\x12\x1d\n\x14\x62\x62g_composite_ticker\x18\xac\x01 \x01(\t\x12\x1c\n\x13\x62\x62g_exchange_ticker\x18\xaf\x01 \x01(\t\x12 \n\x17\x62\x62g_composite_global_iD\x18\xb2\x01 \x01(\t\x12\x16\n\rbbg_global_iD\x18\xb5\x01 \x01(\t\x12\x15\n\x0c\x62\x62g_currency\x18\xb8\x01 \x01(\t\x12\x38\n\rstk_price_inc\x18\xbb\x01 \x01(\x0e\x32 .spiderrock.protobuf.StkPriceInc\x12\x13\n\nstk_volume\x18\xbe\x01 \x01(\x02\x12\x13\n\nfut_volume\x18\xc1\x01 \x01(\x02\x12\x13\n\nopt_volume\x18\xc4\x01 \x01(\x02\x12\x14\n\x0b\x65xch_string\x18\xc7\x01 \x01(\t\x12\x30\n\x0bhas_options\x18\xca\x01 \x01(\x0e\x32\x1a.spiderrock.protobuf.YesNo\x12\x14\n\x0bnum_options\x18\xcd\x01 \x01(\x05\x12\x1b\n\x12shares_outstanding\x18\xec\x01 \x01(\x03\x12\x35\n\x0btime_metric\x18\xd3\x01 \x01(\x0e\x32\x1f.spiderrock.protobuf.TimeMetric\x12\x42\n\x12otc_primary_market\x18\xd6\x01 \x01(\x0e\x32%.spiderrock.protobuf.OTCPrimaryMarket\x12/\n\x08otc_tier\x18\xd9\x01 \x01(\x0e\x32\x1c.spiderrock.protobuf.OTCTier\x12\x1d\n\x14otc_reporting_status\x18\xdc\x01 \x01(\t\x12\x1e\n\x15otc_disclosure_status\x18\xdf\x01 \x01(\x05\x12\x12\n\totc_flags\x18\xe2\x01 \x01(\x05\x12\x38\n\rtk_def_source\x18\xe5\x01 \x01(\x0e\x32 .spiderrock.protobuf.TkDefSource\x12\x37\n\x0bstatus_flag\x18\xe8\x01 \x01(\x0e\x32!.spiderrock.protobuf.TkStatusFlag\x12.\n\ttimestamp\x18\xeb\x01 \x01(\x0b\x32\x1a.google.protobuf.Timestamp\x1a\x36\n\x04PKey\x12.\n\x06ticker\x18\n \x01(\x0b\x32\x1e.spiderrock.protobuf.TickerKeyb\x06proto3')

_globals = globals()
_builder.BuildMessageAndEnumDescriptors(DESCRIPTOR, _globals)
_builder.BuildTopDescriptorsAndMessages(DESCRIPTOR, 'EquityDefinition.TickerDefinitionExt_pb2', _globals)
if _descriptor._USE_C_DESCRIPTORS == False:

  DESCRIPTOR._options = None
  _globals['_TICKERDEFINITIONEXT']._serialized_start=126
  _globals['_TICKERDEFINITIONEXT']._serialized_end=1658
  _globals['_TICKERDEFINITIONEXT_PKEY']._serialized_start=1604
  _globals['_TICKERDEFINITIONEXT_PKEY']._serialized_end=1658
# @@protoc_insertion_point(module_scope)
