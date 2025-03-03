#pragma once

#include <ostream>
#include <sstream>
#include <iomanip>
#include <vector>
#include <cstdio>
#include "MessageMetadataCodec.h"
#include "OptionKeyCodec.h"
#include "ExpiryKeyCodec.h"
#include "TickerKeyCodec.h"
#include "DateKeyCodec.h"
#include "DateTimeCodec.h"
#include "TimeSpanCodec.h"
#include "FieldCodec.h"
#include "LengthCodec.h"
#include "Skipper.h"
#include "spiderrock_common.hpp"
#include "spiderrock_protobuf_base.hpp"
#include "spiderrock_enum.hpp"

namespace spiderrock {
namespace protobuf {
namespace api {

    //declare statements for all types utilized by this message (#ifdef guards protect in case they have been previously defined)

    #ifndef __meta__GUARD__
    #define __meta__GUARD__
    DECL_STRONG_TYPE(_meta, MessageMetadata);
    #endif//__meta__GUARD__

    #ifndef _engine_name__GUARD__
    #define _engine_name__GUARD__
    DECL_STRONG_TYPE(engine_name, string);
    #endif//_engine_name__GUARD__

    #ifndef _parent_number__GUARD__
    #define _parent_number__GUARD__
    DECL_STRONG_TYPE(parent_number, int64);
    #endif//_parent_number__GUARD__

    #ifndef _base_parent_number__GUARD__
    #define _base_parent_number__GUARD__
    DECL_STRONG_TYPE(base_parent_number, int64);
    #endif//_base_parent_number__GUARD__

    #ifndef _modify_number__GUARD__
    #define _modify_number__GUARD__
    DECL_STRONG_TYPE(modify_number, int64);
    #endif//_modify_number__GUARD__

    #ifndef _alt_order_id__GUARD__
    #define _alt_order_id__GUARD__
    DECL_STRONG_TYPE(alt_order_id, string);
    #endif//_alt_order_id__GUARD__

    #ifndef _package_id__GUARD__
    #define _package_id__GUARD__
    DECL_STRONG_TYPE(package_id, int64);
    #endif//_package_id__GUARD__

    #ifndef _alt_accnt__GUARD__
    #define _alt_accnt__GUARD__
    DECL_STRONG_TYPE(alt_accnt, string);
    #endif//_alt_accnt__GUARD__

    #ifndef _alt_user_name__GUARD__
    #define _alt_user_name__GUARD__
    DECL_STRONG_TYPE(alt_user_name, string);
    #endif//_alt_user_name__GUARD__

    #ifndef _stage_type__GUARD__
    #define _stage_type__GUARD__
    DECL_STRONG_TYPE(stage_type, spiderrock::protobuf::api::SpdrStageType);
    #endif//_stage_type__GUARD__

    #ifndef _start_type__GUARD__
    #define _start_type__GUARD__
    DECL_STRONG_TYPE(start_type, spiderrock::protobuf::api::StartType);
    #endif//_start_type__GUARD__

    #ifndef _is_flagged__GUARD__
    #define _is_flagged__GUARD__
    DECL_STRONG_TYPE(is_flagged, spiderrock::protobuf::api::YesNo);
    #endif//_is_flagged__GUARD__

    #ifndef _notice_number__GUARD__
    #define _notice_number__GUARD__
    DECL_STRONG_TYPE(notice_number, int64);
    #endif//_notice_number__GUARD__

    #ifndef _exec_brkr_code__GUARD__
    #define _exec_brkr_code__GUARD__
    DECL_STRONG_TYPE(exec_brkr_code, string);
    #endif//_exec_brkr_code__GUARD__

    #ifndef _spread_class__GUARD__
    #define _spread_class__GUARD__
    DECL_STRONG_TYPE(spread_class, spiderrock::protobuf::api::SpreadClass);
    #endif//_spread_class__GUARD__

    #ifndef _spread_flavor__GUARD__
    #define _spread_flavor__GUARD__
    DECL_STRONG_TYPE(spread_flavor, spiderrock::protobuf::api::SpreadFlavor);
    #endif//_spread_flavor__GUARD__

    #ifndef _stock_side__GUARD__
    #define _stock_side__GUARD__
    DECL_STRONG_TYPE(stock_side, spiderrock::protobuf::api::BuySell);
    #endif//_stock_side__GUARD__

    #ifndef _ssale_flag__GUARD__
    #define _ssale_flag__GUARD__
    DECL_STRONG_TYPE(ssale_flag, spiderrock::protobuf::api::ShortSaleFlag);
    #endif//_ssale_flag__GUARD__

    #ifndef _locate_quan__GUARD__
    #define _locate_quan__GUARD__
    DECL_STRONG_TYPE(locate_quan, int32);
    #endif//_locate_quan__GUARD__

    #ifndef _locate_firm__GUARD__
    #define _locate_firm__GUARD__
    DECL_STRONG_TYPE(locate_firm, string);
    #endif//_locate_firm__GUARD__

    #ifndef _locate_pool__GUARD__
    #define _locate_pool__GUARD__
    DECL_STRONG_TYPE(locate_pool, string);
    #endif//_locate_pool__GUARD__

    #ifndef _stock_shares__GUARD__
    #define _stock_shares__GUARD__
    DECL_STRONG_TYPE(stock_shares, int32);
    #endif//_stock_shares__GUARD__

    #ifndef _stock_leg_id__GUARD__
    #define _stock_leg_id__GUARD__
    DECL_STRONG_TYPE(stock_leg_id, int64);
    #endif//_stock_leg_id__GUARD__

    #ifndef _stock_fill_quan__GUARD__
    #define _stock_fill_quan__GUARD__
    DECL_STRONG_TYPE(stock_fill_quan, int32);
    #endif//_stock_fill_quan__GUARD__

    #ifndef _stock_avg_fill_price__GUARD__
    #define _stock_avg_fill_price__GUARD__
    DECL_STRONG_TYPE(stock_avg_fill_price, double);
    #endif//_stock_avg_fill_price__GUARD__

    #ifndef _ref_uprc__float__GUARD__
    #define _ref_uprc__float__GUARD__
    DECL_STRONG_TYPE(ref_uprc__float, float);
    #endif//_ref_uprc__float__GUARD__

    #ifndef _live_uprc__float__GUARD__
    #define _live_uprc__float__GUARD__
    DECL_STRONG_TYPE(live_uprc__float, float);
    #endif//_live_uprc__float__GUARD__

    #ifndef _u_price_format__GUARD__
    #define _u_price_format__GUARD__
    DECL_STRONG_TYPE(u_price_format, spiderrock::protobuf::api::PriceFormat);
    #endif//_u_price_format__GUARD__

    #ifndef _stock_cpx__GUARD__
    #define _stock_cpx__GUARD__
    DECL_STRONG_TYPE(stock_cpx, float);
    #endif//_stock_cpx__GUARD__

    #ifndef _stock_csz__GUARD__
    #define _stock_csz__GUARD__
    DECL_STRONG_TYPE(stock_csz, int32);
    #endif//_stock_csz__GUARD__

    #ifndef _stock_cex__GUARD__
    #define _stock_cex__GUARD__
    DECL_STRONG_TYPE(stock_cex, uint32);
    #endif//_stock_cex__GUARD__

    #ifndef _num_legs__GUARD__
    #define _num_legs__GUARD__
    DECL_STRONG_TYPE(num_legs, int32);
    #endif//_num_legs__GUARD__

    #ifndef _sec_key1__GUARD__
    #define _sec_key1__GUARD__
    DECL_STRONG_TYPE(sec_key1, OptionKey);
    #endif//_sec_key1__GUARD__

    #ifndef _sec_type1__GUARD__
    #define _sec_type1__GUARD__
    DECL_STRONG_TYPE(sec_type1, spiderrock::protobuf::api::SpdrKeyType);
    #endif//_sec_type1__GUARD__

    #ifndef _ratio1__GUARD__
    #define _ratio1__GUARD__
    DECL_STRONG_TYPE(ratio1, uint32);
    #endif//_ratio1__GUARD__

    #ifndef _side1__GUARD__
    #define _side1__GUARD__
    DECL_STRONG_TYPE(side1, spiderrock::protobuf::api::BuySell);
    #endif//_side1__GUARD__

    #ifndef _position_type1__GUARD__
    #define _position_type1__GUARD__
    DECL_STRONG_TYPE(position_type1, spiderrock::protobuf::api::PositionType);
    #endif//_position_type1__GUARD__

    #ifndef _leg_id1__GUARD__
    #define _leg_id1__GUARD__
    DECL_STRONG_TYPE(leg_id1, int64);
    #endif//_leg_id1__GUARD__

    #ifndef _fill_quan1__GUARD__
    #define _fill_quan1__GUARD__
    DECL_STRONG_TYPE(fill_quan1, int32);
    #endif//_fill_quan1__GUARD__

    #ifndef _avg_fill_price1__GUARD__
    #define _avg_fill_price1__GUARD__
    DECL_STRONG_TYPE(avg_fill_price1, double);
    #endif//_avg_fill_price1__GUARD__

    #ifndef _vega1__GUARD__
    #define _vega1__GUARD__
    DECL_STRONG_TYPE(vega1, float);
    #endif//_vega1__GUARD__

    #ifndef _ref_uprc1__GUARD__
    #define _ref_uprc1__GUARD__
    DECL_STRONG_TYPE(ref_uprc1, double);
    #endif//_ref_uprc1__GUARD__

    #ifndef _ref_delta1__GUARD__
    #define _ref_delta1__GUARD__
    DECL_STRONG_TYPE(ref_delta1, float);
    #endif//_ref_delta1__GUARD__

    #ifndef _ref_earn_cnt1__GUARD__
    #define _ref_earn_cnt1__GUARD__
    DECL_STRONG_TYPE(ref_earn_cnt1, int32);
    #endif//_ref_earn_cnt1__GUARD__

    #ifndef _live_uprc1__GUARD__
    #define _live_uprc1__GUARD__
    DECL_STRONG_TYPE(live_uprc1, double);
    #endif//_live_uprc1__GUARD__

    #ifndef _price_format1__GUARD__
    #define _price_format1__GUARD__
    DECL_STRONG_TYPE(price_format1, spiderrock::protobuf::api::PriceFormat);
    #endif//_price_format1__GUARD__

    #ifndef _leg_cpx1__GUARD__
    #define _leg_cpx1__GUARD__
    DECL_STRONG_TYPE(leg_cpx1, float);
    #endif//_leg_cpx1__GUARD__

    #ifndef _leg_csz1__GUARD__
    #define _leg_csz1__GUARD__
    DECL_STRONG_TYPE(leg_csz1, int32);
    #endif//_leg_csz1__GUARD__

    #ifndef _leg_cex1__GUARD__
    #define _leg_cex1__GUARD__
    DECL_STRONG_TYPE(leg_cex1, uint32);
    #endif//_leg_cex1__GUARD__

    #ifndef _sec_key2__GUARD__
    #define _sec_key2__GUARD__
    DECL_STRONG_TYPE(sec_key2, OptionKey);
    #endif//_sec_key2__GUARD__

    #ifndef _sec_type2__GUARD__
    #define _sec_type2__GUARD__
    DECL_STRONG_TYPE(sec_type2, spiderrock::protobuf::api::SpdrKeyType);
    #endif//_sec_type2__GUARD__

    #ifndef _ratio2__GUARD__
    #define _ratio2__GUARD__
    DECL_STRONG_TYPE(ratio2, uint32);
    #endif//_ratio2__GUARD__

    #ifndef _side2__GUARD__
    #define _side2__GUARD__
    DECL_STRONG_TYPE(side2, spiderrock::protobuf::api::BuySell);
    #endif//_side2__GUARD__

    #ifndef _position_type2__GUARD__
    #define _position_type2__GUARD__
    DECL_STRONG_TYPE(position_type2, spiderrock::protobuf::api::PositionType);
    #endif//_position_type2__GUARD__

    #ifndef _leg_id2__GUARD__
    #define _leg_id2__GUARD__
    DECL_STRONG_TYPE(leg_id2, int64);
    #endif//_leg_id2__GUARD__

    #ifndef _fill_quan2__GUARD__
    #define _fill_quan2__GUARD__
    DECL_STRONG_TYPE(fill_quan2, int32);
    #endif//_fill_quan2__GUARD__

    #ifndef _avg_fill_price2__GUARD__
    #define _avg_fill_price2__GUARD__
    DECL_STRONG_TYPE(avg_fill_price2, double);
    #endif//_avg_fill_price2__GUARD__

    #ifndef _vega2__GUARD__
    #define _vega2__GUARD__
    DECL_STRONG_TYPE(vega2, float);
    #endif//_vega2__GUARD__

    #ifndef _ref_uprc2__GUARD__
    #define _ref_uprc2__GUARD__
    DECL_STRONG_TYPE(ref_uprc2, double);
    #endif//_ref_uprc2__GUARD__

    #ifndef _ref_delta2__GUARD__
    #define _ref_delta2__GUARD__
    DECL_STRONG_TYPE(ref_delta2, float);
    #endif//_ref_delta2__GUARD__

    #ifndef _ref_earn_cnt2__GUARD__
    #define _ref_earn_cnt2__GUARD__
    DECL_STRONG_TYPE(ref_earn_cnt2, int32);
    #endif//_ref_earn_cnt2__GUARD__

    #ifndef _live_uprc2__GUARD__
    #define _live_uprc2__GUARD__
    DECL_STRONG_TYPE(live_uprc2, double);
    #endif//_live_uprc2__GUARD__

    #ifndef _price_format2__GUARD__
    #define _price_format2__GUARD__
    DECL_STRONG_TYPE(price_format2, spiderrock::protobuf::api::PriceFormat);
    #endif//_price_format2__GUARD__

    #ifndef _leg_cpx2__GUARD__
    #define _leg_cpx2__GUARD__
    DECL_STRONG_TYPE(leg_cpx2, float);
    #endif//_leg_cpx2__GUARD__

    #ifndef _leg_csz2__GUARD__
    #define _leg_csz2__GUARD__
    DECL_STRONG_TYPE(leg_csz2, int32);
    #endif//_leg_csz2__GUARD__

    #ifndef _leg_cex2__GUARD__
    #define _leg_cex2__GUARD__
    DECL_STRONG_TYPE(leg_cex2, uint32);
    #endif//_leg_cex2__GUARD__

    #ifndef _sec_key3__GUARD__
    #define _sec_key3__GUARD__
    DECL_STRONG_TYPE(sec_key3, OptionKey);
    #endif//_sec_key3__GUARD__

    #ifndef _sec_type3__GUARD__
    #define _sec_type3__GUARD__
    DECL_STRONG_TYPE(sec_type3, spiderrock::protobuf::api::SpdrKeyType);
    #endif//_sec_type3__GUARD__

    #ifndef _ratio3__GUARD__
    #define _ratio3__GUARD__
    DECL_STRONG_TYPE(ratio3, uint32);
    #endif//_ratio3__GUARD__

    #ifndef _side3__GUARD__
    #define _side3__GUARD__
    DECL_STRONG_TYPE(side3, spiderrock::protobuf::api::BuySell);
    #endif//_side3__GUARD__

    #ifndef _position_type3__GUARD__
    #define _position_type3__GUARD__
    DECL_STRONG_TYPE(position_type3, spiderrock::protobuf::api::PositionType);
    #endif//_position_type3__GUARD__

    #ifndef _leg_id3__GUARD__
    #define _leg_id3__GUARD__
    DECL_STRONG_TYPE(leg_id3, int64);
    #endif//_leg_id3__GUARD__

    #ifndef _fill_quan3__GUARD__
    #define _fill_quan3__GUARD__
    DECL_STRONG_TYPE(fill_quan3, int32);
    #endif//_fill_quan3__GUARD__

    #ifndef _avg_fill_price3__GUARD__
    #define _avg_fill_price3__GUARD__
    DECL_STRONG_TYPE(avg_fill_price3, double);
    #endif//_avg_fill_price3__GUARD__

    #ifndef _vega3__GUARD__
    #define _vega3__GUARD__
    DECL_STRONG_TYPE(vega3, float);
    #endif//_vega3__GUARD__

    #ifndef _ref_uprc3__GUARD__
    #define _ref_uprc3__GUARD__
    DECL_STRONG_TYPE(ref_uprc3, double);
    #endif//_ref_uprc3__GUARD__

    #ifndef _ref_delta3__GUARD__
    #define _ref_delta3__GUARD__
    DECL_STRONG_TYPE(ref_delta3, float);
    #endif//_ref_delta3__GUARD__

    #ifndef _ref_earn_cnt3__GUARD__
    #define _ref_earn_cnt3__GUARD__
    DECL_STRONG_TYPE(ref_earn_cnt3, int32);
    #endif//_ref_earn_cnt3__GUARD__

    #ifndef _live_uprc3__GUARD__
    #define _live_uprc3__GUARD__
    DECL_STRONG_TYPE(live_uprc3, double);
    #endif//_live_uprc3__GUARD__

    #ifndef _price_format3__GUARD__
    #define _price_format3__GUARD__
    DECL_STRONG_TYPE(price_format3, spiderrock::protobuf::api::PriceFormat);
    #endif//_price_format3__GUARD__

    #ifndef _leg_cpx3__GUARD__
    #define _leg_cpx3__GUARD__
    DECL_STRONG_TYPE(leg_cpx3, float);
    #endif//_leg_cpx3__GUARD__

    #ifndef _leg_csz3__GUARD__
    #define _leg_csz3__GUARD__
    DECL_STRONG_TYPE(leg_csz3, int32);
    #endif//_leg_csz3__GUARD__

    #ifndef _leg_cex3__GUARD__
    #define _leg_cex3__GUARD__
    DECL_STRONG_TYPE(leg_cex3, uint32);
    #endif//_leg_cex3__GUARD__

    #ifndef _sec_key4__GUARD__
    #define _sec_key4__GUARD__
    DECL_STRONG_TYPE(sec_key4, OptionKey);
    #endif//_sec_key4__GUARD__

    #ifndef _sec_type4__GUARD__
    #define _sec_type4__GUARD__
    DECL_STRONG_TYPE(sec_type4, spiderrock::protobuf::api::SpdrKeyType);
    #endif//_sec_type4__GUARD__

    #ifndef _ratio4__GUARD__
    #define _ratio4__GUARD__
    DECL_STRONG_TYPE(ratio4, uint32);
    #endif//_ratio4__GUARD__

    #ifndef _side4__GUARD__
    #define _side4__GUARD__
    DECL_STRONG_TYPE(side4, spiderrock::protobuf::api::BuySell);
    #endif//_side4__GUARD__

    #ifndef _position_type4__GUARD__
    #define _position_type4__GUARD__
    DECL_STRONG_TYPE(position_type4, spiderrock::protobuf::api::PositionType);
    #endif//_position_type4__GUARD__

    #ifndef _leg_id4__GUARD__
    #define _leg_id4__GUARD__
    DECL_STRONG_TYPE(leg_id4, int64);
    #endif//_leg_id4__GUARD__

    #ifndef _fill_quan4__GUARD__
    #define _fill_quan4__GUARD__
    DECL_STRONG_TYPE(fill_quan4, int32);
    #endif//_fill_quan4__GUARD__

    #ifndef _avg_fill_price4__GUARD__
    #define _avg_fill_price4__GUARD__
    DECL_STRONG_TYPE(avg_fill_price4, double);
    #endif//_avg_fill_price4__GUARD__

    #ifndef _vega4__GUARD__
    #define _vega4__GUARD__
    DECL_STRONG_TYPE(vega4, float);
    #endif//_vega4__GUARD__

    #ifndef _ref_uprc4__GUARD__
    #define _ref_uprc4__GUARD__
    DECL_STRONG_TYPE(ref_uprc4, double);
    #endif//_ref_uprc4__GUARD__

    #ifndef _ref_delta4__GUARD__
    #define _ref_delta4__GUARD__
    DECL_STRONG_TYPE(ref_delta4, float);
    #endif//_ref_delta4__GUARD__

    #ifndef _ref_earn_cnt4__GUARD__
    #define _ref_earn_cnt4__GUARD__
    DECL_STRONG_TYPE(ref_earn_cnt4, int32);
    #endif//_ref_earn_cnt4__GUARD__

    #ifndef _live_uprc4__GUARD__
    #define _live_uprc4__GUARD__
    DECL_STRONG_TYPE(live_uprc4, double);
    #endif//_live_uprc4__GUARD__

    #ifndef _price_format4__GUARD__
    #define _price_format4__GUARD__
    DECL_STRONG_TYPE(price_format4, spiderrock::protobuf::api::PriceFormat);
    #endif//_price_format4__GUARD__

    #ifndef _leg_cpx4__GUARD__
    #define _leg_cpx4__GUARD__
    DECL_STRONG_TYPE(leg_cpx4, float);
    #endif//_leg_cpx4__GUARD__

    #ifndef _leg_csz4__GUARD__
    #define _leg_csz4__GUARD__
    DECL_STRONG_TYPE(leg_csz4, int32);
    #endif//_leg_csz4__GUARD__

    #ifndef _leg_cex4__GUARD__
    #define _leg_cex4__GUARD__
    DECL_STRONG_TYPE(leg_cex4, uint32);
    #endif//_leg_cex4__GUARD__

    #ifndef _sec_key5__GUARD__
    #define _sec_key5__GUARD__
    DECL_STRONG_TYPE(sec_key5, OptionKey);
    #endif//_sec_key5__GUARD__

    #ifndef _sec_type5__GUARD__
    #define _sec_type5__GUARD__
    DECL_STRONG_TYPE(sec_type5, spiderrock::protobuf::api::SpdrKeyType);
    #endif//_sec_type5__GUARD__

    #ifndef _ratio5__GUARD__
    #define _ratio5__GUARD__
    DECL_STRONG_TYPE(ratio5, uint32);
    #endif//_ratio5__GUARD__

    #ifndef _side5__GUARD__
    #define _side5__GUARD__
    DECL_STRONG_TYPE(side5, spiderrock::protobuf::api::BuySell);
    #endif//_side5__GUARD__

    #ifndef _position_type5__GUARD__
    #define _position_type5__GUARD__
    DECL_STRONG_TYPE(position_type5, spiderrock::protobuf::api::PositionType);
    #endif//_position_type5__GUARD__

    #ifndef _leg_id5__GUARD__
    #define _leg_id5__GUARD__
    DECL_STRONG_TYPE(leg_id5, int64);
    #endif//_leg_id5__GUARD__

    #ifndef _fill_quan5__GUARD__
    #define _fill_quan5__GUARD__
    DECL_STRONG_TYPE(fill_quan5, int32);
    #endif//_fill_quan5__GUARD__

    #ifndef _avg_fill_price5__GUARD__
    #define _avg_fill_price5__GUARD__
    DECL_STRONG_TYPE(avg_fill_price5, double);
    #endif//_avg_fill_price5__GUARD__

    #ifndef _vega5__GUARD__
    #define _vega5__GUARD__
    DECL_STRONG_TYPE(vega5, float);
    #endif//_vega5__GUARD__

    #ifndef _ref_uprc5__GUARD__
    #define _ref_uprc5__GUARD__
    DECL_STRONG_TYPE(ref_uprc5, double);
    #endif//_ref_uprc5__GUARD__

    #ifndef _ref_delta5__GUARD__
    #define _ref_delta5__GUARD__
    DECL_STRONG_TYPE(ref_delta5, float);
    #endif//_ref_delta5__GUARD__

    #ifndef _ref_earn_cnt5__GUARD__
    #define _ref_earn_cnt5__GUARD__
    DECL_STRONG_TYPE(ref_earn_cnt5, int32);
    #endif//_ref_earn_cnt5__GUARD__

    #ifndef _live_uprc5__GUARD__
    #define _live_uprc5__GUARD__
    DECL_STRONG_TYPE(live_uprc5, double);
    #endif//_live_uprc5__GUARD__

    #ifndef _price_format5__GUARD__
    #define _price_format5__GUARD__
    DECL_STRONG_TYPE(price_format5, spiderrock::protobuf::api::PriceFormat);
    #endif//_price_format5__GUARD__

    #ifndef _leg_cpx5__GUARD__
    #define _leg_cpx5__GUARD__
    DECL_STRONG_TYPE(leg_cpx5, float);
    #endif//_leg_cpx5__GUARD__

    #ifndef _leg_csz5__GUARD__
    #define _leg_csz5__GUARD__
    DECL_STRONG_TYPE(leg_csz5, int32);
    #endif//_leg_csz5__GUARD__

    #ifndef _leg_cex5__GUARD__
    #define _leg_cex5__GUARD__
    DECL_STRONG_TYPE(leg_cex5, uint32);
    #endif//_leg_cex5__GUARD__

    #ifndef _sec_key6__GUARD__
    #define _sec_key6__GUARD__
    DECL_STRONG_TYPE(sec_key6, OptionKey);
    #endif//_sec_key6__GUARD__

    #ifndef _sec_type6__GUARD__
    #define _sec_type6__GUARD__
    DECL_STRONG_TYPE(sec_type6, spiderrock::protobuf::api::SpdrKeyType);
    #endif//_sec_type6__GUARD__

    #ifndef _ratio6__GUARD__
    #define _ratio6__GUARD__
    DECL_STRONG_TYPE(ratio6, uint32);
    #endif//_ratio6__GUARD__

    #ifndef _side6__GUARD__
    #define _side6__GUARD__
    DECL_STRONG_TYPE(side6, spiderrock::protobuf::api::BuySell);
    #endif//_side6__GUARD__

    #ifndef _position_type6__GUARD__
    #define _position_type6__GUARD__
    DECL_STRONG_TYPE(position_type6, spiderrock::protobuf::api::PositionType);
    #endif//_position_type6__GUARD__

    #ifndef _leg_id6__GUARD__
    #define _leg_id6__GUARD__
    DECL_STRONG_TYPE(leg_id6, int64);
    #endif//_leg_id6__GUARD__

    #ifndef _fill_quan6__GUARD__
    #define _fill_quan6__GUARD__
    DECL_STRONG_TYPE(fill_quan6, int32);
    #endif//_fill_quan6__GUARD__

    #ifndef _avg_fill_price6__GUARD__
    #define _avg_fill_price6__GUARD__
    DECL_STRONG_TYPE(avg_fill_price6, double);
    #endif//_avg_fill_price6__GUARD__

    #ifndef _vega6__GUARD__
    #define _vega6__GUARD__
    DECL_STRONG_TYPE(vega6, float);
    #endif//_vega6__GUARD__

    #ifndef _ref_uprc6__GUARD__
    #define _ref_uprc6__GUARD__
    DECL_STRONG_TYPE(ref_uprc6, double);
    #endif//_ref_uprc6__GUARD__

    #ifndef _ref_delta6__GUARD__
    #define _ref_delta6__GUARD__
    DECL_STRONG_TYPE(ref_delta6, float);
    #endif//_ref_delta6__GUARD__

    #ifndef _ref_earn_cnt6__GUARD__
    #define _ref_earn_cnt6__GUARD__
    DECL_STRONG_TYPE(ref_earn_cnt6, int32);
    #endif//_ref_earn_cnt6__GUARD__

    #ifndef _live_uprc6__GUARD__
    #define _live_uprc6__GUARD__
    DECL_STRONG_TYPE(live_uprc6, double);
    #endif//_live_uprc6__GUARD__

    #ifndef _price_format6__GUARD__
    #define _price_format6__GUARD__
    DECL_STRONG_TYPE(price_format6, spiderrock::protobuf::api::PriceFormat);
    #endif//_price_format6__GUARD__

    #ifndef _leg_cpx6__GUARD__
    #define _leg_cpx6__GUARD__
    DECL_STRONG_TYPE(leg_cpx6, float);
    #endif//_leg_cpx6__GUARD__

    #ifndef _leg_csz6__GUARD__
    #define _leg_csz6__GUARD__
    DECL_STRONG_TYPE(leg_csz6, int32);
    #endif//_leg_csz6__GUARD__

    #ifndef _leg_cex6__GUARD__
    #define _leg_cex6__GUARD__
    DECL_STRONG_TYPE(leg_cex6, uint32);
    #endif//_leg_cex6__GUARD__

    #ifndef _mleg_vega__GUARD__
    #define _mleg_vega__GUARD__
    DECL_STRONG_TYPE(mleg_vega, float);
    #endif//_mleg_vega__GUARD__

    #ifndef _mleg_wt_vega__GUARD__
    #define _mleg_wt_vega__GUARD__
    DECL_STRONG_TYPE(mleg_wt_vega, float);
    #endif//_mleg_wt_vega__GUARD__

    #ifndef _mleg_delta__GUARD__
    #define _mleg_delta__GUARD__
    DECL_STRONG_TYPE(mleg_delta, float);
    #endif//_mleg_delta__GUARD__

    #ifndef _mleg_gamma__GUARD__
    #define _mleg_gamma__GUARD__
    DECL_STRONG_TYPE(mleg_gamma, float);
    #endif//_mleg_gamma__GUARD__

    #ifndef _mleg_theta__GUARD__
    #define _mleg_theta__GUARD__
    DECL_STRONG_TYPE(mleg_theta, float);
    #endif//_mleg_theta__GUARD__

    #ifndef _description__GUARD__
    #define _description__GUARD__
    DECL_STRONG_TYPE(description, string);
    #endif//_description__GUARD__

    #ifndef _order_size__GUARD__
    #define _order_size__GUARD__
    DECL_STRONG_TYPE(order_size, int32);
    #endif//_order_size__GUARD__

    #ifndef _order_active_size__GUARD__
    #define _order_active_size__GUARD__
    DECL_STRONG_TYPE(order_active_size, int32);
    #endif//_order_active_size__GUARD__

    #ifndef _leaves_quantity__GUARD__
    #define _leaves_quantity__GUARD__
    DECL_STRONG_TYPE(leaves_quantity, int32);
    #endif//_leaves_quantity__GUARD__

    #ifndef _spdr_order_status__GUARD__
    #define _spdr_order_status__GUARD__
    DECL_STRONG_TYPE(spdr_order_status, spiderrock::protobuf::api::SpdrOrderStatus);
    #endif//_spdr_order_status__GUARD__

    #ifndef _spdr_close_reason__GUARD__
    #define _spdr_close_reason__GUARD__
    DECL_STRONG_TYPE(spdr_close_reason, spiderrock::protobuf::api::SpdrCloseReason);
    #endif//_spdr_close_reason__GUARD__

    #ifndef _spdr_reject_reason__GUARD__
    #define _spdr_reject_reason__GUARD__
    DECL_STRONG_TYPE(spdr_reject_reason, spiderrock::protobuf::api::SpdrRejectReason);
    #endif//_spdr_reject_reason__GUARD__

    #ifndef _spdr_close_detail_txt__GUARD__
    #define _spdr_close_detail_txt__GUARD__
    DECL_STRONG_TYPE(spdr_close_detail_txt, string);
    #endif//_spdr_close_detail_txt__GUARD__

    #ifndef _open_legs__GUARD__
    #define _open_legs__GUARD__
    DECL_STRONG_TYPE(open_legs, int32);
    #endif//_open_legs__GUARD__

    #ifndef _cum_square_qty__GUARD__
    #define _cum_square_qty__GUARD__
    DECL_STRONG_TYPE(cum_square_qty, int32);
    #endif//_cum_square_qty__GUARD__

    #ifndef _avg_square_prc__GUARD__
    #define _avg_square_prc__GUARD__
    DECL_STRONG_TYPE(avg_square_prc, double);
    #endif//_avg_square_prc__GUARD__

    #ifndef _cum_partial_qty__GUARD__
    #define _cum_partial_qty__GUARD__
    DECL_STRONG_TYPE(cum_partial_qty, int32);
    #endif//_cum_partial_qty__GUARD__

    #ifndef _fill_vega__GUARD__
    #define _fill_vega__GUARD__
    DECL_STRONG_TYPE(fill_vega, float);
    #endif//_fill_vega__GUARD__

    #ifndef _fill_wt_vega__GUARD__
    #define _fill_wt_vega__GUARD__
    DECL_STRONG_TYPE(fill_wt_vega, float);
    #endif//_fill_wt_vega__GUARD__

    #ifndef _fill_delta__GUARD__
    #define _fill_delta__GUARD__
    DECL_STRONG_TYPE(fill_delta, float);
    #endif//_fill_delta__GUARD__

    #ifndef _fill_ddelta__GUARD__
    #define _fill_ddelta__GUARD__
    DECL_STRONG_TYPE(fill_ddelta, float);
    #endif//_fill_ddelta__GUARD__

    #ifndef _fill_gamma__GUARD__
    #define _fill_gamma__GUARD__
    DECL_STRONG_TYPE(fill_gamma, float);
    #endif//_fill_gamma__GUARD__

    #ifndef _fill_theta__GUARD__
    #define _fill_theta__GUARD__
    DECL_STRONG_TYPE(fill_theta, float);
    #endif//_fill_theta__GUARD__

    #ifndef _last_fill_dttm__GUARD__
    #define _last_fill_dttm__GUARD__
    DECL_STRONG_TYPE(last_fill_dttm, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_last_fill_dttm__GUARD__

    #ifndef _risk_limit_size__GUARD__
    #define _risk_limit_size__GUARD__
    DECL_STRONG_TYPE(risk_limit_size, int32);
    #endif//_risk_limit_size__GUARD__

    #ifndef _risk_limit_desc__GUARD__
    #define _risk_limit_desc__GUARD__
    DECL_STRONG_TYPE(risk_limit_desc, spiderrock::protobuf::api::SpdrRisk);
    #endif//_risk_limit_desc__GUARD__

    #ifndef _risk_limit_level__GUARD__
    #define _risk_limit_level__GUARD__
    DECL_STRONG_TYPE(risk_limit_level, spiderrock::protobuf::api::SpdrRiskLevel);
    #endif//_risk_limit_level__GUARD__

    #ifndef _max_progress__GUARD__
    #define _max_progress__GUARD__
    DECL_STRONG_TYPE(max_progress, spiderrock::protobuf::api::MaxProgress);
    #endif//_max_progress__GUARD__

    #ifndef _max_progress_detail__GUARD__
    #define _max_progress_detail__GUARD__
    DECL_STRONG_TYPE(max_progress_detail, string);
    #endif//_max_progress_detail__GUARD__

    #ifndef _max_progress_time__GUARD__
    #define _max_progress_time__GUARD__
    DECL_STRONG_TYPE(max_progress_time, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_max_progress_time__GUARD__

    #ifndef _algo_state__GUARD__
    #define _algo_state__GUARD__
    DECL_STRONG_TYPE(algo_state, spiderrock::protobuf::api::AlgoState);
    #endif//_algo_state__GUARD__

    #ifndef _algo_counter__GUARD__
    #define _algo_counter__GUARD__
    DECL_STRONG_TYPE(algo_counter, int32);
    #endif//_algo_counter__GUARD__

    #ifndef _make_state__GUARD__
    #define _make_state__GUARD__
    DECL_STRONG_TYPE(make_state, spiderrock::protobuf::api::AlgoState);
    #endif//_make_state__GUARD__

    #ifndef _make_counter__GUARD__
    #define _make_counter__GUARD__
    DECL_STRONG_TYPE(make_counter, int32);
    #endif//_make_counter__GUARD__

    #ifndef _mkt_resp_state__GUARD__
    #define _mkt_resp_state__GUARD__
    DECL_STRONG_TYPE(mkt_resp_state, spiderrock::protobuf::api::MktRespState);
    #endif//_mkt_resp_state__GUARD__

    #ifndef _mkt_resp_counter__GUARD__
    #define _mkt_resp_counter__GUARD__
    DECL_STRONG_TYPE(mkt_resp_counter, int32);
    #endif//_mkt_resp_counter__GUARD__

    #ifndef _broker_state__GUARD__
    #define _broker_state__GUARD__
    DECL_STRONG_TYPE(broker_state, spiderrock::protobuf::api::BrokerState);
    #endif//_broker_state__GUARD__

    #ifndef _broker_counter__GUARD__
    #define _broker_counter__GUARD__
    DECL_STRONG_TYPE(broker_counter, int32);
    #endif//_broker_counter__GUARD__

    #ifndef _spdr_mkt_state__GUARD__
    #define _spdr_mkt_state__GUARD__
    DECL_STRONG_TYPE(spdr_mkt_state, spiderrock::protobuf::api::SpdrMarketState);
    #endif//_spdr_mkt_state__GUARD__

    #ifndef _spdr_broker_status__GUARD__
    #define _spdr_broker_status__GUARD__
    DECL_STRONG_TYPE(spdr_broker_status, spiderrock::protobuf::api::SpdrBrokerStatus);
    #endif//_spdr_broker_status__GUARD__

    #ifndef _progress_rule_detail__GUARD__
    #define _progress_rule_detail__GUARD__
    DECL_STRONG_TYPE(progress_rule_detail, string);
    #endif//_progress_rule_detail__GUARD__

    #ifndef _last_child_reject_dttm__GUARD__
    #define _last_child_reject_dttm__GUARD__
    DECL_STRONG_TYPE(last_child_reject_dttm, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_last_child_reject_dttm__GUARD__

    #ifndef _last_child_reject_text__GUARD__
    #define _last_child_reject_text__GUARD__
    DECL_STRONG_TYPE(last_child_reject_text, string);
    #endif//_last_child_reject_text__GUARD__

    #ifndef _risk_group_id__GUARD__
    #define _risk_group_id__GUARD__
    DECL_STRONG_TYPE(risk_group_id, int64);
    #endif//_risk_group_id__GUARD__

    #ifndef _trigger_group_id__GUARD__
    #define _trigger_group_id__GUARD__
    DECL_STRONG_TYPE(trigger_group_id, int64);
    #endif//_trigger_group_id__GUARD__

    #ifndef _hedge_grouping_code__GUARD__
    #define _hedge_grouping_code__GUARD__
    DECL_STRONG_TYPE(hedge_grouping_code, int64);
    #endif//_hedge_grouping_code__GUARD__

    #ifndef _auto_hedge__GUARD__
    #define _auto_hedge__GUARD__
    DECL_STRONG_TYPE(auto_hedge, spiderrock::protobuf::api::AutoHedge);
    #endif//_auto_hedge__GUARD__

    #ifndef _hedge_instrument__GUARD__
    #define _hedge_instrument__GUARD__
    DECL_STRONG_TYPE(hedge_instrument, spiderrock::protobuf::api::HedgeInst);
    #endif//_hedge_instrument__GUARD__

    #ifndef _hedge_sec_key__GUARD__
    #define _hedge_sec_key__GUARD__
    DECL_STRONG_TYPE(hedge_sec_key, ExpiryKey);
    #endif//_hedge_sec_key__GUARD__

    #ifndef _hedge_sec_type__GUARD__
    #define _hedge_sec_type__GUARD__
    DECL_STRONG_TYPE(hedge_sec_type, spiderrock::protobuf::api::SpdrKeyType);
    #endif//_hedge_sec_type__GUARD__

    #ifndef _hedge_beta_ratio__GUARD__
    #define _hedge_beta_ratio__GUARD__
    DECL_STRONG_TYPE(hedge_beta_ratio, float);
    #endif//_hedge_beta_ratio__GUARD__

    #ifndef _hedge_scope__GUARD__
    #define _hedge_scope__GUARD__
    DECL_STRONG_TYPE(hedge_scope, spiderrock::protobuf::api::HedgeScope);
    #endif//_hedge_scope__GUARD__

    #ifndef _extern_hedge_ex_dest__GUARD__
    #define _extern_hedge_ex_dest__GUARD__
    DECL_STRONG_TYPE(extern_hedge_ex_dest, string);
    #endif//_extern_hedge_ex_dest__GUARD__

    #ifndef _extern_hedge_params__GUARD__
    #define _extern_hedge_params__GUARD__
    DECL_STRONG_TYPE(extern_hedge_params, string);
    #endif//_extern_hedge_params__GUARD__

    #ifndef _best_way_prc__GUARD__
    #define _best_way_prc__GUARD__
    DECL_STRONG_TYPE(best_way_prc, float);
    #endif//_best_way_prc__GUARD__

    #ifndef _wrst_way_prc__GUARD__
    #define _wrst_way_prc__GUARD__
    DECL_STRONG_TYPE(wrst_way_prc, float);
    #endif//_wrst_way_prc__GUARD__

    #ifndef _best_way_sz__GUARD__
    #define _best_way_sz__GUARD__
    DECL_STRONG_TYPE(best_way_sz, int32);
    #endif//_best_way_sz__GUARD__

    #ifndef _wrst_way_sz__GUARD__
    #define _wrst_way_sz__GUARD__
    DECL_STRONG_TYPE(wrst_way_sz, int32);
    #endif//_wrst_way_sz__GUARD__

    #ifndef _surface_prc__GUARD__
    #define _surface_prc__GUARD__
    DECL_STRONG_TYPE(surface_prc, float);
    #endif//_surface_prc__GUARD__

    #ifndef _surface_vol__GUARD__
    #define _surface_vol__GUARD__
    DECL_STRONG_TYPE(surface_vol, float);
    #endif//_surface_vol__GUARD__

    #ifndef _surface_uprc__GUARD__
    #define _surface_uprc__GUARD__
    DECL_STRONG_TYPE(surface_uprc, float);
    #endif//_surface_uprc__GUARD__

    #ifndef _limit_price__GUARD__
    #define _limit_price__GUARD__
    DECL_STRONG_TYPE(limit_price, double);
    #endif//_limit_price__GUARD__

    #ifndef _limit_ref_uprc__GUARD__
    #define _limit_ref_uprc__GUARD__
    DECL_STRONG_TYPE(limit_ref_uprc, double);
    #endif//_limit_ref_uprc__GUARD__

    #ifndef _limit_err__GUARD__
    #define _limit_err__GUARD__
    DECL_STRONG_TYPE(limit_err, spiderrock::protobuf::api::LimitError);
    #endif//_limit_err__GUARD__

    #ifndef _make_limit_price__GUARD__
    #define _make_limit_price__GUARD__
    DECL_STRONG_TYPE(make_limit_price, double);
    #endif//_make_limit_price__GUARD__

    #ifndef _take_limit_price__GUARD__
    #define _take_limit_price__GUARD__
    DECL_STRONG_TYPE(take_limit_price, double);
    #endif//_take_limit_price__GUARD__

    #ifndef _cxl_uprc_range__GUARD__
    #define _cxl_uprc_range__GUARD__
    DECL_STRONG_TYPE(cxl_uprc_range, spiderrock::protobuf::api::UPrcCxl);
    #endif//_cxl_uprc_range__GUARD__

    #ifndef _min_ubid__GUARD__
    #define _min_ubid__GUARD__
    DECL_STRONG_TYPE(min_ubid, float);
    #endif//_min_ubid__GUARD__

    #ifndef _max_uask__GUARD__
    #define _max_uask__GUARD__
    DECL_STRONG_TYPE(max_uask, float);
    #endif//_max_uask__GUARD__

    #ifndef _min_max_type__GUARD__
    #define _min_max_type__GUARD__
    DECL_STRONG_TYPE(min_max_type, spiderrock::protobuf::api::MinMaxType);
    #endif//_min_max_type__GUARD__

    #ifndef _lead_side__GUARD__
    #define _lead_side__GUARD__
    DECL_STRONG_TYPE(lead_side, spiderrock::protobuf::api::BuySell);
    #endif//_lead_side__GUARD__

    #ifndef _max_completion_slippage__GUARD__
    #define _max_completion_slippage__GUARD__
    DECL_STRONG_TYPE(max_completion_slippage, double);
    #endif//_max_completion_slippage__GUARD__

    #ifndef _order_ref_premium__GUARD__
    #define _order_ref_premium__GUARD__
    DECL_STRONG_TYPE(order_ref_premium, float);
    #endif//_order_ref_premium__GUARD__

    #ifndef _strategy__GUARD__
    #define _strategy__GUARD__
    DECL_STRONG_TYPE(strategy, string);
    #endif//_strategy__GUARD__

    #ifndef _user_name__GUARD__
    #define _user_name__GUARD__
    DECL_STRONG_TYPE(user_name, string);
    #endif//_user_name__GUARD__

    #ifndef _spdr_comment__GUARD__
    #define _spdr_comment__GUARD__
    DECL_STRONG_TYPE(spdr_comment, string);
    #endif//_spdr_comment__GUARD__

    #ifndef _take_reach_rule__GUARD__
    #define _take_reach_rule__GUARD__
    DECL_STRONG_TYPE(take_reach_rule, spiderrock::protobuf::api::ReachRule);
    #endif//_take_reach_rule__GUARD__

    #ifndef _max_exposure_size__GUARD__
    #define _max_exposure_size__GUARD__
    DECL_STRONG_TYPE(max_exposure_size, int32);
    #endif//_max_exposure_size__GUARD__

    #ifndef _num_make_exchanges__GUARD__
    #define _num_make_exchanges__GUARD__
    DECL_STRONG_TYPE(num_make_exchanges, int32);
    #endif//_num_make_exchanges__GUARD__

    #ifndef _public_size__GUARD__
    #define _public_size__GUARD__
    DECL_STRONG_TYPE(public_size, spiderrock::protobuf::api::PublicSizeHandling);
    #endif//_public_size__GUARD__

    #ifndef _progress_rule__GUARD__
    #define _progress_rule__GUARD__
    DECL_STRONG_TYPE(progress_rule, spiderrock::protobuf::api::ProgressRule);
    #endif//_progress_rule__GUARD__

    #ifndef _progress_slice_cnt__GUARD__
    #define _progress_slice_cnt__GUARD__
    DECL_STRONG_TYPE(progress_slice_cnt, int32);
    #endif//_progress_slice_cnt__GUARD__

    #ifndef _progress_expose_time__GUARD__
    #define _progress_expose_time__GUARD__
    DECL_STRONG_TYPE(progress_expose_time, int32);
    #endif//_progress_expose_time__GUARD__

    #ifndef _max_child_orders__GUARD__
    #define _max_child_orders__GUARD__
    DECL_STRONG_TYPE(max_child_orders, int32);
    #endif//_max_child_orders__GUARD__

    #ifndef _exch_mask__GUARD__
    #define _exch_mask__GUARD__
    DECL_STRONG_TYPE(exch_mask, uint32);
    #endif//_exch_mask__GUARD__

    #ifndef _market_session__GUARD__
    #define _market_session__GUARD__
    DECL_STRONG_TYPE(market_session, spiderrock::protobuf::api::MarketSession);
    #endif//_market_session__GUARD__

    #ifndef _start_dttm__GUARD__
    #define _start_dttm__GUARD__
    DECL_STRONG_TYPE(start_dttm, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_start_dttm__GUARD__

    #ifndef _order_duration__GUARD__
    #define _order_duration__GUARD__
    DECL_STRONG_TYPE(order_duration, int32);
    #endif//_order_duration__GUARD__

    #ifndef _active_duration__GUARD__
    #define _active_duration__GUARD__
    DECL_STRONG_TYPE(active_duration, int32);
    #endif//_active_duration__GUARD__

    #ifndef _good_till_dttm__GUARD__
    #define _good_till_dttm__GUARD__
    DECL_STRONG_TYPE(good_till_dttm, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_good_till_dttm__GUARD__

    #ifndef _expire_dttm__GUARD__
    #define _expire_dttm__GUARD__
    DECL_STRONG_TYPE(expire_dttm, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_expire_dttm__GUARD__

    #ifndef _parent_order_handling__GUARD__
    #define _parent_order_handling__GUARD__
    DECL_STRONG_TYPE(parent_order_handling, spiderrock::protobuf::api::ParentOrderHandling);
    #endif//_parent_order_handling__GUARD__

    #ifndef _parent_balance_handling__GUARD__
    #define _parent_balance_handling__GUARD__
    DECL_STRONG_TYPE(parent_balance_handling, spiderrock::protobuf::api::ParentBalanceHandling);
    #endif//_parent_balance_handling__GUARD__

    #ifndef _block_visibility__GUARD__
    #define _block_visibility__GUARD__
    DECL_STRONG_TYPE(block_visibility, spiderrock::protobuf::api::BlockVisibility);
    #endif//_block_visibility__GUARD__

    #ifndef _order_limit_type__GUARD__
    #define _order_limit_type__GUARD__
    DECL_STRONG_TYPE(order_limit_type, spiderrock::protobuf::api::SpdrLimitType);
    #endif//_order_limit_type__GUARD__

    #ifndef _order_prc_limit__GUARD__
    #define _order_prc_limit__GUARD__
    DECL_STRONG_TYPE(order_prc_limit, double);
    #endif//_order_prc_limit__GUARD__

    #ifndef _order_ref_uprc__GUARD__
    #define _order_ref_uprc__GUARD__
    DECL_STRONG_TYPE(order_ref_uprc, double);
    #endif//_order_ref_uprc__GUARD__

    #ifndef _order_ref_de__GUARD__
    #define _order_ref_de__GUARD__
    DECL_STRONG_TYPE(order_ref_de, float);
    #endif//_order_ref_de__GUARD__

    #ifndef _order_ref_ga__GUARD__
    #define _order_ref_ga__GUARD__
    DECL_STRONG_TYPE(order_ref_ga, float);
    #endif//_order_ref_ga__GUARD__

    #ifndef _order_prc_offset__GUARD__
    #define _order_prc_offset__GUARD__
    DECL_STRONG_TYPE(order_prc_offset, double);
    #endif//_order_prc_offset__GUARD__

    #ifndef _take_limit_class__GUARD__
    #define _take_limit_class__GUARD__
    DECL_STRONG_TYPE(take_limit_class, spiderrock::protobuf::api::SpdrLimitClass);
    #endif//_take_limit_class__GUARD__

    #ifndef _take_alpha_type__GUARD__
    #define _take_alpha_type__GUARD__
    DECL_STRONG_TYPE(take_alpha_type, spiderrock::protobuf::api::AlphaType);
    #endif//_take_alpha_type__GUARD__

    #ifndef _take_alpha_factor__GUARD__
    #define _take_alpha_factor__GUARD__
    DECL_STRONG_TYPE(take_alpha_factor, float);
    #endif//_take_alpha_factor__GUARD__

    #ifndef _take_alpha_probability__GUARD__
    #define _take_alpha_probability__GUARD__
    DECL_STRONG_TYPE(take_alpha_probability, float);
    #endif//_take_alpha_probability__GUARD__

    #ifndef _take_surf_prc_offset__GUARD__
    #define _take_surf_prc_offset__GUARD__
    DECL_STRONG_TYPE(take_surf_prc_offset, double);
    #endif//_take_surf_prc_offset__GUARD__

    #ifndef _take_surf_vol_offset__GUARD__
    #define _take_surf_vol_offset__GUARD__
    DECL_STRONG_TYPE(take_surf_vol_offset, float);
    #endif//_take_surf_vol_offset__GUARD__

    #ifndef _take_surf_wid_offset__GUARD__
    #define _take_surf_wid_offset__GUARD__
    DECL_STRONG_TYPE(take_surf_wid_offset, float);
    #endif//_take_surf_wid_offset__GUARD__

    #ifndef _make_limit_class__GUARD__
    #define _make_limit_class__GUARD__
    DECL_STRONG_TYPE(make_limit_class, spiderrock::protobuf::api::SpdrLimitClass);
    #endif//_make_limit_class__GUARD__

    #ifndef _make_alpha_type__GUARD__
    #define _make_alpha_type__GUARD__
    DECL_STRONG_TYPE(make_alpha_type, spiderrock::protobuf::api::AlphaType);
    #endif//_make_alpha_type__GUARD__

    #ifndef _make_alpha_factor__GUARD__
    #define _make_alpha_factor__GUARD__
    DECL_STRONG_TYPE(make_alpha_factor, float);
    #endif//_make_alpha_factor__GUARD__

    #ifndef _make_alpha_probability__GUARD__
    #define _make_alpha_probability__GUARD__
    DECL_STRONG_TYPE(make_alpha_probability, float);
    #endif//_make_alpha_probability__GUARD__

    #ifndef _make_surf_prc_offset__GUARD__
    #define _make_surf_prc_offset__GUARD__
    DECL_STRONG_TYPE(make_surf_prc_offset, double);
    #endif//_make_surf_prc_offset__GUARD__

    #ifndef _make_surf_vol_offset__GUARD__
    #define _make_surf_vol_offset__GUARD__
    DECL_STRONG_TYPE(make_surf_vol_offset, float);
    #endif//_make_surf_vol_offset__GUARD__

    #ifndef _make_surf_wid_offset__GUARD__
    #define _make_surf_wid_offset__GUARD__
    DECL_STRONG_TYPE(make_surf_wid_offset, float);
    #endif//_make_surf_wid_offset__GUARD__

    #ifndef _order_ref_event_mult__GUARD__
    #define _order_ref_event_mult__GUARD__
    DECL_STRONG_TYPE(order_ref_event_mult, float);
    #endif//_order_ref_event_mult__GUARD__

    #ifndef _order_ref_event_dttm__GUARD__
    #define _order_ref_event_dttm__GUARD__
    DECL_STRONG_TYPE(order_ref_event_dttm, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_order_ref_event_dttm__GUARD__

    #ifndef _mleg_prob_limit__GUARD__
    #define _mleg_prob_limit__GUARD__
    DECL_STRONG_TYPE(mleg_prob_limit, float);
    #endif//_mleg_prob_limit__GUARD__

    #ifndef _mleg_surf_offset__GUARD__
    #define _mleg_surf_offset__GUARD__
    DECL_STRONG_TYPE(mleg_surf_offset, float);
    #endif//_mleg_surf_offset__GUARD__

    #ifndef _extern_ex_dest__GUARD__
    #define _extern_ex_dest__GUARD__
    DECL_STRONG_TYPE(extern_ex_dest, string);
    #endif//_extern_ex_dest__GUARD__

    #ifndef _order_dttm__GUARD__
    #define _order_dttm__GUARD__
    DECL_STRONG_TYPE(order_dttm, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_order_dttm__GUARD__

    #ifndef _min_surf_vol__GUARD__
    #define _min_surf_vol__GUARD__
    DECL_STRONG_TYPE(min_surf_vol, float);
    #endif//_min_surf_vol__GUARD__

    #ifndef _max_surf_vol__GUARD__
    #define _max_surf_vol__GUARD__
    DECL_STRONG_TYPE(max_surf_vol, float);
    #endif//_max_surf_vol__GUARD__

    #ifndef _min_surf_prc__GUARD__
    #define _min_surf_prc__GUARD__
    DECL_STRONG_TYPE(min_surf_prc, float);
    #endif//_min_surf_prc__GUARD__

    #ifndef _max_surf_prc__GUARD__
    #define _max_surf_prc__GUARD__
    DECL_STRONG_TYPE(max_surf_prc, float);
    #endif//_max_surf_prc__GUARD__

    #ifndef _min_surf_uprc__GUARD__
    #define _min_surf_uprc__GUARD__
    DECL_STRONG_TYPE(min_surf_uprc, float);
    #endif//_min_surf_uprc__GUARD__

    #ifndef _max_surf_uprc__GUARD__
    #define _max_surf_uprc__GUARD__
    DECL_STRONG_TYPE(max_surf_uprc, float);
    #endif//_max_surf_uprc__GUARD__

    #ifndef _min_qte_width__GUARD__
    #define _min_qte_width__GUARD__
    DECL_STRONG_TYPE(min_qte_width, float);
    #endif//_min_qte_width__GUARD__

    #ifndef _avg_qte_width__GUARD__
    #define _avg_qte_width__GUARD__
    DECL_STRONG_TYPE(avg_qte_width, float);
    #endif//_avg_qte_width__GUARD__

    #ifndef _cnt_qte_width__GUARD__
    #define _cnt_qte_width__GUARD__
    DECL_STRONG_TYPE(cnt_qte_width, int32);
    #endif//_cnt_qte_width__GUARD__

    #ifndef _arrive_bid__GUARD__
    #define _arrive_bid__GUARD__
    DECL_STRONG_TYPE(arrive_bid, double);
    #endif//_arrive_bid__GUARD__

    #ifndef _arrive_ask__GUARD__
    #define _arrive_ask__GUARD__
    DECL_STRONG_TYPE(arrive_ask, double);
    #endif//_arrive_ask__GUARD__

    #ifndef _total_seconds__GUARD__
    #define _total_seconds__GUARD__
    DECL_STRONG_TYPE(total_seconds, float);
    #endif//_total_seconds__GUARD__

    #ifndef _working_seconds__GUARD__
    #define _working_seconds__GUARD__
    DECL_STRONG_TYPE(working_seconds, float);
    #endif//_working_seconds__GUARD__

    #ifndef _prt_active_cnt__GUARD__
    #define _prt_active_cnt__GUARD__
    DECL_STRONG_TYPE(prt_active_cnt, int32);
    #endif//_prt_active_cnt__GUARD__

    #ifndef _prt_qty_active__GUARD__
    #define _prt_qty_active__GUARD__
    DECL_STRONG_TYPE(prt_qty_active, int32);
    #endif//_prt_qty_active__GUARD__

    #ifndef _cum_exch_fee__GUARD__
    #define _cum_exch_fee__GUARD__
    DECL_STRONG_TYPE(cum_exch_fee, float);
    #endif//_cum_exch_fee__GUARD__

    #ifndef _cum_m10_pnl__GUARD__
    #define _cum_m10_pnl__GUARD__
    DECL_STRONG_TYPE(cum_m10_pnl, float);
    #endif//_cum_m10_pnl__GUARD__

    #ifndef _cum_arrival_pnl__GUARD__
    #define _cum_arrival_pnl__GUARD__
    DECL_STRONG_TYPE(cum_arrival_pnl, float);
    #endif//_cum_arrival_pnl__GUARD__

    #ifndef _u_prc_drift__GUARD__
    #define _u_prc_drift__GUARD__
    DECL_STRONG_TYPE(u_prc_drift, float);
    #endif//_u_prc_drift__GUARD__

    #ifndef _s_vol_drift__GUARD__
    #define _s_vol_drift__GUARD__
    DECL_STRONG_TYPE(s_vol_drift, float);
    #endif//_s_vol_drift__GUARD__

    #ifndef _max_grp_day_ddelta_ln__GUARD__
    #define _max_grp_day_ddelta_ln__GUARD__
    DECL_STRONG_TYPE(max_grp_day_ddelta_ln, float);
    #endif//_max_grp_day_ddelta_ln__GUARD__

    #ifndef _max_grp_day_ddelta_sh__GUARD__
    #define _max_grp_day_ddelta_sh__GUARD__
    DECL_STRONG_TYPE(max_grp_day_ddelta_sh, float);
    #endif//_max_grp_day_ddelta_sh__GUARD__

    #ifndef _max_grp_day_contracts_ln__GUARD__
    #define _max_grp_day_contracts_ln__GUARD__
    DECL_STRONG_TYPE(max_grp_day_contracts_ln, int32);
    #endif//_max_grp_day_contracts_ln__GUARD__

    #ifndef _max_grp_day_contracts_sh__GUARD__
    #define _max_grp_day_contracts_sh__GUARD__
    DECL_STRONG_TYPE(max_grp_day_contracts_sh, int32);
    #endif//_max_grp_day_contracts_sh__GUARD__

    #ifndef _max_grp_day_contracts_abs__GUARD__
    #define _max_grp_day_contracts_abs__GUARD__
    DECL_STRONG_TYPE(max_grp_day_contracts_abs, int32);
    #endif//_max_grp_day_contracts_abs__GUARD__

    #ifndef _max_grp_day_vega_ln__GUARD__
    #define _max_grp_day_vega_ln__GUARD__
    DECL_STRONG_TYPE(max_grp_day_vega_ln, float);
    #endif//_max_grp_day_vega_ln__GUARD__

    #ifndef _max_grp_day_vega_sh__GUARD__
    #define _max_grp_day_vega_sh__GUARD__
    DECL_STRONG_TYPE(max_grp_day_vega_sh, float);
    #endif//_max_grp_day_vega_sh__GUARD__

    #ifndef _max_grp_day_vega_abs__GUARD__
    #define _max_grp_day_vega_abs__GUARD__
    DECL_STRONG_TYPE(max_grp_day_vega_abs, float);
    #endif//_max_grp_day_vega_abs__GUARD__

    #ifndef _grp_day_vega_ratio__GUARD__
    #define _grp_day_vega_ratio__GUARD__
    DECL_STRONG_TYPE(grp_day_vega_ratio, float);
    #endif//_grp_day_vega_ratio__GUARD__

    #ifndef _max_grp_day_rmetric1_ln__GUARD__
    #define _max_grp_day_rmetric1_ln__GUARD__
    DECL_STRONG_TYPE(max_grp_day_rmetric1_ln, float);
    #endif//_max_grp_day_rmetric1_ln__GUARD__

    #ifndef _max_grp_day_rmetric1_sh__GUARD__
    #define _max_grp_day_rmetric1_sh__GUARD__
    DECL_STRONG_TYPE(max_grp_day_rmetric1_sh, float);
    #endif//_max_grp_day_rmetric1_sh__GUARD__

    #ifndef _max_grp_day_rmetric1_abs__GUARD__
    #define _max_grp_day_rmetric1_abs__GUARD__
    DECL_STRONG_TYPE(max_grp_day_rmetric1_abs, float);
    #endif//_max_grp_day_rmetric1_abs__GUARD__

    #ifndef _grp_day_rmetric1_ratio__GUARD__
    #define _grp_day_rmetric1_ratio__GUARD__
    DECL_STRONG_TYPE(grp_day_rmetric1_ratio, float);
    #endif//_grp_day_rmetric1_ratio__GUARD__

    #ifndef _cpx1__GUARD__
    #define _cpx1__GUARD__
    DECL_STRONG_TYPE(cpx1, float);
    #endif//_cpx1__GUARD__

    #ifndef _csz1__GUARD__
    #define _csz1__GUARD__
    DECL_STRONG_TYPE(csz1, int32);
    #endif//_csz1__GUARD__

    #ifndef _cex1__GUARD__
    #define _cex1__GUARD__
    DECL_STRONG_TYPE(cex1, uint32);
    #endif//_cex1__GUARD__

    #ifndef _cpx2__GUARD__
    #define _cpx2__GUARD__
    DECL_STRONG_TYPE(cpx2, float);
    #endif//_cpx2__GUARD__

    #ifndef _csz2__GUARD__
    #define _csz2__GUARD__
    DECL_STRONG_TYPE(csz2, int32);
    #endif//_csz2__GUARD__

    #ifndef _cex2__GUARD__
    #define _cex2__GUARD__
    DECL_STRONG_TYPE(cex2, uint32);
    #endif//_cex2__GUARD__

    #ifndef _c_more__GUARD__
    #define _c_more__GUARD__
    DECL_STRONG_TYPE(c_more, int32);
    #endif//_c_more__GUARD__

    #ifndef _num_new_orders__GUARD__
    #define _num_new_orders__GUARD__
    DECL_STRONG_TYPE(num_new_orders, int32);
    #endif//_num_new_orders__GUARD__

    #ifndef _num_parent_limits__GUARD__
    #define _num_parent_limits__GUARD__
    DECL_STRONG_TYPE(num_parent_limits, uint32);
    #endif//_num_parent_limits__GUARD__

    #ifndef _user_data1__GUARD__
    #define _user_data1__GUARD__
    DECL_STRONG_TYPE(user_data1, string);
    #endif//_user_data1__GUARD__

    #ifndef _user_data2__GUARD__
    #define _user_data2__GUARD__
    DECL_STRONG_TYPE(user_data2, string);
    #endif//_user_data2__GUARD__

    #ifndef _num_updates__GUARD__
    #define _num_updates__GUARD__
    DECL_STRONG_TYPE(num_updates, int32);
    #endif//_num_updates__GUARD__

    #ifndef _timestamp__GUARD__
    #define _timestamp__GUARD__
    DECL_STRONG_TYPE(timestamp, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_timestamp__GUARD__

    #ifndef _ticker__TickerKey__GUARD__
    #define _ticker__TickerKey__GUARD__
    DECL_STRONG_TYPE(ticker__TickerKey, TickerKey);
    #endif//_ticker__TickerKey__GUARD__

    #ifndef _accnt__GUARD__
    #define _accnt__GUARD__
    DECL_STRONG_TYPE(accnt, string);
    #endif//_accnt__GUARD__

    #ifndef _spdr_source__GUARD__
    #define _spdr_source__GUARD__
    DECL_STRONG_TYPE(spdr_source, spiderrock::protobuf::api::SpdrSource);
    #endif//_spdr_source__GUARD__

    #ifndef _grouping_code__GUARD__
    #define _grouping_code__GUARD__
    DECL_STRONG_TYPE(grouping_code, int64);
    #endif//_grouping_code__GUARD__

    #ifndef _order_side__GUARD__
    #define _order_side__GUARD__
    DECL_STRONG_TYPE(order_side, spiderrock::protobuf::api::BuySell);
    #endif//_order_side__GUARD__

    #ifndef _client_firm__GUARD__
    #define _client_firm__GUARD__
    DECL_STRONG_TYPE(client_firm, string);
    #endif//_client_firm__GUARD__

    
    class SpdrMLegBrkrState_PKey {
        public:
        //using statements for all types used in this class
        using ticker = spiderrock::protobuf::api::ticker__TickerKey;
        using accnt = spiderrock::protobuf::api::accnt;
        using spdr_source = spiderrock::protobuf::api::spdr_source;
        using grouping_code = spiderrock::protobuf::api::grouping_code;
        using order_side = spiderrock::protobuf::api::order_side;
        using client_firm = spiderrock::protobuf::api::client_firm;

        private:
        ticker m_ticker{};
        accnt m_accnt{};
        spdr_source m_spdr_source{};
        grouping_code m_grouping_code{};
        order_side m_order_side{};
        client_firm m_client_firm{};

        public:
		ticker get_ticker() const {
            return m_ticker;
        }
        accnt get_accnt() const {
            return m_accnt;
        }
        spdr_source get_spdr_source() const {
            return m_spdr_source;
        }
        grouping_code get_grouping_code() const {
            return m_grouping_code;
        }
        order_side get_order_side() const {
            return m_order_side;
        }
        client_firm get_client_firm() const {
            return m_client_firm;
        }
        void set_ticker(const ticker& value)  {
            m_ticker = value;
        }
        void set_accnt(const accnt& value)  {
            m_accnt = value;
        }
        void set_spdr_source(const spdr_source& value)  {
            m_spdr_source = value;
        }
        void set_grouping_code(const grouping_code& value)  {
            m_grouping_code = value;
        }
        void set_order_side(const order_side& value)  {
            m_order_side = value;
        }
        void set_client_firm(const client_firm& value)  {
            m_client_firm = value;
        }
        //templatized getters and setters
        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to SpdrMLegBrkrState_PKey::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to SpdrMLegBrkrState_PKey::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const ticker & value) { set_ticker(value); }
        void set(const accnt & value) { set_accnt(value); }
        void set(const spdr_source & value) { set_spdr_source(value); }
        void set(const grouping_code & value) { set_grouping_code(value); }
        void set(const order_side & value) { set_order_side(value); }
        void set(const client_firm & value) { set_client_firm(value); }


        SpdrMLegBrkrState_PKey() {}

        virtual ~SpdrMLegBrkrState_PKey() {
        }
        //templatized set functions that can take multiple arguments simultaneously
        template <typename Arg>
        void set_params(Arg && arg) {
            set(arg);
        }
        template <typename Arg, typename... Args>
        void set_params(Arg && arg, Args &&... args) {
            set(arg);
            set_params(args...);
        }
        bool IncludeTicker() const {
            return (m_ticker.ByteSizeLong() > 0);
        }
        bool IncludeAccnt() const {
            return !(m_accnt.empty());
        }
        bool IncludeGroupingCode() const {
            return !(m_grouping_code == 0);
        }
        bool IncludeClientFirm() const {
            return !(m_client_firm.empty());
        }


        size_t ByteSizeLong() const {
            size_t totalSize = 0;
            if ( IncludeTicker()) {
                SRProtobufCPP::TickerKeyLayout tickerKeyLayout_ticker;
                m_ticker.setCodecTickerKey(tickerKeyLayout_ticker);
                totalSize += SRProtobufCPP::FieldCodec::TickerKeyFieldSize(10,tickerKeyLayout_ticker);
            }
            if ( IncludeAccnt()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(11,m_accnt);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(12,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrSource>(m_spdr_source)));
            if ( IncludeGroupingCode()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(13,m_grouping_code);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(14,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>(m_order_side)));
            if ( IncludeClientFirm()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(15,m_client_firm);
            }
            return totalSize;
        }

        void Encode(uint8_t*& dest, uint8_t* max) const {
            if ( IncludeTicker()) {
                SRProtobufCPP::TickerKeyLayout tickerKeyLayout_ticker;
                m_ticker.setCodecTickerKey(tickerKeyLayout_ticker);
                dest = SRProtobufCPP::FieldCodec::EncodeTickerKey(dest, 10, tickerKeyLayout_ticker);
            }
            if ( IncludeAccnt()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,11,static_cast<string>(m_accnt));
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,12,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrSource>(m_spdr_source)));
            if ( IncludeGroupingCode()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,13,m_grouping_code);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,14,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>(m_order_side)));
            if ( IncludeClientFirm()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,15,static_cast<string>(m_client_firm));
            }
        }

        const void Decode(const  uint8_t*& pos, const  uint8_t* max) {
            uint32_t tag = 0;
            int fieldNumber;
            SRProtobufCPP::TagCodecEnums::TagType tagType;
            while (pos < max && (tag = SRProtobufCPP::TagCodec::Decode(pos, max)) != 0) {
                auto tagDecomposed = SRProtobufCPP::TagCodec::Decompose(tag);
                tagType = tagDecomposed.second;
                fieldNumber = tagDecomposed.first;
                switch (fieldNumber) {
                    default:
                        // Add unknown tag field number logging
                        SRProtobufCPP::Skipper::Skip(pos, tagType, max);
                        break;
                    case 10: {
                        auto tickerKey = SRProtobufCPP::FieldCodec::DecodeTickerKey(pos,max);
                        m_ticker.setFromCodec(tickerKey);
                        break;
                    }
                    case 11: {m_accnt = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                    case 12: {m_spdr_source = static_cast<spiderrock::protobuf::api::SpdrSource>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                    case 13: {m_grouping_code = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        break;
                    }
                    case 14: {m_order_side = static_cast<spiderrock::protobuf::api::BuySell>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                    case 15: {m_client_firm = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                }
            }
        }

    };
    

    class SpdrMLegBrkrState {
        public:
        //using statements for all types used in this class
    
        using _meta = spiderrock::protobuf::api::_meta;
        using pkey = spiderrock::protobuf::api::SpdrMLegBrkrState_PKey;
        using engine_name = spiderrock::protobuf::api::engine_name;
        using parent_number = spiderrock::protobuf::api::parent_number;
        using base_parent_number = spiderrock::protobuf::api::base_parent_number;
        using modify_number = spiderrock::protobuf::api::modify_number;
        using alt_order_id = spiderrock::protobuf::api::alt_order_id;
        using package_id = spiderrock::protobuf::api::package_id;
        using alt_accnt = spiderrock::protobuf::api::alt_accnt;
        using alt_user_name = spiderrock::protobuf::api::alt_user_name;
        using stage_type = spiderrock::protobuf::api::stage_type;
        using start_type = spiderrock::protobuf::api::start_type;
        using is_flagged = spiderrock::protobuf::api::is_flagged;
        using notice_number = spiderrock::protobuf::api::notice_number;
        using exec_brkr_code = spiderrock::protobuf::api::exec_brkr_code;
        using spread_class = spiderrock::protobuf::api::spread_class;
        using spread_flavor = spiderrock::protobuf::api::spread_flavor;
        using stock_side = spiderrock::protobuf::api::stock_side;
        using ssale_flag = spiderrock::protobuf::api::ssale_flag;
        using locate_quan = spiderrock::protobuf::api::locate_quan;
        using locate_firm = spiderrock::protobuf::api::locate_firm;
        using locate_pool = spiderrock::protobuf::api::locate_pool;
        using stock_shares = spiderrock::protobuf::api::stock_shares;
        using stock_leg_id = spiderrock::protobuf::api::stock_leg_id;
        using stock_fill_quan = spiderrock::protobuf::api::stock_fill_quan;
        using stock_avg_fill_price = spiderrock::protobuf::api::stock_avg_fill_price;
        using ref_uprc = spiderrock::protobuf::api::ref_uprc__float;
        using live_uprc = spiderrock::protobuf::api::live_uprc__float;
        using u_price_format = spiderrock::protobuf::api::u_price_format;
        using stock_cpx = spiderrock::protobuf::api::stock_cpx;
        using stock_csz = spiderrock::protobuf::api::stock_csz;
        using stock_cex = spiderrock::protobuf::api::stock_cex;
        using num_legs = spiderrock::protobuf::api::num_legs;
        using sec_key1 = spiderrock::protobuf::api::sec_key1;
        using sec_type1 = spiderrock::protobuf::api::sec_type1;
        using ratio1 = spiderrock::protobuf::api::ratio1;
        using side1 = spiderrock::protobuf::api::side1;
        using position_type1 = spiderrock::protobuf::api::position_type1;
        using leg_id1 = spiderrock::protobuf::api::leg_id1;
        using fill_quan1 = spiderrock::protobuf::api::fill_quan1;
        using avg_fill_price1 = spiderrock::protobuf::api::avg_fill_price1;
        using vega1 = spiderrock::protobuf::api::vega1;
        using ref_uprc1 = spiderrock::protobuf::api::ref_uprc1;
        using ref_delta1 = spiderrock::protobuf::api::ref_delta1;
        using ref_earn_cnt1 = spiderrock::protobuf::api::ref_earn_cnt1;
        using live_uprc1 = spiderrock::protobuf::api::live_uprc1;
        using price_format1 = spiderrock::protobuf::api::price_format1;
        using leg_cpx1 = spiderrock::protobuf::api::leg_cpx1;
        using leg_csz1 = spiderrock::protobuf::api::leg_csz1;
        using leg_cex1 = spiderrock::protobuf::api::leg_cex1;
        using sec_key2 = spiderrock::protobuf::api::sec_key2;
        using sec_type2 = spiderrock::protobuf::api::sec_type2;
        using ratio2 = spiderrock::protobuf::api::ratio2;
        using side2 = spiderrock::protobuf::api::side2;
        using position_type2 = spiderrock::protobuf::api::position_type2;
        using leg_id2 = spiderrock::protobuf::api::leg_id2;
        using fill_quan2 = spiderrock::protobuf::api::fill_quan2;
        using avg_fill_price2 = spiderrock::protobuf::api::avg_fill_price2;
        using vega2 = spiderrock::protobuf::api::vega2;
        using ref_uprc2 = spiderrock::protobuf::api::ref_uprc2;
        using ref_delta2 = spiderrock::protobuf::api::ref_delta2;
        using ref_earn_cnt2 = spiderrock::protobuf::api::ref_earn_cnt2;
        using live_uprc2 = spiderrock::protobuf::api::live_uprc2;
        using price_format2 = spiderrock::protobuf::api::price_format2;
        using leg_cpx2 = spiderrock::protobuf::api::leg_cpx2;
        using leg_csz2 = spiderrock::protobuf::api::leg_csz2;
        using leg_cex2 = spiderrock::protobuf::api::leg_cex2;
        using sec_key3 = spiderrock::protobuf::api::sec_key3;
        using sec_type3 = spiderrock::protobuf::api::sec_type3;
        using ratio3 = spiderrock::protobuf::api::ratio3;
        using side3 = spiderrock::protobuf::api::side3;
        using position_type3 = spiderrock::protobuf::api::position_type3;
        using leg_id3 = spiderrock::protobuf::api::leg_id3;
        using fill_quan3 = spiderrock::protobuf::api::fill_quan3;
        using avg_fill_price3 = spiderrock::protobuf::api::avg_fill_price3;
        using vega3 = spiderrock::protobuf::api::vega3;
        using ref_uprc3 = spiderrock::protobuf::api::ref_uprc3;
        using ref_delta3 = spiderrock::protobuf::api::ref_delta3;
        using ref_earn_cnt3 = spiderrock::protobuf::api::ref_earn_cnt3;
        using live_uprc3 = spiderrock::protobuf::api::live_uprc3;
        using price_format3 = spiderrock::protobuf::api::price_format3;
        using leg_cpx3 = spiderrock::protobuf::api::leg_cpx3;
        using leg_csz3 = spiderrock::protobuf::api::leg_csz3;
        using leg_cex3 = spiderrock::protobuf::api::leg_cex3;
        using sec_key4 = spiderrock::protobuf::api::sec_key4;
        using sec_type4 = spiderrock::protobuf::api::sec_type4;
        using ratio4 = spiderrock::protobuf::api::ratio4;
        using side4 = spiderrock::protobuf::api::side4;
        using position_type4 = spiderrock::protobuf::api::position_type4;
        using leg_id4 = spiderrock::protobuf::api::leg_id4;
        using fill_quan4 = spiderrock::protobuf::api::fill_quan4;
        using avg_fill_price4 = spiderrock::protobuf::api::avg_fill_price4;
        using vega4 = spiderrock::protobuf::api::vega4;
        using ref_uprc4 = spiderrock::protobuf::api::ref_uprc4;
        using ref_delta4 = spiderrock::protobuf::api::ref_delta4;
        using ref_earn_cnt4 = spiderrock::protobuf::api::ref_earn_cnt4;
        using live_uprc4 = spiderrock::protobuf::api::live_uprc4;
        using price_format4 = spiderrock::protobuf::api::price_format4;
        using leg_cpx4 = spiderrock::protobuf::api::leg_cpx4;
        using leg_csz4 = spiderrock::protobuf::api::leg_csz4;
        using leg_cex4 = spiderrock::protobuf::api::leg_cex4;
        using sec_key5 = spiderrock::protobuf::api::sec_key5;
        using sec_type5 = spiderrock::protobuf::api::sec_type5;
        using ratio5 = spiderrock::protobuf::api::ratio5;
        using side5 = spiderrock::protobuf::api::side5;
        using position_type5 = spiderrock::protobuf::api::position_type5;
        using leg_id5 = spiderrock::protobuf::api::leg_id5;
        using fill_quan5 = spiderrock::protobuf::api::fill_quan5;
        using avg_fill_price5 = spiderrock::protobuf::api::avg_fill_price5;
        using vega5 = spiderrock::protobuf::api::vega5;
        using ref_uprc5 = spiderrock::protobuf::api::ref_uprc5;
        using ref_delta5 = spiderrock::protobuf::api::ref_delta5;
        using ref_earn_cnt5 = spiderrock::protobuf::api::ref_earn_cnt5;
        using live_uprc5 = spiderrock::protobuf::api::live_uprc5;
        using price_format5 = spiderrock::protobuf::api::price_format5;
        using leg_cpx5 = spiderrock::protobuf::api::leg_cpx5;
        using leg_csz5 = spiderrock::protobuf::api::leg_csz5;
        using leg_cex5 = spiderrock::protobuf::api::leg_cex5;
        using sec_key6 = spiderrock::protobuf::api::sec_key6;
        using sec_type6 = spiderrock::protobuf::api::sec_type6;
        using ratio6 = spiderrock::protobuf::api::ratio6;
        using side6 = spiderrock::protobuf::api::side6;
        using position_type6 = spiderrock::protobuf::api::position_type6;
        using leg_id6 = spiderrock::protobuf::api::leg_id6;
        using fill_quan6 = spiderrock::protobuf::api::fill_quan6;
        using avg_fill_price6 = spiderrock::protobuf::api::avg_fill_price6;
        using vega6 = spiderrock::protobuf::api::vega6;
        using ref_uprc6 = spiderrock::protobuf::api::ref_uprc6;
        using ref_delta6 = spiderrock::protobuf::api::ref_delta6;
        using ref_earn_cnt6 = spiderrock::protobuf::api::ref_earn_cnt6;
        using live_uprc6 = spiderrock::protobuf::api::live_uprc6;
        using price_format6 = spiderrock::protobuf::api::price_format6;
        using leg_cpx6 = spiderrock::protobuf::api::leg_cpx6;
        using leg_csz6 = spiderrock::protobuf::api::leg_csz6;
        using leg_cex6 = spiderrock::protobuf::api::leg_cex6;
        using mleg_vega = spiderrock::protobuf::api::mleg_vega;
        using mleg_wt_vega = spiderrock::protobuf::api::mleg_wt_vega;
        using mleg_delta = spiderrock::protobuf::api::mleg_delta;
        using mleg_gamma = spiderrock::protobuf::api::mleg_gamma;
        using mleg_theta = spiderrock::protobuf::api::mleg_theta;
        using description = spiderrock::protobuf::api::description;
        using order_size = spiderrock::protobuf::api::order_size;
        using order_active_size = spiderrock::protobuf::api::order_active_size;
        using leaves_quantity = spiderrock::protobuf::api::leaves_quantity;
        using spdr_order_status = spiderrock::protobuf::api::spdr_order_status;
        using spdr_close_reason = spiderrock::protobuf::api::spdr_close_reason;
        using spdr_reject_reason = spiderrock::protobuf::api::spdr_reject_reason;
        using spdr_close_detail_txt = spiderrock::protobuf::api::spdr_close_detail_txt;
        using open_legs = spiderrock::protobuf::api::open_legs;
        using cum_square_qty = spiderrock::protobuf::api::cum_square_qty;
        using avg_square_prc = spiderrock::protobuf::api::avg_square_prc;
        using cum_partial_qty = spiderrock::protobuf::api::cum_partial_qty;
        using fill_vega = spiderrock::protobuf::api::fill_vega;
        using fill_wt_vega = spiderrock::protobuf::api::fill_wt_vega;
        using fill_delta = spiderrock::protobuf::api::fill_delta;
        using fill_ddelta = spiderrock::protobuf::api::fill_ddelta;
        using fill_gamma = spiderrock::protobuf::api::fill_gamma;
        using fill_theta = spiderrock::protobuf::api::fill_theta;
        using last_fill_dttm = spiderrock::protobuf::api::last_fill_dttm;
        using risk_limit_size = spiderrock::protobuf::api::risk_limit_size;
        using risk_limit_desc = spiderrock::protobuf::api::risk_limit_desc;
        using risk_limit_level = spiderrock::protobuf::api::risk_limit_level;
        using max_progress = spiderrock::protobuf::api::max_progress;
        using max_progress_detail = spiderrock::protobuf::api::max_progress_detail;
        using max_progress_time = spiderrock::protobuf::api::max_progress_time;
        using algo_state = spiderrock::protobuf::api::algo_state;
        using algo_counter = spiderrock::protobuf::api::algo_counter;
        using make_state = spiderrock::protobuf::api::make_state;
        using make_counter = spiderrock::protobuf::api::make_counter;
        using mkt_resp_state = spiderrock::protobuf::api::mkt_resp_state;
        using mkt_resp_counter = spiderrock::protobuf::api::mkt_resp_counter;
        using broker_state = spiderrock::protobuf::api::broker_state;
        using broker_counter = spiderrock::protobuf::api::broker_counter;
        using spdr_mkt_state = spiderrock::protobuf::api::spdr_mkt_state;
        using spdr_broker_status = spiderrock::protobuf::api::spdr_broker_status;
        using progress_rule_detail = spiderrock::protobuf::api::progress_rule_detail;
        using last_child_reject_dttm = spiderrock::protobuf::api::last_child_reject_dttm;
        using last_child_reject_text = spiderrock::protobuf::api::last_child_reject_text;
        using risk_group_id = spiderrock::protobuf::api::risk_group_id;
        using trigger_group_id = spiderrock::protobuf::api::trigger_group_id;
        using hedge_grouping_code = spiderrock::protobuf::api::hedge_grouping_code;
        using auto_hedge = spiderrock::protobuf::api::auto_hedge;
        using hedge_instrument = spiderrock::protobuf::api::hedge_instrument;
        using hedge_sec_key = spiderrock::protobuf::api::hedge_sec_key;
        using hedge_sec_type = spiderrock::protobuf::api::hedge_sec_type;
        using hedge_beta_ratio = spiderrock::protobuf::api::hedge_beta_ratio;
        using hedge_scope = spiderrock::protobuf::api::hedge_scope;
        using extern_hedge_ex_dest = spiderrock::protobuf::api::extern_hedge_ex_dest;
        using extern_hedge_params = spiderrock::protobuf::api::extern_hedge_params;
        using best_way_prc = spiderrock::protobuf::api::best_way_prc;
        using wrst_way_prc = spiderrock::protobuf::api::wrst_way_prc;
        using best_way_sz = spiderrock::protobuf::api::best_way_sz;
        using wrst_way_sz = spiderrock::protobuf::api::wrst_way_sz;
        using surface_prc = spiderrock::protobuf::api::surface_prc;
        using surface_vol = spiderrock::protobuf::api::surface_vol;
        using surface_uprc = spiderrock::protobuf::api::surface_uprc;
        using limit_price = spiderrock::protobuf::api::limit_price;
        using limit_ref_uprc = spiderrock::protobuf::api::limit_ref_uprc;
        using limit_err = spiderrock::protobuf::api::limit_err;
        using make_limit_price = spiderrock::protobuf::api::make_limit_price;
        using take_limit_price = spiderrock::protobuf::api::take_limit_price;
        using cxl_uprc_range = spiderrock::protobuf::api::cxl_uprc_range;
        using min_ubid = spiderrock::protobuf::api::min_ubid;
        using max_uask = spiderrock::protobuf::api::max_uask;
        using min_max_type = spiderrock::protobuf::api::min_max_type;
        using lead_side = spiderrock::protobuf::api::lead_side;
        using max_completion_slippage = spiderrock::protobuf::api::max_completion_slippage;
        using order_ref_premium = spiderrock::protobuf::api::order_ref_premium;
        using strategy = spiderrock::protobuf::api::strategy;
        using user_name = spiderrock::protobuf::api::user_name;
        using spdr_comment = spiderrock::protobuf::api::spdr_comment;
        using take_reach_rule = spiderrock::protobuf::api::take_reach_rule;
        using max_exposure_size = spiderrock::protobuf::api::max_exposure_size;
        using num_make_exchanges = spiderrock::protobuf::api::num_make_exchanges;
        using public_size = spiderrock::protobuf::api::public_size;
        using progress_rule = spiderrock::protobuf::api::progress_rule;
        using progress_slice_cnt = spiderrock::protobuf::api::progress_slice_cnt;
        using progress_expose_time = spiderrock::protobuf::api::progress_expose_time;
        using max_child_orders = spiderrock::protobuf::api::max_child_orders;
        using exch_mask = spiderrock::protobuf::api::exch_mask;
        using market_session = spiderrock::protobuf::api::market_session;
        using start_dttm = spiderrock::protobuf::api::start_dttm;
        using order_duration = spiderrock::protobuf::api::order_duration;
        using active_duration = spiderrock::protobuf::api::active_duration;
        using good_till_dttm = spiderrock::protobuf::api::good_till_dttm;
        using expire_dttm = spiderrock::protobuf::api::expire_dttm;
        using parent_order_handling = spiderrock::protobuf::api::parent_order_handling;
        using parent_balance_handling = spiderrock::protobuf::api::parent_balance_handling;
        using block_visibility = spiderrock::protobuf::api::block_visibility;
        using order_limit_type = spiderrock::protobuf::api::order_limit_type;
        using order_prc_limit = spiderrock::protobuf::api::order_prc_limit;
        using order_ref_uprc = spiderrock::protobuf::api::order_ref_uprc;
        using order_ref_de = spiderrock::protobuf::api::order_ref_de;
        using order_ref_ga = spiderrock::protobuf::api::order_ref_ga;
        using order_prc_offset = spiderrock::protobuf::api::order_prc_offset;
        using take_limit_class = spiderrock::protobuf::api::take_limit_class;
        using take_alpha_type = spiderrock::protobuf::api::take_alpha_type;
        using take_alpha_factor = spiderrock::protobuf::api::take_alpha_factor;
        using take_alpha_probability = spiderrock::protobuf::api::take_alpha_probability;
        using take_surf_prc_offset = spiderrock::protobuf::api::take_surf_prc_offset;
        using take_surf_vol_offset = spiderrock::protobuf::api::take_surf_vol_offset;
        using take_surf_wid_offset = spiderrock::protobuf::api::take_surf_wid_offset;
        using make_limit_class = spiderrock::protobuf::api::make_limit_class;
        using make_alpha_type = spiderrock::protobuf::api::make_alpha_type;
        using make_alpha_factor = spiderrock::protobuf::api::make_alpha_factor;
        using make_alpha_probability = spiderrock::protobuf::api::make_alpha_probability;
        using make_surf_prc_offset = spiderrock::protobuf::api::make_surf_prc_offset;
        using make_surf_vol_offset = spiderrock::protobuf::api::make_surf_vol_offset;
        using make_surf_wid_offset = spiderrock::protobuf::api::make_surf_wid_offset;
        using order_ref_event_mult = spiderrock::protobuf::api::order_ref_event_mult;
        using order_ref_event_dttm = spiderrock::protobuf::api::order_ref_event_dttm;
        using mleg_prob_limit = spiderrock::protobuf::api::mleg_prob_limit;
        using mleg_surf_offset = spiderrock::protobuf::api::mleg_surf_offset;
        using extern_ex_dest = spiderrock::protobuf::api::extern_ex_dest;
        using order_dttm = spiderrock::protobuf::api::order_dttm;
        using min_surf_vol = spiderrock::protobuf::api::min_surf_vol;
        using max_surf_vol = spiderrock::protobuf::api::max_surf_vol;
        using min_surf_prc = spiderrock::protobuf::api::min_surf_prc;
        using max_surf_prc = spiderrock::protobuf::api::max_surf_prc;
        using min_surf_uprc = spiderrock::protobuf::api::min_surf_uprc;
        using max_surf_uprc = spiderrock::protobuf::api::max_surf_uprc;
        using min_qte_width = spiderrock::protobuf::api::min_qte_width;
        using avg_qte_width = spiderrock::protobuf::api::avg_qte_width;
        using cnt_qte_width = spiderrock::protobuf::api::cnt_qte_width;
        using arrive_bid = spiderrock::protobuf::api::arrive_bid;
        using arrive_ask = spiderrock::protobuf::api::arrive_ask;
        using total_seconds = spiderrock::protobuf::api::total_seconds;
        using working_seconds = spiderrock::protobuf::api::working_seconds;
        using prt_active_cnt = spiderrock::protobuf::api::prt_active_cnt;
        using prt_qty_active = spiderrock::protobuf::api::prt_qty_active;
        using cum_exch_fee = spiderrock::protobuf::api::cum_exch_fee;
        using cum_m10_pnl = spiderrock::protobuf::api::cum_m10_pnl;
        using cum_arrival_pnl = spiderrock::protobuf::api::cum_arrival_pnl;
        using u_prc_drift = spiderrock::protobuf::api::u_prc_drift;
        using s_vol_drift = spiderrock::protobuf::api::s_vol_drift;
        using max_grp_day_ddelta_ln = spiderrock::protobuf::api::max_grp_day_ddelta_ln;
        using max_grp_day_ddelta_sh = spiderrock::protobuf::api::max_grp_day_ddelta_sh;
        using max_grp_day_contracts_ln = spiderrock::protobuf::api::max_grp_day_contracts_ln;
        using max_grp_day_contracts_sh = spiderrock::protobuf::api::max_grp_day_contracts_sh;
        using max_grp_day_contracts_abs = spiderrock::protobuf::api::max_grp_day_contracts_abs;
        using max_grp_day_vega_ln = spiderrock::protobuf::api::max_grp_day_vega_ln;
        using max_grp_day_vega_sh = spiderrock::protobuf::api::max_grp_day_vega_sh;
        using max_grp_day_vega_abs = spiderrock::protobuf::api::max_grp_day_vega_abs;
        using grp_day_vega_ratio = spiderrock::protobuf::api::grp_day_vega_ratio;
        using max_grp_day_rmetric1_ln = spiderrock::protobuf::api::max_grp_day_rmetric1_ln;
        using max_grp_day_rmetric1_sh = spiderrock::protobuf::api::max_grp_day_rmetric1_sh;
        using max_grp_day_rmetric1_abs = spiderrock::protobuf::api::max_grp_day_rmetric1_abs;
        using grp_day_rmetric1_ratio = spiderrock::protobuf::api::grp_day_rmetric1_ratio;
        using cpx1 = spiderrock::protobuf::api::cpx1;
        using csz1 = spiderrock::protobuf::api::csz1;
        using cex1 = spiderrock::protobuf::api::cex1;
        using cpx2 = spiderrock::protobuf::api::cpx2;
        using csz2 = spiderrock::protobuf::api::csz2;
        using cex2 = spiderrock::protobuf::api::cex2;
        using c_more = spiderrock::protobuf::api::c_more;
        using num_new_orders = spiderrock::protobuf::api::num_new_orders;
        using num_parent_limits = spiderrock::protobuf::api::num_parent_limits;
        using user_data1 = spiderrock::protobuf::api::user_data1;
        using user_data2 = spiderrock::protobuf::api::user_data2;
        using num_updates = spiderrock::protobuf::api::num_updates;
        using timestamp = spiderrock::protobuf::api::timestamp;

        private:
        _meta m__meta{};
        pkey m_pkey{};
        engine_name m_engine_name{};
        parent_number m_parent_number{};
        base_parent_number m_base_parent_number{};
        modify_number m_modify_number{};
        alt_order_id m_alt_order_id{};
        package_id m_package_id{};
        alt_accnt m_alt_accnt{};
        alt_user_name m_alt_user_name{};
        stage_type m_stage_type{};
        start_type m_start_type{};
        is_flagged m_is_flagged{};
        notice_number m_notice_number{};
        exec_brkr_code m_exec_brkr_code{};
        spread_class m_spread_class{};
        spread_flavor m_spread_flavor{};
        stock_side m_stock_side{};
        ssale_flag m_ssale_flag{};
        locate_quan m_locate_quan{};
        locate_firm m_locate_firm{};
        locate_pool m_locate_pool{};
        stock_shares m_stock_shares{};
        stock_leg_id m_stock_leg_id{};
        stock_fill_quan m_stock_fill_quan{};
        stock_avg_fill_price m_stock_avg_fill_price{};
        ref_uprc m_ref_uprc{};
        live_uprc m_live_uprc{};
        u_price_format m_u_price_format{};
        stock_cpx m_stock_cpx{};
        stock_csz m_stock_csz{};
        stock_cex m_stock_cex{};
        num_legs m_num_legs{};
        sec_key1 m_sec_key1{};
        sec_type1 m_sec_type1{};
        ratio1 m_ratio1{};
        side1 m_side1{};
        position_type1 m_position_type1{};
        leg_id1 m_leg_id1{};
        fill_quan1 m_fill_quan1{};
        avg_fill_price1 m_avg_fill_price1{};
        vega1 m_vega1{};
        ref_uprc1 m_ref_uprc1{};
        ref_delta1 m_ref_delta1{};
        ref_earn_cnt1 m_ref_earn_cnt1{};
        live_uprc1 m_live_uprc1{};
        price_format1 m_price_format1{};
        leg_cpx1 m_leg_cpx1{};
        leg_csz1 m_leg_csz1{};
        leg_cex1 m_leg_cex1{};
        sec_key2 m_sec_key2{};
        sec_type2 m_sec_type2{};
        ratio2 m_ratio2{};
        side2 m_side2{};
        position_type2 m_position_type2{};
        leg_id2 m_leg_id2{};
        fill_quan2 m_fill_quan2{};
        avg_fill_price2 m_avg_fill_price2{};
        vega2 m_vega2{};
        ref_uprc2 m_ref_uprc2{};
        ref_delta2 m_ref_delta2{};
        ref_earn_cnt2 m_ref_earn_cnt2{};
        live_uprc2 m_live_uprc2{};
        price_format2 m_price_format2{};
        leg_cpx2 m_leg_cpx2{};
        leg_csz2 m_leg_csz2{};
        leg_cex2 m_leg_cex2{};
        sec_key3 m_sec_key3{};
        sec_type3 m_sec_type3{};
        ratio3 m_ratio3{};
        side3 m_side3{};
        position_type3 m_position_type3{};
        leg_id3 m_leg_id3{};
        fill_quan3 m_fill_quan3{};
        avg_fill_price3 m_avg_fill_price3{};
        vega3 m_vega3{};
        ref_uprc3 m_ref_uprc3{};
        ref_delta3 m_ref_delta3{};
        ref_earn_cnt3 m_ref_earn_cnt3{};
        live_uprc3 m_live_uprc3{};
        price_format3 m_price_format3{};
        leg_cpx3 m_leg_cpx3{};
        leg_csz3 m_leg_csz3{};
        leg_cex3 m_leg_cex3{};
        sec_key4 m_sec_key4{};
        sec_type4 m_sec_type4{};
        ratio4 m_ratio4{};
        side4 m_side4{};
        position_type4 m_position_type4{};
        leg_id4 m_leg_id4{};
        fill_quan4 m_fill_quan4{};
        avg_fill_price4 m_avg_fill_price4{};
        vega4 m_vega4{};
        ref_uprc4 m_ref_uprc4{};
        ref_delta4 m_ref_delta4{};
        ref_earn_cnt4 m_ref_earn_cnt4{};
        live_uprc4 m_live_uprc4{};
        price_format4 m_price_format4{};
        leg_cpx4 m_leg_cpx4{};
        leg_csz4 m_leg_csz4{};
        leg_cex4 m_leg_cex4{};
        sec_key5 m_sec_key5{};
        sec_type5 m_sec_type5{};
        ratio5 m_ratio5{};
        side5 m_side5{};
        position_type5 m_position_type5{};
        leg_id5 m_leg_id5{};
        fill_quan5 m_fill_quan5{};
        avg_fill_price5 m_avg_fill_price5{};
        vega5 m_vega5{};
        ref_uprc5 m_ref_uprc5{};
        ref_delta5 m_ref_delta5{};
        ref_earn_cnt5 m_ref_earn_cnt5{};
        live_uprc5 m_live_uprc5{};
        price_format5 m_price_format5{};
        leg_cpx5 m_leg_cpx5{};
        leg_csz5 m_leg_csz5{};
        leg_cex5 m_leg_cex5{};
        sec_key6 m_sec_key6{};
        sec_type6 m_sec_type6{};
        ratio6 m_ratio6{};
        side6 m_side6{};
        position_type6 m_position_type6{};
        leg_id6 m_leg_id6{};
        fill_quan6 m_fill_quan6{};
        avg_fill_price6 m_avg_fill_price6{};
        vega6 m_vega6{};
        ref_uprc6 m_ref_uprc6{};
        ref_delta6 m_ref_delta6{};
        ref_earn_cnt6 m_ref_earn_cnt6{};
        live_uprc6 m_live_uprc6{};
        price_format6 m_price_format6{};
        leg_cpx6 m_leg_cpx6{};
        leg_csz6 m_leg_csz6{};
        leg_cex6 m_leg_cex6{};
        mleg_vega m_mleg_vega{};
        mleg_wt_vega m_mleg_wt_vega{};
        mleg_delta m_mleg_delta{};
        mleg_gamma m_mleg_gamma{};
        mleg_theta m_mleg_theta{};
        description m_description{};
        order_size m_order_size{};
        order_active_size m_order_active_size{};
        leaves_quantity m_leaves_quantity{};
        spdr_order_status m_spdr_order_status{};
        spdr_close_reason m_spdr_close_reason{};
        spdr_reject_reason m_spdr_reject_reason{};
        spdr_close_detail_txt m_spdr_close_detail_txt{};
        open_legs m_open_legs{};
        cum_square_qty m_cum_square_qty{};
        avg_square_prc m_avg_square_prc{};
        cum_partial_qty m_cum_partial_qty{};
        fill_vega m_fill_vega{};
        fill_wt_vega m_fill_wt_vega{};
        fill_delta m_fill_delta{};
        fill_ddelta m_fill_ddelta{};
        fill_gamma m_fill_gamma{};
        fill_theta m_fill_theta{};
        last_fill_dttm m_last_fill_dttm{};
        risk_limit_size m_risk_limit_size{};
        risk_limit_desc m_risk_limit_desc{};
        risk_limit_level m_risk_limit_level{};
        max_progress m_max_progress{};
        max_progress_detail m_max_progress_detail{};
        max_progress_time m_max_progress_time{};
        algo_state m_algo_state{};
        algo_counter m_algo_counter{};
        make_state m_make_state{};
        make_counter m_make_counter{};
        mkt_resp_state m_mkt_resp_state{};
        mkt_resp_counter m_mkt_resp_counter{};
        broker_state m_broker_state{};
        broker_counter m_broker_counter{};
        spdr_mkt_state m_spdr_mkt_state{};
        spdr_broker_status m_spdr_broker_status{};
        progress_rule_detail m_progress_rule_detail{};
        last_child_reject_dttm m_last_child_reject_dttm{};
        last_child_reject_text m_last_child_reject_text{};
        risk_group_id m_risk_group_id{};
        trigger_group_id m_trigger_group_id{};
        hedge_grouping_code m_hedge_grouping_code{};
        auto_hedge m_auto_hedge{};
        hedge_instrument m_hedge_instrument{};
        hedge_sec_key m_hedge_sec_key{};
        hedge_sec_type m_hedge_sec_type{};
        hedge_beta_ratio m_hedge_beta_ratio{};
        hedge_scope m_hedge_scope{};
        extern_hedge_ex_dest m_extern_hedge_ex_dest{};
        extern_hedge_params m_extern_hedge_params{};
        best_way_prc m_best_way_prc{};
        wrst_way_prc m_wrst_way_prc{};
        best_way_sz m_best_way_sz{};
        wrst_way_sz m_wrst_way_sz{};
        surface_prc m_surface_prc{};
        surface_vol m_surface_vol{};
        surface_uprc m_surface_uprc{};
        limit_price m_limit_price{};
        limit_ref_uprc m_limit_ref_uprc{};
        limit_err m_limit_err{};
        make_limit_price m_make_limit_price{};
        take_limit_price m_take_limit_price{};
        cxl_uprc_range m_cxl_uprc_range{};
        min_ubid m_min_ubid{};
        max_uask m_max_uask{};
        min_max_type m_min_max_type{};
        lead_side m_lead_side{};
        max_completion_slippage m_max_completion_slippage{};
        order_ref_premium m_order_ref_premium{};
        strategy m_strategy{};
        user_name m_user_name{};
        spdr_comment m_spdr_comment{};
        take_reach_rule m_take_reach_rule{};
        max_exposure_size m_max_exposure_size{};
        num_make_exchanges m_num_make_exchanges{};
        public_size m_public_size{};
        progress_rule m_progress_rule{};
        progress_slice_cnt m_progress_slice_cnt{};
        progress_expose_time m_progress_expose_time{};
        max_child_orders m_max_child_orders{};
        exch_mask m_exch_mask{};
        market_session m_market_session{};
        start_dttm m_start_dttm{};
        order_duration m_order_duration{};
        active_duration m_active_duration{};
        good_till_dttm m_good_till_dttm{};
        expire_dttm m_expire_dttm{};
        parent_order_handling m_parent_order_handling{};
        parent_balance_handling m_parent_balance_handling{};
        block_visibility m_block_visibility{};
        order_limit_type m_order_limit_type{};
        order_prc_limit m_order_prc_limit{};
        order_ref_uprc m_order_ref_uprc{};
        order_ref_de m_order_ref_de{};
        order_ref_ga m_order_ref_ga{};
        order_prc_offset m_order_prc_offset{};
        take_limit_class m_take_limit_class{};
        take_alpha_type m_take_alpha_type{};
        take_alpha_factor m_take_alpha_factor{};
        take_alpha_probability m_take_alpha_probability{};
        take_surf_prc_offset m_take_surf_prc_offset{};
        take_surf_vol_offset m_take_surf_vol_offset{};
        take_surf_wid_offset m_take_surf_wid_offset{};
        make_limit_class m_make_limit_class{};
        make_alpha_type m_make_alpha_type{};
        make_alpha_factor m_make_alpha_factor{};
        make_alpha_probability m_make_alpha_probability{};
        make_surf_prc_offset m_make_surf_prc_offset{};
        make_surf_vol_offset m_make_surf_vol_offset{};
        make_surf_wid_offset m_make_surf_wid_offset{};
        order_ref_event_mult m_order_ref_event_mult{};
        order_ref_event_dttm m_order_ref_event_dttm{};
        mleg_prob_limit m_mleg_prob_limit{};
        mleg_surf_offset m_mleg_surf_offset{};
        extern_ex_dest m_extern_ex_dest{};
        order_dttm m_order_dttm{};
        min_surf_vol m_min_surf_vol{};
        max_surf_vol m_max_surf_vol{};
        min_surf_prc m_min_surf_prc{};
        max_surf_prc m_max_surf_prc{};
        min_surf_uprc m_min_surf_uprc{};
        max_surf_uprc m_max_surf_uprc{};
        min_qte_width m_min_qte_width{};
        avg_qte_width m_avg_qte_width{};
        cnt_qte_width m_cnt_qte_width{};
        arrive_bid m_arrive_bid{};
        arrive_ask m_arrive_ask{};
        total_seconds m_total_seconds{};
        working_seconds m_working_seconds{};
        prt_active_cnt m_prt_active_cnt{};
        prt_qty_active m_prt_qty_active{};
        cum_exch_fee m_cum_exch_fee{};
        cum_m10_pnl m_cum_m10_pnl{};
        cum_arrival_pnl m_cum_arrival_pnl{};
        u_prc_drift m_u_prc_drift{};
        s_vol_drift m_s_vol_drift{};
        max_grp_day_ddelta_ln m_max_grp_day_ddelta_ln{};
        max_grp_day_ddelta_sh m_max_grp_day_ddelta_sh{};
        max_grp_day_contracts_ln m_max_grp_day_contracts_ln{};
        max_grp_day_contracts_sh m_max_grp_day_contracts_sh{};
        max_grp_day_contracts_abs m_max_grp_day_contracts_abs{};
        max_grp_day_vega_ln m_max_grp_day_vega_ln{};
        max_grp_day_vega_sh m_max_grp_day_vega_sh{};
        max_grp_day_vega_abs m_max_grp_day_vega_abs{};
        grp_day_vega_ratio m_grp_day_vega_ratio{};
        max_grp_day_rmetric1_ln m_max_grp_day_rmetric1_ln{};
        max_grp_day_rmetric1_sh m_max_grp_day_rmetric1_sh{};
        max_grp_day_rmetric1_abs m_max_grp_day_rmetric1_abs{};
        grp_day_rmetric1_ratio m_grp_day_rmetric1_ratio{};
        cpx1 m_cpx1{};
        csz1 m_csz1{};
        cex1 m_cex1{};
        cpx2 m_cpx2{};
        csz2 m_csz2{};
        cex2 m_cex2{};
        c_more m_c_more{};
        num_new_orders m_num_new_orders{};
        num_parent_limits m_num_parent_limits{};
        user_data1 m_user_data1{};
        user_data2 m_user_data2{};
        num_updates m_num_updates{};
        timestamp m_timestamp{};

        static constexpr int _mlinkHeaderLength = 14;

        public:		
        _meta get__meta() const {
            return m__meta;
        }		
        pkey get_pkey() const {
            return m_pkey;
        }		
        engine_name get_engine_name() const {
            return m_engine_name;
        }		
        parent_number get_parent_number() const {
            return m_parent_number;
        }		
        base_parent_number get_base_parent_number() const {
            return m_base_parent_number;
        }		
        modify_number get_modify_number() const {
            return m_modify_number;
        }		
        alt_order_id get_alt_order_id() const {
            return m_alt_order_id;
        }		
        package_id get_package_id() const {
            return m_package_id;
        }		
        alt_accnt get_alt_accnt() const {
            return m_alt_accnt;
        }		
        alt_user_name get_alt_user_name() const {
            return m_alt_user_name;
        }		
        stage_type get_stage_type() const {
            return m_stage_type;
        }		
        start_type get_start_type() const {
            return m_start_type;
        }		
        is_flagged get_is_flagged() const {
            return m_is_flagged;
        }		
        notice_number get_notice_number() const {
            return m_notice_number;
        }		
        exec_brkr_code get_exec_brkr_code() const {
            return m_exec_brkr_code;
        }		
        spread_class get_spread_class() const {
            return m_spread_class;
        }		
        spread_flavor get_spread_flavor() const {
            return m_spread_flavor;
        }		
        stock_side get_stock_side() const {
            return m_stock_side;
        }		
        ssale_flag get_ssale_flag() const {
            return m_ssale_flag;
        }		
        locate_quan get_locate_quan() const {
            return m_locate_quan;
        }		
        locate_firm get_locate_firm() const {
            return m_locate_firm;
        }		
        locate_pool get_locate_pool() const {
            return m_locate_pool;
        }		
        stock_shares get_stock_shares() const {
            return m_stock_shares;
        }		
        stock_leg_id get_stock_leg_id() const {
            return m_stock_leg_id;
        }		
        stock_fill_quan get_stock_fill_quan() const {
            return m_stock_fill_quan;
        }		
        stock_avg_fill_price get_stock_avg_fill_price() const {
            return m_stock_avg_fill_price;
        }		
        ref_uprc get_ref_uprc() const {
            return m_ref_uprc;
        }		
        live_uprc get_live_uprc() const {
            return m_live_uprc;
        }		
        u_price_format get_u_price_format() const {
            return m_u_price_format;
        }		
        stock_cpx get_stock_cpx() const {
            return m_stock_cpx;
        }		
        stock_csz get_stock_csz() const {
            return m_stock_csz;
        }		
        stock_cex get_stock_cex() const {
            return m_stock_cex;
        }		
        num_legs get_num_legs() const {
            return m_num_legs;
        }		
        sec_key1 get_sec_key1() const {
            return m_sec_key1;
        }		
        sec_type1 get_sec_type1() const {
            return m_sec_type1;
        }		
        ratio1 get_ratio1() const {
            return m_ratio1;
        }		
        side1 get_side1() const {
            return m_side1;
        }		
        position_type1 get_position_type1() const {
            return m_position_type1;
        }		
        leg_id1 get_leg_id1() const {
            return m_leg_id1;
        }		
        fill_quan1 get_fill_quan1() const {
            return m_fill_quan1;
        }		
        avg_fill_price1 get_avg_fill_price1() const {
            return m_avg_fill_price1;
        }		
        vega1 get_vega1() const {
            return m_vega1;
        }		
        ref_uprc1 get_ref_uprc1() const {
            return m_ref_uprc1;
        }		
        ref_delta1 get_ref_delta1() const {
            return m_ref_delta1;
        }		
        ref_earn_cnt1 get_ref_earn_cnt1() const {
            return m_ref_earn_cnt1;
        }		
        live_uprc1 get_live_uprc1() const {
            return m_live_uprc1;
        }		
        price_format1 get_price_format1() const {
            return m_price_format1;
        }		
        leg_cpx1 get_leg_cpx1() const {
            return m_leg_cpx1;
        }		
        leg_csz1 get_leg_csz1() const {
            return m_leg_csz1;
        }		
        leg_cex1 get_leg_cex1() const {
            return m_leg_cex1;
        }		
        sec_key2 get_sec_key2() const {
            return m_sec_key2;
        }		
        sec_type2 get_sec_type2() const {
            return m_sec_type2;
        }		
        ratio2 get_ratio2() const {
            return m_ratio2;
        }		
        side2 get_side2() const {
            return m_side2;
        }		
        position_type2 get_position_type2() const {
            return m_position_type2;
        }		
        leg_id2 get_leg_id2() const {
            return m_leg_id2;
        }		
        fill_quan2 get_fill_quan2() const {
            return m_fill_quan2;
        }		
        avg_fill_price2 get_avg_fill_price2() const {
            return m_avg_fill_price2;
        }		
        vega2 get_vega2() const {
            return m_vega2;
        }		
        ref_uprc2 get_ref_uprc2() const {
            return m_ref_uprc2;
        }		
        ref_delta2 get_ref_delta2() const {
            return m_ref_delta2;
        }		
        ref_earn_cnt2 get_ref_earn_cnt2() const {
            return m_ref_earn_cnt2;
        }		
        live_uprc2 get_live_uprc2() const {
            return m_live_uprc2;
        }		
        price_format2 get_price_format2() const {
            return m_price_format2;
        }		
        leg_cpx2 get_leg_cpx2() const {
            return m_leg_cpx2;
        }		
        leg_csz2 get_leg_csz2() const {
            return m_leg_csz2;
        }		
        leg_cex2 get_leg_cex2() const {
            return m_leg_cex2;
        }		
        sec_key3 get_sec_key3() const {
            return m_sec_key3;
        }		
        sec_type3 get_sec_type3() const {
            return m_sec_type3;
        }		
        ratio3 get_ratio3() const {
            return m_ratio3;
        }		
        side3 get_side3() const {
            return m_side3;
        }		
        position_type3 get_position_type3() const {
            return m_position_type3;
        }		
        leg_id3 get_leg_id3() const {
            return m_leg_id3;
        }		
        fill_quan3 get_fill_quan3() const {
            return m_fill_quan3;
        }		
        avg_fill_price3 get_avg_fill_price3() const {
            return m_avg_fill_price3;
        }		
        vega3 get_vega3() const {
            return m_vega3;
        }		
        ref_uprc3 get_ref_uprc3() const {
            return m_ref_uprc3;
        }		
        ref_delta3 get_ref_delta3() const {
            return m_ref_delta3;
        }		
        ref_earn_cnt3 get_ref_earn_cnt3() const {
            return m_ref_earn_cnt3;
        }		
        live_uprc3 get_live_uprc3() const {
            return m_live_uprc3;
        }		
        price_format3 get_price_format3() const {
            return m_price_format3;
        }		
        leg_cpx3 get_leg_cpx3() const {
            return m_leg_cpx3;
        }		
        leg_csz3 get_leg_csz3() const {
            return m_leg_csz3;
        }		
        leg_cex3 get_leg_cex3() const {
            return m_leg_cex3;
        }		
        sec_key4 get_sec_key4() const {
            return m_sec_key4;
        }		
        sec_type4 get_sec_type4() const {
            return m_sec_type4;
        }		
        ratio4 get_ratio4() const {
            return m_ratio4;
        }		
        side4 get_side4() const {
            return m_side4;
        }		
        position_type4 get_position_type4() const {
            return m_position_type4;
        }		
        leg_id4 get_leg_id4() const {
            return m_leg_id4;
        }		
        fill_quan4 get_fill_quan4() const {
            return m_fill_quan4;
        }		
        avg_fill_price4 get_avg_fill_price4() const {
            return m_avg_fill_price4;
        }		
        vega4 get_vega4() const {
            return m_vega4;
        }		
        ref_uprc4 get_ref_uprc4() const {
            return m_ref_uprc4;
        }		
        ref_delta4 get_ref_delta4() const {
            return m_ref_delta4;
        }		
        ref_earn_cnt4 get_ref_earn_cnt4() const {
            return m_ref_earn_cnt4;
        }		
        live_uprc4 get_live_uprc4() const {
            return m_live_uprc4;
        }		
        price_format4 get_price_format4() const {
            return m_price_format4;
        }		
        leg_cpx4 get_leg_cpx4() const {
            return m_leg_cpx4;
        }		
        leg_csz4 get_leg_csz4() const {
            return m_leg_csz4;
        }		
        leg_cex4 get_leg_cex4() const {
            return m_leg_cex4;
        }		
        sec_key5 get_sec_key5() const {
            return m_sec_key5;
        }		
        sec_type5 get_sec_type5() const {
            return m_sec_type5;
        }		
        ratio5 get_ratio5() const {
            return m_ratio5;
        }		
        side5 get_side5() const {
            return m_side5;
        }		
        position_type5 get_position_type5() const {
            return m_position_type5;
        }		
        leg_id5 get_leg_id5() const {
            return m_leg_id5;
        }		
        fill_quan5 get_fill_quan5() const {
            return m_fill_quan5;
        }		
        avg_fill_price5 get_avg_fill_price5() const {
            return m_avg_fill_price5;
        }		
        vega5 get_vega5() const {
            return m_vega5;
        }		
        ref_uprc5 get_ref_uprc5() const {
            return m_ref_uprc5;
        }		
        ref_delta5 get_ref_delta5() const {
            return m_ref_delta5;
        }		
        ref_earn_cnt5 get_ref_earn_cnt5() const {
            return m_ref_earn_cnt5;
        }		
        live_uprc5 get_live_uprc5() const {
            return m_live_uprc5;
        }		
        price_format5 get_price_format5() const {
            return m_price_format5;
        }		
        leg_cpx5 get_leg_cpx5() const {
            return m_leg_cpx5;
        }		
        leg_csz5 get_leg_csz5() const {
            return m_leg_csz5;
        }		
        leg_cex5 get_leg_cex5() const {
            return m_leg_cex5;
        }		
        sec_key6 get_sec_key6() const {
            return m_sec_key6;
        }		
        sec_type6 get_sec_type6() const {
            return m_sec_type6;
        }		
        ratio6 get_ratio6() const {
            return m_ratio6;
        }		
        side6 get_side6() const {
            return m_side6;
        }		
        position_type6 get_position_type6() const {
            return m_position_type6;
        }		
        leg_id6 get_leg_id6() const {
            return m_leg_id6;
        }		
        fill_quan6 get_fill_quan6() const {
            return m_fill_quan6;
        }		
        avg_fill_price6 get_avg_fill_price6() const {
            return m_avg_fill_price6;
        }		
        vega6 get_vega6() const {
            return m_vega6;
        }		
        ref_uprc6 get_ref_uprc6() const {
            return m_ref_uprc6;
        }		
        ref_delta6 get_ref_delta6() const {
            return m_ref_delta6;
        }		
        ref_earn_cnt6 get_ref_earn_cnt6() const {
            return m_ref_earn_cnt6;
        }		
        live_uprc6 get_live_uprc6() const {
            return m_live_uprc6;
        }		
        price_format6 get_price_format6() const {
            return m_price_format6;
        }		
        leg_cpx6 get_leg_cpx6() const {
            return m_leg_cpx6;
        }		
        leg_csz6 get_leg_csz6() const {
            return m_leg_csz6;
        }		
        leg_cex6 get_leg_cex6() const {
            return m_leg_cex6;
        }		
        mleg_vega get_mleg_vega() const {
            return m_mleg_vega;
        }		
        mleg_wt_vega get_mleg_wt_vega() const {
            return m_mleg_wt_vega;
        }		
        mleg_delta get_mleg_delta() const {
            return m_mleg_delta;
        }		
        mleg_gamma get_mleg_gamma() const {
            return m_mleg_gamma;
        }		
        mleg_theta get_mleg_theta() const {
            return m_mleg_theta;
        }		
        description get_description() const {
            return m_description;
        }		
        order_size get_order_size() const {
            return m_order_size;
        }		
        order_active_size get_order_active_size() const {
            return m_order_active_size;
        }		
        leaves_quantity get_leaves_quantity() const {
            return m_leaves_quantity;
        }		
        spdr_order_status get_spdr_order_status() const {
            return m_spdr_order_status;
        }		
        spdr_close_reason get_spdr_close_reason() const {
            return m_spdr_close_reason;
        }		
        spdr_reject_reason get_spdr_reject_reason() const {
            return m_spdr_reject_reason;
        }		
        spdr_close_detail_txt get_spdr_close_detail_txt() const {
            return m_spdr_close_detail_txt;
        }		
        open_legs get_open_legs() const {
            return m_open_legs;
        }		
        cum_square_qty get_cum_square_qty() const {
            return m_cum_square_qty;
        }		
        avg_square_prc get_avg_square_prc() const {
            return m_avg_square_prc;
        }		
        cum_partial_qty get_cum_partial_qty() const {
            return m_cum_partial_qty;
        }		
        fill_vega get_fill_vega() const {
            return m_fill_vega;
        }		
        fill_wt_vega get_fill_wt_vega() const {
            return m_fill_wt_vega;
        }		
        fill_delta get_fill_delta() const {
            return m_fill_delta;
        }		
        fill_ddelta get_fill_ddelta() const {
            return m_fill_ddelta;
        }		
        fill_gamma get_fill_gamma() const {
            return m_fill_gamma;
        }		
        fill_theta get_fill_theta() const {
            return m_fill_theta;
        }		
        last_fill_dttm get_last_fill_dttm() const {
            return m_last_fill_dttm;
        }		
        risk_limit_size get_risk_limit_size() const {
            return m_risk_limit_size;
        }		
        risk_limit_desc get_risk_limit_desc() const {
            return m_risk_limit_desc;
        }		
        risk_limit_level get_risk_limit_level() const {
            return m_risk_limit_level;
        }		
        max_progress get_max_progress() const {
            return m_max_progress;
        }		
        max_progress_detail get_max_progress_detail() const {
            return m_max_progress_detail;
        }		
        max_progress_time get_max_progress_time() const {
            return m_max_progress_time;
        }		
        algo_state get_algo_state() const {
            return m_algo_state;
        }		
        algo_counter get_algo_counter() const {
            return m_algo_counter;
        }		
        make_state get_make_state() const {
            return m_make_state;
        }		
        make_counter get_make_counter() const {
            return m_make_counter;
        }		
        mkt_resp_state get_mkt_resp_state() const {
            return m_mkt_resp_state;
        }		
        mkt_resp_counter get_mkt_resp_counter() const {
            return m_mkt_resp_counter;
        }		
        broker_state get_broker_state() const {
            return m_broker_state;
        }		
        broker_counter get_broker_counter() const {
            return m_broker_counter;
        }		
        spdr_mkt_state get_spdr_mkt_state() const {
            return m_spdr_mkt_state;
        }		
        spdr_broker_status get_spdr_broker_status() const {
            return m_spdr_broker_status;
        }		
        progress_rule_detail get_progress_rule_detail() const {
            return m_progress_rule_detail;
        }		
        last_child_reject_dttm get_last_child_reject_dttm() const {
            return m_last_child_reject_dttm;
        }		
        last_child_reject_text get_last_child_reject_text() const {
            return m_last_child_reject_text;
        }		
        risk_group_id get_risk_group_id() const {
            return m_risk_group_id;
        }		
        trigger_group_id get_trigger_group_id() const {
            return m_trigger_group_id;
        }		
        hedge_grouping_code get_hedge_grouping_code() const {
            return m_hedge_grouping_code;
        }		
        auto_hedge get_auto_hedge() const {
            return m_auto_hedge;
        }		
        hedge_instrument get_hedge_instrument() const {
            return m_hedge_instrument;
        }		
        hedge_sec_key get_hedge_sec_key() const {
            return m_hedge_sec_key;
        }		
        hedge_sec_type get_hedge_sec_type() const {
            return m_hedge_sec_type;
        }		
        hedge_beta_ratio get_hedge_beta_ratio() const {
            return m_hedge_beta_ratio;
        }		
        hedge_scope get_hedge_scope() const {
            return m_hedge_scope;
        }		
        extern_hedge_ex_dest get_extern_hedge_ex_dest() const {
            return m_extern_hedge_ex_dest;
        }		
        extern_hedge_params get_extern_hedge_params() const {
            return m_extern_hedge_params;
        }		
        best_way_prc get_best_way_prc() const {
            return m_best_way_prc;
        }		
        wrst_way_prc get_wrst_way_prc() const {
            return m_wrst_way_prc;
        }		
        best_way_sz get_best_way_sz() const {
            return m_best_way_sz;
        }		
        wrst_way_sz get_wrst_way_sz() const {
            return m_wrst_way_sz;
        }		
        surface_prc get_surface_prc() const {
            return m_surface_prc;
        }		
        surface_vol get_surface_vol() const {
            return m_surface_vol;
        }		
        surface_uprc get_surface_uprc() const {
            return m_surface_uprc;
        }		
        limit_price get_limit_price() const {
            return m_limit_price;
        }		
        limit_ref_uprc get_limit_ref_uprc() const {
            return m_limit_ref_uprc;
        }		
        limit_err get_limit_err() const {
            return m_limit_err;
        }		
        make_limit_price get_make_limit_price() const {
            return m_make_limit_price;
        }		
        take_limit_price get_take_limit_price() const {
            return m_take_limit_price;
        }		
        cxl_uprc_range get_cxl_uprc_range() const {
            return m_cxl_uprc_range;
        }		
        min_ubid get_min_ubid() const {
            return m_min_ubid;
        }		
        max_uask get_max_uask() const {
            return m_max_uask;
        }		
        min_max_type get_min_max_type() const {
            return m_min_max_type;
        }		
        lead_side get_lead_side() const {
            return m_lead_side;
        }		
        max_completion_slippage get_max_completion_slippage() const {
            return m_max_completion_slippage;
        }		
        order_ref_premium get_order_ref_premium() const {
            return m_order_ref_premium;
        }		
        strategy get_strategy() const {
            return m_strategy;
        }		
        user_name get_user_name() const {
            return m_user_name;
        }		
        spdr_comment get_spdr_comment() const {
            return m_spdr_comment;
        }		
        take_reach_rule get_take_reach_rule() const {
            return m_take_reach_rule;
        }		
        max_exposure_size get_max_exposure_size() const {
            return m_max_exposure_size;
        }		
        num_make_exchanges get_num_make_exchanges() const {
            return m_num_make_exchanges;
        }		
        public_size get_public_size() const {
            return m_public_size;
        }		
        progress_rule get_progress_rule() const {
            return m_progress_rule;
        }		
        progress_slice_cnt get_progress_slice_cnt() const {
            return m_progress_slice_cnt;
        }		
        progress_expose_time get_progress_expose_time() const {
            return m_progress_expose_time;
        }		
        max_child_orders get_max_child_orders() const {
            return m_max_child_orders;
        }		
        exch_mask get_exch_mask() const {
            return m_exch_mask;
        }		
        market_session get_market_session() const {
            return m_market_session;
        }		
        start_dttm get_start_dttm() const {
            return m_start_dttm;
        }		
        order_duration get_order_duration() const {
            return m_order_duration;
        }		
        active_duration get_active_duration() const {
            return m_active_duration;
        }		
        good_till_dttm get_good_till_dttm() const {
            return m_good_till_dttm;
        }		
        expire_dttm get_expire_dttm() const {
            return m_expire_dttm;
        }		
        parent_order_handling get_parent_order_handling() const {
            return m_parent_order_handling;
        }		
        parent_balance_handling get_parent_balance_handling() const {
            return m_parent_balance_handling;
        }		
        block_visibility get_block_visibility() const {
            return m_block_visibility;
        }		
        order_limit_type get_order_limit_type() const {
            return m_order_limit_type;
        }		
        order_prc_limit get_order_prc_limit() const {
            return m_order_prc_limit;
        }		
        order_ref_uprc get_order_ref_uprc() const {
            return m_order_ref_uprc;
        }		
        order_ref_de get_order_ref_de() const {
            return m_order_ref_de;
        }		
        order_ref_ga get_order_ref_ga() const {
            return m_order_ref_ga;
        }		
        order_prc_offset get_order_prc_offset() const {
            return m_order_prc_offset;
        }		
        take_limit_class get_take_limit_class() const {
            return m_take_limit_class;
        }		
        take_alpha_type get_take_alpha_type() const {
            return m_take_alpha_type;
        }		
        take_alpha_factor get_take_alpha_factor() const {
            return m_take_alpha_factor;
        }		
        take_alpha_probability get_take_alpha_probability() const {
            return m_take_alpha_probability;
        }		
        take_surf_prc_offset get_take_surf_prc_offset() const {
            return m_take_surf_prc_offset;
        }		
        take_surf_vol_offset get_take_surf_vol_offset() const {
            return m_take_surf_vol_offset;
        }		
        take_surf_wid_offset get_take_surf_wid_offset() const {
            return m_take_surf_wid_offset;
        }		
        make_limit_class get_make_limit_class() const {
            return m_make_limit_class;
        }		
        make_alpha_type get_make_alpha_type() const {
            return m_make_alpha_type;
        }		
        make_alpha_factor get_make_alpha_factor() const {
            return m_make_alpha_factor;
        }		
        make_alpha_probability get_make_alpha_probability() const {
            return m_make_alpha_probability;
        }		
        make_surf_prc_offset get_make_surf_prc_offset() const {
            return m_make_surf_prc_offset;
        }		
        make_surf_vol_offset get_make_surf_vol_offset() const {
            return m_make_surf_vol_offset;
        }		
        make_surf_wid_offset get_make_surf_wid_offset() const {
            return m_make_surf_wid_offset;
        }		
        order_ref_event_mult get_order_ref_event_mult() const {
            return m_order_ref_event_mult;
        }		
        order_ref_event_dttm get_order_ref_event_dttm() const {
            return m_order_ref_event_dttm;
        }		
        mleg_prob_limit get_mleg_prob_limit() const {
            return m_mleg_prob_limit;
        }		
        mleg_surf_offset get_mleg_surf_offset() const {
            return m_mleg_surf_offset;
        }		
        extern_ex_dest get_extern_ex_dest() const {
            return m_extern_ex_dest;
        }		
        order_dttm get_order_dttm() const {
            return m_order_dttm;
        }		
        min_surf_vol get_min_surf_vol() const {
            return m_min_surf_vol;
        }		
        max_surf_vol get_max_surf_vol() const {
            return m_max_surf_vol;
        }		
        min_surf_prc get_min_surf_prc() const {
            return m_min_surf_prc;
        }		
        max_surf_prc get_max_surf_prc() const {
            return m_max_surf_prc;
        }		
        min_surf_uprc get_min_surf_uprc() const {
            return m_min_surf_uprc;
        }		
        max_surf_uprc get_max_surf_uprc() const {
            return m_max_surf_uprc;
        }		
        min_qte_width get_min_qte_width() const {
            return m_min_qte_width;
        }		
        avg_qte_width get_avg_qte_width() const {
            return m_avg_qte_width;
        }		
        cnt_qte_width get_cnt_qte_width() const {
            return m_cnt_qte_width;
        }		
        arrive_bid get_arrive_bid() const {
            return m_arrive_bid;
        }		
        arrive_ask get_arrive_ask() const {
            return m_arrive_ask;
        }		
        total_seconds get_total_seconds() const {
            return m_total_seconds;
        }		
        working_seconds get_working_seconds() const {
            return m_working_seconds;
        }		
        prt_active_cnt get_prt_active_cnt() const {
            return m_prt_active_cnt;
        }		
        prt_qty_active get_prt_qty_active() const {
            return m_prt_qty_active;
        }		
        cum_exch_fee get_cum_exch_fee() const {
            return m_cum_exch_fee;
        }		
        cum_m10_pnl get_cum_m10_pnl() const {
            return m_cum_m10_pnl;
        }		
        cum_arrival_pnl get_cum_arrival_pnl() const {
            return m_cum_arrival_pnl;
        }		
        u_prc_drift get_u_prc_drift() const {
            return m_u_prc_drift;
        }		
        s_vol_drift get_s_vol_drift() const {
            return m_s_vol_drift;
        }		
        max_grp_day_ddelta_ln get_max_grp_day_ddelta_ln() const {
            return m_max_grp_day_ddelta_ln;
        }		
        max_grp_day_ddelta_sh get_max_grp_day_ddelta_sh() const {
            return m_max_grp_day_ddelta_sh;
        }		
        max_grp_day_contracts_ln get_max_grp_day_contracts_ln() const {
            return m_max_grp_day_contracts_ln;
        }		
        max_grp_day_contracts_sh get_max_grp_day_contracts_sh() const {
            return m_max_grp_day_contracts_sh;
        }		
        max_grp_day_contracts_abs get_max_grp_day_contracts_abs() const {
            return m_max_grp_day_contracts_abs;
        }		
        max_grp_day_vega_ln get_max_grp_day_vega_ln() const {
            return m_max_grp_day_vega_ln;
        }		
        max_grp_day_vega_sh get_max_grp_day_vega_sh() const {
            return m_max_grp_day_vega_sh;
        }		
        max_grp_day_vega_abs get_max_grp_day_vega_abs() const {
            return m_max_grp_day_vega_abs;
        }		
        grp_day_vega_ratio get_grp_day_vega_ratio() const {
            return m_grp_day_vega_ratio;
        }		
        max_grp_day_rmetric1_ln get_max_grp_day_rmetric1_ln() const {
            return m_max_grp_day_rmetric1_ln;
        }		
        max_grp_day_rmetric1_sh get_max_grp_day_rmetric1_sh() const {
            return m_max_grp_day_rmetric1_sh;
        }		
        max_grp_day_rmetric1_abs get_max_grp_day_rmetric1_abs() const {
            return m_max_grp_day_rmetric1_abs;
        }		
        grp_day_rmetric1_ratio get_grp_day_rmetric1_ratio() const {
            return m_grp_day_rmetric1_ratio;
        }		
        cpx1 get_cpx1() const {
            return m_cpx1;
        }		
        csz1 get_csz1() const {
            return m_csz1;
        }		
        cex1 get_cex1() const {
            return m_cex1;
        }		
        cpx2 get_cpx2() const {
            return m_cpx2;
        }		
        csz2 get_csz2() const {
            return m_csz2;
        }		
        cex2 get_cex2() const {
            return m_cex2;
        }		
        c_more get_c_more() const {
            return m_c_more;
        }		
        num_new_orders get_num_new_orders() const {
            return m_num_new_orders;
        }		
        num_parent_limits get_num_parent_limits() const {
            return m_num_parent_limits;
        }		
        user_data1 get_user_data1() const {
            return m_user_data1;
        }		
        user_data2 get_user_data2() const {
            return m_user_data2;
        }		
        num_updates get_num_updates() const {
            return m_num_updates;
        }		
        timestamp get_timestamp() const {
            return m_timestamp;
        }
        size_t getMLinkHeaderLength() const
        {
            return _mlinkHeaderLength;
        }
        void set__meta(const _meta& value)  {
            m__meta = value;
        }
        void set_pkey(const pkey& value)  {
            m_pkey = value;
        }
        void set_engine_name(const engine_name& value)  {
            m_engine_name = value;
        }
        void set_parent_number(const parent_number& value)  {
            m_parent_number = value;
        }
        void set_base_parent_number(const base_parent_number& value)  {
            m_base_parent_number = value;
        }
        void set_modify_number(const modify_number& value)  {
            m_modify_number = value;
        }
        void set_alt_order_id(const alt_order_id& value)  {
            m_alt_order_id = value;
        }
        void set_package_id(const package_id& value)  {
            m_package_id = value;
        }
        void set_alt_accnt(const alt_accnt& value)  {
            m_alt_accnt = value;
        }
        void set_alt_user_name(const alt_user_name& value)  {
            m_alt_user_name = value;
        }
        void set_stage_type(const stage_type& value)  {
            m_stage_type = value;
        }
        void set_start_type(const start_type& value)  {
            m_start_type = value;
        }
        void set_is_flagged(const is_flagged& value)  {
            m_is_flagged = value;
        }
        void set_notice_number(const notice_number& value)  {
            m_notice_number = value;
        }
        void set_exec_brkr_code(const exec_brkr_code& value)  {
            m_exec_brkr_code = value;
        }
        void set_spread_class(const spread_class& value)  {
            m_spread_class = value;
        }
        void set_spread_flavor(const spread_flavor& value)  {
            m_spread_flavor = value;
        }
        void set_stock_side(const stock_side& value)  {
            m_stock_side = value;
        }
        void set_ssale_flag(const ssale_flag& value)  {
            m_ssale_flag = value;
        }
        void set_locate_quan(const locate_quan& value)  {
            m_locate_quan = value;
        }
        void set_locate_firm(const locate_firm& value)  {
            m_locate_firm = value;
        }
        void set_locate_pool(const locate_pool& value)  {
            m_locate_pool = value;
        }
        void set_stock_shares(const stock_shares& value)  {
            m_stock_shares = value;
        }
        void set_stock_leg_id(const stock_leg_id& value)  {
            m_stock_leg_id = value;
        }
        void set_stock_fill_quan(const stock_fill_quan& value)  {
            m_stock_fill_quan = value;
        }
        void set_stock_avg_fill_price(const stock_avg_fill_price& value)  {
            m_stock_avg_fill_price = value;
        }
        void set_ref_uprc(const ref_uprc& value)  {
            m_ref_uprc = value;
        }
        void set_live_uprc(const live_uprc& value)  {
            m_live_uprc = value;
        }
        void set_u_price_format(const u_price_format& value)  {
            m_u_price_format = value;
        }
        void set_stock_cpx(const stock_cpx& value)  {
            m_stock_cpx = value;
        }
        void set_stock_csz(const stock_csz& value)  {
            m_stock_csz = value;
        }
        void set_stock_cex(const stock_cex& value)  {
            m_stock_cex = value;
        }
        void set_num_legs(const num_legs& value)  {
            m_num_legs = value;
        }
        void set_sec_key1(const sec_key1& value)  {
            m_sec_key1 = value;
        }
        void set_sec_type1(const sec_type1& value)  {
            m_sec_type1 = value;
        }
        void set_ratio1(const ratio1& value)  {
            m_ratio1 = value;
        }
        void set_side1(const side1& value)  {
            m_side1 = value;
        }
        void set_position_type1(const position_type1& value)  {
            m_position_type1 = value;
        }
        void set_leg_id1(const leg_id1& value)  {
            m_leg_id1 = value;
        }
        void set_fill_quan1(const fill_quan1& value)  {
            m_fill_quan1 = value;
        }
        void set_avg_fill_price1(const avg_fill_price1& value)  {
            m_avg_fill_price1 = value;
        }
        void set_vega1(const vega1& value)  {
            m_vega1 = value;
        }
        void set_ref_uprc1(const ref_uprc1& value)  {
            m_ref_uprc1 = value;
        }
        void set_ref_delta1(const ref_delta1& value)  {
            m_ref_delta1 = value;
        }
        void set_ref_earn_cnt1(const ref_earn_cnt1& value)  {
            m_ref_earn_cnt1 = value;
        }
        void set_live_uprc1(const live_uprc1& value)  {
            m_live_uprc1 = value;
        }
        void set_price_format1(const price_format1& value)  {
            m_price_format1 = value;
        }
        void set_leg_cpx1(const leg_cpx1& value)  {
            m_leg_cpx1 = value;
        }
        void set_leg_csz1(const leg_csz1& value)  {
            m_leg_csz1 = value;
        }
        void set_leg_cex1(const leg_cex1& value)  {
            m_leg_cex1 = value;
        }
        void set_sec_key2(const sec_key2& value)  {
            m_sec_key2 = value;
        }
        void set_sec_type2(const sec_type2& value)  {
            m_sec_type2 = value;
        }
        void set_ratio2(const ratio2& value)  {
            m_ratio2 = value;
        }
        void set_side2(const side2& value)  {
            m_side2 = value;
        }
        void set_position_type2(const position_type2& value)  {
            m_position_type2 = value;
        }
        void set_leg_id2(const leg_id2& value)  {
            m_leg_id2 = value;
        }
        void set_fill_quan2(const fill_quan2& value)  {
            m_fill_quan2 = value;
        }
        void set_avg_fill_price2(const avg_fill_price2& value)  {
            m_avg_fill_price2 = value;
        }
        void set_vega2(const vega2& value)  {
            m_vega2 = value;
        }
        void set_ref_uprc2(const ref_uprc2& value)  {
            m_ref_uprc2 = value;
        }
        void set_ref_delta2(const ref_delta2& value)  {
            m_ref_delta2 = value;
        }
        void set_ref_earn_cnt2(const ref_earn_cnt2& value)  {
            m_ref_earn_cnt2 = value;
        }
        void set_live_uprc2(const live_uprc2& value)  {
            m_live_uprc2 = value;
        }
        void set_price_format2(const price_format2& value)  {
            m_price_format2 = value;
        }
        void set_leg_cpx2(const leg_cpx2& value)  {
            m_leg_cpx2 = value;
        }
        void set_leg_csz2(const leg_csz2& value)  {
            m_leg_csz2 = value;
        }
        void set_leg_cex2(const leg_cex2& value)  {
            m_leg_cex2 = value;
        }
        void set_sec_key3(const sec_key3& value)  {
            m_sec_key3 = value;
        }
        void set_sec_type3(const sec_type3& value)  {
            m_sec_type3 = value;
        }
        void set_ratio3(const ratio3& value)  {
            m_ratio3 = value;
        }
        void set_side3(const side3& value)  {
            m_side3 = value;
        }
        void set_position_type3(const position_type3& value)  {
            m_position_type3 = value;
        }
        void set_leg_id3(const leg_id3& value)  {
            m_leg_id3 = value;
        }
        void set_fill_quan3(const fill_quan3& value)  {
            m_fill_quan3 = value;
        }
        void set_avg_fill_price3(const avg_fill_price3& value)  {
            m_avg_fill_price3 = value;
        }
        void set_vega3(const vega3& value)  {
            m_vega3 = value;
        }
        void set_ref_uprc3(const ref_uprc3& value)  {
            m_ref_uprc3 = value;
        }
        void set_ref_delta3(const ref_delta3& value)  {
            m_ref_delta3 = value;
        }
        void set_ref_earn_cnt3(const ref_earn_cnt3& value)  {
            m_ref_earn_cnt3 = value;
        }
        void set_live_uprc3(const live_uprc3& value)  {
            m_live_uprc3 = value;
        }
        void set_price_format3(const price_format3& value)  {
            m_price_format3 = value;
        }
        void set_leg_cpx3(const leg_cpx3& value)  {
            m_leg_cpx3 = value;
        }
        void set_leg_csz3(const leg_csz3& value)  {
            m_leg_csz3 = value;
        }
        void set_leg_cex3(const leg_cex3& value)  {
            m_leg_cex3 = value;
        }
        void set_sec_key4(const sec_key4& value)  {
            m_sec_key4 = value;
        }
        void set_sec_type4(const sec_type4& value)  {
            m_sec_type4 = value;
        }
        void set_ratio4(const ratio4& value)  {
            m_ratio4 = value;
        }
        void set_side4(const side4& value)  {
            m_side4 = value;
        }
        void set_position_type4(const position_type4& value)  {
            m_position_type4 = value;
        }
        void set_leg_id4(const leg_id4& value)  {
            m_leg_id4 = value;
        }
        void set_fill_quan4(const fill_quan4& value)  {
            m_fill_quan4 = value;
        }
        void set_avg_fill_price4(const avg_fill_price4& value)  {
            m_avg_fill_price4 = value;
        }
        void set_vega4(const vega4& value)  {
            m_vega4 = value;
        }
        void set_ref_uprc4(const ref_uprc4& value)  {
            m_ref_uprc4 = value;
        }
        void set_ref_delta4(const ref_delta4& value)  {
            m_ref_delta4 = value;
        }
        void set_ref_earn_cnt4(const ref_earn_cnt4& value)  {
            m_ref_earn_cnt4 = value;
        }
        void set_live_uprc4(const live_uprc4& value)  {
            m_live_uprc4 = value;
        }
        void set_price_format4(const price_format4& value)  {
            m_price_format4 = value;
        }
        void set_leg_cpx4(const leg_cpx4& value)  {
            m_leg_cpx4 = value;
        }
        void set_leg_csz4(const leg_csz4& value)  {
            m_leg_csz4 = value;
        }
        void set_leg_cex4(const leg_cex4& value)  {
            m_leg_cex4 = value;
        }
        void set_sec_key5(const sec_key5& value)  {
            m_sec_key5 = value;
        }
        void set_sec_type5(const sec_type5& value)  {
            m_sec_type5 = value;
        }
        void set_ratio5(const ratio5& value)  {
            m_ratio5 = value;
        }
        void set_side5(const side5& value)  {
            m_side5 = value;
        }
        void set_position_type5(const position_type5& value)  {
            m_position_type5 = value;
        }
        void set_leg_id5(const leg_id5& value)  {
            m_leg_id5 = value;
        }
        void set_fill_quan5(const fill_quan5& value)  {
            m_fill_quan5 = value;
        }
        void set_avg_fill_price5(const avg_fill_price5& value)  {
            m_avg_fill_price5 = value;
        }
        void set_vega5(const vega5& value)  {
            m_vega5 = value;
        }
        void set_ref_uprc5(const ref_uprc5& value)  {
            m_ref_uprc5 = value;
        }
        void set_ref_delta5(const ref_delta5& value)  {
            m_ref_delta5 = value;
        }
        void set_ref_earn_cnt5(const ref_earn_cnt5& value)  {
            m_ref_earn_cnt5 = value;
        }
        void set_live_uprc5(const live_uprc5& value)  {
            m_live_uprc5 = value;
        }
        void set_price_format5(const price_format5& value)  {
            m_price_format5 = value;
        }
        void set_leg_cpx5(const leg_cpx5& value)  {
            m_leg_cpx5 = value;
        }
        void set_leg_csz5(const leg_csz5& value)  {
            m_leg_csz5 = value;
        }
        void set_leg_cex5(const leg_cex5& value)  {
            m_leg_cex5 = value;
        }
        void set_sec_key6(const sec_key6& value)  {
            m_sec_key6 = value;
        }
        void set_sec_type6(const sec_type6& value)  {
            m_sec_type6 = value;
        }
        void set_ratio6(const ratio6& value)  {
            m_ratio6 = value;
        }
        void set_side6(const side6& value)  {
            m_side6 = value;
        }
        void set_position_type6(const position_type6& value)  {
            m_position_type6 = value;
        }
        void set_leg_id6(const leg_id6& value)  {
            m_leg_id6 = value;
        }
        void set_fill_quan6(const fill_quan6& value)  {
            m_fill_quan6 = value;
        }
        void set_avg_fill_price6(const avg_fill_price6& value)  {
            m_avg_fill_price6 = value;
        }
        void set_vega6(const vega6& value)  {
            m_vega6 = value;
        }
        void set_ref_uprc6(const ref_uprc6& value)  {
            m_ref_uprc6 = value;
        }
        void set_ref_delta6(const ref_delta6& value)  {
            m_ref_delta6 = value;
        }
        void set_ref_earn_cnt6(const ref_earn_cnt6& value)  {
            m_ref_earn_cnt6 = value;
        }
        void set_live_uprc6(const live_uprc6& value)  {
            m_live_uprc6 = value;
        }
        void set_price_format6(const price_format6& value)  {
            m_price_format6 = value;
        }
        void set_leg_cpx6(const leg_cpx6& value)  {
            m_leg_cpx6 = value;
        }
        void set_leg_csz6(const leg_csz6& value)  {
            m_leg_csz6 = value;
        }
        void set_leg_cex6(const leg_cex6& value)  {
            m_leg_cex6 = value;
        }
        void set_mleg_vega(const mleg_vega& value)  {
            m_mleg_vega = value;
        }
        void set_mleg_wt_vega(const mleg_wt_vega& value)  {
            m_mleg_wt_vega = value;
        }
        void set_mleg_delta(const mleg_delta& value)  {
            m_mleg_delta = value;
        }
        void set_mleg_gamma(const mleg_gamma& value)  {
            m_mleg_gamma = value;
        }
        void set_mleg_theta(const mleg_theta& value)  {
            m_mleg_theta = value;
        }
        void set_description(const description& value)  {
            m_description = value;
        }
        void set_order_size(const order_size& value)  {
            m_order_size = value;
        }
        void set_order_active_size(const order_active_size& value)  {
            m_order_active_size = value;
        }
        void set_leaves_quantity(const leaves_quantity& value)  {
            m_leaves_quantity = value;
        }
        void set_spdr_order_status(const spdr_order_status& value)  {
            m_spdr_order_status = value;
        }
        void set_spdr_close_reason(const spdr_close_reason& value)  {
            m_spdr_close_reason = value;
        }
        void set_spdr_reject_reason(const spdr_reject_reason& value)  {
            m_spdr_reject_reason = value;
        }
        void set_spdr_close_detail_txt(const spdr_close_detail_txt& value)  {
            m_spdr_close_detail_txt = value;
        }
        void set_open_legs(const open_legs& value)  {
            m_open_legs = value;
        }
        void set_cum_square_qty(const cum_square_qty& value)  {
            m_cum_square_qty = value;
        }
        void set_avg_square_prc(const avg_square_prc& value)  {
            m_avg_square_prc = value;
        }
        void set_cum_partial_qty(const cum_partial_qty& value)  {
            m_cum_partial_qty = value;
        }
        void set_fill_vega(const fill_vega& value)  {
            m_fill_vega = value;
        }
        void set_fill_wt_vega(const fill_wt_vega& value)  {
            m_fill_wt_vega = value;
        }
        void set_fill_delta(const fill_delta& value)  {
            m_fill_delta = value;
        }
        void set_fill_ddelta(const fill_ddelta& value)  {
            m_fill_ddelta = value;
        }
        void set_fill_gamma(const fill_gamma& value)  {
            m_fill_gamma = value;
        }
        void set_fill_theta(const fill_theta& value)  {
            m_fill_theta = value;
        }
        void set_last_fill_dttm(const last_fill_dttm& value)  {
            m_last_fill_dttm = value;
        }
        void set_risk_limit_size(const risk_limit_size& value)  {
            m_risk_limit_size = value;
        }
        void set_risk_limit_desc(const risk_limit_desc& value)  {
            m_risk_limit_desc = value;
        }
        void set_risk_limit_level(const risk_limit_level& value)  {
            m_risk_limit_level = value;
        }
        void set_max_progress(const max_progress& value)  {
            m_max_progress = value;
        }
        void set_max_progress_detail(const max_progress_detail& value)  {
            m_max_progress_detail = value;
        }
        void set_max_progress_time(const max_progress_time& value)  {
            m_max_progress_time = value;
        }
        void set_algo_state(const algo_state& value)  {
            m_algo_state = value;
        }
        void set_algo_counter(const algo_counter& value)  {
            m_algo_counter = value;
        }
        void set_make_state(const make_state& value)  {
            m_make_state = value;
        }
        void set_make_counter(const make_counter& value)  {
            m_make_counter = value;
        }
        void set_mkt_resp_state(const mkt_resp_state& value)  {
            m_mkt_resp_state = value;
        }
        void set_mkt_resp_counter(const mkt_resp_counter& value)  {
            m_mkt_resp_counter = value;
        }
        void set_broker_state(const broker_state& value)  {
            m_broker_state = value;
        }
        void set_broker_counter(const broker_counter& value)  {
            m_broker_counter = value;
        }
        void set_spdr_mkt_state(const spdr_mkt_state& value)  {
            m_spdr_mkt_state = value;
        }
        void set_spdr_broker_status(const spdr_broker_status& value)  {
            m_spdr_broker_status = value;
        }
        void set_progress_rule_detail(const progress_rule_detail& value)  {
            m_progress_rule_detail = value;
        }
        void set_last_child_reject_dttm(const last_child_reject_dttm& value)  {
            m_last_child_reject_dttm = value;
        }
        void set_last_child_reject_text(const last_child_reject_text& value)  {
            m_last_child_reject_text = value;
        }
        void set_risk_group_id(const risk_group_id& value)  {
            m_risk_group_id = value;
        }
        void set_trigger_group_id(const trigger_group_id& value)  {
            m_trigger_group_id = value;
        }
        void set_hedge_grouping_code(const hedge_grouping_code& value)  {
            m_hedge_grouping_code = value;
        }
        void set_auto_hedge(const auto_hedge& value)  {
            m_auto_hedge = value;
        }
        void set_hedge_instrument(const hedge_instrument& value)  {
            m_hedge_instrument = value;
        }
        void set_hedge_sec_key(const hedge_sec_key& value)  {
            m_hedge_sec_key = value;
        }
        void set_hedge_sec_type(const hedge_sec_type& value)  {
            m_hedge_sec_type = value;
        }
        void set_hedge_beta_ratio(const hedge_beta_ratio& value)  {
            m_hedge_beta_ratio = value;
        }
        void set_hedge_scope(const hedge_scope& value)  {
            m_hedge_scope = value;
        }
        void set_extern_hedge_ex_dest(const extern_hedge_ex_dest& value)  {
            m_extern_hedge_ex_dest = value;
        }
        void set_extern_hedge_params(const extern_hedge_params& value)  {
            m_extern_hedge_params = value;
        }
        void set_best_way_prc(const best_way_prc& value)  {
            m_best_way_prc = value;
        }
        void set_wrst_way_prc(const wrst_way_prc& value)  {
            m_wrst_way_prc = value;
        }
        void set_best_way_sz(const best_way_sz& value)  {
            m_best_way_sz = value;
        }
        void set_wrst_way_sz(const wrst_way_sz& value)  {
            m_wrst_way_sz = value;
        }
        void set_surface_prc(const surface_prc& value)  {
            m_surface_prc = value;
        }
        void set_surface_vol(const surface_vol& value)  {
            m_surface_vol = value;
        }
        void set_surface_uprc(const surface_uprc& value)  {
            m_surface_uprc = value;
        }
        void set_limit_price(const limit_price& value)  {
            m_limit_price = value;
        }
        void set_limit_ref_uprc(const limit_ref_uprc& value)  {
            m_limit_ref_uprc = value;
        }
        void set_limit_err(const limit_err& value)  {
            m_limit_err = value;
        }
        void set_make_limit_price(const make_limit_price& value)  {
            m_make_limit_price = value;
        }
        void set_take_limit_price(const take_limit_price& value)  {
            m_take_limit_price = value;
        }
        void set_cxl_uprc_range(const cxl_uprc_range& value)  {
            m_cxl_uprc_range = value;
        }
        void set_min_ubid(const min_ubid& value)  {
            m_min_ubid = value;
        }
        void set_max_uask(const max_uask& value)  {
            m_max_uask = value;
        }
        void set_min_max_type(const min_max_type& value)  {
            m_min_max_type = value;
        }
        void set_lead_side(const lead_side& value)  {
            m_lead_side = value;
        }
        void set_max_completion_slippage(const max_completion_slippage& value)  {
            m_max_completion_slippage = value;
        }
        void set_order_ref_premium(const order_ref_premium& value)  {
            m_order_ref_premium = value;
        }
        void set_strategy(const strategy& value)  {
            m_strategy = value;
        }
        void set_user_name(const user_name& value)  {
            m_user_name = value;
        }
        void set_spdr_comment(const spdr_comment& value)  {
            m_spdr_comment = value;
        }
        void set_take_reach_rule(const take_reach_rule& value)  {
            m_take_reach_rule = value;
        }
        void set_max_exposure_size(const max_exposure_size& value)  {
            m_max_exposure_size = value;
        }
        void set_num_make_exchanges(const num_make_exchanges& value)  {
            m_num_make_exchanges = value;
        }
        void set_public_size(const public_size& value)  {
            m_public_size = value;
        }
        void set_progress_rule(const progress_rule& value)  {
            m_progress_rule = value;
        }
        void set_progress_slice_cnt(const progress_slice_cnt& value)  {
            m_progress_slice_cnt = value;
        }
        void set_progress_expose_time(const progress_expose_time& value)  {
            m_progress_expose_time = value;
        }
        void set_max_child_orders(const max_child_orders& value)  {
            m_max_child_orders = value;
        }
        void set_exch_mask(const exch_mask& value)  {
            m_exch_mask = value;
        }
        void set_market_session(const market_session& value)  {
            m_market_session = value;
        }
        void set_start_dttm(const start_dttm& value)  {
            m_start_dttm = value;
        }
        void set_order_duration(const order_duration& value)  {
            m_order_duration = value;
        }
        void set_active_duration(const active_duration& value)  {
            m_active_duration = value;
        }
        void set_good_till_dttm(const good_till_dttm& value)  {
            m_good_till_dttm = value;
        }
        void set_expire_dttm(const expire_dttm& value)  {
            m_expire_dttm = value;
        }
        void set_parent_order_handling(const parent_order_handling& value)  {
            m_parent_order_handling = value;
        }
        void set_parent_balance_handling(const parent_balance_handling& value)  {
            m_parent_balance_handling = value;
        }
        void set_block_visibility(const block_visibility& value)  {
            m_block_visibility = value;
        }
        void set_order_limit_type(const order_limit_type& value)  {
            m_order_limit_type = value;
        }
        void set_order_prc_limit(const order_prc_limit& value)  {
            m_order_prc_limit = value;
        }
        void set_order_ref_uprc(const order_ref_uprc& value)  {
            m_order_ref_uprc = value;
        }
        void set_order_ref_de(const order_ref_de& value)  {
            m_order_ref_de = value;
        }
        void set_order_ref_ga(const order_ref_ga& value)  {
            m_order_ref_ga = value;
        }
        void set_order_prc_offset(const order_prc_offset& value)  {
            m_order_prc_offset = value;
        }
        void set_take_limit_class(const take_limit_class& value)  {
            m_take_limit_class = value;
        }
        void set_take_alpha_type(const take_alpha_type& value)  {
            m_take_alpha_type = value;
        }
        void set_take_alpha_factor(const take_alpha_factor& value)  {
            m_take_alpha_factor = value;
        }
        void set_take_alpha_probability(const take_alpha_probability& value)  {
            m_take_alpha_probability = value;
        }
        void set_take_surf_prc_offset(const take_surf_prc_offset& value)  {
            m_take_surf_prc_offset = value;
        }
        void set_take_surf_vol_offset(const take_surf_vol_offset& value)  {
            m_take_surf_vol_offset = value;
        }
        void set_take_surf_wid_offset(const take_surf_wid_offset& value)  {
            m_take_surf_wid_offset = value;
        }
        void set_make_limit_class(const make_limit_class& value)  {
            m_make_limit_class = value;
        }
        void set_make_alpha_type(const make_alpha_type& value)  {
            m_make_alpha_type = value;
        }
        void set_make_alpha_factor(const make_alpha_factor& value)  {
            m_make_alpha_factor = value;
        }
        void set_make_alpha_probability(const make_alpha_probability& value)  {
            m_make_alpha_probability = value;
        }
        void set_make_surf_prc_offset(const make_surf_prc_offset& value)  {
            m_make_surf_prc_offset = value;
        }
        void set_make_surf_vol_offset(const make_surf_vol_offset& value)  {
            m_make_surf_vol_offset = value;
        }
        void set_make_surf_wid_offset(const make_surf_wid_offset& value)  {
            m_make_surf_wid_offset = value;
        }
        void set_order_ref_event_mult(const order_ref_event_mult& value)  {
            m_order_ref_event_mult = value;
        }
        void set_order_ref_event_dttm(const order_ref_event_dttm& value)  {
            m_order_ref_event_dttm = value;
        }
        void set_mleg_prob_limit(const mleg_prob_limit& value)  {
            m_mleg_prob_limit = value;
        }
        void set_mleg_surf_offset(const mleg_surf_offset& value)  {
            m_mleg_surf_offset = value;
        }
        void set_extern_ex_dest(const extern_ex_dest& value)  {
            m_extern_ex_dest = value;
        }
        void set_order_dttm(const order_dttm& value)  {
            m_order_dttm = value;
        }
        void set_min_surf_vol(const min_surf_vol& value)  {
            m_min_surf_vol = value;
        }
        void set_max_surf_vol(const max_surf_vol& value)  {
            m_max_surf_vol = value;
        }
        void set_min_surf_prc(const min_surf_prc& value)  {
            m_min_surf_prc = value;
        }
        void set_max_surf_prc(const max_surf_prc& value)  {
            m_max_surf_prc = value;
        }
        void set_min_surf_uprc(const min_surf_uprc& value)  {
            m_min_surf_uprc = value;
        }
        void set_max_surf_uprc(const max_surf_uprc& value)  {
            m_max_surf_uprc = value;
        }
        void set_min_qte_width(const min_qte_width& value)  {
            m_min_qte_width = value;
        }
        void set_avg_qte_width(const avg_qte_width& value)  {
            m_avg_qte_width = value;
        }
        void set_cnt_qte_width(const cnt_qte_width& value)  {
            m_cnt_qte_width = value;
        }
        void set_arrive_bid(const arrive_bid& value)  {
            m_arrive_bid = value;
        }
        void set_arrive_ask(const arrive_ask& value)  {
            m_arrive_ask = value;
        }
        void set_total_seconds(const total_seconds& value)  {
            m_total_seconds = value;
        }
        void set_working_seconds(const working_seconds& value)  {
            m_working_seconds = value;
        }
        void set_prt_active_cnt(const prt_active_cnt& value)  {
            m_prt_active_cnt = value;
        }
        void set_prt_qty_active(const prt_qty_active& value)  {
            m_prt_qty_active = value;
        }
        void set_cum_exch_fee(const cum_exch_fee& value)  {
            m_cum_exch_fee = value;
        }
        void set_cum_m10_pnl(const cum_m10_pnl& value)  {
            m_cum_m10_pnl = value;
        }
        void set_cum_arrival_pnl(const cum_arrival_pnl& value)  {
            m_cum_arrival_pnl = value;
        }
        void set_u_prc_drift(const u_prc_drift& value)  {
            m_u_prc_drift = value;
        }
        void set_s_vol_drift(const s_vol_drift& value)  {
            m_s_vol_drift = value;
        }
        void set_max_grp_day_ddelta_ln(const max_grp_day_ddelta_ln& value)  {
            m_max_grp_day_ddelta_ln = value;
        }
        void set_max_grp_day_ddelta_sh(const max_grp_day_ddelta_sh& value)  {
            m_max_grp_day_ddelta_sh = value;
        }
        void set_max_grp_day_contracts_ln(const max_grp_day_contracts_ln& value)  {
            m_max_grp_day_contracts_ln = value;
        }
        void set_max_grp_day_contracts_sh(const max_grp_day_contracts_sh& value)  {
            m_max_grp_day_contracts_sh = value;
        }
        void set_max_grp_day_contracts_abs(const max_grp_day_contracts_abs& value)  {
            m_max_grp_day_contracts_abs = value;
        }
        void set_max_grp_day_vega_ln(const max_grp_day_vega_ln& value)  {
            m_max_grp_day_vega_ln = value;
        }
        void set_max_grp_day_vega_sh(const max_grp_day_vega_sh& value)  {
            m_max_grp_day_vega_sh = value;
        }
        void set_max_grp_day_vega_abs(const max_grp_day_vega_abs& value)  {
            m_max_grp_day_vega_abs = value;
        }
        void set_grp_day_vega_ratio(const grp_day_vega_ratio& value)  {
            m_grp_day_vega_ratio = value;
        }
        void set_max_grp_day_rmetric1_ln(const max_grp_day_rmetric1_ln& value)  {
            m_max_grp_day_rmetric1_ln = value;
        }
        void set_max_grp_day_rmetric1_sh(const max_grp_day_rmetric1_sh& value)  {
            m_max_grp_day_rmetric1_sh = value;
        }
        void set_max_grp_day_rmetric1_abs(const max_grp_day_rmetric1_abs& value)  {
            m_max_grp_day_rmetric1_abs = value;
        }
        void set_grp_day_rmetric1_ratio(const grp_day_rmetric1_ratio& value)  {
            m_grp_day_rmetric1_ratio = value;
        }
        void set_cpx1(const cpx1& value)  {
            m_cpx1 = value;
        }
        void set_csz1(const csz1& value)  {
            m_csz1 = value;
        }
        void set_cex1(const cex1& value)  {
            m_cex1 = value;
        }
        void set_cpx2(const cpx2& value)  {
            m_cpx2 = value;
        }
        void set_csz2(const csz2& value)  {
            m_csz2 = value;
        }
        void set_cex2(const cex2& value)  {
            m_cex2 = value;
        }
        void set_c_more(const c_more& value)  {
            m_c_more = value;
        }
        void set_num_new_orders(const num_new_orders& value)  {
            m_num_new_orders = value;
        }
        void set_num_parent_limits(const num_parent_limits& value)  {
            m_num_parent_limits = value;
        }
        void set_user_data1(const user_data1& value)  {
            m_user_data1 = value;
        }
        void set_user_data2(const user_data2& value)  {
            m_user_data2 = value;
        }
        void set_num_updates(const num_updates& value)  {
            m_num_updates = value;
        }
        void set_timestamp(const timestamp& value)  {
            m_timestamp = value;
        }

        //templatized getters and setters

        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to SpdrMLegBrkrState::get()"); return T{}; }  // specializations for valid types are listed below the class definition

        //specializations for set functions for the valid types
    
        void set(const _meta & value) {
            set__meta(value);
        }
        void set(const pkey & value) {
            set_pkey(value);
        }
        void set(const engine_name & value) {
            set_engine_name(value);
        }
        void set(const parent_number & value) {
            set_parent_number(value);
        }
        void set(const base_parent_number & value) {
            set_base_parent_number(value);
        }
        void set(const modify_number & value) {
            set_modify_number(value);
        }
        void set(const alt_order_id & value) {
            set_alt_order_id(value);
        }
        void set(const package_id & value) {
            set_package_id(value);
        }
        void set(const alt_accnt & value) {
            set_alt_accnt(value);
        }
        void set(const alt_user_name & value) {
            set_alt_user_name(value);
        }
        void set(const stage_type & value) {
            set_stage_type(value);
        }
        void set(const start_type & value) {
            set_start_type(value);
        }
        void set(const is_flagged & value) {
            set_is_flagged(value);
        }
        void set(const notice_number & value) {
            set_notice_number(value);
        }
        void set(const exec_brkr_code & value) {
            set_exec_brkr_code(value);
        }
        void set(const spread_class & value) {
            set_spread_class(value);
        }
        void set(const spread_flavor & value) {
            set_spread_flavor(value);
        }
        void set(const stock_side & value) {
            set_stock_side(value);
        }
        void set(const ssale_flag & value) {
            set_ssale_flag(value);
        }
        void set(const locate_quan & value) {
            set_locate_quan(value);
        }
        void set(const locate_firm & value) {
            set_locate_firm(value);
        }
        void set(const locate_pool & value) {
            set_locate_pool(value);
        }
        void set(const stock_shares & value) {
            set_stock_shares(value);
        }
        void set(const stock_leg_id & value) {
            set_stock_leg_id(value);
        }
        void set(const stock_fill_quan & value) {
            set_stock_fill_quan(value);
        }
        void set(const stock_avg_fill_price & value) {
            set_stock_avg_fill_price(value);
        }
        void set(const ref_uprc & value) {
            set_ref_uprc(value);
        }
        void set(const live_uprc & value) {
            set_live_uprc(value);
        }
        void set(const u_price_format & value) {
            set_u_price_format(value);
        }
        void set(const stock_cpx & value) {
            set_stock_cpx(value);
        }
        void set(const stock_csz & value) {
            set_stock_csz(value);
        }
        void set(const stock_cex & value) {
            set_stock_cex(value);
        }
        void set(const num_legs & value) {
            set_num_legs(value);
        }
        void set(const sec_key1 & value) {
            set_sec_key1(value);
        }
        void set(const sec_type1 & value) {
            set_sec_type1(value);
        }
        void set(const ratio1 & value) {
            set_ratio1(value);
        }
        void set(const side1 & value) {
            set_side1(value);
        }
        void set(const position_type1 & value) {
            set_position_type1(value);
        }
        void set(const leg_id1 & value) {
            set_leg_id1(value);
        }
        void set(const fill_quan1 & value) {
            set_fill_quan1(value);
        }
        void set(const avg_fill_price1 & value) {
            set_avg_fill_price1(value);
        }
        void set(const vega1 & value) {
            set_vega1(value);
        }
        void set(const ref_uprc1 & value) {
            set_ref_uprc1(value);
        }
        void set(const ref_delta1 & value) {
            set_ref_delta1(value);
        }
        void set(const ref_earn_cnt1 & value) {
            set_ref_earn_cnt1(value);
        }
        void set(const live_uprc1 & value) {
            set_live_uprc1(value);
        }
        void set(const price_format1 & value) {
            set_price_format1(value);
        }
        void set(const leg_cpx1 & value) {
            set_leg_cpx1(value);
        }
        void set(const leg_csz1 & value) {
            set_leg_csz1(value);
        }
        void set(const leg_cex1 & value) {
            set_leg_cex1(value);
        }
        void set(const sec_key2 & value) {
            set_sec_key2(value);
        }
        void set(const sec_type2 & value) {
            set_sec_type2(value);
        }
        void set(const ratio2 & value) {
            set_ratio2(value);
        }
        void set(const side2 & value) {
            set_side2(value);
        }
        void set(const position_type2 & value) {
            set_position_type2(value);
        }
        void set(const leg_id2 & value) {
            set_leg_id2(value);
        }
        void set(const fill_quan2 & value) {
            set_fill_quan2(value);
        }
        void set(const avg_fill_price2 & value) {
            set_avg_fill_price2(value);
        }
        void set(const vega2 & value) {
            set_vega2(value);
        }
        void set(const ref_uprc2 & value) {
            set_ref_uprc2(value);
        }
        void set(const ref_delta2 & value) {
            set_ref_delta2(value);
        }
        void set(const ref_earn_cnt2 & value) {
            set_ref_earn_cnt2(value);
        }
        void set(const live_uprc2 & value) {
            set_live_uprc2(value);
        }
        void set(const price_format2 & value) {
            set_price_format2(value);
        }
        void set(const leg_cpx2 & value) {
            set_leg_cpx2(value);
        }
        void set(const leg_csz2 & value) {
            set_leg_csz2(value);
        }
        void set(const leg_cex2 & value) {
            set_leg_cex2(value);
        }
        void set(const sec_key3 & value) {
            set_sec_key3(value);
        }
        void set(const sec_type3 & value) {
            set_sec_type3(value);
        }
        void set(const ratio3 & value) {
            set_ratio3(value);
        }
        void set(const side3 & value) {
            set_side3(value);
        }
        void set(const position_type3 & value) {
            set_position_type3(value);
        }
        void set(const leg_id3 & value) {
            set_leg_id3(value);
        }
        void set(const fill_quan3 & value) {
            set_fill_quan3(value);
        }
        void set(const avg_fill_price3 & value) {
            set_avg_fill_price3(value);
        }
        void set(const vega3 & value) {
            set_vega3(value);
        }
        void set(const ref_uprc3 & value) {
            set_ref_uprc3(value);
        }
        void set(const ref_delta3 & value) {
            set_ref_delta3(value);
        }
        void set(const ref_earn_cnt3 & value) {
            set_ref_earn_cnt3(value);
        }
        void set(const live_uprc3 & value) {
            set_live_uprc3(value);
        }
        void set(const price_format3 & value) {
            set_price_format3(value);
        }
        void set(const leg_cpx3 & value) {
            set_leg_cpx3(value);
        }
        void set(const leg_csz3 & value) {
            set_leg_csz3(value);
        }
        void set(const leg_cex3 & value) {
            set_leg_cex3(value);
        }
        void set(const sec_key4 & value) {
            set_sec_key4(value);
        }
        void set(const sec_type4 & value) {
            set_sec_type4(value);
        }
        void set(const ratio4 & value) {
            set_ratio4(value);
        }
        void set(const side4 & value) {
            set_side4(value);
        }
        void set(const position_type4 & value) {
            set_position_type4(value);
        }
        void set(const leg_id4 & value) {
            set_leg_id4(value);
        }
        void set(const fill_quan4 & value) {
            set_fill_quan4(value);
        }
        void set(const avg_fill_price4 & value) {
            set_avg_fill_price4(value);
        }
        void set(const vega4 & value) {
            set_vega4(value);
        }
        void set(const ref_uprc4 & value) {
            set_ref_uprc4(value);
        }
        void set(const ref_delta4 & value) {
            set_ref_delta4(value);
        }
        void set(const ref_earn_cnt4 & value) {
            set_ref_earn_cnt4(value);
        }
        void set(const live_uprc4 & value) {
            set_live_uprc4(value);
        }
        void set(const price_format4 & value) {
            set_price_format4(value);
        }
        void set(const leg_cpx4 & value) {
            set_leg_cpx4(value);
        }
        void set(const leg_csz4 & value) {
            set_leg_csz4(value);
        }
        void set(const leg_cex4 & value) {
            set_leg_cex4(value);
        }
        void set(const sec_key5 & value) {
            set_sec_key5(value);
        }
        void set(const sec_type5 & value) {
            set_sec_type5(value);
        }
        void set(const ratio5 & value) {
            set_ratio5(value);
        }
        void set(const side5 & value) {
            set_side5(value);
        }
        void set(const position_type5 & value) {
            set_position_type5(value);
        }
        void set(const leg_id5 & value) {
            set_leg_id5(value);
        }
        void set(const fill_quan5 & value) {
            set_fill_quan5(value);
        }
        void set(const avg_fill_price5 & value) {
            set_avg_fill_price5(value);
        }
        void set(const vega5 & value) {
            set_vega5(value);
        }
        void set(const ref_uprc5 & value) {
            set_ref_uprc5(value);
        }
        void set(const ref_delta5 & value) {
            set_ref_delta5(value);
        }
        void set(const ref_earn_cnt5 & value) {
            set_ref_earn_cnt5(value);
        }
        void set(const live_uprc5 & value) {
            set_live_uprc5(value);
        }
        void set(const price_format5 & value) {
            set_price_format5(value);
        }
        void set(const leg_cpx5 & value) {
            set_leg_cpx5(value);
        }
        void set(const leg_csz5 & value) {
            set_leg_csz5(value);
        }
        void set(const leg_cex5 & value) {
            set_leg_cex5(value);
        }
        void set(const sec_key6 & value) {
            set_sec_key6(value);
        }
        void set(const sec_type6 & value) {
            set_sec_type6(value);
        }
        void set(const ratio6 & value) {
            set_ratio6(value);
        }
        void set(const side6 & value) {
            set_side6(value);
        }
        void set(const position_type6 & value) {
            set_position_type6(value);
        }
        void set(const leg_id6 & value) {
            set_leg_id6(value);
        }
        void set(const fill_quan6 & value) {
            set_fill_quan6(value);
        }
        void set(const avg_fill_price6 & value) {
            set_avg_fill_price6(value);
        }
        void set(const vega6 & value) {
            set_vega6(value);
        }
        void set(const ref_uprc6 & value) {
            set_ref_uprc6(value);
        }
        void set(const ref_delta6 & value) {
            set_ref_delta6(value);
        }
        void set(const ref_earn_cnt6 & value) {
            set_ref_earn_cnt6(value);
        }
        void set(const live_uprc6 & value) {
            set_live_uprc6(value);
        }
        void set(const price_format6 & value) {
            set_price_format6(value);
        }
        void set(const leg_cpx6 & value) {
            set_leg_cpx6(value);
        }
        void set(const leg_csz6 & value) {
            set_leg_csz6(value);
        }
        void set(const leg_cex6 & value) {
            set_leg_cex6(value);
        }
        void set(const mleg_vega & value) {
            set_mleg_vega(value);
        }
        void set(const mleg_wt_vega & value) {
            set_mleg_wt_vega(value);
        }
        void set(const mleg_delta & value) {
            set_mleg_delta(value);
        }
        void set(const mleg_gamma & value) {
            set_mleg_gamma(value);
        }
        void set(const mleg_theta & value) {
            set_mleg_theta(value);
        }
        void set(const description & value) {
            set_description(value);
        }
        void set(const order_size & value) {
            set_order_size(value);
        }
        void set(const order_active_size & value) {
            set_order_active_size(value);
        }
        void set(const leaves_quantity & value) {
            set_leaves_quantity(value);
        }
        void set(const spdr_order_status & value) {
            set_spdr_order_status(value);
        }
        void set(const spdr_close_reason & value) {
            set_spdr_close_reason(value);
        }
        void set(const spdr_reject_reason & value) {
            set_spdr_reject_reason(value);
        }
        void set(const spdr_close_detail_txt & value) {
            set_spdr_close_detail_txt(value);
        }
        void set(const open_legs & value) {
            set_open_legs(value);
        }
        void set(const cum_square_qty & value) {
            set_cum_square_qty(value);
        }
        void set(const avg_square_prc & value) {
            set_avg_square_prc(value);
        }
        void set(const cum_partial_qty & value) {
            set_cum_partial_qty(value);
        }
        void set(const fill_vega & value) {
            set_fill_vega(value);
        }
        void set(const fill_wt_vega & value) {
            set_fill_wt_vega(value);
        }
        void set(const fill_delta & value) {
            set_fill_delta(value);
        }
        void set(const fill_ddelta & value) {
            set_fill_ddelta(value);
        }
        void set(const fill_gamma & value) {
            set_fill_gamma(value);
        }
        void set(const fill_theta & value) {
            set_fill_theta(value);
        }
        void set(const last_fill_dttm & value) {
            set_last_fill_dttm(value);
        }
        void set(const risk_limit_size & value) {
            set_risk_limit_size(value);
        }
        void set(const risk_limit_desc & value) {
            set_risk_limit_desc(value);
        }
        void set(const risk_limit_level & value) {
            set_risk_limit_level(value);
        }
        void set(const max_progress & value) {
            set_max_progress(value);
        }
        void set(const max_progress_detail & value) {
            set_max_progress_detail(value);
        }
        void set(const max_progress_time & value) {
            set_max_progress_time(value);
        }
        void set(const algo_state & value) {
            set_algo_state(value);
        }
        void set(const algo_counter & value) {
            set_algo_counter(value);
        }
        void set(const make_state & value) {
            set_make_state(value);
        }
        void set(const make_counter & value) {
            set_make_counter(value);
        }
        void set(const mkt_resp_state & value) {
            set_mkt_resp_state(value);
        }
        void set(const mkt_resp_counter & value) {
            set_mkt_resp_counter(value);
        }
        void set(const broker_state & value) {
            set_broker_state(value);
        }
        void set(const broker_counter & value) {
            set_broker_counter(value);
        }
        void set(const spdr_mkt_state & value) {
            set_spdr_mkt_state(value);
        }
        void set(const spdr_broker_status & value) {
            set_spdr_broker_status(value);
        }
        void set(const progress_rule_detail & value) {
            set_progress_rule_detail(value);
        }
        void set(const last_child_reject_dttm & value) {
            set_last_child_reject_dttm(value);
        }
        void set(const last_child_reject_text & value) {
            set_last_child_reject_text(value);
        }
        void set(const risk_group_id & value) {
            set_risk_group_id(value);
        }
        void set(const trigger_group_id & value) {
            set_trigger_group_id(value);
        }
        void set(const hedge_grouping_code & value) {
            set_hedge_grouping_code(value);
        }
        void set(const auto_hedge & value) {
            set_auto_hedge(value);
        }
        void set(const hedge_instrument & value) {
            set_hedge_instrument(value);
        }
        void set(const hedge_sec_key & value) {
            set_hedge_sec_key(value);
        }
        void set(const hedge_sec_type & value) {
            set_hedge_sec_type(value);
        }
        void set(const hedge_beta_ratio & value) {
            set_hedge_beta_ratio(value);
        }
        void set(const hedge_scope & value) {
            set_hedge_scope(value);
        }
        void set(const extern_hedge_ex_dest & value) {
            set_extern_hedge_ex_dest(value);
        }
        void set(const extern_hedge_params & value) {
            set_extern_hedge_params(value);
        }
        void set(const best_way_prc & value) {
            set_best_way_prc(value);
        }
        void set(const wrst_way_prc & value) {
            set_wrst_way_prc(value);
        }
        void set(const best_way_sz & value) {
            set_best_way_sz(value);
        }
        void set(const wrst_way_sz & value) {
            set_wrst_way_sz(value);
        }
        void set(const surface_prc & value) {
            set_surface_prc(value);
        }
        void set(const surface_vol & value) {
            set_surface_vol(value);
        }
        void set(const surface_uprc & value) {
            set_surface_uprc(value);
        }
        void set(const limit_price & value) {
            set_limit_price(value);
        }
        void set(const limit_ref_uprc & value) {
            set_limit_ref_uprc(value);
        }
        void set(const limit_err & value) {
            set_limit_err(value);
        }
        void set(const make_limit_price & value) {
            set_make_limit_price(value);
        }
        void set(const take_limit_price & value) {
            set_take_limit_price(value);
        }
        void set(const cxl_uprc_range & value) {
            set_cxl_uprc_range(value);
        }
        void set(const min_ubid & value) {
            set_min_ubid(value);
        }
        void set(const max_uask & value) {
            set_max_uask(value);
        }
        void set(const min_max_type & value) {
            set_min_max_type(value);
        }
        void set(const lead_side & value) {
            set_lead_side(value);
        }
        void set(const max_completion_slippage & value) {
            set_max_completion_slippage(value);
        }
        void set(const order_ref_premium & value) {
            set_order_ref_premium(value);
        }
        void set(const strategy & value) {
            set_strategy(value);
        }
        void set(const user_name & value) {
            set_user_name(value);
        }
        void set(const spdr_comment & value) {
            set_spdr_comment(value);
        }
        void set(const take_reach_rule & value) {
            set_take_reach_rule(value);
        }
        void set(const max_exposure_size & value) {
            set_max_exposure_size(value);
        }
        void set(const num_make_exchanges & value) {
            set_num_make_exchanges(value);
        }
        void set(const public_size & value) {
            set_public_size(value);
        }
        void set(const progress_rule & value) {
            set_progress_rule(value);
        }
        void set(const progress_slice_cnt & value) {
            set_progress_slice_cnt(value);
        }
        void set(const progress_expose_time & value) {
            set_progress_expose_time(value);
        }
        void set(const max_child_orders & value) {
            set_max_child_orders(value);
        }
        void set(const exch_mask & value) {
            set_exch_mask(value);
        }
        void set(const market_session & value) {
            set_market_session(value);
        }
        void set(const start_dttm & value) {
            set_start_dttm(value);
        }
        void set(const order_duration & value) {
            set_order_duration(value);
        }
        void set(const active_duration & value) {
            set_active_duration(value);
        }
        void set(const good_till_dttm & value) {
            set_good_till_dttm(value);
        }
        void set(const expire_dttm & value) {
            set_expire_dttm(value);
        }
        void set(const parent_order_handling & value) {
            set_parent_order_handling(value);
        }
        void set(const parent_balance_handling & value) {
            set_parent_balance_handling(value);
        }
        void set(const block_visibility & value) {
            set_block_visibility(value);
        }
        void set(const order_limit_type & value) {
            set_order_limit_type(value);
        }
        void set(const order_prc_limit & value) {
            set_order_prc_limit(value);
        }
        void set(const order_ref_uprc & value) {
            set_order_ref_uprc(value);
        }
        void set(const order_ref_de & value) {
            set_order_ref_de(value);
        }
        void set(const order_ref_ga & value) {
            set_order_ref_ga(value);
        }
        void set(const order_prc_offset & value) {
            set_order_prc_offset(value);
        }
        void set(const take_limit_class & value) {
            set_take_limit_class(value);
        }
        void set(const take_alpha_type & value) {
            set_take_alpha_type(value);
        }
        void set(const take_alpha_factor & value) {
            set_take_alpha_factor(value);
        }
        void set(const take_alpha_probability & value) {
            set_take_alpha_probability(value);
        }
        void set(const take_surf_prc_offset & value) {
            set_take_surf_prc_offset(value);
        }
        void set(const take_surf_vol_offset & value) {
            set_take_surf_vol_offset(value);
        }
        void set(const take_surf_wid_offset & value) {
            set_take_surf_wid_offset(value);
        }
        void set(const make_limit_class & value) {
            set_make_limit_class(value);
        }
        void set(const make_alpha_type & value) {
            set_make_alpha_type(value);
        }
        void set(const make_alpha_factor & value) {
            set_make_alpha_factor(value);
        }
        void set(const make_alpha_probability & value) {
            set_make_alpha_probability(value);
        }
        void set(const make_surf_prc_offset & value) {
            set_make_surf_prc_offset(value);
        }
        void set(const make_surf_vol_offset & value) {
            set_make_surf_vol_offset(value);
        }
        void set(const make_surf_wid_offset & value) {
            set_make_surf_wid_offset(value);
        }
        void set(const order_ref_event_mult & value) {
            set_order_ref_event_mult(value);
        }
        void set(const order_ref_event_dttm & value) {
            set_order_ref_event_dttm(value);
        }
        void set(const mleg_prob_limit & value) {
            set_mleg_prob_limit(value);
        }
        void set(const mleg_surf_offset & value) {
            set_mleg_surf_offset(value);
        }
        void set(const extern_ex_dest & value) {
            set_extern_ex_dest(value);
        }
        void set(const order_dttm & value) {
            set_order_dttm(value);
        }
        void set(const min_surf_vol & value) {
            set_min_surf_vol(value);
        }
        void set(const max_surf_vol & value) {
            set_max_surf_vol(value);
        }
        void set(const min_surf_prc & value) {
            set_min_surf_prc(value);
        }
        void set(const max_surf_prc & value) {
            set_max_surf_prc(value);
        }
        void set(const min_surf_uprc & value) {
            set_min_surf_uprc(value);
        }
        void set(const max_surf_uprc & value) {
            set_max_surf_uprc(value);
        }
        void set(const min_qte_width & value) {
            set_min_qte_width(value);
        }
        void set(const avg_qte_width & value) {
            set_avg_qte_width(value);
        }
        void set(const cnt_qte_width & value) {
            set_cnt_qte_width(value);
        }
        void set(const arrive_bid & value) {
            set_arrive_bid(value);
        }
        void set(const arrive_ask & value) {
            set_arrive_ask(value);
        }
        void set(const total_seconds & value) {
            set_total_seconds(value);
        }
        void set(const working_seconds & value) {
            set_working_seconds(value);
        }
        void set(const prt_active_cnt & value) {
            set_prt_active_cnt(value);
        }
        void set(const prt_qty_active & value) {
            set_prt_qty_active(value);
        }
        void set(const cum_exch_fee & value) {
            set_cum_exch_fee(value);
        }
        void set(const cum_m10_pnl & value) {
            set_cum_m10_pnl(value);
        }
        void set(const cum_arrival_pnl & value) {
            set_cum_arrival_pnl(value);
        }
        void set(const u_prc_drift & value) {
            set_u_prc_drift(value);
        }
        void set(const s_vol_drift & value) {
            set_s_vol_drift(value);
        }
        void set(const max_grp_day_ddelta_ln & value) {
            set_max_grp_day_ddelta_ln(value);
        }
        void set(const max_grp_day_ddelta_sh & value) {
            set_max_grp_day_ddelta_sh(value);
        }
        void set(const max_grp_day_contracts_ln & value) {
            set_max_grp_day_contracts_ln(value);
        }
        void set(const max_grp_day_contracts_sh & value) {
            set_max_grp_day_contracts_sh(value);
        }
        void set(const max_grp_day_contracts_abs & value) {
            set_max_grp_day_contracts_abs(value);
        }
        void set(const max_grp_day_vega_ln & value) {
            set_max_grp_day_vega_ln(value);
        }
        void set(const max_grp_day_vega_sh & value) {
            set_max_grp_day_vega_sh(value);
        }
        void set(const max_grp_day_vega_abs & value) {
            set_max_grp_day_vega_abs(value);
        }
        void set(const grp_day_vega_ratio & value) {
            set_grp_day_vega_ratio(value);
        }
        void set(const max_grp_day_rmetric1_ln & value) {
            set_max_grp_day_rmetric1_ln(value);
        }
        void set(const max_grp_day_rmetric1_sh & value) {
            set_max_grp_day_rmetric1_sh(value);
        }
        void set(const max_grp_day_rmetric1_abs & value) {
            set_max_grp_day_rmetric1_abs(value);
        }
        void set(const grp_day_rmetric1_ratio & value) {
            set_grp_day_rmetric1_ratio(value);
        }
        void set(const cpx1 & value) {
            set_cpx1(value);
        }
        void set(const csz1 & value) {
            set_csz1(value);
        }
        void set(const cex1 & value) {
            set_cex1(value);
        }
        void set(const cpx2 & value) {
            set_cpx2(value);
        }
        void set(const csz2 & value) {
            set_csz2(value);
        }
        void set(const cex2 & value) {
            set_cex2(value);
        }
        void set(const c_more & value) {
            set_c_more(value);
        }
        void set(const num_new_orders & value) {
            set_num_new_orders(value);
        }
        void set(const num_parent_limits & value) {
            set_num_parent_limits(value);
        }
        void set(const user_data1 & value) {
            set_user_data1(value);
        }
        void set(const user_data2 & value) {
            set_user_data2(value);
        }
        void set(const num_updates & value) {
            set_num_updates(value);
        }
        void set(const timestamp & value) {
            set_timestamp(value);
        }

        void set(const SpdrMLegBrkrState & value) {
            set(value.m__meta);
            set(value.m_pkey);
            set(value.m_engine_name);
            set(value.m_parent_number);
            set(value.m_base_parent_number);
            set(value.m_modify_number);
            set(value.m_alt_order_id);
            set(value.m_package_id);
            set(value.m_alt_accnt);
            set(value.m_alt_user_name);
            set(value.m_stage_type);
            set(value.m_start_type);
            set(value.m_is_flagged);
            set(value.m_notice_number);
            set(value.m_exec_brkr_code);
            set(value.m_spread_class);
            set(value.m_spread_flavor);
            set(value.m_stock_side);
            set(value.m_ssale_flag);
            set(value.m_locate_quan);
            set(value.m_locate_firm);
            set(value.m_locate_pool);
            set(value.m_stock_shares);
            set(value.m_stock_leg_id);
            set(value.m_stock_fill_quan);
            set(value.m_stock_avg_fill_price);
            set(value.m_ref_uprc);
            set(value.m_live_uprc);
            set(value.m_u_price_format);
            set(value.m_stock_cpx);
            set(value.m_stock_csz);
            set(value.m_stock_cex);
            set(value.m_num_legs);
            set(value.m_sec_key1);
            set(value.m_sec_type1);
            set(value.m_ratio1);
            set(value.m_side1);
            set(value.m_position_type1);
            set(value.m_leg_id1);
            set(value.m_fill_quan1);
            set(value.m_avg_fill_price1);
            set(value.m_vega1);
            set(value.m_ref_uprc1);
            set(value.m_ref_delta1);
            set(value.m_ref_earn_cnt1);
            set(value.m_live_uprc1);
            set(value.m_price_format1);
            set(value.m_leg_cpx1);
            set(value.m_leg_csz1);
            set(value.m_leg_cex1);
            set(value.m_sec_key2);
            set(value.m_sec_type2);
            set(value.m_ratio2);
            set(value.m_side2);
            set(value.m_position_type2);
            set(value.m_leg_id2);
            set(value.m_fill_quan2);
            set(value.m_avg_fill_price2);
            set(value.m_vega2);
            set(value.m_ref_uprc2);
            set(value.m_ref_delta2);
            set(value.m_ref_earn_cnt2);
            set(value.m_live_uprc2);
            set(value.m_price_format2);
            set(value.m_leg_cpx2);
            set(value.m_leg_csz2);
            set(value.m_leg_cex2);
            set(value.m_sec_key3);
            set(value.m_sec_type3);
            set(value.m_ratio3);
            set(value.m_side3);
            set(value.m_position_type3);
            set(value.m_leg_id3);
            set(value.m_fill_quan3);
            set(value.m_avg_fill_price3);
            set(value.m_vega3);
            set(value.m_ref_uprc3);
            set(value.m_ref_delta3);
            set(value.m_ref_earn_cnt3);
            set(value.m_live_uprc3);
            set(value.m_price_format3);
            set(value.m_leg_cpx3);
            set(value.m_leg_csz3);
            set(value.m_leg_cex3);
            set(value.m_sec_key4);
            set(value.m_sec_type4);
            set(value.m_ratio4);
            set(value.m_side4);
            set(value.m_position_type4);
            set(value.m_leg_id4);
            set(value.m_fill_quan4);
            set(value.m_avg_fill_price4);
            set(value.m_vega4);
            set(value.m_ref_uprc4);
            set(value.m_ref_delta4);
            set(value.m_ref_earn_cnt4);
            set(value.m_live_uprc4);
            set(value.m_price_format4);
            set(value.m_leg_cpx4);
            set(value.m_leg_csz4);
            set(value.m_leg_cex4);
            set(value.m_sec_key5);
            set(value.m_sec_type5);
            set(value.m_ratio5);
            set(value.m_side5);
            set(value.m_position_type5);
            set(value.m_leg_id5);
            set(value.m_fill_quan5);
            set(value.m_avg_fill_price5);
            set(value.m_vega5);
            set(value.m_ref_uprc5);
            set(value.m_ref_delta5);
            set(value.m_ref_earn_cnt5);
            set(value.m_live_uprc5);
            set(value.m_price_format5);
            set(value.m_leg_cpx5);
            set(value.m_leg_csz5);
            set(value.m_leg_cex5);
            set(value.m_sec_key6);
            set(value.m_sec_type6);
            set(value.m_ratio6);
            set(value.m_side6);
            set(value.m_position_type6);
            set(value.m_leg_id6);
            set(value.m_fill_quan6);
            set(value.m_avg_fill_price6);
            set(value.m_vega6);
            set(value.m_ref_uprc6);
            set(value.m_ref_delta6);
            set(value.m_ref_earn_cnt6);
            set(value.m_live_uprc6);
            set(value.m_price_format6);
            set(value.m_leg_cpx6);
            set(value.m_leg_csz6);
            set(value.m_leg_cex6);
            set(value.m_mleg_vega);
            set(value.m_mleg_wt_vega);
            set(value.m_mleg_delta);
            set(value.m_mleg_gamma);
            set(value.m_mleg_theta);
            set(value.m_description);
            set(value.m_order_size);
            set(value.m_order_active_size);
            set(value.m_leaves_quantity);
            set(value.m_spdr_order_status);
            set(value.m_spdr_close_reason);
            set(value.m_spdr_reject_reason);
            set(value.m_spdr_close_detail_txt);
            set(value.m_open_legs);
            set(value.m_cum_square_qty);
            set(value.m_avg_square_prc);
            set(value.m_cum_partial_qty);
            set(value.m_fill_vega);
            set(value.m_fill_wt_vega);
            set(value.m_fill_delta);
            set(value.m_fill_ddelta);
            set(value.m_fill_gamma);
            set(value.m_fill_theta);
            set(value.m_last_fill_dttm);
            set(value.m_risk_limit_size);
            set(value.m_risk_limit_desc);
            set(value.m_risk_limit_level);
            set(value.m_max_progress);
            set(value.m_max_progress_detail);
            set(value.m_max_progress_time);
            set(value.m_algo_state);
            set(value.m_algo_counter);
            set(value.m_make_state);
            set(value.m_make_counter);
            set(value.m_mkt_resp_state);
            set(value.m_mkt_resp_counter);
            set(value.m_broker_state);
            set(value.m_broker_counter);
            set(value.m_spdr_mkt_state);
            set(value.m_spdr_broker_status);
            set(value.m_progress_rule_detail);
            set(value.m_last_child_reject_dttm);
            set(value.m_last_child_reject_text);
            set(value.m_risk_group_id);
            set(value.m_trigger_group_id);
            set(value.m_hedge_grouping_code);
            set(value.m_auto_hedge);
            set(value.m_hedge_instrument);
            set(value.m_hedge_sec_key);
            set(value.m_hedge_sec_type);
            set(value.m_hedge_beta_ratio);
            set(value.m_hedge_scope);
            set(value.m_extern_hedge_ex_dest);
            set(value.m_extern_hedge_params);
            set(value.m_best_way_prc);
            set(value.m_wrst_way_prc);
            set(value.m_best_way_sz);
            set(value.m_wrst_way_sz);
            set(value.m_surface_prc);
            set(value.m_surface_vol);
            set(value.m_surface_uprc);
            set(value.m_limit_price);
            set(value.m_limit_ref_uprc);
            set(value.m_limit_err);
            set(value.m_make_limit_price);
            set(value.m_take_limit_price);
            set(value.m_cxl_uprc_range);
            set(value.m_min_ubid);
            set(value.m_max_uask);
            set(value.m_min_max_type);
            set(value.m_lead_side);
            set(value.m_max_completion_slippage);
            set(value.m_order_ref_premium);
            set(value.m_strategy);
            set(value.m_user_name);
            set(value.m_spdr_comment);
            set(value.m_take_reach_rule);
            set(value.m_max_exposure_size);
            set(value.m_num_make_exchanges);
            set(value.m_public_size);
            set(value.m_progress_rule);
            set(value.m_progress_slice_cnt);
            set(value.m_progress_expose_time);
            set(value.m_max_child_orders);
            set(value.m_exch_mask);
            set(value.m_market_session);
            set(value.m_start_dttm);
            set(value.m_order_duration);
            set(value.m_active_duration);
            set(value.m_good_till_dttm);
            set(value.m_expire_dttm);
            set(value.m_parent_order_handling);
            set(value.m_parent_balance_handling);
            set(value.m_block_visibility);
            set(value.m_order_limit_type);
            set(value.m_order_prc_limit);
            set(value.m_order_ref_uprc);
            set(value.m_order_ref_de);
            set(value.m_order_ref_ga);
            set(value.m_order_prc_offset);
            set(value.m_take_limit_class);
            set(value.m_take_alpha_type);
            set(value.m_take_alpha_factor);
            set(value.m_take_alpha_probability);
            set(value.m_take_surf_prc_offset);
            set(value.m_take_surf_vol_offset);
            set(value.m_take_surf_wid_offset);
            set(value.m_make_limit_class);
            set(value.m_make_alpha_type);
            set(value.m_make_alpha_factor);
            set(value.m_make_alpha_probability);
            set(value.m_make_surf_prc_offset);
            set(value.m_make_surf_vol_offset);
            set(value.m_make_surf_wid_offset);
            set(value.m_order_ref_event_mult);
            set(value.m_order_ref_event_dttm);
            set(value.m_mleg_prob_limit);
            set(value.m_mleg_surf_offset);
            set(value.m_extern_ex_dest);
            set(value.m_order_dttm);
            set(value.m_min_surf_vol);
            set(value.m_max_surf_vol);
            set(value.m_min_surf_prc);
            set(value.m_max_surf_prc);
            set(value.m_min_surf_uprc);
            set(value.m_max_surf_uprc);
            set(value.m_min_qte_width);
            set(value.m_avg_qte_width);
            set(value.m_cnt_qte_width);
            set(value.m_arrive_bid);
            set(value.m_arrive_ask);
            set(value.m_total_seconds);
            set(value.m_working_seconds);
            set(value.m_prt_active_cnt);
            set(value.m_prt_qty_active);
            set(value.m_cum_exch_fee);
            set(value.m_cum_m10_pnl);
            set(value.m_cum_arrival_pnl);
            set(value.m_u_prc_drift);
            set(value.m_s_vol_drift);
            set(value.m_max_grp_day_ddelta_ln);
            set(value.m_max_grp_day_ddelta_sh);
            set(value.m_max_grp_day_contracts_ln);
            set(value.m_max_grp_day_contracts_sh);
            set(value.m_max_grp_day_contracts_abs);
            set(value.m_max_grp_day_vega_ln);
            set(value.m_max_grp_day_vega_sh);
            set(value.m_max_grp_day_vega_abs);
            set(value.m_grp_day_vega_ratio);
            set(value.m_max_grp_day_rmetric1_ln);
            set(value.m_max_grp_day_rmetric1_sh);
            set(value.m_max_grp_day_rmetric1_abs);
            set(value.m_grp_day_rmetric1_ratio);
            set(value.m_cpx1);
            set(value.m_csz1);
            set(value.m_cex1);
            set(value.m_cpx2);
            set(value.m_csz2);
            set(value.m_cex2);
            set(value.m_c_more);
            set(value.m_num_new_orders);
            set(value.m_num_parent_limits);
            set(value.m_user_data1);
            set(value.m_user_data2);
            set(value.m_num_updates);
            set(value.m_timestamp);
        }

        SpdrMLegBrkrState() {
            m__meta.set_message_type("SpdrMLegBrkrState");
        }


        //templatized set functions that can take multiple arguments simultaneously
        template <typename Arg>
        void set_params(Arg && arg) {
            set(arg);
        }
        template <typename Arg, typename... Args>
        void set_params(Arg && arg, Args &&... args) {
            set(arg);
            set_params(args...);
        }

        bool SerializeToArray(void* data, size_t size) const  {
            size_t length = ByteSizeLong();
            if (size <  _mlinkHeaderLength + length) return false;
            std::snprintf(reinterpret_cast<char*>(data), size, "\r\nP%05d%06zd", 4030, length);
            //Encode the message
            uint8_t* encodePos = reinterpret_cast<uint8_t*>(static_cast<char*>(data) +  _mlinkHeaderLength);
            auto max = encodePos + length;
            Encode(encodePos, max);
            //End of encoding
            return true;
        }

        bool SerializeToString(std::string *s) const {
            size_t length = ByteSizeLong();
            s->resize( _mlinkHeaderLength + length);
            std::snprintf(const_cast<char*>(s->data()), s->size(), "\r\nP%05d%06zd", 4030, length);
            return SerializeToArray(const_cast<char*>(s->data()) + _mlinkHeaderLength, length);
        }

        bool ParseFromString(const string& data) {
			return ParseFromArray(data.data(), data.size());
        }
        bool ParseFromArray(const void* data, size_t size) {
            const unsigned char* pos = reinterpret_cast<const unsigned char*>(data);
            const unsigned char* max = pos + size;
            while (pos < max) {
               Decode(pos, max);
            }
            return true;
        }

        void Clear() {
             *this = SpdrMLegBrkrState{};
        }
        bool IncludeMeta() const {
            return (m__meta.ByteSizeLong() > 0);
        }
        bool IncludePkey() const {
            return (m_pkey.ByteSizeLong() > 0);
        }
        bool IncludeEngineName() const {
            return !(m_engine_name.empty());
        }
        bool IncludeParentNumber() const {
            return !(m_parent_number == 0);
        }
        bool IncludeBaseParentNumber() const {
            return !(m_base_parent_number == 0);
        }
        bool IncludeModifyNumber() const {
            return !(m_modify_number == 0);
        }
        bool IncludeAltOrderId() const {
            return !(m_alt_order_id.empty());
        }
        bool IncludePackageId() const {
            return !(m_package_id == 0);
        }
        bool IncludeAltAccnt() const {
            return !(m_alt_accnt.empty());
        }
        bool IncludeAltUserName() const {
            return !(m_alt_user_name.empty());
        }
        bool IncludeNoticeNumber() const {
            return !(m_notice_number == 0);
        }
        bool IncludeExecBrkrCode() const {
            return !(m_exec_brkr_code.empty());
        }
        bool IncludeLocateQuan() const {
            return !(m_locate_quan == 0);
        }
        bool IncludeLocateFirm() const {
            return !(m_locate_firm.empty());
        }
        bool IncludeLocatePool() const {
            return !(m_locate_pool.empty());
        }
        bool IncludeStockShares() const {
            return !(m_stock_shares == 0);
        }
        bool IncludeStockLegId() const {
            return !(m_stock_leg_id == 0);
        }
        bool IncludeStockFillQuan() const {
            return !(m_stock_fill_quan == 0);
        }
        bool IncludeStockAvgFillPrice() const {
            return !(m_stock_avg_fill_price == 0.0);
        }
        bool IncludeRefUprc() const {
            return !(m_ref_uprc == 0.0);
        }
        bool IncludeLiveUprc() const {
            return !(m_live_uprc == 0.0);
        }
        bool IncludeStockCpx() const {
            return !(m_stock_cpx == 0.0);
        }
        bool IncludeStockCsz() const {
            return !(m_stock_csz == 0);
        }
        bool IncludeStockCex() const {
            return !(m_stock_cex == 0);
        }
        bool IncludeNumLegs() const {
            return !(m_num_legs == 0);
        }
        bool IncludeSecKey1() const {
            return (m_sec_key1.ByteSizeLong() > 0);
        }
        bool IncludeRatio1() const {
            return !(m_ratio1 == 0);
        }
        bool IncludeLegId1() const {
            return !(m_leg_id1 == 0);
        }
        bool IncludeFillQuan1() const {
            return !(m_fill_quan1 == 0);
        }
        bool IncludeAvgFillPrice1() const {
            return !(m_avg_fill_price1 == 0.0);
        }
        bool IncludeVega1() const {
            return !(m_vega1 == 0.0);
        }
        bool IncludeRefUprc1() const {
            return !(m_ref_uprc1 == 0.0);
        }
        bool IncludeRefDelta1() const {
            return !(m_ref_delta1 == 0.0);
        }
        bool IncludeRefEarnCnt1() const {
            return !(m_ref_earn_cnt1 == 0);
        }
        bool IncludeLiveUprc1() const {
            return !(m_live_uprc1 == 0.0);
        }
        bool IncludeLegCpx1() const {
            return !(m_leg_cpx1 == 0.0);
        }
        bool IncludeLegCsz1() const {
            return !(m_leg_csz1 == 0);
        }
        bool IncludeLegCex1() const {
            return !(m_leg_cex1 == 0);
        }
        bool IncludeSecKey2() const {
            return (m_sec_key2.ByteSizeLong() > 0);
        }
        bool IncludeRatio2() const {
            return !(m_ratio2 == 0);
        }
        bool IncludeLegId2() const {
            return !(m_leg_id2 == 0);
        }
        bool IncludeFillQuan2() const {
            return !(m_fill_quan2 == 0);
        }
        bool IncludeAvgFillPrice2() const {
            return !(m_avg_fill_price2 == 0.0);
        }
        bool IncludeVega2() const {
            return !(m_vega2 == 0.0);
        }
        bool IncludeRefUprc2() const {
            return !(m_ref_uprc2 == 0.0);
        }
        bool IncludeRefDelta2() const {
            return !(m_ref_delta2 == 0.0);
        }
        bool IncludeRefEarnCnt2() const {
            return !(m_ref_earn_cnt2 == 0);
        }
        bool IncludeLiveUprc2() const {
            return !(m_live_uprc2 == 0.0);
        }
        bool IncludeLegCpx2() const {
            return !(m_leg_cpx2 == 0.0);
        }
        bool IncludeLegCsz2() const {
            return !(m_leg_csz2 == 0);
        }
        bool IncludeLegCex2() const {
            return !(m_leg_cex2 == 0);
        }
        bool IncludeSecKey3() const {
            return (m_sec_key3.ByteSizeLong() > 0);
        }
        bool IncludeRatio3() const {
            return !(m_ratio3 == 0);
        }
        bool IncludeLegId3() const {
            return !(m_leg_id3 == 0);
        }
        bool IncludeFillQuan3() const {
            return !(m_fill_quan3 == 0);
        }
        bool IncludeAvgFillPrice3() const {
            return !(m_avg_fill_price3 == 0.0);
        }
        bool IncludeVega3() const {
            return !(m_vega3 == 0.0);
        }
        bool IncludeRefUprc3() const {
            return !(m_ref_uprc3 == 0.0);
        }
        bool IncludeRefDelta3() const {
            return !(m_ref_delta3 == 0.0);
        }
        bool IncludeRefEarnCnt3() const {
            return !(m_ref_earn_cnt3 == 0);
        }
        bool IncludeLiveUprc3() const {
            return !(m_live_uprc3 == 0.0);
        }
        bool IncludeLegCpx3() const {
            return !(m_leg_cpx3 == 0.0);
        }
        bool IncludeLegCsz3() const {
            return !(m_leg_csz3 == 0);
        }
        bool IncludeLegCex3() const {
            return !(m_leg_cex3 == 0);
        }
        bool IncludeSecKey4() const {
            return (m_sec_key4.ByteSizeLong() > 0);
        }
        bool IncludeRatio4() const {
            return !(m_ratio4 == 0);
        }
        bool IncludeLegId4() const {
            return !(m_leg_id4 == 0);
        }
        bool IncludeFillQuan4() const {
            return !(m_fill_quan4 == 0);
        }
        bool IncludeAvgFillPrice4() const {
            return !(m_avg_fill_price4 == 0.0);
        }
        bool IncludeVega4() const {
            return !(m_vega4 == 0.0);
        }
        bool IncludeRefUprc4() const {
            return !(m_ref_uprc4 == 0.0);
        }
        bool IncludeRefDelta4() const {
            return !(m_ref_delta4 == 0.0);
        }
        bool IncludeRefEarnCnt4() const {
            return !(m_ref_earn_cnt4 == 0);
        }
        bool IncludeLiveUprc4() const {
            return !(m_live_uprc4 == 0.0);
        }
        bool IncludeLegCpx4() const {
            return !(m_leg_cpx4 == 0.0);
        }
        bool IncludeLegCsz4() const {
            return !(m_leg_csz4 == 0);
        }
        bool IncludeLegCex4() const {
            return !(m_leg_cex4 == 0);
        }
        bool IncludeSecKey5() const {
            return (m_sec_key5.ByteSizeLong() > 0);
        }
        bool IncludeRatio5() const {
            return !(m_ratio5 == 0);
        }
        bool IncludeLegId5() const {
            return !(m_leg_id5 == 0);
        }
        bool IncludeFillQuan5() const {
            return !(m_fill_quan5 == 0);
        }
        bool IncludeAvgFillPrice5() const {
            return !(m_avg_fill_price5 == 0.0);
        }
        bool IncludeVega5() const {
            return !(m_vega5 == 0.0);
        }
        bool IncludeRefUprc5() const {
            return !(m_ref_uprc5 == 0.0);
        }
        bool IncludeRefDelta5() const {
            return !(m_ref_delta5 == 0.0);
        }
        bool IncludeRefEarnCnt5() const {
            return !(m_ref_earn_cnt5 == 0);
        }
        bool IncludeLiveUprc5() const {
            return !(m_live_uprc5 == 0.0);
        }
        bool IncludeLegCpx5() const {
            return !(m_leg_cpx5 == 0.0);
        }
        bool IncludeLegCsz5() const {
            return !(m_leg_csz5 == 0);
        }
        bool IncludeLegCex5() const {
            return !(m_leg_cex5 == 0);
        }
        bool IncludeSecKey6() const {
            return (m_sec_key6.ByteSizeLong() > 0);
        }
        bool IncludeRatio6() const {
            return !(m_ratio6 == 0);
        }
        bool IncludeLegId6() const {
            return !(m_leg_id6 == 0);
        }
        bool IncludeFillQuan6() const {
            return !(m_fill_quan6 == 0);
        }
        bool IncludeAvgFillPrice6() const {
            return !(m_avg_fill_price6 == 0.0);
        }
        bool IncludeVega6() const {
            return !(m_vega6 == 0.0);
        }
        bool IncludeRefUprc6() const {
            return !(m_ref_uprc6 == 0.0);
        }
        bool IncludeRefDelta6() const {
            return !(m_ref_delta6 == 0.0);
        }
        bool IncludeRefEarnCnt6() const {
            return !(m_ref_earn_cnt6 == 0);
        }
        bool IncludeLiveUprc6() const {
            return !(m_live_uprc6 == 0.0);
        }
        bool IncludeLegCpx6() const {
            return !(m_leg_cpx6 == 0.0);
        }
        bool IncludeLegCsz6() const {
            return !(m_leg_csz6 == 0);
        }
        bool IncludeLegCex6() const {
            return !(m_leg_cex6 == 0);
        }
        bool IncludeMlegVega() const {
            return !(m_mleg_vega == 0.0);
        }
        bool IncludeMlegWtVega() const {
            return !(m_mleg_wt_vega == 0.0);
        }
        bool IncludeMlegDelta() const {
            return !(m_mleg_delta == 0.0);
        }
        bool IncludeMlegGamma() const {
            return !(m_mleg_gamma == 0.0);
        }
        bool IncludeMlegTheta() const {
            return !(m_mleg_theta == 0.0);
        }
        bool IncludeDescription() const {
            return !(m_description.empty());
        }
        bool IncludeOrderSize() const {
            return !(m_order_size == 0);
        }
        bool IncludeOrderActiveSize() const {
            return !(m_order_active_size == 0);
        }
        bool IncludeLeavesQuantity() const {
            return !(m_leaves_quantity == 0);
        }
        bool IncludeSpdrCloseDetailTxt() const {
            return !(m_spdr_close_detail_txt.empty());
        }
        bool IncludeOpenLegs() const {
            return !(m_open_legs == 0);
        }
        bool IncludeCumSquareQty() const {
            return !(m_cum_square_qty == 0);
        }
        bool IncludeAvgSquarePrc() const {
            return !(m_avg_square_prc == 0.0);
        }
        bool IncludeCumPartialQty() const {
            return !(m_cum_partial_qty == 0);
        }
        bool IncludeFillVega() const {
            return !(m_fill_vega == 0.0);
        }
        bool IncludeFillWtVega() const {
            return !(m_fill_wt_vega == 0.0);
        }
        bool IncludeFillDelta() const {
            return !(m_fill_delta == 0.0);
        }
        bool IncludeFillDdelta() const {
            return !(m_fill_ddelta == 0.0);
        }
        bool IncludeFillGamma() const {
            return !(m_fill_gamma == 0.0);
        }
        bool IncludeFillTheta() const {
            return !(m_fill_theta == 0.0);
        }
        bool IncludeLastFillDttm() const {
            return (m_last_fill_dttm.time_since_epoch().count() != 0);
        }
        bool IncludeRiskLimitSize() const {
            return !(m_risk_limit_size == 0);
        }
        bool IncludeMaxProgressDetail() const {
            return !(m_max_progress_detail.empty());
        }
        bool IncludeMaxProgressTime() const {
            return (m_max_progress_time.time_since_epoch().count() != 0);
        }
        bool IncludeAlgoCounter() const {
            return !(m_algo_counter == 0);
        }
        bool IncludeMakeCounter() const {
            return !(m_make_counter == 0);
        }
        bool IncludeMktRespCounter() const {
            return !(m_mkt_resp_counter == 0);
        }
        bool IncludeBrokerCounter() const {
            return !(m_broker_counter == 0);
        }
        bool IncludeProgressRuleDetail() const {
            return !(m_progress_rule_detail.empty());
        }
        bool IncludeLastChildRejectDttm() const {
            return (m_last_child_reject_dttm.time_since_epoch().count() != 0);
        }
        bool IncludeLastChildRejectText() const {
            return !(m_last_child_reject_text.empty());
        }
        bool IncludeRiskGroupId() const {
            return !(m_risk_group_id == 0);
        }
        bool IncludeTriggerGroupId() const {
            return !(m_trigger_group_id == 0);
        }
        bool IncludeHedgeGroupingCode() const {
            return !(m_hedge_grouping_code == 0);
        }
        bool IncludeHedgeSecKey() const {
            return (m_hedge_sec_key.ByteSizeLong() > 0);
        }
        bool IncludeHedgeBetaRatio() const {
            return !(m_hedge_beta_ratio == 0.0);
        }
        bool IncludeExternHedgeExDest() const {
            return !(m_extern_hedge_ex_dest.empty());
        }
        bool IncludeExternHedgeParams() const {
            return !(m_extern_hedge_params.empty());
        }
        bool IncludeBestWayPrc() const {
            return !(m_best_way_prc == 0.0);
        }
        bool IncludeWrstWayPrc() const {
            return !(m_wrst_way_prc == 0.0);
        }
        bool IncludeBestWaySz() const {
            return !(m_best_way_sz == 0);
        }
        bool IncludeWrstWaySz() const {
            return !(m_wrst_way_sz == 0);
        }
        bool IncludeSurfacePrc() const {
            return !(m_surface_prc == 0.0);
        }
        bool IncludeSurfaceVol() const {
            return !(m_surface_vol == 0.0);
        }
        bool IncludeSurfaceUprc() const {
            return !(m_surface_uprc == 0.0);
        }
        bool IncludeLimitPrice() const {
            return !(m_limit_price == 0.0);
        }
        bool IncludeLimitRefUprc() const {
            return !(m_limit_ref_uprc == 0.0);
        }
        bool IncludeMakeLimitPrice() const {
            return !(m_make_limit_price == 0.0);
        }
        bool IncludeTakeLimitPrice() const {
            return !(m_take_limit_price == 0.0);
        }
        bool IncludeMinUbid() const {
            return !(m_min_ubid == 0.0);
        }
        bool IncludeMaxUask() const {
            return !(m_max_uask == 0.0);
        }
        bool IncludeMaxCompletionSlippage() const {
            return !(m_max_completion_slippage == 0.0);
        }
        bool IncludeOrderRefPremium() const {
            return !(m_order_ref_premium == 0.0);
        }
        bool IncludeStrategy() const {
            return !(m_strategy.empty());
        }
        bool IncludeUserName() const {
            return !(m_user_name.empty());
        }
        bool IncludeSpdrComment() const {
            return !(m_spdr_comment.empty());
        }
        bool IncludeMaxExposureSize() const {
            return !(m_max_exposure_size == 0);
        }
        bool IncludeNumMakeExchanges() const {
            return !(m_num_make_exchanges == 0);
        }
        bool IncludeProgressSliceCnt() const {
            return !(m_progress_slice_cnt == 0);
        }
        bool IncludeProgressExposeTime() const {
            return !(m_progress_expose_time == 0);
        }
        bool IncludeMaxChildOrders() const {
            return !(m_max_child_orders == 0);
        }
        bool IncludeExchMask() const {
            return !(m_exch_mask == 0);
        }
        bool IncludeStartDttm() const {
            return (m_start_dttm.time_since_epoch().count() != 0);
        }
        bool IncludeOrderDuration() const {
            return !(m_order_duration == 0);
        }
        bool IncludeActiveDuration() const {
            return !(m_active_duration == 0);
        }
        bool IncludeGoodTillDttm() const {
            return (m_good_till_dttm.time_since_epoch().count() != 0);
        }
        bool IncludeExpireDttm() const {
            return (m_expire_dttm.time_since_epoch().count() != 0);
        }
        bool IncludeOrderPrcLimit() const {
            return !(m_order_prc_limit == 0.0);
        }
        bool IncludeOrderRefUprc() const {
            return !(m_order_ref_uprc == 0.0);
        }
        bool IncludeOrderRefDe() const {
            return !(m_order_ref_de == 0.0);
        }
        bool IncludeOrderRefGa() const {
            return !(m_order_ref_ga == 0.0);
        }
        bool IncludeOrderPrcOffset() const {
            return !(m_order_prc_offset == 0.0);
        }
        bool IncludeTakeAlphaFactor() const {
            return !(m_take_alpha_factor == 0.0);
        }
        bool IncludeTakeAlphaProbability() const {
            return !(m_take_alpha_probability == 0.0);
        }
        bool IncludeTakeSurfPrcOffset() const {
            return !(m_take_surf_prc_offset == 0.0);
        }
        bool IncludeTakeSurfVolOffset() const {
            return !(m_take_surf_vol_offset == 0.0);
        }
        bool IncludeTakeSurfWidOffset() const {
            return !(m_take_surf_wid_offset == 0.0);
        }
        bool IncludeMakeAlphaFactor() const {
            return !(m_make_alpha_factor == 0.0);
        }
        bool IncludeMakeAlphaProbability() const {
            return !(m_make_alpha_probability == 0.0);
        }
        bool IncludeMakeSurfPrcOffset() const {
            return !(m_make_surf_prc_offset == 0.0);
        }
        bool IncludeMakeSurfVolOffset() const {
            return !(m_make_surf_vol_offset == 0.0);
        }
        bool IncludeMakeSurfWidOffset() const {
            return !(m_make_surf_wid_offset == 0.0);
        }
        bool IncludeOrderRefEventMult() const {
            return !(m_order_ref_event_mult == 0.0);
        }
        bool IncludeOrderRefEventDttm() const {
            return (m_order_ref_event_dttm.time_since_epoch().count() != 0);
        }
        bool IncludeMlegProbLimit() const {
            return !(m_mleg_prob_limit == 0.0);
        }
        bool IncludeMlegSurfOffset() const {
            return !(m_mleg_surf_offset == 0.0);
        }
        bool IncludeExternExDest() const {
            return !(m_extern_ex_dest.empty());
        }
        bool IncludeOrderDttm() const {
            return (m_order_dttm.time_since_epoch().count() != 0);
        }
        bool IncludeMinSurfVol() const {
            return !(m_min_surf_vol == 0.0);
        }
        bool IncludeMaxSurfVol() const {
            return !(m_max_surf_vol == 0.0);
        }
        bool IncludeMinSurfPrc() const {
            return !(m_min_surf_prc == 0.0);
        }
        bool IncludeMaxSurfPrc() const {
            return !(m_max_surf_prc == 0.0);
        }
        bool IncludeMinSurfUprc() const {
            return !(m_min_surf_uprc == 0.0);
        }
        bool IncludeMaxSurfUprc() const {
            return !(m_max_surf_uprc == 0.0);
        }
        bool IncludeMinQteWidth() const {
            return !(m_min_qte_width == 0.0);
        }
        bool IncludeAvgQteWidth() const {
            return !(m_avg_qte_width == 0.0);
        }
        bool IncludeCntQteWidth() const {
            return !(m_cnt_qte_width == 0);
        }
        bool IncludeArriveBid() const {
            return !(m_arrive_bid == 0.0);
        }
        bool IncludeArriveAsk() const {
            return !(m_arrive_ask == 0.0);
        }
        bool IncludeTotalSeconds() const {
            return !(m_total_seconds == 0.0);
        }
        bool IncludeWorkingSeconds() const {
            return !(m_working_seconds == 0.0);
        }
        bool IncludePrtActiveCnt() const {
            return !(m_prt_active_cnt == 0);
        }
        bool IncludePrtQtyActive() const {
            return !(m_prt_qty_active == 0);
        }
        bool IncludeCumExchFee() const {
            return !(m_cum_exch_fee == 0.0);
        }
        bool IncludeCumM10Pnl() const {
            return !(m_cum_m10_pnl == 0.0);
        }
        bool IncludeCumArrivalPnl() const {
            return !(m_cum_arrival_pnl == 0.0);
        }
        bool IncludeUPrcDrift() const {
            return !(m_u_prc_drift == 0.0);
        }
        bool IncludeSVolDrift() const {
            return !(m_s_vol_drift == 0.0);
        }
        bool IncludeMaxGrpDayDdeltaLn() const {
            return !(m_max_grp_day_ddelta_ln == 0.0);
        }
        bool IncludeMaxGrpDayDdeltaSh() const {
            return !(m_max_grp_day_ddelta_sh == 0.0);
        }
        bool IncludeMaxGrpDayContractsLn() const {
            return !(m_max_grp_day_contracts_ln == 0);
        }
        bool IncludeMaxGrpDayContractsSh() const {
            return !(m_max_grp_day_contracts_sh == 0);
        }
        bool IncludeMaxGrpDayContractsAbs() const {
            return !(m_max_grp_day_contracts_abs == 0);
        }
        bool IncludeMaxGrpDayVegaLn() const {
            return !(m_max_grp_day_vega_ln == 0.0);
        }
        bool IncludeMaxGrpDayVegaSh() const {
            return !(m_max_grp_day_vega_sh == 0.0);
        }
        bool IncludeMaxGrpDayVegaAbs() const {
            return !(m_max_grp_day_vega_abs == 0.0);
        }
        bool IncludeGrpDayVegaRatio() const {
            return !(m_grp_day_vega_ratio == 0.0);
        }
        bool IncludeMaxGrpDayRmetric1Ln() const {
            return !(m_max_grp_day_rmetric1_ln == 0.0);
        }
        bool IncludeMaxGrpDayRmetric1Sh() const {
            return !(m_max_grp_day_rmetric1_sh == 0.0);
        }
        bool IncludeMaxGrpDayRmetric1Abs() const {
            return !(m_max_grp_day_rmetric1_abs == 0.0);
        }
        bool IncludeGrpDayRmetric1Ratio() const {
            return !(m_grp_day_rmetric1_ratio == 0.0);
        }
        bool IncludeCpx1() const {
            return !(m_cpx1 == 0.0);
        }
        bool IncludeCsz1() const {
            return !(m_csz1 == 0);
        }
        bool IncludeCex1() const {
            return !(m_cex1 == 0);
        }
        bool IncludeCpx2() const {
            return !(m_cpx2 == 0.0);
        }
        bool IncludeCsz2() const {
            return !(m_csz2 == 0);
        }
        bool IncludeCex2() const {
            return !(m_cex2 == 0);
        }
        bool IncludeCMore() const {
            return !(m_c_more == 0);
        }
        bool IncludeNumNewOrders() const {
            return !(m_num_new_orders == 0);
        }
        bool IncludeNumParentLimits() const {
            return !(m_num_parent_limits == 0);
        }
        bool IncludeUserData1() const {
            return !(m_user_data1.empty());
        }
        bool IncludeUserData2() const {
            return !(m_user_data2.empty());
        }
        bool IncludeNumUpdates() const {
            return !(m_num_updates == 0);
        }
        bool IncludeTimestamp() const {
            return (m_timestamp.time_since_epoch().count() != 0);
        }

        size_t ByteSizeLong() const {
            size_t totalSize = 0;
            if ( IncludeMeta()) {
                SRProtobufCPP::MessageMetadata messageMetadata{};
                m__meta.setCodecMessageMetadata(messageMetadata);
                totalSize += SRProtobufCPP::FieldCodec::MessageMetadataFieldSize(1, messageMetadata);
            }
            if ( IncludePkey()) {
			    size_t pKeyLength = m_pkey.ByteSizeLong();
                totalSize += SRProtobufCPP::TagCodec::Size(2, SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited);
                totalSize += SRProtobufCPP::LengthCodec::Size(static_cast<int>(pKeyLength));
                totalSize += pKeyLength;
            }
            if ( IncludeEngineName()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(1037,m_engine_name);
            }
            if ( IncludeParentNumber()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(103,m_parent_number);
            }
            if ( IncludeBaseParentNumber()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(106,m_base_parent_number);
            }
            if ( IncludeModifyNumber()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(1038,m_modify_number);
            }
            if ( IncludeAltOrderId()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(109,m_alt_order_id);
            }
            if ( IncludePackageId()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(112,m_package_id);
            }
            if ( IncludeAltAccnt()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(118,m_alt_accnt);
            }
            if ( IncludeAltUserName()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(121,m_alt_user_name);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(124,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrStageType>(m_stage_type)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(1039,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::StartType>(m_start_type)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(127,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_is_flagged)));
            if ( IncludeNoticeNumber()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(1052,m_notice_number);
            }
            if ( IncludeExecBrkrCode()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(1054,m_exec_brkr_code);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(1057,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpreadClass>(m_spread_class)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(1043,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpreadFlavor>(m_spread_flavor)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(133,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>(m_stock_side)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(136,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ShortSaleFlag>(m_ssale_flag)));
            if ( IncludeLocateQuan()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(139,m_locate_quan);
            }
            if ( IncludeLocateFirm()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(142,m_locate_firm);
            }
            if ( IncludeLocatePool()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(145,m_locate_pool);
            }
            if ( IncludeStockShares()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(148,m_stock_shares);
            }
            if ( IncludeStockLegId()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(151,m_stock_leg_id);
            }
            if ( IncludeStockFillQuan()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(154,m_stock_fill_quan);
            }
            if ( IncludeStockAvgFillPrice()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(157,m_stock_avg_fill_price);
            }
            if ( IncludeRefUprc()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(160,m_ref_uprc);
            }
            if ( IncludeLiveUprc()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(163,m_live_uprc);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(166,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PriceFormat>(m_u_price_format)));
            if ( IncludeStockCpx()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(169,m_stock_cpx);
            }
            if ( IncludeStockCsz()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(172,m_stock_csz);
            }
            if ( IncludeStockCex()) {
                totalSize += SRProtobufCPP::FieldCodec::UIntFieldSize(175,m_stock_cex);
            }
            if ( IncludeNumLegs()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(178,m_num_legs);
            }
            if ( IncludeSecKey1()) {
                SRProtobufCPP::OptionKeyLayout optionKeyLayout_sec_key1{};
                m_sec_key1.setCodecOptionKey(optionKeyLayout_sec_key1);
                totalSize += SRProtobufCPP::FieldCodec::OptionKeyFieldSize(181, optionKeyLayout_sec_key1);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(184,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>(m_sec_type1)));
            if ( IncludeRatio1()) {
                totalSize += SRProtobufCPP::FieldCodec::UIntFieldSize(187,m_ratio1);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(190,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>(m_side1)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(193,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PositionType>(m_position_type1)));
            if ( IncludeLegId1()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(196,m_leg_id1);
            }
            if ( IncludeFillQuan1()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(199,m_fill_quan1);
            }
            if ( IncludeAvgFillPrice1()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(202,m_avg_fill_price1);
            }
            if ( IncludeVega1()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(205,m_vega1);
            }
            if ( IncludeRefUprc1()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(208,m_ref_uprc1);
            }
            if ( IncludeRefDelta1()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(211,m_ref_delta1);
            }
            if ( IncludeRefEarnCnt1()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(214,m_ref_earn_cnt1);
            }
            if ( IncludeLiveUprc1()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(217,m_live_uprc1);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(220,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PriceFormat>(m_price_format1)));
            if ( IncludeLegCpx1()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(223,m_leg_cpx1);
            }
            if ( IncludeLegCsz1()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(226,m_leg_csz1);
            }
            if ( IncludeLegCex1()) {
                totalSize += SRProtobufCPP::FieldCodec::UIntFieldSize(229,m_leg_cex1);
            }
            if ( IncludeSecKey2()) {
                SRProtobufCPP::OptionKeyLayout optionKeyLayout_sec_key2{};
                m_sec_key2.setCodecOptionKey(optionKeyLayout_sec_key2);
                totalSize += SRProtobufCPP::FieldCodec::OptionKeyFieldSize(232, optionKeyLayout_sec_key2);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(235,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>(m_sec_type2)));
            if ( IncludeRatio2()) {
                totalSize += SRProtobufCPP::FieldCodec::UIntFieldSize(238,m_ratio2);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(241,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>(m_side2)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(244,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PositionType>(m_position_type2)));
            if ( IncludeLegId2()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(247,m_leg_id2);
            }
            if ( IncludeFillQuan2()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(250,m_fill_quan2);
            }
            if ( IncludeAvgFillPrice2()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(253,m_avg_fill_price2);
            }
            if ( IncludeVega2()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(256,m_vega2);
            }
            if ( IncludeRefUprc2()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(259,m_ref_uprc2);
            }
            if ( IncludeRefDelta2()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(262,m_ref_delta2);
            }
            if ( IncludeRefEarnCnt2()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(265,m_ref_earn_cnt2);
            }
            if ( IncludeLiveUprc2()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(268,m_live_uprc2);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(271,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PriceFormat>(m_price_format2)));
            if ( IncludeLegCpx2()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(274,m_leg_cpx2);
            }
            if ( IncludeLegCsz2()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(277,m_leg_csz2);
            }
            if ( IncludeLegCex2()) {
                totalSize += SRProtobufCPP::FieldCodec::UIntFieldSize(280,m_leg_cex2);
            }
            if ( IncludeSecKey3()) {
                SRProtobufCPP::OptionKeyLayout optionKeyLayout_sec_key3{};
                m_sec_key3.setCodecOptionKey(optionKeyLayout_sec_key3);
                totalSize += SRProtobufCPP::FieldCodec::OptionKeyFieldSize(283, optionKeyLayout_sec_key3);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(286,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>(m_sec_type3)));
            if ( IncludeRatio3()) {
                totalSize += SRProtobufCPP::FieldCodec::UIntFieldSize(289,m_ratio3);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(292,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>(m_side3)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(295,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PositionType>(m_position_type3)));
            if ( IncludeLegId3()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(298,m_leg_id3);
            }
            if ( IncludeFillQuan3()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(301,m_fill_quan3);
            }
            if ( IncludeAvgFillPrice3()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(304,m_avg_fill_price3);
            }
            if ( IncludeVega3()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(307,m_vega3);
            }
            if ( IncludeRefUprc3()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(310,m_ref_uprc3);
            }
            if ( IncludeRefDelta3()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(313,m_ref_delta3);
            }
            if ( IncludeRefEarnCnt3()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(316,m_ref_earn_cnt3);
            }
            if ( IncludeLiveUprc3()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(319,m_live_uprc3);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(322,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PriceFormat>(m_price_format3)));
            if ( IncludeLegCpx3()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(325,m_leg_cpx3);
            }
            if ( IncludeLegCsz3()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(328,m_leg_csz3);
            }
            if ( IncludeLegCex3()) {
                totalSize += SRProtobufCPP::FieldCodec::UIntFieldSize(331,m_leg_cex3);
            }
            if ( IncludeSecKey4()) {
                SRProtobufCPP::OptionKeyLayout optionKeyLayout_sec_key4{};
                m_sec_key4.setCodecOptionKey(optionKeyLayout_sec_key4);
                totalSize += SRProtobufCPP::FieldCodec::OptionKeyFieldSize(334, optionKeyLayout_sec_key4);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(337,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>(m_sec_type4)));
            if ( IncludeRatio4()) {
                totalSize += SRProtobufCPP::FieldCodec::UIntFieldSize(340,m_ratio4);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(343,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>(m_side4)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(346,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PositionType>(m_position_type4)));
            if ( IncludeLegId4()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(349,m_leg_id4);
            }
            if ( IncludeFillQuan4()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(352,m_fill_quan4);
            }
            if ( IncludeAvgFillPrice4()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(355,m_avg_fill_price4);
            }
            if ( IncludeVega4()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(358,m_vega4);
            }
            if ( IncludeRefUprc4()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(361,m_ref_uprc4);
            }
            if ( IncludeRefDelta4()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(364,m_ref_delta4);
            }
            if ( IncludeRefEarnCnt4()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(367,m_ref_earn_cnt4);
            }
            if ( IncludeLiveUprc4()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(370,m_live_uprc4);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(373,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PriceFormat>(m_price_format4)));
            if ( IncludeLegCpx4()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(376,m_leg_cpx4);
            }
            if ( IncludeLegCsz4()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(379,m_leg_csz4);
            }
            if ( IncludeLegCex4()) {
                totalSize += SRProtobufCPP::FieldCodec::UIntFieldSize(382,m_leg_cex4);
            }
            if ( IncludeSecKey5()) {
                SRProtobufCPP::OptionKeyLayout optionKeyLayout_sec_key5{};
                m_sec_key5.setCodecOptionKey(optionKeyLayout_sec_key5);
                totalSize += SRProtobufCPP::FieldCodec::OptionKeyFieldSize(385, optionKeyLayout_sec_key5);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(388,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>(m_sec_type5)));
            if ( IncludeRatio5()) {
                totalSize += SRProtobufCPP::FieldCodec::UIntFieldSize(391,m_ratio5);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(394,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>(m_side5)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(397,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PositionType>(m_position_type5)));
            if ( IncludeLegId5()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(400,m_leg_id5);
            }
            if ( IncludeFillQuan5()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(403,m_fill_quan5);
            }
            if ( IncludeAvgFillPrice5()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(406,m_avg_fill_price5);
            }
            if ( IncludeVega5()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(409,m_vega5);
            }
            if ( IncludeRefUprc5()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(412,m_ref_uprc5);
            }
            if ( IncludeRefDelta5()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(415,m_ref_delta5);
            }
            if ( IncludeRefEarnCnt5()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(418,m_ref_earn_cnt5);
            }
            if ( IncludeLiveUprc5()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(421,m_live_uprc5);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(424,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PriceFormat>(m_price_format5)));
            if ( IncludeLegCpx5()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(427,m_leg_cpx5);
            }
            if ( IncludeLegCsz5()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(430,m_leg_csz5);
            }
            if ( IncludeLegCex5()) {
                totalSize += SRProtobufCPP::FieldCodec::UIntFieldSize(433,m_leg_cex5);
            }
            if ( IncludeSecKey6()) {
                SRProtobufCPP::OptionKeyLayout optionKeyLayout_sec_key6{};
                m_sec_key6.setCodecOptionKey(optionKeyLayout_sec_key6);
                totalSize += SRProtobufCPP::FieldCodec::OptionKeyFieldSize(436, optionKeyLayout_sec_key6);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(439,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>(m_sec_type6)));
            if ( IncludeRatio6()) {
                totalSize += SRProtobufCPP::FieldCodec::UIntFieldSize(442,m_ratio6);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(445,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>(m_side6)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(448,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PositionType>(m_position_type6)));
            if ( IncludeLegId6()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(451,m_leg_id6);
            }
            if ( IncludeFillQuan6()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(454,m_fill_quan6);
            }
            if ( IncludeAvgFillPrice6()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(457,m_avg_fill_price6);
            }
            if ( IncludeVega6()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(460,m_vega6);
            }
            if ( IncludeRefUprc6()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(463,m_ref_uprc6);
            }
            if ( IncludeRefDelta6()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(466,m_ref_delta6);
            }
            if ( IncludeRefEarnCnt6()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(469,m_ref_earn_cnt6);
            }
            if ( IncludeLiveUprc6()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(472,m_live_uprc6);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(475,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PriceFormat>(m_price_format6)));
            if ( IncludeLegCpx6()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(478,m_leg_cpx6);
            }
            if ( IncludeLegCsz6()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(481,m_leg_csz6);
            }
            if ( IncludeLegCex6()) {
                totalSize += SRProtobufCPP::FieldCodec::UIntFieldSize(484,m_leg_cex6);
            }
            if ( IncludeMlegVega()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(487,m_mleg_vega);
            }
            if ( IncludeMlegWtVega()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(490,m_mleg_wt_vega);
            }
            if ( IncludeMlegDelta()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(493,m_mleg_delta);
            }
            if ( IncludeMlegGamma()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(496,m_mleg_gamma);
            }
            if ( IncludeMlegTheta()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(499,m_mleg_theta);
            }
            if ( IncludeDescription()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(502,m_description);
            }
            if ( IncludeOrderSize()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(505,m_order_size);
            }
            if ( IncludeOrderActiveSize()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(508,m_order_active_size);
            }
            if ( IncludeLeavesQuantity()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(511,m_leaves_quantity);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(514,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrOrderStatus>(m_spdr_order_status)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(517,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrCloseReason>(m_spdr_close_reason)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(520,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrRejectReason>(m_spdr_reject_reason)));
            if ( IncludeSpdrCloseDetailTxt()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(523,m_spdr_close_detail_txt);
            }
            if ( IncludeOpenLegs()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(526,m_open_legs);
            }
            if ( IncludeCumSquareQty()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(529,m_cum_square_qty);
            }
            if ( IncludeAvgSquarePrc()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(532,m_avg_square_prc);
            }
            if ( IncludeCumPartialQty()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(535,m_cum_partial_qty);
            }
            if ( IncludeFillVega()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(538,m_fill_vega);
            }
            if ( IncludeFillWtVega()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(541,m_fill_wt_vega);
            }
            if ( IncludeFillDelta()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(544,m_fill_delta);
            }
            if ( IncludeFillDdelta()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(547,m_fill_ddelta);
            }
            if ( IncludeFillGamma()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(550,m_fill_gamma);
            }
            if ( IncludeFillTheta()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(553,m_fill_theta);
            }
            if ( IncludeLastFillDttm()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(556, m_last_fill_dttm);
            }
            if ( IncludeRiskLimitSize()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(559,m_risk_limit_size);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(562,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrRisk>(m_risk_limit_desc)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(1044,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrRiskLevel>(m_risk_limit_level)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(565,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MaxProgress>(m_max_progress)));
            if ( IncludeMaxProgressDetail()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(568,m_max_progress_detail);
            }
            if ( IncludeMaxProgressTime()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(571, m_max_progress_time);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(574,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AlgoState>(m_algo_state)));
            if ( IncludeAlgoCounter()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(577,m_algo_counter);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(580,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AlgoState>(m_make_state)));
            if ( IncludeMakeCounter()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(583,m_make_counter);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(586,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MktRespState>(m_mkt_resp_state)));
            if ( IncludeMktRespCounter()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(589,m_mkt_resp_counter);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(592,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BrokerState>(m_broker_state)));
            if ( IncludeBrokerCounter()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(595,m_broker_counter);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(598,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrMarketState>(m_spdr_mkt_state)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(601,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrBrokerStatus>(m_spdr_broker_status)));
            if ( IncludeProgressRuleDetail()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(604,m_progress_rule_detail);
            }
            if ( IncludeLastChildRejectDttm()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(607, m_last_child_reject_dttm);
            }
            if ( IncludeLastChildRejectText()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(610,m_last_child_reject_text);
            }
            if ( IncludeRiskGroupId()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(613,m_risk_group_id);
            }
            if ( IncludeTriggerGroupId()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(616,m_trigger_group_id);
            }
            if ( IncludeHedgeGroupingCode()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(619,m_hedge_grouping_code);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(622,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AutoHedge>(m_auto_hedge)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(625,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::HedgeInst>(m_hedge_instrument)));
            if ( IncludeHedgeSecKey()) {
                SRProtobufCPP::ExpiryKeyLayout expiryKeyLayout_hedge_sec_key{};
                m_hedge_sec_key.setCodecExpiryKey(expiryKeyLayout_hedge_sec_key);
                totalSize += SRProtobufCPP::FieldCodec::ExpiryKeyFieldSize(628, expiryKeyLayout_hedge_sec_key);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(631,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>(m_hedge_sec_type)));
            if ( IncludeHedgeBetaRatio()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(634,m_hedge_beta_ratio);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(637,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::HedgeScope>(m_hedge_scope)));
            if ( IncludeExternHedgeExDest()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(1055,m_extern_hedge_ex_dest);
            }
            if ( IncludeExternHedgeParams()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(643,m_extern_hedge_params);
            }
            if ( IncludeBestWayPrc()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(646,m_best_way_prc);
            }
            if ( IncludeWrstWayPrc()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(649,m_wrst_way_prc);
            }
            if ( IncludeBestWaySz()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(652,m_best_way_sz);
            }
            if ( IncludeWrstWaySz()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(655,m_wrst_way_sz);
            }
            if ( IncludeSurfacePrc()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(658,m_surface_prc);
            }
            if ( IncludeSurfaceVol()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(661,m_surface_vol);
            }
            if ( IncludeSurfaceUprc()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(664,m_surface_uprc);
            }
            if ( IncludeLimitPrice()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(667,m_limit_price);
            }
            if ( IncludeLimitRefUprc()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(1053,m_limit_ref_uprc);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(670,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::LimitError>(m_limit_err)));
            if ( IncludeMakeLimitPrice()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(673,m_make_limit_price);
            }
            if ( IncludeTakeLimitPrice()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(676,m_take_limit_price);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(679,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::UPrcCxl>(m_cxl_uprc_range)));
            if ( IncludeMinUbid()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(682,m_min_ubid);
            }
            if ( IncludeMaxUask()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(685,m_max_uask);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(688,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MinMaxType>(m_min_max_type)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(691,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>(m_lead_side)));
            if ( IncludeMaxCompletionSlippage()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(694,m_max_completion_slippage);
            }
            if ( IncludeOrderRefPremium()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(697,m_order_ref_premium);
            }
            if ( IncludeStrategy()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(700,m_strategy);
            }
            if ( IncludeUserName()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(703,m_user_name);
            }
            if ( IncludeSpdrComment()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(709,m_spdr_comment);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(712,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ReachRule>(m_take_reach_rule)));
            if ( IncludeMaxExposureSize()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(715,m_max_exposure_size);
            }
            if ( IncludeNumMakeExchanges()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(718,m_num_make_exchanges);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(721,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PublicSizeHandling>(m_public_size)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(724,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ProgressRule>(m_progress_rule)));
            if ( IncludeProgressSliceCnt()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(727,m_progress_slice_cnt);
            }
            if ( IncludeProgressExposeTime()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(730,m_progress_expose_time);
            }
            if ( IncludeMaxChildOrders()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(733,m_max_child_orders);
            }
            if ( IncludeExchMask()) {
                totalSize += SRProtobufCPP::FieldCodec::UIntFieldSize(736,m_exch_mask);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(1045,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MarketSession>(m_market_session)));
            if ( IncludeStartDttm()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(742, m_start_dttm);
            }
            if ( IncludeOrderDuration()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(745,m_order_duration);
            }
            if ( IncludeActiveDuration()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(1046,m_active_duration);
            }
            if ( IncludeGoodTillDttm()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(748, m_good_till_dttm);
            }
            if ( IncludeExpireDttm()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(1047, m_expire_dttm);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(751,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ParentOrderHandling>(m_parent_order_handling)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(754,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ParentBalanceHandling>(m_parent_balance_handling)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(757,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BlockVisibility>(m_block_visibility)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(760,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrLimitType>(m_order_limit_type)));
            if ( IncludeOrderPrcLimit()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(763,m_order_prc_limit);
            }
            if ( IncludeOrderRefUprc()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(766,m_order_ref_uprc);
            }
            if ( IncludeOrderRefDe()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(769,m_order_ref_de);
            }
            if ( IncludeOrderRefGa()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(772,m_order_ref_ga);
            }
            if ( IncludeOrderPrcOffset()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(775,m_order_prc_offset);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(778,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrLimitClass>(m_take_limit_class)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(781,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AlphaType>(m_take_alpha_type)));
            if ( IncludeTakeAlphaFactor()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(784,m_take_alpha_factor);
            }
            if ( IncludeTakeAlphaProbability()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(787,m_take_alpha_probability);
            }
            if ( IncludeTakeSurfPrcOffset()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(790,m_take_surf_prc_offset);
            }
            if ( IncludeTakeSurfVolOffset()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(793,m_take_surf_vol_offset);
            }
            if ( IncludeTakeSurfWidOffset()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(796,m_take_surf_wid_offset);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(799,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrLimitClass>(m_make_limit_class)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(802,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AlphaType>(m_make_alpha_type)));
            if ( IncludeMakeAlphaFactor()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(805,m_make_alpha_factor);
            }
            if ( IncludeMakeAlphaProbability()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(808,m_make_alpha_probability);
            }
            if ( IncludeMakeSurfPrcOffset()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(811,m_make_surf_prc_offset);
            }
            if ( IncludeMakeSurfVolOffset()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(814,m_make_surf_vol_offset);
            }
            if ( IncludeMakeSurfWidOffset()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(817,m_make_surf_wid_offset);
            }
            if ( IncludeOrderRefEventMult()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(820,m_order_ref_event_mult);
            }
            if ( IncludeOrderRefEventDttm()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(823, m_order_ref_event_dttm);
            }
            if ( IncludeMlegProbLimit()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(826,m_mleg_prob_limit);
            }
            if ( IncludeMlegSurfOffset()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(829,m_mleg_surf_offset);
            }
            if ( IncludeExternExDest()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(1056,m_extern_ex_dest);
            }
            if ( IncludeOrderDttm()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(835, m_order_dttm);
            }
            if ( IncludeMinSurfVol()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(838,m_min_surf_vol);
            }
            if ( IncludeMaxSurfVol()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(841,m_max_surf_vol);
            }
            if ( IncludeMinSurfPrc()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(844,m_min_surf_prc);
            }
            if ( IncludeMaxSurfPrc()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(847,m_max_surf_prc);
            }
            if ( IncludeMinSurfUprc()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(850,m_min_surf_uprc);
            }
            if ( IncludeMaxSurfUprc()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(853,m_max_surf_uprc);
            }
            if ( IncludeMinQteWidth()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(856,m_min_qte_width);
            }
            if ( IncludeAvgQteWidth()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(859,m_avg_qte_width);
            }
            if ( IncludeCntQteWidth()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(862,m_cnt_qte_width);
            }
            if ( IncludeArriveBid()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(865,m_arrive_bid);
            }
            if ( IncludeArriveAsk()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(868,m_arrive_ask);
            }
            if ( IncludeTotalSeconds()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(871,m_total_seconds);
            }
            if ( IncludeWorkingSeconds()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(874,m_working_seconds);
            }
            if ( IncludePrtActiveCnt()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(877,m_prt_active_cnt);
            }
            if ( IncludePrtQtyActive()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(880,m_prt_qty_active);
            }
            if ( IncludeCumExchFee()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(883,m_cum_exch_fee);
            }
            if ( IncludeCumM10Pnl()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(886,m_cum_m10_pnl);
            }
            if ( IncludeCumArrivalPnl()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(889,m_cum_arrival_pnl);
            }
            if ( IncludeUPrcDrift()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(892,m_u_prc_drift);
            }
            if ( IncludeSVolDrift()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(895,m_s_vol_drift);
            }
            if ( IncludeMaxGrpDayDdeltaLn()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(946,m_max_grp_day_ddelta_ln);
            }
            if ( IncludeMaxGrpDayDdeltaSh()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(949,m_max_grp_day_ddelta_sh);
            }
            if ( IncludeMaxGrpDayContractsLn()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(979,m_max_grp_day_contracts_ln);
            }
            if ( IncludeMaxGrpDayContractsSh()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(982,m_max_grp_day_contracts_sh);
            }
            if ( IncludeMaxGrpDayContractsAbs()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(985,m_max_grp_day_contracts_abs);
            }
            if ( IncludeMaxGrpDayVegaLn()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(955,m_max_grp_day_vega_ln);
            }
            if ( IncludeMaxGrpDayVegaSh()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(958,m_max_grp_day_vega_sh);
            }
            if ( IncludeMaxGrpDayVegaAbs()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(961,m_max_grp_day_vega_abs);
            }
            if ( IncludeGrpDayVegaRatio()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(964,m_grp_day_vega_ratio);
            }
            if ( IncludeMaxGrpDayRmetric1Ln()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(1048,m_max_grp_day_rmetric1_ln);
            }
            if ( IncludeMaxGrpDayRmetric1Sh()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(1049,m_max_grp_day_rmetric1_sh);
            }
            if ( IncludeMaxGrpDayRmetric1Abs()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(1050,m_max_grp_day_rmetric1_abs);
            }
            if ( IncludeGrpDayRmetric1Ratio()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(1051,m_grp_day_rmetric1_ratio);
            }
            if ( IncludeCpx1()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(1000,m_cpx1);
            }
            if ( IncludeCsz1()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(1003,m_csz1);
            }
            if ( IncludeCex1()) {
                totalSize += SRProtobufCPP::FieldCodec::UIntFieldSize(1006,m_cex1);
            }
            if ( IncludeCpx2()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(1009,m_cpx2);
            }
            if ( IncludeCsz2()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(1012,m_csz2);
            }
            if ( IncludeCex2()) {
                totalSize += SRProtobufCPP::FieldCodec::UIntFieldSize(1015,m_cex2);
            }
            if ( IncludeCMore()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(1018,m_c_more);
            }
            if ( IncludeNumNewOrders()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(1021,m_num_new_orders);
            }
            if ( IncludeNumParentLimits()) {
                totalSize += SRProtobufCPP::FieldCodec::UIntFieldSize(1024,m_num_parent_limits);
            }
            if ( IncludeUserData1()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(1027,m_user_data1);
            }
            if ( IncludeUserData2()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(1030,m_user_data2);
            }
            if ( IncludeNumUpdates()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(1033,m_num_updates);
            }
            if ( IncludeTimestamp()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(1036, m_timestamp);
            }
            return totalSize;
        }

        void Encode(uint8_t*& dest, uint8_t* max) const {
            if ( IncludeMeta()) {
                SRProtobufCPP::MessageMetadata messageMetadata{};
                m__meta.setCodecMessageMetadata(messageMetadata);
                dest = SRProtobufCPP::FieldCodec::EncodeMessageMetadata(dest,1, messageMetadata);
            }
            if ( IncludePkey()) {
                dest = SRProtobufCPP::TagCodec::Encode(dest,2, SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited);
                dest = SRProtobufCPP::LengthCodec::Encode(dest,static_cast<int>(m_pkey.ByteSizeLong()));
                m_pkey.Encode(dest,max);
            }
            if ( IncludeEngineName()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,1037,static_cast<string>(m_engine_name));
            }
            if ( IncludeParentNumber()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,103,m_parent_number);
            }
            if ( IncludeBaseParentNumber()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,106,m_base_parent_number);
            }
            if ( IncludeModifyNumber()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,1038,m_modify_number);
            }
            if ( IncludeAltOrderId()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,109,static_cast<string>(m_alt_order_id));
            }
            if ( IncludePackageId()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,112,m_package_id);
            }
            if ( IncludeAltAccnt()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,118,static_cast<string>(m_alt_accnt));
            }
            if ( IncludeAltUserName()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,121,static_cast<string>(m_alt_user_name));
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,124,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrStageType>(m_stage_type)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,1039,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::StartType>(m_start_type)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,127,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_is_flagged)));
            if ( IncludeNoticeNumber()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,1052,m_notice_number);
            }
            if ( IncludeExecBrkrCode()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,1054,static_cast<string>(m_exec_brkr_code));
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,1057,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpreadClass>(m_spread_class)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,1043,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpreadFlavor>(m_spread_flavor)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,133,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>(m_stock_side)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,136,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ShortSaleFlag>(m_ssale_flag)));
            if ( IncludeLocateQuan()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,139,m_locate_quan);
            }
            if ( IncludeLocateFirm()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,142,static_cast<string>(m_locate_firm));
            }
            if ( IncludeLocatePool()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,145,static_cast<string>(m_locate_pool));
            }
            if ( IncludeStockShares()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,148,m_stock_shares);
            }
            if ( IncludeStockLegId()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,151,m_stock_leg_id);
            }
            if ( IncludeStockFillQuan()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,154,m_stock_fill_quan);
            }
            if ( IncludeStockAvgFillPrice()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,157,m_stock_avg_fill_price);
            }
            if ( IncludeRefUprc()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,160,m_ref_uprc);
            }
            if ( IncludeLiveUprc()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,163,m_live_uprc);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,166,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PriceFormat>(m_u_price_format)));
            if ( IncludeStockCpx()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,169,m_stock_cpx);
            }
            if ( IncludeStockCsz()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,172,m_stock_csz);
            }
            if ( IncludeStockCex()) {
                dest = SRProtobufCPP::FieldCodec::EncodeUInt(dest,175,m_stock_cex);
            }
            if ( IncludeNumLegs()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,178,m_num_legs);
            }
            if ( IncludeSecKey1()) {
                SRProtobufCPP::OptionKeyLayout optionKeyLayout_sec_key1{};
                m_sec_key1.setCodecOptionKey(optionKeyLayout_sec_key1);
                dest = SRProtobufCPP::FieldCodec::EncodeOptionKey(dest, 181, optionKeyLayout_sec_key1);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,184,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>(m_sec_type1)));
            if ( IncludeRatio1()) {
                dest = SRProtobufCPP::FieldCodec::EncodeUInt(dest,187,m_ratio1);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,190,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>(m_side1)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,193,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PositionType>(m_position_type1)));
            if ( IncludeLegId1()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,196,m_leg_id1);
            }
            if ( IncludeFillQuan1()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,199,m_fill_quan1);
            }
            if ( IncludeAvgFillPrice1()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,202,m_avg_fill_price1);
            }
            if ( IncludeVega1()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,205,m_vega1);
            }
            if ( IncludeRefUprc1()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,208,m_ref_uprc1);
            }
            if ( IncludeRefDelta1()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,211,m_ref_delta1);
            }
            if ( IncludeRefEarnCnt1()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,214,m_ref_earn_cnt1);
            }
            if ( IncludeLiveUprc1()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,217,m_live_uprc1);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,220,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PriceFormat>(m_price_format1)));
            if ( IncludeLegCpx1()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,223,m_leg_cpx1);
            }
            if ( IncludeLegCsz1()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,226,m_leg_csz1);
            }
            if ( IncludeLegCex1()) {
                dest = SRProtobufCPP::FieldCodec::EncodeUInt(dest,229,m_leg_cex1);
            }
            if ( IncludeSecKey2()) {
                SRProtobufCPP::OptionKeyLayout optionKeyLayout_sec_key2{};
                m_sec_key2.setCodecOptionKey(optionKeyLayout_sec_key2);
                dest = SRProtobufCPP::FieldCodec::EncodeOptionKey(dest, 232, optionKeyLayout_sec_key2);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,235,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>(m_sec_type2)));
            if ( IncludeRatio2()) {
                dest = SRProtobufCPP::FieldCodec::EncodeUInt(dest,238,m_ratio2);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,241,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>(m_side2)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,244,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PositionType>(m_position_type2)));
            if ( IncludeLegId2()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,247,m_leg_id2);
            }
            if ( IncludeFillQuan2()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,250,m_fill_quan2);
            }
            if ( IncludeAvgFillPrice2()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,253,m_avg_fill_price2);
            }
            if ( IncludeVega2()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,256,m_vega2);
            }
            if ( IncludeRefUprc2()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,259,m_ref_uprc2);
            }
            if ( IncludeRefDelta2()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,262,m_ref_delta2);
            }
            if ( IncludeRefEarnCnt2()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,265,m_ref_earn_cnt2);
            }
            if ( IncludeLiveUprc2()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,268,m_live_uprc2);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,271,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PriceFormat>(m_price_format2)));
            if ( IncludeLegCpx2()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,274,m_leg_cpx2);
            }
            if ( IncludeLegCsz2()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,277,m_leg_csz2);
            }
            if ( IncludeLegCex2()) {
                dest = SRProtobufCPP::FieldCodec::EncodeUInt(dest,280,m_leg_cex2);
            }
            if ( IncludeSecKey3()) {
                SRProtobufCPP::OptionKeyLayout optionKeyLayout_sec_key3{};
                m_sec_key3.setCodecOptionKey(optionKeyLayout_sec_key3);
                dest = SRProtobufCPP::FieldCodec::EncodeOptionKey(dest, 283, optionKeyLayout_sec_key3);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,286,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>(m_sec_type3)));
            if ( IncludeRatio3()) {
                dest = SRProtobufCPP::FieldCodec::EncodeUInt(dest,289,m_ratio3);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,292,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>(m_side3)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,295,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PositionType>(m_position_type3)));
            if ( IncludeLegId3()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,298,m_leg_id3);
            }
            if ( IncludeFillQuan3()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,301,m_fill_quan3);
            }
            if ( IncludeAvgFillPrice3()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,304,m_avg_fill_price3);
            }
            if ( IncludeVega3()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,307,m_vega3);
            }
            if ( IncludeRefUprc3()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,310,m_ref_uprc3);
            }
            if ( IncludeRefDelta3()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,313,m_ref_delta3);
            }
            if ( IncludeRefEarnCnt3()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,316,m_ref_earn_cnt3);
            }
            if ( IncludeLiveUprc3()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,319,m_live_uprc3);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,322,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PriceFormat>(m_price_format3)));
            if ( IncludeLegCpx3()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,325,m_leg_cpx3);
            }
            if ( IncludeLegCsz3()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,328,m_leg_csz3);
            }
            if ( IncludeLegCex3()) {
                dest = SRProtobufCPP::FieldCodec::EncodeUInt(dest,331,m_leg_cex3);
            }
            if ( IncludeSecKey4()) {
                SRProtobufCPP::OptionKeyLayout optionKeyLayout_sec_key4{};
                m_sec_key4.setCodecOptionKey(optionKeyLayout_sec_key4);
                dest = SRProtobufCPP::FieldCodec::EncodeOptionKey(dest, 334, optionKeyLayout_sec_key4);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,337,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>(m_sec_type4)));
            if ( IncludeRatio4()) {
                dest = SRProtobufCPP::FieldCodec::EncodeUInt(dest,340,m_ratio4);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,343,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>(m_side4)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,346,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PositionType>(m_position_type4)));
            if ( IncludeLegId4()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,349,m_leg_id4);
            }
            if ( IncludeFillQuan4()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,352,m_fill_quan4);
            }
            if ( IncludeAvgFillPrice4()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,355,m_avg_fill_price4);
            }
            if ( IncludeVega4()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,358,m_vega4);
            }
            if ( IncludeRefUprc4()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,361,m_ref_uprc4);
            }
            if ( IncludeRefDelta4()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,364,m_ref_delta4);
            }
            if ( IncludeRefEarnCnt4()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,367,m_ref_earn_cnt4);
            }
            if ( IncludeLiveUprc4()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,370,m_live_uprc4);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,373,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PriceFormat>(m_price_format4)));
            if ( IncludeLegCpx4()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,376,m_leg_cpx4);
            }
            if ( IncludeLegCsz4()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,379,m_leg_csz4);
            }
            if ( IncludeLegCex4()) {
                dest = SRProtobufCPP::FieldCodec::EncodeUInt(dest,382,m_leg_cex4);
            }
            if ( IncludeSecKey5()) {
                SRProtobufCPP::OptionKeyLayout optionKeyLayout_sec_key5{};
                m_sec_key5.setCodecOptionKey(optionKeyLayout_sec_key5);
                dest = SRProtobufCPP::FieldCodec::EncodeOptionKey(dest, 385, optionKeyLayout_sec_key5);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,388,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>(m_sec_type5)));
            if ( IncludeRatio5()) {
                dest = SRProtobufCPP::FieldCodec::EncodeUInt(dest,391,m_ratio5);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,394,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>(m_side5)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,397,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PositionType>(m_position_type5)));
            if ( IncludeLegId5()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,400,m_leg_id5);
            }
            if ( IncludeFillQuan5()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,403,m_fill_quan5);
            }
            if ( IncludeAvgFillPrice5()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,406,m_avg_fill_price5);
            }
            if ( IncludeVega5()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,409,m_vega5);
            }
            if ( IncludeRefUprc5()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,412,m_ref_uprc5);
            }
            if ( IncludeRefDelta5()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,415,m_ref_delta5);
            }
            if ( IncludeRefEarnCnt5()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,418,m_ref_earn_cnt5);
            }
            if ( IncludeLiveUprc5()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,421,m_live_uprc5);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,424,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PriceFormat>(m_price_format5)));
            if ( IncludeLegCpx5()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,427,m_leg_cpx5);
            }
            if ( IncludeLegCsz5()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,430,m_leg_csz5);
            }
            if ( IncludeLegCex5()) {
                dest = SRProtobufCPP::FieldCodec::EncodeUInt(dest,433,m_leg_cex5);
            }
            if ( IncludeSecKey6()) {
                SRProtobufCPP::OptionKeyLayout optionKeyLayout_sec_key6{};
                m_sec_key6.setCodecOptionKey(optionKeyLayout_sec_key6);
                dest = SRProtobufCPP::FieldCodec::EncodeOptionKey(dest, 436, optionKeyLayout_sec_key6);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,439,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>(m_sec_type6)));
            if ( IncludeRatio6()) {
                dest = SRProtobufCPP::FieldCodec::EncodeUInt(dest,442,m_ratio6);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,445,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>(m_side6)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,448,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PositionType>(m_position_type6)));
            if ( IncludeLegId6()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,451,m_leg_id6);
            }
            if ( IncludeFillQuan6()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,454,m_fill_quan6);
            }
            if ( IncludeAvgFillPrice6()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,457,m_avg_fill_price6);
            }
            if ( IncludeVega6()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,460,m_vega6);
            }
            if ( IncludeRefUprc6()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,463,m_ref_uprc6);
            }
            if ( IncludeRefDelta6()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,466,m_ref_delta6);
            }
            if ( IncludeRefEarnCnt6()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,469,m_ref_earn_cnt6);
            }
            if ( IncludeLiveUprc6()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,472,m_live_uprc6);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,475,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PriceFormat>(m_price_format6)));
            if ( IncludeLegCpx6()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,478,m_leg_cpx6);
            }
            if ( IncludeLegCsz6()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,481,m_leg_csz6);
            }
            if ( IncludeLegCex6()) {
                dest = SRProtobufCPP::FieldCodec::EncodeUInt(dest,484,m_leg_cex6);
            }
            if ( IncludeMlegVega()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,487,m_mleg_vega);
            }
            if ( IncludeMlegWtVega()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,490,m_mleg_wt_vega);
            }
            if ( IncludeMlegDelta()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,493,m_mleg_delta);
            }
            if ( IncludeMlegGamma()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,496,m_mleg_gamma);
            }
            if ( IncludeMlegTheta()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,499,m_mleg_theta);
            }
            if ( IncludeDescription()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,502,static_cast<string>(m_description));
            }
            if ( IncludeOrderSize()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,505,m_order_size);
            }
            if ( IncludeOrderActiveSize()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,508,m_order_active_size);
            }
            if ( IncludeLeavesQuantity()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,511,m_leaves_quantity);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,514,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrOrderStatus>(m_spdr_order_status)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,517,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrCloseReason>(m_spdr_close_reason)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,520,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrRejectReason>(m_spdr_reject_reason)));
            if ( IncludeSpdrCloseDetailTxt()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,523,static_cast<string>(m_spdr_close_detail_txt));
            }
            if ( IncludeOpenLegs()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,526,m_open_legs);
            }
            if ( IncludeCumSquareQty()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,529,m_cum_square_qty);
            }
            if ( IncludeAvgSquarePrc()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,532,m_avg_square_prc);
            }
            if ( IncludeCumPartialQty()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,535,m_cum_partial_qty);
            }
            if ( IncludeFillVega()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,538,m_fill_vega);
            }
            if ( IncludeFillWtVega()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,541,m_fill_wt_vega);
            }
            if ( IncludeFillDelta()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,544,m_fill_delta);
            }
            if ( IncludeFillDdelta()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,547,m_fill_ddelta);
            }
            if ( IncludeFillGamma()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,550,m_fill_gamma);
            }
            if ( IncludeFillTheta()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,553,m_fill_theta);
            }
            if ( IncludeLastFillDttm()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 556, m_last_fill_dttm);
            }
            if ( IncludeRiskLimitSize()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,559,m_risk_limit_size);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,562,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrRisk>(m_risk_limit_desc)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,1044,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrRiskLevel>(m_risk_limit_level)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,565,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MaxProgress>(m_max_progress)));
            if ( IncludeMaxProgressDetail()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,568,static_cast<string>(m_max_progress_detail));
            }
            if ( IncludeMaxProgressTime()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 571, m_max_progress_time);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,574,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AlgoState>(m_algo_state)));
            if ( IncludeAlgoCounter()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,577,m_algo_counter);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,580,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AlgoState>(m_make_state)));
            if ( IncludeMakeCounter()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,583,m_make_counter);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,586,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MktRespState>(m_mkt_resp_state)));
            if ( IncludeMktRespCounter()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,589,m_mkt_resp_counter);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,592,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BrokerState>(m_broker_state)));
            if ( IncludeBrokerCounter()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,595,m_broker_counter);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,598,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrMarketState>(m_spdr_mkt_state)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,601,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrBrokerStatus>(m_spdr_broker_status)));
            if ( IncludeProgressRuleDetail()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,604,static_cast<string>(m_progress_rule_detail));
            }
            if ( IncludeLastChildRejectDttm()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 607, m_last_child_reject_dttm);
            }
            if ( IncludeLastChildRejectText()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,610,static_cast<string>(m_last_child_reject_text));
            }
            if ( IncludeRiskGroupId()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,613,m_risk_group_id);
            }
            if ( IncludeTriggerGroupId()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,616,m_trigger_group_id);
            }
            if ( IncludeHedgeGroupingCode()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,619,m_hedge_grouping_code);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,622,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AutoHedge>(m_auto_hedge)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,625,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::HedgeInst>(m_hedge_instrument)));
            if ( IncludeHedgeSecKey()) {
                SRProtobufCPP::ExpiryKeyLayout expiryKeyLayout_hedge_sec_key{};
                m_hedge_sec_key.setCodecExpiryKey(expiryKeyLayout_hedge_sec_key);
                dest = SRProtobufCPP::FieldCodec::EncodeExpiryKey(dest, 628, expiryKeyLayout_hedge_sec_key);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,631,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>(m_hedge_sec_type)));
            if ( IncludeHedgeBetaRatio()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,634,m_hedge_beta_ratio);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,637,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::HedgeScope>(m_hedge_scope)));
            if ( IncludeExternHedgeExDest()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,1055,static_cast<string>(m_extern_hedge_ex_dest));
            }
            if ( IncludeExternHedgeParams()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,643,static_cast<string>(m_extern_hedge_params));
            }
            if ( IncludeBestWayPrc()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,646,m_best_way_prc);
            }
            if ( IncludeWrstWayPrc()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,649,m_wrst_way_prc);
            }
            if ( IncludeBestWaySz()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,652,m_best_way_sz);
            }
            if ( IncludeWrstWaySz()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,655,m_wrst_way_sz);
            }
            if ( IncludeSurfacePrc()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,658,m_surface_prc);
            }
            if ( IncludeSurfaceVol()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,661,m_surface_vol);
            }
            if ( IncludeSurfaceUprc()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,664,m_surface_uprc);
            }
            if ( IncludeLimitPrice()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,667,m_limit_price);
            }
            if ( IncludeLimitRefUprc()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,1053,m_limit_ref_uprc);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,670,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::LimitError>(m_limit_err)));
            if ( IncludeMakeLimitPrice()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,673,m_make_limit_price);
            }
            if ( IncludeTakeLimitPrice()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,676,m_take_limit_price);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,679,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::UPrcCxl>(m_cxl_uprc_range)));
            if ( IncludeMinUbid()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,682,m_min_ubid);
            }
            if ( IncludeMaxUask()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,685,m_max_uask);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,688,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MinMaxType>(m_min_max_type)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,691,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>(m_lead_side)));
            if ( IncludeMaxCompletionSlippage()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,694,m_max_completion_slippage);
            }
            if ( IncludeOrderRefPremium()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,697,m_order_ref_premium);
            }
            if ( IncludeStrategy()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,700,static_cast<string>(m_strategy));
            }
            if ( IncludeUserName()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,703,static_cast<string>(m_user_name));
            }
            if ( IncludeSpdrComment()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,709,static_cast<string>(m_spdr_comment));
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,712,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ReachRule>(m_take_reach_rule)));
            if ( IncludeMaxExposureSize()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,715,m_max_exposure_size);
            }
            if ( IncludeNumMakeExchanges()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,718,m_num_make_exchanges);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,721,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PublicSizeHandling>(m_public_size)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,724,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ProgressRule>(m_progress_rule)));
            if ( IncludeProgressSliceCnt()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,727,m_progress_slice_cnt);
            }
            if ( IncludeProgressExposeTime()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,730,m_progress_expose_time);
            }
            if ( IncludeMaxChildOrders()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,733,m_max_child_orders);
            }
            if ( IncludeExchMask()) {
                dest = SRProtobufCPP::FieldCodec::EncodeUInt(dest,736,m_exch_mask);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,1045,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MarketSession>(m_market_session)));
            if ( IncludeStartDttm()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 742, m_start_dttm);
            }
            if ( IncludeOrderDuration()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,745,m_order_duration);
            }
            if ( IncludeActiveDuration()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,1046,m_active_duration);
            }
            if ( IncludeGoodTillDttm()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 748, m_good_till_dttm);
            }
            if ( IncludeExpireDttm()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 1047, m_expire_dttm);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,751,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ParentOrderHandling>(m_parent_order_handling)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,754,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ParentBalanceHandling>(m_parent_balance_handling)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,757,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BlockVisibility>(m_block_visibility)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,760,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrLimitType>(m_order_limit_type)));
            if ( IncludeOrderPrcLimit()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,763,m_order_prc_limit);
            }
            if ( IncludeOrderRefUprc()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,766,m_order_ref_uprc);
            }
            if ( IncludeOrderRefDe()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,769,m_order_ref_de);
            }
            if ( IncludeOrderRefGa()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,772,m_order_ref_ga);
            }
            if ( IncludeOrderPrcOffset()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,775,m_order_prc_offset);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,778,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrLimitClass>(m_take_limit_class)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,781,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AlphaType>(m_take_alpha_type)));
            if ( IncludeTakeAlphaFactor()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,784,m_take_alpha_factor);
            }
            if ( IncludeTakeAlphaProbability()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,787,m_take_alpha_probability);
            }
            if ( IncludeTakeSurfPrcOffset()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,790,m_take_surf_prc_offset);
            }
            if ( IncludeTakeSurfVolOffset()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,793,m_take_surf_vol_offset);
            }
            if ( IncludeTakeSurfWidOffset()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,796,m_take_surf_wid_offset);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,799,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrLimitClass>(m_make_limit_class)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,802,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AlphaType>(m_make_alpha_type)));
            if ( IncludeMakeAlphaFactor()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,805,m_make_alpha_factor);
            }
            if ( IncludeMakeAlphaProbability()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,808,m_make_alpha_probability);
            }
            if ( IncludeMakeSurfPrcOffset()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,811,m_make_surf_prc_offset);
            }
            if ( IncludeMakeSurfVolOffset()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,814,m_make_surf_vol_offset);
            }
            if ( IncludeMakeSurfWidOffset()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,817,m_make_surf_wid_offset);
            }
            if ( IncludeOrderRefEventMult()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,820,m_order_ref_event_mult);
            }
            if ( IncludeOrderRefEventDttm()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 823, m_order_ref_event_dttm);
            }
            if ( IncludeMlegProbLimit()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,826,m_mleg_prob_limit);
            }
            if ( IncludeMlegSurfOffset()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,829,m_mleg_surf_offset);
            }
            if ( IncludeExternExDest()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,1056,static_cast<string>(m_extern_ex_dest));
            }
            if ( IncludeOrderDttm()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 835, m_order_dttm);
            }
            if ( IncludeMinSurfVol()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,838,m_min_surf_vol);
            }
            if ( IncludeMaxSurfVol()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,841,m_max_surf_vol);
            }
            if ( IncludeMinSurfPrc()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,844,m_min_surf_prc);
            }
            if ( IncludeMaxSurfPrc()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,847,m_max_surf_prc);
            }
            if ( IncludeMinSurfUprc()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,850,m_min_surf_uprc);
            }
            if ( IncludeMaxSurfUprc()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,853,m_max_surf_uprc);
            }
            if ( IncludeMinQteWidth()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,856,m_min_qte_width);
            }
            if ( IncludeAvgQteWidth()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,859,m_avg_qte_width);
            }
            if ( IncludeCntQteWidth()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,862,m_cnt_qte_width);
            }
            if ( IncludeArriveBid()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,865,m_arrive_bid);
            }
            if ( IncludeArriveAsk()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,868,m_arrive_ask);
            }
            if ( IncludeTotalSeconds()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,871,m_total_seconds);
            }
            if ( IncludeWorkingSeconds()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,874,m_working_seconds);
            }
            if ( IncludePrtActiveCnt()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,877,m_prt_active_cnt);
            }
            if ( IncludePrtQtyActive()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,880,m_prt_qty_active);
            }
            if ( IncludeCumExchFee()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,883,m_cum_exch_fee);
            }
            if ( IncludeCumM10Pnl()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,886,m_cum_m10_pnl);
            }
            if ( IncludeCumArrivalPnl()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,889,m_cum_arrival_pnl);
            }
            if ( IncludeUPrcDrift()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,892,m_u_prc_drift);
            }
            if ( IncludeSVolDrift()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,895,m_s_vol_drift);
            }
            if ( IncludeMaxGrpDayDdeltaLn()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,946,m_max_grp_day_ddelta_ln);
            }
            if ( IncludeMaxGrpDayDdeltaSh()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,949,m_max_grp_day_ddelta_sh);
            }
            if ( IncludeMaxGrpDayContractsLn()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,979,m_max_grp_day_contracts_ln);
            }
            if ( IncludeMaxGrpDayContractsSh()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,982,m_max_grp_day_contracts_sh);
            }
            if ( IncludeMaxGrpDayContractsAbs()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,985,m_max_grp_day_contracts_abs);
            }
            if ( IncludeMaxGrpDayVegaLn()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,955,m_max_grp_day_vega_ln);
            }
            if ( IncludeMaxGrpDayVegaSh()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,958,m_max_grp_day_vega_sh);
            }
            if ( IncludeMaxGrpDayVegaAbs()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,961,m_max_grp_day_vega_abs);
            }
            if ( IncludeGrpDayVegaRatio()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,964,m_grp_day_vega_ratio);
            }
            if ( IncludeMaxGrpDayRmetric1Ln()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,1048,m_max_grp_day_rmetric1_ln);
            }
            if ( IncludeMaxGrpDayRmetric1Sh()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,1049,m_max_grp_day_rmetric1_sh);
            }
            if ( IncludeMaxGrpDayRmetric1Abs()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,1050,m_max_grp_day_rmetric1_abs);
            }
            if ( IncludeGrpDayRmetric1Ratio()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,1051,m_grp_day_rmetric1_ratio);
            }
            if ( IncludeCpx1()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,1000,m_cpx1);
            }
            if ( IncludeCsz1()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,1003,m_csz1);
            }
            if ( IncludeCex1()) {
                dest = SRProtobufCPP::FieldCodec::EncodeUInt(dest,1006,m_cex1);
            }
            if ( IncludeCpx2()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,1009,m_cpx2);
            }
            if ( IncludeCsz2()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,1012,m_csz2);
            }
            if ( IncludeCex2()) {
                dest = SRProtobufCPP::FieldCodec::EncodeUInt(dest,1015,m_cex2);
            }
            if ( IncludeCMore()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,1018,m_c_more);
            }
            if ( IncludeNumNewOrders()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,1021,m_num_new_orders);
            }
            if ( IncludeNumParentLimits()) {
                dest = SRProtobufCPP::FieldCodec::EncodeUInt(dest,1024,m_num_parent_limits);
            }
            if ( IncludeUserData1()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,1027,static_cast<string>(m_user_data1));
            }
            if ( IncludeUserData2()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,1030,static_cast<string>(m_user_data2));
            }
            if ( IncludeNumUpdates()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,1033,m_num_updates);
            }
            if ( IncludeTimestamp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 1036, m_timestamp);
            }
        }

        const void Decode(const uint8_t*& pos, const uint8_t* max) {
            uint32_t tag = 0;
            int fieldNumber;
            SRProtobufCPP::TagCodecEnums::TagType tagType;
            while (pos < max && (tag = SRProtobufCPP::TagCodec::Decode(pos, max)) != 0) {
                auto tagDecomposed = SRProtobufCPP::TagCodec::Decompose(tag);
                tagType = tagDecomposed.second;
                fieldNumber = tagDecomposed.first;
                switch (fieldNumber) {
                    default:
                        // Add unknown tag field number logging
                        SRProtobufCPP::Skipper::Skip(pos, tagType, max);
                        break;
                    case 1: {
                        if (tagType == SRProtobufCPP::MessageMetadataCodec::TagType) {
                            SRProtobufCPP::MessageMetadata codecMessageMetadata{};
                            SRProtobufCPP::FieldCodec::DecodeMessageMetadata(pos,max, codecMessageMetadata);
                            m__meta.setMessageMetadataFromCodec(codecMessageMetadata);
                        }
                        break;
                    }
                    case 2: {
                        if (tagType == SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited) {
                            const int length = SRProtobufCPP::LengthCodec::Decode(pos, max);
                            m_pkey.Decode(pos, pos + std::min(max - pos, static_cast<std::ptrdiff_t>(length)));
                        }
                        break;
                    }
                    case 1037: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_engine_name = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 103: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_parent_number = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 106: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_base_parent_number = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 1038: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_modify_number = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 109: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_alt_order_id = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 112: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_package_id = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 118: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_alt_accnt = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 121: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_alt_user_name = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 124: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_stage_type = static_cast<spiderrock::protobuf::api::SpdrStageType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 1039: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_start_type = static_cast<spiderrock::protobuf::api::StartType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 127: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_is_flagged = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 1052: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_notice_number = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 1054: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_exec_brkr_code = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 1057: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_spread_class = static_cast<spiderrock::protobuf::api::SpreadClass>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 1043: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_spread_flavor = static_cast<spiderrock::protobuf::api::SpreadFlavor>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 133: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_stock_side = static_cast<spiderrock::protobuf::api::BuySell>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 136: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_ssale_flag = static_cast<spiderrock::protobuf::api::ShortSaleFlag>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 139: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_locate_quan = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 142: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_locate_firm = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 145: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_locate_pool = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 148: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_stock_shares = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 151: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_stock_leg_id = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 154: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_stock_fill_quan = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 157: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_stock_avg_fill_price = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 160: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_ref_uprc = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 163: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_live_uprc = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 166: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_u_price_format = static_cast<spiderrock::protobuf::api::PriceFormat>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 169: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_stock_cpx = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 172: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_stock_csz = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 175: {
                        if (tagType == SRProtobufCPP::UIntCodec::TagType) {
                            m_stock_cex = SRProtobufCPP::FieldCodec::DecodeUInt(pos,max);
                        }
                        break;
                    }
                    case 178: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_num_legs = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 181: {
                        if (tagType == SRProtobufCPP::OptionKeyCodec::TagType) {
                            auto optionKey = SRProtobufCPP::FieldCodec::DecodeOptionKey(pos,max);
                            m_sec_key1.setFromCodec(optionKey);
                        }
                        break;
                    }
                    case 184: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_sec_type1 = static_cast<spiderrock::protobuf::api::SpdrKeyType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 187: {
                        if (tagType == SRProtobufCPP::UIntCodec::TagType) {
                            m_ratio1 = SRProtobufCPP::FieldCodec::DecodeUInt(pos,max);
                        }
                        break;
                    }
                    case 190: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_side1 = static_cast<spiderrock::protobuf::api::BuySell>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 193: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_position_type1 = static_cast<spiderrock::protobuf::api::PositionType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 196: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_leg_id1 = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 199: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_fill_quan1 = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 202: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_avg_fill_price1 = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 205: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_vega1 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 208: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_ref_uprc1 = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 211: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_ref_delta1 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 214: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_ref_earn_cnt1 = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 217: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_live_uprc1 = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 220: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_price_format1 = static_cast<spiderrock::protobuf::api::PriceFormat>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 223: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_leg_cpx1 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 226: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_leg_csz1 = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 229: {
                        if (tagType == SRProtobufCPP::UIntCodec::TagType) {
                            m_leg_cex1 = SRProtobufCPP::FieldCodec::DecodeUInt(pos,max);
                        }
                        break;
                    }
                    case 232: {
                        if (tagType == SRProtobufCPP::OptionKeyCodec::TagType) {
                            auto optionKey = SRProtobufCPP::FieldCodec::DecodeOptionKey(pos,max);
                            m_sec_key2.setFromCodec(optionKey);
                        }
                        break;
                    }
                    case 235: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_sec_type2 = static_cast<spiderrock::protobuf::api::SpdrKeyType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 238: {
                        if (tagType == SRProtobufCPP::UIntCodec::TagType) {
                            m_ratio2 = SRProtobufCPP::FieldCodec::DecodeUInt(pos,max);
                        }
                        break;
                    }
                    case 241: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_side2 = static_cast<spiderrock::protobuf::api::BuySell>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 244: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_position_type2 = static_cast<spiderrock::protobuf::api::PositionType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 247: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_leg_id2 = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 250: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_fill_quan2 = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 253: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_avg_fill_price2 = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 256: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_vega2 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 259: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_ref_uprc2 = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 262: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_ref_delta2 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 265: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_ref_earn_cnt2 = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 268: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_live_uprc2 = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 271: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_price_format2 = static_cast<spiderrock::protobuf::api::PriceFormat>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 274: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_leg_cpx2 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 277: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_leg_csz2 = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 280: {
                        if (tagType == SRProtobufCPP::UIntCodec::TagType) {
                            m_leg_cex2 = SRProtobufCPP::FieldCodec::DecodeUInt(pos,max);
                        }
                        break;
                    }
                    case 283: {
                        if (tagType == SRProtobufCPP::OptionKeyCodec::TagType) {
                            auto optionKey = SRProtobufCPP::FieldCodec::DecodeOptionKey(pos,max);
                            m_sec_key3.setFromCodec(optionKey);
                        }
                        break;
                    }
                    case 286: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_sec_type3 = static_cast<spiderrock::protobuf::api::SpdrKeyType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 289: {
                        if (tagType == SRProtobufCPP::UIntCodec::TagType) {
                            m_ratio3 = SRProtobufCPP::FieldCodec::DecodeUInt(pos,max);
                        }
                        break;
                    }
                    case 292: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_side3 = static_cast<spiderrock::protobuf::api::BuySell>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 295: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_position_type3 = static_cast<spiderrock::protobuf::api::PositionType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 298: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_leg_id3 = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 301: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_fill_quan3 = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 304: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_avg_fill_price3 = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 307: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_vega3 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 310: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_ref_uprc3 = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 313: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_ref_delta3 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 316: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_ref_earn_cnt3 = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 319: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_live_uprc3 = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 322: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_price_format3 = static_cast<spiderrock::protobuf::api::PriceFormat>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 325: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_leg_cpx3 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 328: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_leg_csz3 = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 331: {
                        if (tagType == SRProtobufCPP::UIntCodec::TagType) {
                            m_leg_cex3 = SRProtobufCPP::FieldCodec::DecodeUInt(pos,max);
                        }
                        break;
                    }
                    case 334: {
                        if (tagType == SRProtobufCPP::OptionKeyCodec::TagType) {
                            auto optionKey = SRProtobufCPP::FieldCodec::DecodeOptionKey(pos,max);
                            m_sec_key4.setFromCodec(optionKey);
                        }
                        break;
                    }
                    case 337: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_sec_type4 = static_cast<spiderrock::protobuf::api::SpdrKeyType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 340: {
                        if (tagType == SRProtobufCPP::UIntCodec::TagType) {
                            m_ratio4 = SRProtobufCPP::FieldCodec::DecodeUInt(pos,max);
                        }
                        break;
                    }
                    case 343: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_side4 = static_cast<spiderrock::protobuf::api::BuySell>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 346: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_position_type4 = static_cast<spiderrock::protobuf::api::PositionType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 349: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_leg_id4 = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 352: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_fill_quan4 = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 355: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_avg_fill_price4 = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 358: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_vega4 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 361: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_ref_uprc4 = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 364: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_ref_delta4 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 367: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_ref_earn_cnt4 = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 370: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_live_uprc4 = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 373: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_price_format4 = static_cast<spiderrock::protobuf::api::PriceFormat>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 376: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_leg_cpx4 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 379: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_leg_csz4 = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 382: {
                        if (tagType == SRProtobufCPP::UIntCodec::TagType) {
                            m_leg_cex4 = SRProtobufCPP::FieldCodec::DecodeUInt(pos,max);
                        }
                        break;
                    }
                    case 385: {
                        if (tagType == SRProtobufCPP::OptionKeyCodec::TagType) {
                            auto optionKey = SRProtobufCPP::FieldCodec::DecodeOptionKey(pos,max);
                            m_sec_key5.setFromCodec(optionKey);
                        }
                        break;
                    }
                    case 388: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_sec_type5 = static_cast<spiderrock::protobuf::api::SpdrKeyType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 391: {
                        if (tagType == SRProtobufCPP::UIntCodec::TagType) {
                            m_ratio5 = SRProtobufCPP::FieldCodec::DecodeUInt(pos,max);
                        }
                        break;
                    }
                    case 394: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_side5 = static_cast<spiderrock::protobuf::api::BuySell>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 397: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_position_type5 = static_cast<spiderrock::protobuf::api::PositionType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 400: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_leg_id5 = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 403: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_fill_quan5 = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 406: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_avg_fill_price5 = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 409: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_vega5 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 412: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_ref_uprc5 = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 415: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_ref_delta5 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 418: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_ref_earn_cnt5 = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 421: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_live_uprc5 = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 424: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_price_format5 = static_cast<spiderrock::protobuf::api::PriceFormat>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 427: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_leg_cpx5 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 430: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_leg_csz5 = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 433: {
                        if (tagType == SRProtobufCPP::UIntCodec::TagType) {
                            m_leg_cex5 = SRProtobufCPP::FieldCodec::DecodeUInt(pos,max);
                        }
                        break;
                    }
                    case 436: {
                        if (tagType == SRProtobufCPP::OptionKeyCodec::TagType) {
                            auto optionKey = SRProtobufCPP::FieldCodec::DecodeOptionKey(pos,max);
                            m_sec_key6.setFromCodec(optionKey);
                        }
                        break;
                    }
                    case 439: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_sec_type6 = static_cast<spiderrock::protobuf::api::SpdrKeyType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 442: {
                        if (tagType == SRProtobufCPP::UIntCodec::TagType) {
                            m_ratio6 = SRProtobufCPP::FieldCodec::DecodeUInt(pos,max);
                        }
                        break;
                    }
                    case 445: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_side6 = static_cast<spiderrock::protobuf::api::BuySell>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 448: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_position_type6 = static_cast<spiderrock::protobuf::api::PositionType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 451: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_leg_id6 = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 454: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_fill_quan6 = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 457: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_avg_fill_price6 = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 460: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_vega6 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 463: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_ref_uprc6 = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 466: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_ref_delta6 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 469: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_ref_earn_cnt6 = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 472: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_live_uprc6 = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 475: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_price_format6 = static_cast<spiderrock::protobuf::api::PriceFormat>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 478: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_leg_cpx6 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 481: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_leg_csz6 = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 484: {
                        if (tagType == SRProtobufCPP::UIntCodec::TagType) {
                            m_leg_cex6 = SRProtobufCPP::FieldCodec::DecodeUInt(pos,max);
                        }
                        break;
                    }
                    case 487: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_mleg_vega = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 490: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_mleg_wt_vega = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 493: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_mleg_delta = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 496: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_mleg_gamma = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 499: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_mleg_theta = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 502: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_description = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 505: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_order_size = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 508: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_order_active_size = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 511: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_leaves_quantity = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 514: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_spdr_order_status = static_cast<spiderrock::protobuf::api::SpdrOrderStatus>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 517: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_spdr_close_reason = static_cast<spiderrock::protobuf::api::SpdrCloseReason>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 520: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_spdr_reject_reason = static_cast<spiderrock::protobuf::api::SpdrRejectReason>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 523: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_spdr_close_detail_txt = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 526: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_open_legs = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 529: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_cum_square_qty = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 532: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_avg_square_prc = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 535: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_cum_partial_qty = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 538: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_fill_vega = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 541: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_fill_wt_vega = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 544: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_fill_delta = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 547: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_fill_ddelta = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 550: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_fill_gamma = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 553: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_fill_theta = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 556: {
                        if (tagType == SRProtobufCPP::DateKeyCodec::TagType) {
                            m_last_fill_dttm = SRProtobufCPP::FieldCodec::DecodeDateTime(pos,max);
                        }
                        break;
                    }
                    case 559: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_risk_limit_size = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 562: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_risk_limit_desc = static_cast<spiderrock::protobuf::api::SpdrRisk>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 1044: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_risk_limit_level = static_cast<spiderrock::protobuf::api::SpdrRiskLevel>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 565: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_max_progress = static_cast<spiderrock::protobuf::api::MaxProgress>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 568: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_max_progress_detail = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 571: {
                        if (tagType == SRProtobufCPP::DateKeyCodec::TagType) {
                            m_max_progress_time = SRProtobufCPP::FieldCodec::DecodeDateTime(pos,max);
                        }
                        break;
                    }
                    case 574: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_algo_state = static_cast<spiderrock::protobuf::api::AlgoState>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 577: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_algo_counter = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 580: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_make_state = static_cast<spiderrock::protobuf::api::AlgoState>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 583: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_make_counter = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 586: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_mkt_resp_state = static_cast<spiderrock::protobuf::api::MktRespState>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 589: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_mkt_resp_counter = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 592: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_broker_state = static_cast<spiderrock::protobuf::api::BrokerState>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 595: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_broker_counter = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 598: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_spdr_mkt_state = static_cast<spiderrock::protobuf::api::SpdrMarketState>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 601: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_spdr_broker_status = static_cast<spiderrock::protobuf::api::SpdrBrokerStatus>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 604: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_progress_rule_detail = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 607: {
                        if (tagType == SRProtobufCPP::DateKeyCodec::TagType) {
                            m_last_child_reject_dttm = SRProtobufCPP::FieldCodec::DecodeDateTime(pos,max);
                        }
                        break;
                    }
                    case 610: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_last_child_reject_text = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 613: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_risk_group_id = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 616: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_trigger_group_id = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 619: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_hedge_grouping_code = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 622: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_auto_hedge = static_cast<spiderrock::protobuf::api::AutoHedge>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 625: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_hedge_instrument = static_cast<spiderrock::protobuf::api::HedgeInst>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 628: {
                        if (tagType == SRProtobufCPP::ExpiryKeyCodec::TagType) {
                            auto expiryKey = SRProtobufCPP::FieldCodec::DecodeExpiryKey(pos,max);
                            m_hedge_sec_key.setFromCodec(expiryKey);
                        }
                        break;
                    }
                    case 631: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_hedge_sec_type = static_cast<spiderrock::protobuf::api::SpdrKeyType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 634: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_hedge_beta_ratio = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 637: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_hedge_scope = static_cast<spiderrock::protobuf::api::HedgeScope>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 1055: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_extern_hedge_ex_dest = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 643: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_extern_hedge_params = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 646: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_best_way_prc = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 649: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_wrst_way_prc = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 652: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_best_way_sz = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 655: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_wrst_way_sz = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 658: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_surface_prc = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 661: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_surface_vol = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 664: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_surface_uprc = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 667: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_limit_price = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 1053: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_limit_ref_uprc = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 670: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_limit_err = static_cast<spiderrock::protobuf::api::LimitError>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 673: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_make_limit_price = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 676: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_take_limit_price = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 679: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_cxl_uprc_range = static_cast<spiderrock::protobuf::api::UPrcCxl>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 682: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_min_ubid = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 685: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_max_uask = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 688: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_min_max_type = static_cast<spiderrock::protobuf::api::MinMaxType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 691: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_lead_side = static_cast<spiderrock::protobuf::api::BuySell>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 694: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_max_completion_slippage = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 697: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_order_ref_premium = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 700: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_strategy = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 703: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_user_name = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 709: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_spdr_comment = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 712: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_take_reach_rule = static_cast<spiderrock::protobuf::api::ReachRule>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 715: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_max_exposure_size = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 718: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_num_make_exchanges = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 721: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_public_size = static_cast<spiderrock::protobuf::api::PublicSizeHandling>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 724: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_progress_rule = static_cast<spiderrock::protobuf::api::ProgressRule>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 727: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_progress_slice_cnt = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 730: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_progress_expose_time = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 733: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_max_child_orders = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 736: {
                        if (tagType == SRProtobufCPP::UIntCodec::TagType) {
                            m_exch_mask = SRProtobufCPP::FieldCodec::DecodeUInt(pos,max);
                        }
                        break;
                    }
                    case 1045: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_market_session = static_cast<spiderrock::protobuf::api::MarketSession>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 742: {
                        if (tagType == SRProtobufCPP::DateKeyCodec::TagType) {
                            m_start_dttm = SRProtobufCPP::FieldCodec::DecodeDateTime(pos,max);
                        }
                        break;
                    }
                    case 745: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_order_duration = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 1046: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_active_duration = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 748: {
                        if (tagType == SRProtobufCPP::DateKeyCodec::TagType) {
                            m_good_till_dttm = SRProtobufCPP::FieldCodec::DecodeDateTime(pos,max);
                        }
                        break;
                    }
                    case 1047: {
                        if (tagType == SRProtobufCPP::DateKeyCodec::TagType) {
                            m_expire_dttm = SRProtobufCPP::FieldCodec::DecodeDateTime(pos,max);
                        }
                        break;
                    }
                    case 751: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_parent_order_handling = static_cast<spiderrock::protobuf::api::ParentOrderHandling>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 754: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_parent_balance_handling = static_cast<spiderrock::protobuf::api::ParentBalanceHandling>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 757: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_block_visibility = static_cast<spiderrock::protobuf::api::BlockVisibility>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 760: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_order_limit_type = static_cast<spiderrock::protobuf::api::SpdrLimitType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 763: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_order_prc_limit = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 766: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_order_ref_uprc = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 769: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_order_ref_de = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 772: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_order_ref_ga = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 775: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_order_prc_offset = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 778: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_take_limit_class = static_cast<spiderrock::protobuf::api::SpdrLimitClass>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 781: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_take_alpha_type = static_cast<spiderrock::protobuf::api::AlphaType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 784: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_take_alpha_factor = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 787: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_take_alpha_probability = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 790: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_take_surf_prc_offset = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 793: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_take_surf_vol_offset = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 796: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_take_surf_wid_offset = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 799: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_make_limit_class = static_cast<spiderrock::protobuf::api::SpdrLimitClass>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 802: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_make_alpha_type = static_cast<spiderrock::protobuf::api::AlphaType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 805: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_make_alpha_factor = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 808: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_make_alpha_probability = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 811: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_make_surf_prc_offset = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 814: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_make_surf_vol_offset = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 817: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_make_surf_wid_offset = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 820: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_order_ref_event_mult = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 823: {
                        if (tagType == SRProtobufCPP::DateKeyCodec::TagType) {
                            m_order_ref_event_dttm = SRProtobufCPP::FieldCodec::DecodeDateTime(pos,max);
                        }
                        break;
                    }
                    case 826: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_mleg_prob_limit = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 829: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_mleg_surf_offset = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 1056: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_extern_ex_dest = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 835: {
                        if (tagType == SRProtobufCPP::DateKeyCodec::TagType) {
                            m_order_dttm = SRProtobufCPP::FieldCodec::DecodeDateTime(pos,max);
                        }
                        break;
                    }
                    case 838: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_min_surf_vol = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 841: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_max_surf_vol = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 844: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_min_surf_prc = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 847: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_max_surf_prc = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 850: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_min_surf_uprc = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 853: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_max_surf_uprc = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 856: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_min_qte_width = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 859: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_avg_qte_width = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 862: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_cnt_qte_width = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 865: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_arrive_bid = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 868: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_arrive_ask = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 871: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_total_seconds = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 874: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_working_seconds = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 877: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_prt_active_cnt = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 880: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_prt_qty_active = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 883: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_cum_exch_fee = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 886: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_cum_m10_pnl = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 889: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_cum_arrival_pnl = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 892: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_u_prc_drift = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 895: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_s_vol_drift = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 946: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_max_grp_day_ddelta_ln = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 949: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_max_grp_day_ddelta_sh = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 979: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_max_grp_day_contracts_ln = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 982: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_max_grp_day_contracts_sh = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 985: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_max_grp_day_contracts_abs = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 955: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_max_grp_day_vega_ln = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 958: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_max_grp_day_vega_sh = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 961: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_max_grp_day_vega_abs = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 964: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_grp_day_vega_ratio = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 1048: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_max_grp_day_rmetric1_ln = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 1049: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_max_grp_day_rmetric1_sh = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 1050: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_max_grp_day_rmetric1_abs = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 1051: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_grp_day_rmetric1_ratio = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 1000: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_cpx1 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 1003: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_csz1 = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 1006: {
                        if (tagType == SRProtobufCPP::UIntCodec::TagType) {
                            m_cex1 = SRProtobufCPP::FieldCodec::DecodeUInt(pos,max);
                        }
                        break;
                    }
                    case 1009: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_cpx2 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 1012: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_csz2 = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 1015: {
                        if (tagType == SRProtobufCPP::UIntCodec::TagType) {
                            m_cex2 = SRProtobufCPP::FieldCodec::DecodeUInt(pos,max);
                        }
                        break;
                    }
                    case 1018: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_c_more = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 1021: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_num_new_orders = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 1024: {
                        if (tagType == SRProtobufCPP::UIntCodec::TagType) {
                            m_num_parent_limits = SRProtobufCPP::FieldCodec::DecodeUInt(pos,max);
                        }
                        break;
                    }
                    case 1027: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_user_data1 = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 1030: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_user_data2 = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 1033: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_num_updates = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 1036: {
                        if (tagType == SRProtobufCPP::DateKeyCodec::TagType) {
                            m_timestamp = SRProtobufCPP::FieldCodec::DecodeDateTime(pos,max);
                        }
                        break;
                    }
                }
            }
        }

    };


    // getter definitions for all classes above, both inner and outer classes

    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::_meta>() const { return SpdrMLegBrkrState::_meta{ m__meta}; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::pkey>() const { return SpdrMLegBrkrState::pkey{ m_pkey}; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::engine_name>() const { return m_engine_name; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::parent_number>() const { return m_parent_number; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::base_parent_number>() const { return m_base_parent_number; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::modify_number>() const { return m_modify_number; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::alt_order_id>() const { return m_alt_order_id; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::package_id>() const { return m_package_id; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::alt_accnt>() const { return m_alt_accnt; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::alt_user_name>() const { return m_alt_user_name; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::stage_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrStageType>( m_stage_type)); }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::start_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::StartType>( m_start_type)); }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::is_flagged>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_is_flagged)); }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::notice_number>() const { return m_notice_number; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::exec_brkr_code>() const { return m_exec_brkr_code; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::spread_class>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpreadClass>( m_spread_class)); }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::spread_flavor>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpreadFlavor>( m_spread_flavor)); }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::stock_side>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>( m_stock_side)); }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::ssale_flag>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ShortSaleFlag>( m_ssale_flag)); }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::locate_quan>() const { return m_locate_quan; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::locate_firm>() const { return m_locate_firm; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::locate_pool>() const { return m_locate_pool; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::stock_shares>() const { return m_stock_shares; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::stock_leg_id>() const { return m_stock_leg_id; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::stock_fill_quan>() const { return m_stock_fill_quan; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::stock_avg_fill_price>() const { return m_stock_avg_fill_price; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::ref_uprc>() const { return m_ref_uprc; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::live_uprc>() const { return m_live_uprc; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::u_price_format>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PriceFormat>( m_u_price_format)); }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::stock_cpx>() const { return m_stock_cpx; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::stock_csz>() const { return m_stock_csz; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::stock_cex>() const { return m_stock_cex; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::num_legs>() const { return m_num_legs; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::sec_key1>() const { return SpdrMLegBrkrState::sec_key1{ m_sec_key1}; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::sec_type1>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>( m_sec_type1)); }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::ratio1>() const { return m_ratio1; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::side1>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>( m_side1)); }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::position_type1>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PositionType>( m_position_type1)); }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::leg_id1>() const { return m_leg_id1; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::fill_quan1>() const { return m_fill_quan1; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::avg_fill_price1>() const { return m_avg_fill_price1; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::vega1>() const { return m_vega1; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::ref_uprc1>() const { return m_ref_uprc1; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::ref_delta1>() const { return m_ref_delta1; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::ref_earn_cnt1>() const { return m_ref_earn_cnt1; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::live_uprc1>() const { return m_live_uprc1; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::price_format1>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PriceFormat>( m_price_format1)); }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::leg_cpx1>() const { return m_leg_cpx1; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::leg_csz1>() const { return m_leg_csz1; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::leg_cex1>() const { return m_leg_cex1; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::sec_key2>() const { return SpdrMLegBrkrState::sec_key2{ m_sec_key2}; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::sec_type2>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>( m_sec_type2)); }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::ratio2>() const { return m_ratio2; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::side2>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>( m_side2)); }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::position_type2>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PositionType>( m_position_type2)); }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::leg_id2>() const { return m_leg_id2; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::fill_quan2>() const { return m_fill_quan2; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::avg_fill_price2>() const { return m_avg_fill_price2; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::vega2>() const { return m_vega2; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::ref_uprc2>() const { return m_ref_uprc2; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::ref_delta2>() const { return m_ref_delta2; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::ref_earn_cnt2>() const { return m_ref_earn_cnt2; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::live_uprc2>() const { return m_live_uprc2; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::price_format2>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PriceFormat>( m_price_format2)); }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::leg_cpx2>() const { return m_leg_cpx2; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::leg_csz2>() const { return m_leg_csz2; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::leg_cex2>() const { return m_leg_cex2; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::sec_key3>() const { return SpdrMLegBrkrState::sec_key3{ m_sec_key3}; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::sec_type3>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>( m_sec_type3)); }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::ratio3>() const { return m_ratio3; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::side3>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>( m_side3)); }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::position_type3>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PositionType>( m_position_type3)); }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::leg_id3>() const { return m_leg_id3; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::fill_quan3>() const { return m_fill_quan3; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::avg_fill_price3>() const { return m_avg_fill_price3; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::vega3>() const { return m_vega3; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::ref_uprc3>() const { return m_ref_uprc3; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::ref_delta3>() const { return m_ref_delta3; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::ref_earn_cnt3>() const { return m_ref_earn_cnt3; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::live_uprc3>() const { return m_live_uprc3; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::price_format3>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PriceFormat>( m_price_format3)); }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::leg_cpx3>() const { return m_leg_cpx3; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::leg_csz3>() const { return m_leg_csz3; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::leg_cex3>() const { return m_leg_cex3; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::sec_key4>() const { return SpdrMLegBrkrState::sec_key4{ m_sec_key4}; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::sec_type4>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>( m_sec_type4)); }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::ratio4>() const { return m_ratio4; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::side4>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>( m_side4)); }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::position_type4>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PositionType>( m_position_type4)); }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::leg_id4>() const { return m_leg_id4; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::fill_quan4>() const { return m_fill_quan4; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::avg_fill_price4>() const { return m_avg_fill_price4; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::vega4>() const { return m_vega4; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::ref_uprc4>() const { return m_ref_uprc4; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::ref_delta4>() const { return m_ref_delta4; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::ref_earn_cnt4>() const { return m_ref_earn_cnt4; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::live_uprc4>() const { return m_live_uprc4; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::price_format4>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PriceFormat>( m_price_format4)); }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::leg_cpx4>() const { return m_leg_cpx4; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::leg_csz4>() const { return m_leg_csz4; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::leg_cex4>() const { return m_leg_cex4; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::sec_key5>() const { return SpdrMLegBrkrState::sec_key5{ m_sec_key5}; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::sec_type5>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>( m_sec_type5)); }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::ratio5>() const { return m_ratio5; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::side5>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>( m_side5)); }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::position_type5>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PositionType>( m_position_type5)); }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::leg_id5>() const { return m_leg_id5; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::fill_quan5>() const { return m_fill_quan5; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::avg_fill_price5>() const { return m_avg_fill_price5; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::vega5>() const { return m_vega5; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::ref_uprc5>() const { return m_ref_uprc5; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::ref_delta5>() const { return m_ref_delta5; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::ref_earn_cnt5>() const { return m_ref_earn_cnt5; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::live_uprc5>() const { return m_live_uprc5; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::price_format5>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PriceFormat>( m_price_format5)); }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::leg_cpx5>() const { return m_leg_cpx5; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::leg_csz5>() const { return m_leg_csz5; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::leg_cex5>() const { return m_leg_cex5; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::sec_key6>() const { return SpdrMLegBrkrState::sec_key6{ m_sec_key6}; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::sec_type6>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>( m_sec_type6)); }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::ratio6>() const { return m_ratio6; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::side6>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>( m_side6)); }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::position_type6>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PositionType>( m_position_type6)); }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::leg_id6>() const { return m_leg_id6; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::fill_quan6>() const { return m_fill_quan6; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::avg_fill_price6>() const { return m_avg_fill_price6; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::vega6>() const { return m_vega6; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::ref_uprc6>() const { return m_ref_uprc6; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::ref_delta6>() const { return m_ref_delta6; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::ref_earn_cnt6>() const { return m_ref_earn_cnt6; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::live_uprc6>() const { return m_live_uprc6; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::price_format6>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PriceFormat>( m_price_format6)); }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::leg_cpx6>() const { return m_leg_cpx6; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::leg_csz6>() const { return m_leg_csz6; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::leg_cex6>() const { return m_leg_cex6; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::mleg_vega>() const { return m_mleg_vega; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::mleg_wt_vega>() const { return m_mleg_wt_vega; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::mleg_delta>() const { return m_mleg_delta; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::mleg_gamma>() const { return m_mleg_gamma; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::mleg_theta>() const { return m_mleg_theta; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::description>() const { return m_description; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::order_size>() const { return m_order_size; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::order_active_size>() const { return m_order_active_size; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::leaves_quantity>() const { return m_leaves_quantity; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::spdr_order_status>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrOrderStatus>( m_spdr_order_status)); }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::spdr_close_reason>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrCloseReason>( m_spdr_close_reason)); }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::spdr_reject_reason>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrRejectReason>( m_spdr_reject_reason)); }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::spdr_close_detail_txt>() const { return m_spdr_close_detail_txt; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::open_legs>() const { return m_open_legs; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::cum_square_qty>() const { return m_cum_square_qty; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::avg_square_prc>() const { return m_avg_square_prc; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::cum_partial_qty>() const { return m_cum_partial_qty; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::fill_vega>() const { return m_fill_vega; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::fill_wt_vega>() const { return m_fill_wt_vega; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::fill_delta>() const { return m_fill_delta; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::fill_ddelta>() const { return m_fill_ddelta; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::fill_gamma>() const { return m_fill_gamma; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::fill_theta>() const { return m_fill_theta; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::last_fill_dttm>() const { return m_last_fill_dttm; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::risk_limit_size>() const { return m_risk_limit_size; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::risk_limit_desc>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrRisk>( m_risk_limit_desc)); }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::risk_limit_level>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrRiskLevel>( m_risk_limit_level)); }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::max_progress>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MaxProgress>( m_max_progress)); }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::max_progress_detail>() const { return m_max_progress_detail; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::max_progress_time>() const { return m_max_progress_time; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::algo_state>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AlgoState>( m_algo_state)); }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::algo_counter>() const { return m_algo_counter; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::make_state>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AlgoState>( m_make_state)); }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::make_counter>() const { return m_make_counter; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::mkt_resp_state>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MktRespState>( m_mkt_resp_state)); }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::mkt_resp_counter>() const { return m_mkt_resp_counter; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::broker_state>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BrokerState>( m_broker_state)); }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::broker_counter>() const { return m_broker_counter; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::spdr_mkt_state>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrMarketState>( m_spdr_mkt_state)); }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::spdr_broker_status>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrBrokerStatus>( m_spdr_broker_status)); }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::progress_rule_detail>() const { return m_progress_rule_detail; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::last_child_reject_dttm>() const { return m_last_child_reject_dttm; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::last_child_reject_text>() const { return m_last_child_reject_text; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::risk_group_id>() const { return m_risk_group_id; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::trigger_group_id>() const { return m_trigger_group_id; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::hedge_grouping_code>() const { return m_hedge_grouping_code; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::auto_hedge>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AutoHedge>( m_auto_hedge)); }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::hedge_instrument>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::HedgeInst>( m_hedge_instrument)); }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::hedge_sec_key>() const { return SpdrMLegBrkrState::hedge_sec_key{ m_hedge_sec_key}; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::hedge_sec_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>( m_hedge_sec_type)); }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::hedge_beta_ratio>() const { return m_hedge_beta_ratio; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::hedge_scope>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::HedgeScope>( m_hedge_scope)); }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::extern_hedge_ex_dest>() const { return m_extern_hedge_ex_dest; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::extern_hedge_params>() const { return m_extern_hedge_params; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::best_way_prc>() const { return m_best_way_prc; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::wrst_way_prc>() const { return m_wrst_way_prc; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::best_way_sz>() const { return m_best_way_sz; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::wrst_way_sz>() const { return m_wrst_way_sz; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::surface_prc>() const { return m_surface_prc; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::surface_vol>() const { return m_surface_vol; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::surface_uprc>() const { return m_surface_uprc; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::limit_price>() const { return m_limit_price; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::limit_ref_uprc>() const { return m_limit_ref_uprc; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::limit_err>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::LimitError>( m_limit_err)); }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::make_limit_price>() const { return m_make_limit_price; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::take_limit_price>() const { return m_take_limit_price; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::cxl_uprc_range>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::UPrcCxl>( m_cxl_uprc_range)); }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::min_ubid>() const { return m_min_ubid; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::max_uask>() const { return m_max_uask; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::min_max_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MinMaxType>( m_min_max_type)); }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::lead_side>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>( m_lead_side)); }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::max_completion_slippage>() const { return m_max_completion_slippage; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::order_ref_premium>() const { return m_order_ref_premium; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::strategy>() const { return m_strategy; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::user_name>() const { return m_user_name; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::spdr_comment>() const { return m_spdr_comment; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::take_reach_rule>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ReachRule>( m_take_reach_rule)); }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::max_exposure_size>() const { return m_max_exposure_size; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::num_make_exchanges>() const { return m_num_make_exchanges; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::public_size>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PublicSizeHandling>( m_public_size)); }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::progress_rule>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ProgressRule>( m_progress_rule)); }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::progress_slice_cnt>() const { return m_progress_slice_cnt; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::progress_expose_time>() const { return m_progress_expose_time; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::max_child_orders>() const { return m_max_child_orders; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::exch_mask>() const { return m_exch_mask; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::market_session>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MarketSession>( m_market_session)); }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::start_dttm>() const { return m_start_dttm; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::order_duration>() const { return m_order_duration; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::active_duration>() const { return m_active_duration; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::good_till_dttm>() const { return m_good_till_dttm; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::expire_dttm>() const { return m_expire_dttm; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::parent_order_handling>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ParentOrderHandling>( m_parent_order_handling)); }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::parent_balance_handling>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ParentBalanceHandling>( m_parent_balance_handling)); }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::block_visibility>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BlockVisibility>( m_block_visibility)); }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::order_limit_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrLimitType>( m_order_limit_type)); }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::order_prc_limit>() const { return m_order_prc_limit; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::order_ref_uprc>() const { return m_order_ref_uprc; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::order_ref_de>() const { return m_order_ref_de; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::order_ref_ga>() const { return m_order_ref_ga; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::order_prc_offset>() const { return m_order_prc_offset; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::take_limit_class>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrLimitClass>( m_take_limit_class)); }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::take_alpha_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AlphaType>( m_take_alpha_type)); }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::take_alpha_factor>() const { return m_take_alpha_factor; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::take_alpha_probability>() const { return m_take_alpha_probability; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::take_surf_prc_offset>() const { return m_take_surf_prc_offset; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::take_surf_vol_offset>() const { return m_take_surf_vol_offset; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::take_surf_wid_offset>() const { return m_take_surf_wid_offset; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::make_limit_class>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrLimitClass>( m_make_limit_class)); }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::make_alpha_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AlphaType>( m_make_alpha_type)); }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::make_alpha_factor>() const { return m_make_alpha_factor; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::make_alpha_probability>() const { return m_make_alpha_probability; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::make_surf_prc_offset>() const { return m_make_surf_prc_offset; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::make_surf_vol_offset>() const { return m_make_surf_vol_offset; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::make_surf_wid_offset>() const { return m_make_surf_wid_offset; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::order_ref_event_mult>() const { return m_order_ref_event_mult; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::order_ref_event_dttm>() const { return m_order_ref_event_dttm; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::mleg_prob_limit>() const { return m_mleg_prob_limit; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::mleg_surf_offset>() const { return m_mleg_surf_offset; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::extern_ex_dest>() const { return m_extern_ex_dest; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::order_dttm>() const { return m_order_dttm; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::min_surf_vol>() const { return m_min_surf_vol; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::max_surf_vol>() const { return m_max_surf_vol; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::min_surf_prc>() const { return m_min_surf_prc; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::max_surf_prc>() const { return m_max_surf_prc; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::min_surf_uprc>() const { return m_min_surf_uprc; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::max_surf_uprc>() const { return m_max_surf_uprc; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::min_qte_width>() const { return m_min_qte_width; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::avg_qte_width>() const { return m_avg_qte_width; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::cnt_qte_width>() const { return m_cnt_qte_width; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::arrive_bid>() const { return m_arrive_bid; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::arrive_ask>() const { return m_arrive_ask; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::total_seconds>() const { return m_total_seconds; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::working_seconds>() const { return m_working_seconds; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::prt_active_cnt>() const { return m_prt_active_cnt; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::prt_qty_active>() const { return m_prt_qty_active; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::cum_exch_fee>() const { return m_cum_exch_fee; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::cum_m10_pnl>() const { return m_cum_m10_pnl; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::cum_arrival_pnl>() const { return m_cum_arrival_pnl; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::u_prc_drift>() const { return m_u_prc_drift; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::s_vol_drift>() const { return m_s_vol_drift; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::max_grp_day_ddelta_ln>() const { return m_max_grp_day_ddelta_ln; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::max_grp_day_ddelta_sh>() const { return m_max_grp_day_ddelta_sh; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::max_grp_day_contracts_ln>() const { return m_max_grp_day_contracts_ln; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::max_grp_day_contracts_sh>() const { return m_max_grp_day_contracts_sh; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::max_grp_day_contracts_abs>() const { return m_max_grp_day_contracts_abs; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::max_grp_day_vega_ln>() const { return m_max_grp_day_vega_ln; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::max_grp_day_vega_sh>() const { return m_max_grp_day_vega_sh; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::max_grp_day_vega_abs>() const { return m_max_grp_day_vega_abs; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::grp_day_vega_ratio>() const { return m_grp_day_vega_ratio; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::max_grp_day_rmetric1_ln>() const { return m_max_grp_day_rmetric1_ln; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::max_grp_day_rmetric1_sh>() const { return m_max_grp_day_rmetric1_sh; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::max_grp_day_rmetric1_abs>() const { return m_max_grp_day_rmetric1_abs; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::grp_day_rmetric1_ratio>() const { return m_grp_day_rmetric1_ratio; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::cpx1>() const { return m_cpx1; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::csz1>() const { return m_csz1; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::cex1>() const { return m_cex1; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::cpx2>() const { return m_cpx2; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::csz2>() const { return m_csz2; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::cex2>() const { return m_cex2; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::c_more>() const { return m_c_more; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::num_new_orders>() const { return m_num_new_orders; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::num_parent_limits>() const { return m_num_parent_limits; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::user_data1>() const { return m_user_data1; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::user_data2>() const { return m_user_data2; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::num_updates>() const { return m_num_updates; }
    template<> inline const auto SpdrMLegBrkrState::get<SpdrMLegBrkrState::timestamp>() const { return m_timestamp; }
    template<> inline const auto SpdrMLegBrkrState_PKey::get<SpdrMLegBrkrState_PKey::ticker>() const { return SpdrMLegBrkrState_PKey::ticker{m_ticker}; }
    template<> inline const auto SpdrMLegBrkrState_PKey::get<SpdrMLegBrkrState_PKey::accnt>() const { return m_accnt; }
    template<> inline const auto SpdrMLegBrkrState_PKey::get<SpdrMLegBrkrState_PKey::spdr_source>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrSource>(m_spdr_source));}
    template<> inline const auto SpdrMLegBrkrState_PKey::get<SpdrMLegBrkrState_PKey::grouping_code>() const { return m_grouping_code; }
    template<> inline const auto SpdrMLegBrkrState_PKey::get<SpdrMLegBrkrState_PKey::order_side>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>(m_order_side));}
    template<> inline const auto SpdrMLegBrkrState_PKey::get<SpdrMLegBrkrState_PKey::client_firm>() const { return m_client_firm; }
    
    // ostream operators for all classes above, output should adhere to a JSON format

    inline std::ostream& operator<<(std::ostream &o, const SpdrMLegBrkrState_PKey& m) {
        o << "\"ticker\":{" << m.get<SpdrMLegBrkrState_PKey::ticker>() << "}";
        o << ",\"accnt\":\"" << m.get<SpdrMLegBrkrState_PKey::accnt>() << "\"";
        o << ",\"spdr_source\":" << (int64_t)m.get<SpdrMLegBrkrState_PKey::spdr_source>();
        o << ",\"grouping_code\":" << m.get<SpdrMLegBrkrState_PKey::grouping_code>();
        o << ",\"order_side\":" << (int64_t)m.get<SpdrMLegBrkrState_PKey::order_side>();
        o << ",\"client_firm\":\"" << m.get<SpdrMLegBrkrState_PKey::client_firm>() << "\"";
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const SpdrMLegBrkrState& m) {
        o << "\"_meta\":{" << m.get<SpdrMLegBrkrState::_meta>() << "}";
        o << ",\"pkey\":{" << m.get<SpdrMLegBrkrState::pkey>() << "}";
        o << ",\"engine_name\":\"" << m.get<SpdrMLegBrkrState::engine_name>() << "\"";
        o << ",\"parent_number\":" << m.get<SpdrMLegBrkrState::parent_number>();
        o << ",\"base_parent_number\":" << m.get<SpdrMLegBrkrState::base_parent_number>();
        o << ",\"modify_number\":" << m.get<SpdrMLegBrkrState::modify_number>();
        o << ",\"alt_order_id\":\"" << m.get<SpdrMLegBrkrState::alt_order_id>() << "\"";
        o << ",\"package_id\":" << m.get<SpdrMLegBrkrState::package_id>();
        o << ",\"alt_accnt\":\"" << m.get<SpdrMLegBrkrState::alt_accnt>() << "\"";
        o << ",\"alt_user_name\":\"" << m.get<SpdrMLegBrkrState::alt_user_name>() << "\"";
        o << ",\"stage_type\":" << (int64_t)m.get<SpdrMLegBrkrState::stage_type>();
        o << ",\"start_type\":" << (int64_t)m.get<SpdrMLegBrkrState::start_type>();
        o << ",\"is_flagged\":" << (int64_t)m.get<SpdrMLegBrkrState::is_flagged>();
        o << ",\"notice_number\":" << m.get<SpdrMLegBrkrState::notice_number>();
        o << ",\"exec_brkr_code\":\"" << m.get<SpdrMLegBrkrState::exec_brkr_code>() << "\"";
        o << ",\"spread_class\":" << (int64_t)m.get<SpdrMLegBrkrState::spread_class>();
        o << ",\"spread_flavor\":" << (int64_t)m.get<SpdrMLegBrkrState::spread_flavor>();
        o << ",\"stock_side\":" << (int64_t)m.get<SpdrMLegBrkrState::stock_side>();
        o << ",\"ssale_flag\":" << (int64_t)m.get<SpdrMLegBrkrState::ssale_flag>();
        o << ",\"locate_quan\":" << m.get<SpdrMLegBrkrState::locate_quan>();
        o << ",\"locate_firm\":\"" << m.get<SpdrMLegBrkrState::locate_firm>() << "\"";
        o << ",\"locate_pool\":\"" << m.get<SpdrMLegBrkrState::locate_pool>() << "\"";
        o << ",\"stock_shares\":" << m.get<SpdrMLegBrkrState::stock_shares>();
        o << ",\"stock_leg_id\":" << m.get<SpdrMLegBrkrState::stock_leg_id>();
        o << ",\"stock_fill_quan\":" << m.get<SpdrMLegBrkrState::stock_fill_quan>();
        o << ",\"stock_avg_fill_price\":" << m.get<SpdrMLegBrkrState::stock_avg_fill_price>();
        o << ",\"ref_uprc\":" << m.get<SpdrMLegBrkrState::ref_uprc>();
        o << ",\"live_uprc\":" << m.get<SpdrMLegBrkrState::live_uprc>();
        o << ",\"u_price_format\":" << (int64_t)m.get<SpdrMLegBrkrState::u_price_format>();
        o << ",\"stock_cpx\":" << m.get<SpdrMLegBrkrState::stock_cpx>();
        o << ",\"stock_csz\":" << m.get<SpdrMLegBrkrState::stock_csz>();
        o << ",\"stock_cex\":" << m.get<SpdrMLegBrkrState::stock_cex>();
        o << ",\"num_legs\":" << m.get<SpdrMLegBrkrState::num_legs>();
        o << ",\"sec_key1\":{" << m.get<SpdrMLegBrkrState::sec_key1>() << "}";
        o << ",\"sec_type1\":" << (int64_t)m.get<SpdrMLegBrkrState::sec_type1>();
        o << ",\"ratio1\":" << m.get<SpdrMLegBrkrState::ratio1>();
        o << ",\"side1\":" << (int64_t)m.get<SpdrMLegBrkrState::side1>();
        o << ",\"position_type1\":" << (int64_t)m.get<SpdrMLegBrkrState::position_type1>();
        o << ",\"leg_id1\":" << m.get<SpdrMLegBrkrState::leg_id1>();
        o << ",\"fill_quan1\":" << m.get<SpdrMLegBrkrState::fill_quan1>();
        o << ",\"avg_fill_price1\":" << m.get<SpdrMLegBrkrState::avg_fill_price1>();
        o << ",\"vega1\":" << m.get<SpdrMLegBrkrState::vega1>();
        o << ",\"ref_uprc1\":" << m.get<SpdrMLegBrkrState::ref_uprc1>();
        o << ",\"ref_delta1\":" << m.get<SpdrMLegBrkrState::ref_delta1>();
        o << ",\"ref_earn_cnt1\":" << m.get<SpdrMLegBrkrState::ref_earn_cnt1>();
        o << ",\"live_uprc1\":" << m.get<SpdrMLegBrkrState::live_uprc1>();
        o << ",\"price_format1\":" << (int64_t)m.get<SpdrMLegBrkrState::price_format1>();
        o << ",\"leg_cpx1\":" << m.get<SpdrMLegBrkrState::leg_cpx1>();
        o << ",\"leg_csz1\":" << m.get<SpdrMLegBrkrState::leg_csz1>();
        o << ",\"leg_cex1\":" << m.get<SpdrMLegBrkrState::leg_cex1>();
        o << ",\"sec_key2\":{" << m.get<SpdrMLegBrkrState::sec_key2>() << "}";
        o << ",\"sec_type2\":" << (int64_t)m.get<SpdrMLegBrkrState::sec_type2>();
        o << ",\"ratio2\":" << m.get<SpdrMLegBrkrState::ratio2>();
        o << ",\"side2\":" << (int64_t)m.get<SpdrMLegBrkrState::side2>();
        o << ",\"position_type2\":" << (int64_t)m.get<SpdrMLegBrkrState::position_type2>();
        o << ",\"leg_id2\":" << m.get<SpdrMLegBrkrState::leg_id2>();
        o << ",\"fill_quan2\":" << m.get<SpdrMLegBrkrState::fill_quan2>();
        o << ",\"avg_fill_price2\":" << m.get<SpdrMLegBrkrState::avg_fill_price2>();
        o << ",\"vega2\":" << m.get<SpdrMLegBrkrState::vega2>();
        o << ",\"ref_uprc2\":" << m.get<SpdrMLegBrkrState::ref_uprc2>();
        o << ",\"ref_delta2\":" << m.get<SpdrMLegBrkrState::ref_delta2>();
        o << ",\"ref_earn_cnt2\":" << m.get<SpdrMLegBrkrState::ref_earn_cnt2>();
        o << ",\"live_uprc2\":" << m.get<SpdrMLegBrkrState::live_uprc2>();
        o << ",\"price_format2\":" << (int64_t)m.get<SpdrMLegBrkrState::price_format2>();
        o << ",\"leg_cpx2\":" << m.get<SpdrMLegBrkrState::leg_cpx2>();
        o << ",\"leg_csz2\":" << m.get<SpdrMLegBrkrState::leg_csz2>();
        o << ",\"leg_cex2\":" << m.get<SpdrMLegBrkrState::leg_cex2>();
        o << ",\"sec_key3\":{" << m.get<SpdrMLegBrkrState::sec_key3>() << "}";
        o << ",\"sec_type3\":" << (int64_t)m.get<SpdrMLegBrkrState::sec_type3>();
        o << ",\"ratio3\":" << m.get<SpdrMLegBrkrState::ratio3>();
        o << ",\"side3\":" << (int64_t)m.get<SpdrMLegBrkrState::side3>();
        o << ",\"position_type3\":" << (int64_t)m.get<SpdrMLegBrkrState::position_type3>();
        o << ",\"leg_id3\":" << m.get<SpdrMLegBrkrState::leg_id3>();
        o << ",\"fill_quan3\":" << m.get<SpdrMLegBrkrState::fill_quan3>();
        o << ",\"avg_fill_price3\":" << m.get<SpdrMLegBrkrState::avg_fill_price3>();
        o << ",\"vega3\":" << m.get<SpdrMLegBrkrState::vega3>();
        o << ",\"ref_uprc3\":" << m.get<SpdrMLegBrkrState::ref_uprc3>();
        o << ",\"ref_delta3\":" << m.get<SpdrMLegBrkrState::ref_delta3>();
        o << ",\"ref_earn_cnt3\":" << m.get<SpdrMLegBrkrState::ref_earn_cnt3>();
        o << ",\"live_uprc3\":" << m.get<SpdrMLegBrkrState::live_uprc3>();
        o << ",\"price_format3\":" << (int64_t)m.get<SpdrMLegBrkrState::price_format3>();
        o << ",\"leg_cpx3\":" << m.get<SpdrMLegBrkrState::leg_cpx3>();
        o << ",\"leg_csz3\":" << m.get<SpdrMLegBrkrState::leg_csz3>();
        o << ",\"leg_cex3\":" << m.get<SpdrMLegBrkrState::leg_cex3>();
        o << ",\"sec_key4\":{" << m.get<SpdrMLegBrkrState::sec_key4>() << "}";
        o << ",\"sec_type4\":" << (int64_t)m.get<SpdrMLegBrkrState::sec_type4>();
        o << ",\"ratio4\":" << m.get<SpdrMLegBrkrState::ratio4>();
        o << ",\"side4\":" << (int64_t)m.get<SpdrMLegBrkrState::side4>();
        o << ",\"position_type4\":" << (int64_t)m.get<SpdrMLegBrkrState::position_type4>();
        o << ",\"leg_id4\":" << m.get<SpdrMLegBrkrState::leg_id4>();
        o << ",\"fill_quan4\":" << m.get<SpdrMLegBrkrState::fill_quan4>();
        o << ",\"avg_fill_price4\":" << m.get<SpdrMLegBrkrState::avg_fill_price4>();
        o << ",\"vega4\":" << m.get<SpdrMLegBrkrState::vega4>();
        o << ",\"ref_uprc4\":" << m.get<SpdrMLegBrkrState::ref_uprc4>();
        o << ",\"ref_delta4\":" << m.get<SpdrMLegBrkrState::ref_delta4>();
        o << ",\"ref_earn_cnt4\":" << m.get<SpdrMLegBrkrState::ref_earn_cnt4>();
        o << ",\"live_uprc4\":" << m.get<SpdrMLegBrkrState::live_uprc4>();
        o << ",\"price_format4\":" << (int64_t)m.get<SpdrMLegBrkrState::price_format4>();
        o << ",\"leg_cpx4\":" << m.get<SpdrMLegBrkrState::leg_cpx4>();
        o << ",\"leg_csz4\":" << m.get<SpdrMLegBrkrState::leg_csz4>();
        o << ",\"leg_cex4\":" << m.get<SpdrMLegBrkrState::leg_cex4>();
        o << ",\"sec_key5\":{" << m.get<SpdrMLegBrkrState::sec_key5>() << "}";
        o << ",\"sec_type5\":" << (int64_t)m.get<SpdrMLegBrkrState::sec_type5>();
        o << ",\"ratio5\":" << m.get<SpdrMLegBrkrState::ratio5>();
        o << ",\"side5\":" << (int64_t)m.get<SpdrMLegBrkrState::side5>();
        o << ",\"position_type5\":" << (int64_t)m.get<SpdrMLegBrkrState::position_type5>();
        o << ",\"leg_id5\":" << m.get<SpdrMLegBrkrState::leg_id5>();
        o << ",\"fill_quan5\":" << m.get<SpdrMLegBrkrState::fill_quan5>();
        o << ",\"avg_fill_price5\":" << m.get<SpdrMLegBrkrState::avg_fill_price5>();
        o << ",\"vega5\":" << m.get<SpdrMLegBrkrState::vega5>();
        o << ",\"ref_uprc5\":" << m.get<SpdrMLegBrkrState::ref_uprc5>();
        o << ",\"ref_delta5\":" << m.get<SpdrMLegBrkrState::ref_delta5>();
        o << ",\"ref_earn_cnt5\":" << m.get<SpdrMLegBrkrState::ref_earn_cnt5>();
        o << ",\"live_uprc5\":" << m.get<SpdrMLegBrkrState::live_uprc5>();
        o << ",\"price_format5\":" << (int64_t)m.get<SpdrMLegBrkrState::price_format5>();
        o << ",\"leg_cpx5\":" << m.get<SpdrMLegBrkrState::leg_cpx5>();
        o << ",\"leg_csz5\":" << m.get<SpdrMLegBrkrState::leg_csz5>();
        o << ",\"leg_cex5\":" << m.get<SpdrMLegBrkrState::leg_cex5>();
        o << ",\"sec_key6\":{" << m.get<SpdrMLegBrkrState::sec_key6>() << "}";
        o << ",\"sec_type6\":" << (int64_t)m.get<SpdrMLegBrkrState::sec_type6>();
        o << ",\"ratio6\":" << m.get<SpdrMLegBrkrState::ratio6>();
        o << ",\"side6\":" << (int64_t)m.get<SpdrMLegBrkrState::side6>();
        o << ",\"position_type6\":" << (int64_t)m.get<SpdrMLegBrkrState::position_type6>();
        o << ",\"leg_id6\":" << m.get<SpdrMLegBrkrState::leg_id6>();
        o << ",\"fill_quan6\":" << m.get<SpdrMLegBrkrState::fill_quan6>();
        o << ",\"avg_fill_price6\":" << m.get<SpdrMLegBrkrState::avg_fill_price6>();
        o << ",\"vega6\":" << m.get<SpdrMLegBrkrState::vega6>();
        o << ",\"ref_uprc6\":" << m.get<SpdrMLegBrkrState::ref_uprc6>();
        o << ",\"ref_delta6\":" << m.get<SpdrMLegBrkrState::ref_delta6>();
        o << ",\"ref_earn_cnt6\":" << m.get<SpdrMLegBrkrState::ref_earn_cnt6>();
        o << ",\"live_uprc6\":" << m.get<SpdrMLegBrkrState::live_uprc6>();
        o << ",\"price_format6\":" << (int64_t)m.get<SpdrMLegBrkrState::price_format6>();
        o << ",\"leg_cpx6\":" << m.get<SpdrMLegBrkrState::leg_cpx6>();
        o << ",\"leg_csz6\":" << m.get<SpdrMLegBrkrState::leg_csz6>();
        o << ",\"leg_cex6\":" << m.get<SpdrMLegBrkrState::leg_cex6>();
        o << ",\"mleg_vega\":" << m.get<SpdrMLegBrkrState::mleg_vega>();
        o << ",\"mleg_wt_vega\":" << m.get<SpdrMLegBrkrState::mleg_wt_vega>();
        o << ",\"mleg_delta\":" << m.get<SpdrMLegBrkrState::mleg_delta>();
        o << ",\"mleg_gamma\":" << m.get<SpdrMLegBrkrState::mleg_gamma>();
        o << ",\"mleg_theta\":" << m.get<SpdrMLegBrkrState::mleg_theta>();
        o << ",\"description\":\"" << m.get<SpdrMLegBrkrState::description>() << "\"";
        o << ",\"order_size\":" << m.get<SpdrMLegBrkrState::order_size>();
        o << ",\"order_active_size\":" << m.get<SpdrMLegBrkrState::order_active_size>();
        o << ",\"leaves_quantity\":" << m.get<SpdrMLegBrkrState::leaves_quantity>();
        o << ",\"spdr_order_status\":" << (int64_t)m.get<SpdrMLegBrkrState::spdr_order_status>();
        o << ",\"spdr_close_reason\":" << (int64_t)m.get<SpdrMLegBrkrState::spdr_close_reason>();
        o << ",\"spdr_reject_reason\":" << (int64_t)m.get<SpdrMLegBrkrState::spdr_reject_reason>();
        o << ",\"spdr_close_detail_txt\":\"" << m.get<SpdrMLegBrkrState::spdr_close_detail_txt>() << "\"";
        o << ",\"open_legs\":" << m.get<SpdrMLegBrkrState::open_legs>();
        o << ",\"cum_square_qty\":" << m.get<SpdrMLegBrkrState::cum_square_qty>();
        o << ",\"avg_square_prc\":" << m.get<SpdrMLegBrkrState::avg_square_prc>();
        o << ",\"cum_partial_qty\":" << m.get<SpdrMLegBrkrState::cum_partial_qty>();
        o << ",\"fill_vega\":" << m.get<SpdrMLegBrkrState::fill_vega>();
        o << ",\"fill_wt_vega\":" << m.get<SpdrMLegBrkrState::fill_wt_vega>();
        o << ",\"fill_delta\":" << m.get<SpdrMLegBrkrState::fill_delta>();
        o << ",\"fill_ddelta\":" << m.get<SpdrMLegBrkrState::fill_ddelta>();
        o << ",\"fill_gamma\":" << m.get<SpdrMLegBrkrState::fill_gamma>();
        o << ",\"fill_theta\":" << m.get<SpdrMLegBrkrState::fill_theta>();
        {
            std::time_t tt = m.get<SpdrMLegBrkrState::last_fill_dttm>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"last_fill_dttm\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        o << ",\"risk_limit_size\":" << m.get<SpdrMLegBrkrState::risk_limit_size>();
        o << ",\"risk_limit_desc\":" << (int64_t)m.get<SpdrMLegBrkrState::risk_limit_desc>();
        o << ",\"risk_limit_level\":" << (int64_t)m.get<SpdrMLegBrkrState::risk_limit_level>();
        o << ",\"max_progress\":" << (int64_t)m.get<SpdrMLegBrkrState::max_progress>();
        o << ",\"max_progress_detail\":\"" << m.get<SpdrMLegBrkrState::max_progress_detail>() << "\"";
        {
            std::time_t tt = m.get<SpdrMLegBrkrState::max_progress_time>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"max_progress_time\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        o << ",\"algo_state\":" << (int64_t)m.get<SpdrMLegBrkrState::algo_state>();
        o << ",\"algo_counter\":" << m.get<SpdrMLegBrkrState::algo_counter>();
        o << ",\"make_state\":" << (int64_t)m.get<SpdrMLegBrkrState::make_state>();
        o << ",\"make_counter\":" << m.get<SpdrMLegBrkrState::make_counter>();
        o << ",\"mkt_resp_state\":" << (int64_t)m.get<SpdrMLegBrkrState::mkt_resp_state>();
        o << ",\"mkt_resp_counter\":" << m.get<SpdrMLegBrkrState::mkt_resp_counter>();
        o << ",\"broker_state\":" << (int64_t)m.get<SpdrMLegBrkrState::broker_state>();
        o << ",\"broker_counter\":" << m.get<SpdrMLegBrkrState::broker_counter>();
        o << ",\"spdr_mkt_state\":" << (int64_t)m.get<SpdrMLegBrkrState::spdr_mkt_state>();
        o << ",\"spdr_broker_status\":" << (int64_t)m.get<SpdrMLegBrkrState::spdr_broker_status>();
        o << ",\"progress_rule_detail\":\"" << m.get<SpdrMLegBrkrState::progress_rule_detail>() << "\"";
        {
            std::time_t tt = m.get<SpdrMLegBrkrState::last_child_reject_dttm>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"last_child_reject_dttm\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        o << ",\"last_child_reject_text\":\"" << m.get<SpdrMLegBrkrState::last_child_reject_text>() << "\"";
        o << ",\"risk_group_id\":" << m.get<SpdrMLegBrkrState::risk_group_id>();
        o << ",\"trigger_group_id\":" << m.get<SpdrMLegBrkrState::trigger_group_id>();
        o << ",\"hedge_grouping_code\":" << m.get<SpdrMLegBrkrState::hedge_grouping_code>();
        o << ",\"auto_hedge\":" << (int64_t)m.get<SpdrMLegBrkrState::auto_hedge>();
        o << ",\"hedge_instrument\":" << (int64_t)m.get<SpdrMLegBrkrState::hedge_instrument>();
        o << ",\"hedge_sec_key\":{" << m.get<SpdrMLegBrkrState::hedge_sec_key>() << "}";
        o << ",\"hedge_sec_type\":" << (int64_t)m.get<SpdrMLegBrkrState::hedge_sec_type>();
        o << ",\"hedge_beta_ratio\":" << m.get<SpdrMLegBrkrState::hedge_beta_ratio>();
        o << ",\"hedge_scope\":" << (int64_t)m.get<SpdrMLegBrkrState::hedge_scope>();
        o << ",\"extern_hedge_ex_dest\":\"" << m.get<SpdrMLegBrkrState::extern_hedge_ex_dest>() << "\"";
        o << ",\"extern_hedge_params\":\"" << m.get<SpdrMLegBrkrState::extern_hedge_params>() << "\"";
        o << ",\"best_way_prc\":" << m.get<SpdrMLegBrkrState::best_way_prc>();
        o << ",\"wrst_way_prc\":" << m.get<SpdrMLegBrkrState::wrst_way_prc>();
        o << ",\"best_way_sz\":" << m.get<SpdrMLegBrkrState::best_way_sz>();
        o << ",\"wrst_way_sz\":" << m.get<SpdrMLegBrkrState::wrst_way_sz>();
        o << ",\"surface_prc\":" << m.get<SpdrMLegBrkrState::surface_prc>();
        o << ",\"surface_vol\":" << m.get<SpdrMLegBrkrState::surface_vol>();
        o << ",\"surface_uprc\":" << m.get<SpdrMLegBrkrState::surface_uprc>();
        o << ",\"limit_price\":" << m.get<SpdrMLegBrkrState::limit_price>();
        o << ",\"limit_ref_uprc\":" << m.get<SpdrMLegBrkrState::limit_ref_uprc>();
        o << ",\"limit_err\":" << (int64_t)m.get<SpdrMLegBrkrState::limit_err>();
        o << ",\"make_limit_price\":" << m.get<SpdrMLegBrkrState::make_limit_price>();
        o << ",\"take_limit_price\":" << m.get<SpdrMLegBrkrState::take_limit_price>();
        o << ",\"cxl_uprc_range\":" << (int64_t)m.get<SpdrMLegBrkrState::cxl_uprc_range>();
        o << ",\"min_ubid\":" << m.get<SpdrMLegBrkrState::min_ubid>();
        o << ",\"max_uask\":" << m.get<SpdrMLegBrkrState::max_uask>();
        o << ",\"min_max_type\":" << (int64_t)m.get<SpdrMLegBrkrState::min_max_type>();
        o << ",\"lead_side\":" << (int64_t)m.get<SpdrMLegBrkrState::lead_side>();
        o << ",\"max_completion_slippage\":" << m.get<SpdrMLegBrkrState::max_completion_slippage>();
        o << ",\"order_ref_premium\":" << m.get<SpdrMLegBrkrState::order_ref_premium>();
        o << ",\"strategy\":\"" << m.get<SpdrMLegBrkrState::strategy>() << "\"";
        o << ",\"user_name\":\"" << m.get<SpdrMLegBrkrState::user_name>() << "\"";
        o << ",\"spdr_comment\":\"" << m.get<SpdrMLegBrkrState::spdr_comment>() << "\"";
        o << ",\"take_reach_rule\":" << (int64_t)m.get<SpdrMLegBrkrState::take_reach_rule>();
        o << ",\"max_exposure_size\":" << m.get<SpdrMLegBrkrState::max_exposure_size>();
        o << ",\"num_make_exchanges\":" << m.get<SpdrMLegBrkrState::num_make_exchanges>();
        o << ",\"public_size\":" << (int64_t)m.get<SpdrMLegBrkrState::public_size>();
        o << ",\"progress_rule\":" << (int64_t)m.get<SpdrMLegBrkrState::progress_rule>();
        o << ",\"progress_slice_cnt\":" << m.get<SpdrMLegBrkrState::progress_slice_cnt>();
        o << ",\"progress_expose_time\":" << m.get<SpdrMLegBrkrState::progress_expose_time>();
        o << ",\"max_child_orders\":" << m.get<SpdrMLegBrkrState::max_child_orders>();
        o << ",\"exch_mask\":" << m.get<SpdrMLegBrkrState::exch_mask>();
        o << ",\"market_session\":" << (int64_t)m.get<SpdrMLegBrkrState::market_session>();
        {
            std::time_t tt = m.get<SpdrMLegBrkrState::start_dttm>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"start_dttm\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        o << ",\"order_duration\":" << m.get<SpdrMLegBrkrState::order_duration>();
        o << ",\"active_duration\":" << m.get<SpdrMLegBrkrState::active_duration>();
        {
            std::time_t tt = m.get<SpdrMLegBrkrState::good_till_dttm>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"good_till_dttm\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        {
            std::time_t tt = m.get<SpdrMLegBrkrState::expire_dttm>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"expire_dttm\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        o << ",\"parent_order_handling\":" << (int64_t)m.get<SpdrMLegBrkrState::parent_order_handling>();
        o << ",\"parent_balance_handling\":" << (int64_t)m.get<SpdrMLegBrkrState::parent_balance_handling>();
        o << ",\"block_visibility\":" << (int64_t)m.get<SpdrMLegBrkrState::block_visibility>();
        o << ",\"order_limit_type\":" << (int64_t)m.get<SpdrMLegBrkrState::order_limit_type>();
        o << ",\"order_prc_limit\":" << m.get<SpdrMLegBrkrState::order_prc_limit>();
        o << ",\"order_ref_uprc\":" << m.get<SpdrMLegBrkrState::order_ref_uprc>();
        o << ",\"order_ref_de\":" << m.get<SpdrMLegBrkrState::order_ref_de>();
        o << ",\"order_ref_ga\":" << m.get<SpdrMLegBrkrState::order_ref_ga>();
        o << ",\"order_prc_offset\":" << m.get<SpdrMLegBrkrState::order_prc_offset>();
        o << ",\"take_limit_class\":" << (int64_t)m.get<SpdrMLegBrkrState::take_limit_class>();
        o << ",\"take_alpha_type\":" << (int64_t)m.get<SpdrMLegBrkrState::take_alpha_type>();
        o << ",\"take_alpha_factor\":" << m.get<SpdrMLegBrkrState::take_alpha_factor>();
        o << ",\"take_alpha_probability\":" << m.get<SpdrMLegBrkrState::take_alpha_probability>();
        o << ",\"take_surf_prc_offset\":" << m.get<SpdrMLegBrkrState::take_surf_prc_offset>();
        o << ",\"take_surf_vol_offset\":" << m.get<SpdrMLegBrkrState::take_surf_vol_offset>();
        o << ",\"take_surf_wid_offset\":" << m.get<SpdrMLegBrkrState::take_surf_wid_offset>();
        o << ",\"make_limit_class\":" << (int64_t)m.get<SpdrMLegBrkrState::make_limit_class>();
        o << ",\"make_alpha_type\":" << (int64_t)m.get<SpdrMLegBrkrState::make_alpha_type>();
        o << ",\"make_alpha_factor\":" << m.get<SpdrMLegBrkrState::make_alpha_factor>();
        o << ",\"make_alpha_probability\":" << m.get<SpdrMLegBrkrState::make_alpha_probability>();
        o << ",\"make_surf_prc_offset\":" << m.get<SpdrMLegBrkrState::make_surf_prc_offset>();
        o << ",\"make_surf_vol_offset\":" << m.get<SpdrMLegBrkrState::make_surf_vol_offset>();
        o << ",\"make_surf_wid_offset\":" << m.get<SpdrMLegBrkrState::make_surf_wid_offset>();
        o << ",\"order_ref_event_mult\":" << m.get<SpdrMLegBrkrState::order_ref_event_mult>();
        {
            std::time_t tt = m.get<SpdrMLegBrkrState::order_ref_event_dttm>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"order_ref_event_dttm\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        o << ",\"mleg_prob_limit\":" << m.get<SpdrMLegBrkrState::mleg_prob_limit>();
        o << ",\"mleg_surf_offset\":" << m.get<SpdrMLegBrkrState::mleg_surf_offset>();
        o << ",\"extern_ex_dest\":\"" << m.get<SpdrMLegBrkrState::extern_ex_dest>() << "\"";
        {
            std::time_t tt = m.get<SpdrMLegBrkrState::order_dttm>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"order_dttm\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        o << ",\"min_surf_vol\":" << m.get<SpdrMLegBrkrState::min_surf_vol>();
        o << ",\"max_surf_vol\":" << m.get<SpdrMLegBrkrState::max_surf_vol>();
        o << ",\"min_surf_prc\":" << m.get<SpdrMLegBrkrState::min_surf_prc>();
        o << ",\"max_surf_prc\":" << m.get<SpdrMLegBrkrState::max_surf_prc>();
        o << ",\"min_surf_uprc\":" << m.get<SpdrMLegBrkrState::min_surf_uprc>();
        o << ",\"max_surf_uprc\":" << m.get<SpdrMLegBrkrState::max_surf_uprc>();
        o << ",\"min_qte_width\":" << m.get<SpdrMLegBrkrState::min_qte_width>();
        o << ",\"avg_qte_width\":" << m.get<SpdrMLegBrkrState::avg_qte_width>();
        o << ",\"cnt_qte_width\":" << m.get<SpdrMLegBrkrState::cnt_qte_width>();
        o << ",\"arrive_bid\":" << m.get<SpdrMLegBrkrState::arrive_bid>();
        o << ",\"arrive_ask\":" << m.get<SpdrMLegBrkrState::arrive_ask>();
        o << ",\"total_seconds\":" << m.get<SpdrMLegBrkrState::total_seconds>();
        o << ",\"working_seconds\":" << m.get<SpdrMLegBrkrState::working_seconds>();
        o << ",\"prt_active_cnt\":" << m.get<SpdrMLegBrkrState::prt_active_cnt>();
        o << ",\"prt_qty_active\":" << m.get<SpdrMLegBrkrState::prt_qty_active>();
        o << ",\"cum_exch_fee\":" << m.get<SpdrMLegBrkrState::cum_exch_fee>();
        o << ",\"cum_m10_pnl\":" << m.get<SpdrMLegBrkrState::cum_m10_pnl>();
        o << ",\"cum_arrival_pnl\":" << m.get<SpdrMLegBrkrState::cum_arrival_pnl>();
        o << ",\"u_prc_drift\":" << m.get<SpdrMLegBrkrState::u_prc_drift>();
        o << ",\"s_vol_drift\":" << m.get<SpdrMLegBrkrState::s_vol_drift>();
        o << ",\"max_grp_day_ddelta_ln\":" << m.get<SpdrMLegBrkrState::max_grp_day_ddelta_ln>();
        o << ",\"max_grp_day_ddelta_sh\":" << m.get<SpdrMLegBrkrState::max_grp_day_ddelta_sh>();
        o << ",\"max_grp_day_contracts_ln\":" << m.get<SpdrMLegBrkrState::max_grp_day_contracts_ln>();
        o << ",\"max_grp_day_contracts_sh\":" << m.get<SpdrMLegBrkrState::max_grp_day_contracts_sh>();
        o << ",\"max_grp_day_contracts_abs\":" << m.get<SpdrMLegBrkrState::max_grp_day_contracts_abs>();
        o << ",\"max_grp_day_vega_ln\":" << m.get<SpdrMLegBrkrState::max_grp_day_vega_ln>();
        o << ",\"max_grp_day_vega_sh\":" << m.get<SpdrMLegBrkrState::max_grp_day_vega_sh>();
        o << ",\"max_grp_day_vega_abs\":" << m.get<SpdrMLegBrkrState::max_grp_day_vega_abs>();
        o << ",\"grp_day_vega_ratio\":" << m.get<SpdrMLegBrkrState::grp_day_vega_ratio>();
        o << ",\"max_grp_day_rmetric1_ln\":" << m.get<SpdrMLegBrkrState::max_grp_day_rmetric1_ln>();
        o << ",\"max_grp_day_rmetric1_sh\":" << m.get<SpdrMLegBrkrState::max_grp_day_rmetric1_sh>();
        o << ",\"max_grp_day_rmetric1_abs\":" << m.get<SpdrMLegBrkrState::max_grp_day_rmetric1_abs>();
        o << ",\"grp_day_rmetric1_ratio\":" << m.get<SpdrMLegBrkrState::grp_day_rmetric1_ratio>();
        o << ",\"cpx1\":" << m.get<SpdrMLegBrkrState::cpx1>();
        o << ",\"csz1\":" << m.get<SpdrMLegBrkrState::csz1>();
        o << ",\"cex1\":" << m.get<SpdrMLegBrkrState::cex1>();
        o << ",\"cpx2\":" << m.get<SpdrMLegBrkrState::cpx2>();
        o << ",\"csz2\":" << m.get<SpdrMLegBrkrState::csz2>();
        o << ",\"cex2\":" << m.get<SpdrMLegBrkrState::cex2>();
        o << ",\"c_more\":" << m.get<SpdrMLegBrkrState::c_more>();
        o << ",\"num_new_orders\":" << m.get<SpdrMLegBrkrState::num_new_orders>();
        o << ",\"num_parent_limits\":" << m.get<SpdrMLegBrkrState::num_parent_limits>();
        o << ",\"user_data1\":\"" << m.get<SpdrMLegBrkrState::user_data1>() << "\"";
        o << ",\"user_data2\":\"" << m.get<SpdrMLegBrkrState::user_data2>() << "\"";
        o << ",\"num_updates\":" << m.get<SpdrMLegBrkrState::num_updates>();
        {
            std::time_t tt = m.get<SpdrMLegBrkrState::timestamp>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"timestamp\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        return o;
    }

}
}
}