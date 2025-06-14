# -*- coding: utf-8 -*-
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: OptionDefinition/RootDefinition.proto
"""Generated protocol buffer code."""
from google.protobuf.internal import builder as _builder
from google.protobuf import descriptor as _descriptor
from google.protobuf import descriptor_pool as _descriptor_pool
from google.protobuf import symbol_database as _symbol_database
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()


import spiderrock_common_pb2 as spiderrock__common__pb2
from google.protobuf import timestamp_pb2 as google_dot_protobuf_dot_timestamp__pb2


DESCRIPTOR = _descriptor_pool.Default().AddSerializedFile(b'\n%OptionDefinition/RootDefinition.proto\x12\x13spiderrock.protobuf\x1a\x17spiderrock_common.proto\x1a\x1fgoogle/protobuf/timestamp.proto\"\xb7\x14\n\x0eRootDefinition\x12\x33\n\x05_meta\x18\x01 \x01(\x0b\x32$.spiderrock.protobuf.MessageMetadata\x12\x36\n\x04pkey\x18\x02 \x01(\x0b\x32(.spiderrock.protobuf.RootDefinition.PKey\x12.\n\x06ticker\x18\x64 \x01(\x0b\x32\x1e.spiderrock.protobuf.TickerKey\x12\x10\n\x08osi_root\x18g \x01(\t\x12-\n\x05\x63\x63ode\x18j \x01(\x0b\x32\x1e.spiderrock.protobuf.TickerKey\x12\x38\n\x10u_prc_driver_key\x18m \x01(\x0b\x32\x1e.spiderrock.protobuf.ExpiryKey\x12;\n\x11u_prc_driver_type\x18p \x01(\x0e\x32 .spiderrock.protobuf.SpdrKeyType\x12\x39\n\x11u_prc_driver_key2\x18s \x01(\x0b\x32\x1e.spiderrock.protobuf.ExpiryKey\x12<\n\x12u_prc_driver_type2\x18v \x01(\x0e\x32 .spiderrock.protobuf.SpdrKeyType\x12\x35\n\x11u_prc_bound_cCode\x18y \x01(\x0e\x32\x1a.spiderrock.protobuf.YesNo\x12:\n\x0e\x65xpiration_map\x18| \x01(\x0e\x32\".spiderrock.protobuf.ExpirationMap\x12:\n\x0eunderlier_mode\x18\x7f \x01(\x0e\x32\".spiderrock.protobuf.UnderlierMode\x12\x35\n\x0boption_type\x18\x82\x01 \x01(\x0e\x32\x1f.spiderrock.protobuf.OptionType\x12\x34\n\nmultihedge\x18\x85\x01 \x01(\x0e\x32\x1f.spiderrock.protobuf.Multihedge\x12\x39\n\rexercise_time\x18\x88\x01 \x01(\x0e\x32!.spiderrock.protobuf.ExerciseTime\x12\x39\n\rexercise_type\x18\x8b\x01 \x01(\x0e\x32!.spiderrock.protobuf.ExerciseType\x12\x35\n\x0btime_metric\x18\x8e\x01 \x01(\x0e\x32\x1f.spiderrock.protobuf.TimeMetric\x12;\n\x0etrading_period\x18\xdf\x01 \x01(\x0e\x32\".spiderrock.protobuf.TradingPeriod\x12\x39\n\rpricing_model\x18\x91\x01 \x01(\x0e\x32!.spiderrock.protobuf.PricingModel\x12;\n\x0emoneyness_type\x18\x94\x01 \x01(\x0e\x32\".spiderrock.protobuf.MoneynessType\x12>\n\x10price_quote_type\x18\x97\x01 \x01(\x0e\x32#.spiderrock.protobuf.PriceQuoteType\x12\x35\n\x0bvolume_tier\x18\x9a\x01 \x01(\x0e\x32\x1f.spiderrock.protobuf.VolumeTier\x12\x17\n\x0eposition_limit\x18\x9d\x01 \x01(\x05\x12\x12\n\texchanges\x18\xa0\x01 \x01(\t\x12\x13\n\ntick_value\x18\xa3\x01 \x01(\x02\x12\x14\n\x0bpoint_value\x18\xa6\x01 \x01(\x02\x12\x36\n\x0epoint_currency\x18\xa9\x01 \x01(\x0e\x32\x1d.spiderrock.protobuf.Currency\x12\x15\n\x0cstrike_scale\x18\xac\x01 \x01(\x01\x12\x15\n\x0cstrike_ratio\x18\xaf\x01 \x01(\x02\x12\x19\n\x10\x63\x61sh_on_exercise\x18\xb2\x01 \x01(\x02\x12\x1a\n\x11underliers_per_cn\x18\xb5\x01 \x01(\x05\x12\x15\n\x0cpremium_mult\x18\xb8\x01 \x01(\x01\x12\x15\n\x0csymbol_ratio\x18\xde\x01 \x01(\x02\x12;\n\x0e\x61\x64j_convention\x18\xbb\x01 \x01(\x0e\x32\".spiderrock.protobuf.AdjConvention\x12\x38\n\ropt_price_inc\x18\xbe\x01 \x01(\x0e\x32 .spiderrock.protobuf.OptPriceInc\x12\x37\n\x0cprice_format\x18\xc1\x01 \x01(\x0e\x32 .spiderrock.protobuf.PriceFormat\x12\x16\n\rmin_tick_size\x18\xe2\x01 \x01(\x01\x12\x32\n\ntrade_curr\x18\xc4\x01 \x01(\x0e\x32\x1d.spiderrock.protobuf.Currency\x12\x33\n\x0bsettle_curr\x18\xc7\x01 \x01(\x0e\x32\x1d.spiderrock.protobuf.Currency\x12\x33\n\x0bstrike_curr\x18\xca\x01 \x01(\x0e\x32\x1d.spiderrock.protobuf.Currency\x12=\n\x14\x64\x65\x66\x61ult_surface_root\x18\xcd\x01 \x01(\x0b\x32\x1e.spiderrock.protobuf.TickerKey\x12\x11\n\x08ric_root\x18\xda\x01 \x01(\t\x12\x11\n\x08\x62\x62g_root\x18\xe3\x01 \x01(\t\x12\x32\n\tbbg_group\x18\xe4\x01 \x01(\x0e\x32\x1e.spiderrock.protobuf.YellowKey\x12@\n\x17regional_composite_root\x18\xe1\x01 \x01(\x0b\x32\x1e.spiderrock.protobuf.TickerKey\x12.\n\ttimestamp\x18\xd0\x01 \x01(\x0b\x32\x1a.google.protobuf.Timestamp\x12\x42\n\x12pricing_source__v7\x18\x88\' \x01(\x0e\x32%.spiderrock.protobuf.PricingSource_V7\x12\x15\n\x0cric_code__v7\x18\x89\' \x01(\t\x12?\n\x08\x65xchange\x18\xdb\x01 \x03(\x0b\x32,.spiderrock.protobuf.RootDefinition.Exchange\x12\x43\n\nunderlying\x18\xd3\x01 \x03(\x0b\x32..spiderrock.protobuf.RootDefinition.Underlying\x1a\x34\n\x04PKey\x12,\n\x04root\x18\n \x01(\x0b\x32\x1e.spiderrock.protobuf.TickerKey\x1aj\n\x08\x45xchange\x12/\n\x08opt_exch\x18\xdc\x01 \x01(\x0e\x32\x1c.spiderrock.protobuf.OptExch\x12-\n\x04root\x18\xe0\x01 \x01(\x0b\x32\x1e.spiderrock.protobuf.TickerKey\x1aK\n\nUnderlying\x12/\n\x06ticker\x18\xd6\x01 \x01(\x0b\x32\x1e.spiderrock.protobuf.TickerKey\x12\x0c\n\x03spc\x18\xd9\x01 \x01(\x02\x62\x06proto3')

_globals = globals()
_builder.BuildMessageAndEnumDescriptors(DESCRIPTOR, _globals)
_builder.BuildTopDescriptorsAndMessages(DESCRIPTOR, 'OptionDefinition.RootDefinition_pb2', _globals)
if _descriptor._USE_C_DESCRIPTORS == False:

  DESCRIPTOR._options = None
  _globals['_ROOTDEFINITION']._serialized_start=121
  _globals['_ROOTDEFINITION']._serialized_end=2736
  _globals['_ROOTDEFINITION_PKEY']._serialized_start=2499
  _globals['_ROOTDEFINITION_PKEY']._serialized_end=2551
  _globals['_ROOTDEFINITION_EXCHANGE']._serialized_start=2553
  _globals['_ROOTDEFINITION_EXCHANGE']._serialized_end=2659
  _globals['_ROOTDEFINITION_UNDERLYING']._serialized_start=2661
  _globals['_ROOTDEFINITION_UNDERLYING']._serialized_end=2736
# @@protoc_insertion_point(module_scope)
