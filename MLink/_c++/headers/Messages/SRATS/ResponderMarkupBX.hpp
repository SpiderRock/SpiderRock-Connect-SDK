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

    #ifndef _ticker__TickerKey__GUARD__
    #define _ticker__TickerKey__GUARD__
    DECL_STRONG_TYPE(ticker__TickerKey, TickerKey);
    #endif//_ticker__TickerKey__GUARD__

    #ifndef _is_disabled__GUARD__
    #define _is_disabled__GUARD__
    DECL_STRONG_TYPE(is_disabled, spiderrock::protobuf::api::YesNo);
    #endif//_is_disabled__GUARD__

    #ifndef _expiry_money_avail__GUARD__
    #define _expiry_money_avail__GUARD__
    DECL_STRONG_TYPE(expiry_money_avail, int64);
    #endif//_expiry_money_avail__GUARD__

    #ifndef _ticker_money_avail__GUARD__
    #define _ticker_money_avail__GUARD__
    DECL_STRONG_TYPE(ticker_money_avail, int64);
    #endif//_ticker_money_avail__GUARD__

    #ifndef _transact_fee__GUARD__
    #define _transact_fee__GUARD__
    DECL_STRONG_TYPE(transact_fee, double);
    #endif//_transact_fee__GUARD__

    #ifndef _money_rate__GUARD__
    #define _money_rate__GUARD__
    DECL_STRONG_TYPE(money_rate, double);
    #endif//_money_rate__GUARD__

    #ifndef _inc_fees_in_resp__GUARD__
    #define _inc_fees_in_resp__GUARD__
    DECL_STRONG_TYPE(inc_fees_in_resp, spiderrock::protobuf::api::YesNo);
    #endif//_inc_fees_in_resp__GUARD__

    #ifndef _round_rule__GUARD__
    #define _round_rule__GUARD__
    DECL_STRONG_TYPE(round_rule, spiderrock::protobuf::api::RoundRule);
    #endif//_round_rule__GUARD__

    #ifndef _open_expiry_money__GUARD__
    #define _open_expiry_money__GUARD__
    DECL_STRONG_TYPE(open_expiry_money, int32);
    #endif//_open_expiry_money__GUARD__

    #ifndef _open_ticker_money__GUARD__
    #define _open_ticker_money__GUARD__
    DECL_STRONG_TYPE(open_ticker_money, int32);
    #endif//_open_ticker_money__GUARD__

    #ifndef _cum_fill_money__GUARD__
    #define _cum_fill_money__GUARD__
    DECL_STRONG_TYPE(cum_fill_money, double);
    #endif//_cum_fill_money__GUARD__

    #ifndef _avg_fill_rate__GUARD__
    #define _avg_fill_rate__GUARD__
    DECL_STRONG_TYPE(avg_fill_rate, double);
    #endif//_avg_fill_rate__GUARD__

    #ifndef _is_div_control_disabled__GUARD__
    #define _is_div_control_disabled__GUARD__
    DECL_STRONG_TYPE(is_div_control_disabled, spiderrock::protobuf::api::YesNo);
    #endif//_is_div_control_disabled__GUARD__

    #ifndef _i_days__double__GUARD__
    #define _i_days__double__GUARD__
    DECL_STRONG_TYPE(i_days__double, double);
    #endif//_i_days__double__GUARD__

    #ifndef _i_years__GUARD__
    #define _i_years__GUARD__
    DECL_STRONG_TYPE(i_years, double);
    #endif//_i_years__GUARD__

    #ifndef _num_notices__GUARD__
    #define _num_notices__GUARD__
    DECL_STRONG_TYPE(num_notices, int64);
    #endif//_num_notices__GUARD__

    #ifndef _num_notice_sr__GUARD__
    #define _num_notice_sr__GUARD__
    DECL_STRONG_TYPE(num_notice_sr, int64);
    #endif//_num_notice_sr__GUARD__

    #ifndef _num_notice_amex__GUARD__
    #define _num_notice_amex__GUARD__
    DECL_STRONG_TYPE(num_notice_amex, int64);
    #endif//_num_notice_amex__GUARD__

    #ifndef _num_notice_bats__GUARD__
    #define _num_notice_bats__GUARD__
    DECL_STRONG_TYPE(num_notice_bats, int64);
    #endif//_num_notice_bats__GUARD__

    #ifndef _num_notice_box__GUARD__
    #define _num_notice_box__GUARD__
    DECL_STRONG_TYPE(num_notice_box, int64);
    #endif//_num_notice_box__GUARD__

    #ifndef _num_notice_cboe__GUARD__
    #define _num_notice_cboe__GUARD__
    DECL_STRONG_TYPE(num_notice_cboe, int64);
    #endif//_num_notice_cboe__GUARD__

    #ifndef _num_notice_c2__GUARD__
    #define _num_notice_c2__GUARD__
    DECL_STRONG_TYPE(num_notice_c2, int64);
    #endif//_num_notice_c2__GUARD__

    #ifndef _num_notice_edgo__GUARD__
    #define _num_notice_edgo__GUARD__
    DECL_STRONG_TYPE(num_notice_edgo, int64);
    #endif//_num_notice_edgo__GUARD__

    #ifndef _num_notice_emld__GUARD__
    #define _num_notice_emld__GUARD__
    DECL_STRONG_TYPE(num_notice_emld, int64);
    #endif//_num_notice_emld__GUARD__

    #ifndef _num_notice_gmni__GUARD__
    #define _num_notice_gmni__GUARD__
    DECL_STRONG_TYPE(num_notice_gmni, int64);
    #endif//_num_notice_gmni__GUARD__

    #ifndef _num_notice_ise__GUARD__
    #define _num_notice_ise__GUARD__
    DECL_STRONG_TYPE(num_notice_ise, int64);
    #endif//_num_notice_ise__GUARD__

    #ifndef _num_notice_mcry__GUARD__
    #define _num_notice_mcry__GUARD__
    DECL_STRONG_TYPE(num_notice_mcry, int64);
    #endif//_num_notice_mcry__GUARD__

    #ifndef _num_notice_memx__GUARD__
    #define _num_notice_memx__GUARD__
    DECL_STRONG_TYPE(num_notice_memx, int64);
    #endif//_num_notice_memx__GUARD__

    #ifndef _num_notice_miax__GUARD__
    #define _num_notice_miax__GUARD__
    DECL_STRONG_TYPE(num_notice_miax, int64);
    #endif//_num_notice_miax__GUARD__

    #ifndef _num_notice_mprl__GUARD__
    #define _num_notice_mprl__GUARD__
    DECL_STRONG_TYPE(num_notice_mprl, int64);
    #endif//_num_notice_mprl__GUARD__

    #ifndef _num_notice_nyse__GUARD__
    #define _num_notice_nyse__GUARD__
    DECL_STRONG_TYPE(num_notice_nyse, int64);
    #endif//_num_notice_nyse__GUARD__

    #ifndef _num_notice_nqbx__GUARD__
    #define _num_notice_nqbx__GUARD__
    DECL_STRONG_TYPE(num_notice_nqbx, int64);
    #endif//_num_notice_nqbx__GUARD__

    #ifndef _num_notice_nsdq__GUARD__
    #define _num_notice_nsdq__GUARD__
    DECL_STRONG_TYPE(num_notice_nsdq, int64);
    #endif//_num_notice_nsdq__GUARD__

    #ifndef _num_notice_phlx__GUARD__
    #define _num_notice_phlx__GUARD__
    DECL_STRONG_TYPE(num_notice_phlx, int64);
    #endif//_num_notice_phlx__GUARD__

    #ifndef _num_notice_sphr__GUARD__
    #define _num_notice_sphr__GUARD__
    DECL_STRONG_TYPE(num_notice_sphr, int64);
    #endif//_num_notice_sphr__GUARD__

    #ifndef _num_disabled__GUARD__
    #define _num_disabled__GUARD__
    DECL_STRONG_TYPE(num_disabled, int64);
    #endif//_num_disabled__GUARD__

    #ifndef _num_listed_flex_miss__GUARD__
    #define _num_listed_flex_miss__GUARD__
    DECL_STRONG_TYPE(num_listed_flex_miss, int64);
    #endif//_num_listed_flex_miss__GUARD__

    #ifndef _num_notice_price_miss__GUARD__
    #define _num_notice_price_miss__GUARD__
    DECL_STRONG_TYPE(num_notice_price_miss, int64);
    #endif//_num_notice_price_miss__GUARD__

    #ifndef _num_agg_size_limit__GUARD__
    #define _num_agg_size_limit__GUARD__
    DECL_STRONG_TYPE(num_agg_size_limit, int64);
    #endif//_num_agg_size_limit__GUARD__

    #ifndef _num_risk_group_limit__GUARD__
    #define _num_risk_group_limit__GUARD__
    DECL_STRONG_TYPE(num_risk_group_limit, int64);
    #endif//_num_risk_group_limit__GUARD__

    #ifndef _num_responses__int64__GUARD__
    #define _num_responses__int64__GUARD__
    DECL_STRONG_TYPE(num_responses__int64, int64);
    #endif//_num_responses__int64__GUARD__

    #ifndef _num_full_size__GUARD__
    #define _num_full_size__GUARD__
    DECL_STRONG_TYPE(num_full_size, int64);
    #endif//_num_full_size__GUARD__

    #ifndef _num_alloc_size__GUARD__
    #define _num_alloc_size__GUARD__
    DECL_STRONG_TYPE(num_alloc_size, int64);
    #endif//_num_alloc_size__GUARD__

    #ifndef _num_price_miss__GUARD__
    #define _num_price_miss__GUARD__
    DECL_STRONG_TYPE(num_price_miss, int64);
    #endif//_num_price_miss__GUARD__

    #ifndef _num_too_late__GUARD__
    #define _num_too_late__GUARD__
    DECL_STRONG_TYPE(num_too_late, int64);
    #endif//_num_too_late__GUARD__

    #ifndef _num_other_miss__GUARD__
    #define _num_other_miss__GUARD__
    DECL_STRONG_TYPE(num_other_miss, int64);
    #endif//_num_other_miss__GUARD__

    #ifndef _num_did_not_trade__GUARD__
    #define _num_did_not_trade__GUARD__
    DECL_STRONG_TYPE(num_did_not_trade, int64);
    #endif//_num_did_not_trade__GUARD__

    #ifndef _modified_by__GUARD__
    #define _modified_by__GUARD__
    DECL_STRONG_TYPE(modified_by, string);
    #endif//_modified_by__GUARD__

    #ifndef _modified_in__GUARD__
    #define _modified_in__GUARD__
    DECL_STRONG_TYPE(modified_in, spiderrock::protobuf::api::SysEnvironment);
    #endif//_modified_in__GUARD__

    #ifndef _timestamp__GUARD__
    #define _timestamp__GUARD__
    DECL_STRONG_TYPE(timestamp, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_timestamp__GUARD__

    #ifndef _accnt__GUARD__
    #define _accnt__GUARD__
    DECL_STRONG_TYPE(accnt, string);
    #endif//_accnt__GUARD__

    #ifndef _client_firm__GUARD__
    #define _client_firm__GUARD__
    DECL_STRONG_TYPE(client_firm, string);
    #endif//_client_firm__GUARD__

    #ifndef _ekey__GUARD__
    #define _ekey__GUARD__
    DECL_STRONG_TYPE(ekey, ExpiryKey);
    #endif//_ekey__GUARD__

    #ifndef _resp_side__GUARD__
    #define _resp_side__GUARD__
    DECL_STRONG_TYPE(resp_side, spiderrock::protobuf::api::BuySell);
    #endif//_resp_side__GUARD__

    
    class ResponderMarkupBX_PKey {
        public:
        //using statements for all types used in this class
        using accnt = spiderrock::protobuf::api::accnt;
        using client_firm = spiderrock::protobuf::api::client_firm;
        using ekey = spiderrock::protobuf::api::ekey;
        using resp_side = spiderrock::protobuf::api::resp_side;

        private:
        accnt m_accnt{};
        client_firm m_client_firm{};
        ekey m_ekey{};
        resp_side m_resp_side{};

        public:
        accnt get_accnt() const {
            return m_accnt;
        }
        client_firm get_client_firm() const {
            return m_client_firm;
        }
		ekey get_ekey() const {
            return m_ekey;
        }
        resp_side get_resp_side() const {
            return m_resp_side;
        }
        void set_accnt(const accnt& value)  {
            m_accnt = value;
        }
        void set_client_firm(const client_firm& value)  {
            m_client_firm = value;
        }
        void set_ekey(const ekey& value)  {
            m_ekey = value;
        }
        void set_resp_side(const resp_side& value)  {
            m_resp_side = value;
        }
        //templatized getters and setters
        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to ResponderMarkupBX_PKey::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to ResponderMarkupBX_PKey::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const accnt & value) { set_accnt(value); }
        void set(const client_firm & value) { set_client_firm(value); }
        void set(const ekey & value) { set_ekey(value); }
        void set(const resp_side & value) { set_resp_side(value); }


        ResponderMarkupBX_PKey() {}

        virtual ~ResponderMarkupBX_PKey() {
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
        bool IncludeAccnt() const {
            return !(m_accnt.empty());
        }
        bool IncludeClientFirm() const {
            return !(m_client_firm.empty());
        }
        bool IncludeEkey() const {
            return (m_ekey.ByteSizeLong() > 0);
        }


        size_t ByteSizeLong() const {
            size_t totalSize = 0;
            if ( IncludeAccnt()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(10,m_accnt);
            }
            if ( IncludeClientFirm()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(11,m_client_firm);
            }
            if ( IncludeEkey()) {
                SRProtobufCPP::ExpiryKeyLayout expiryKeyLayout_ekey;
                m_ekey.setCodecExpiryKey(expiryKeyLayout_ekey);
                totalSize += SRProtobufCPP::FieldCodec::ExpiryKeyFieldSize(15,expiryKeyLayout_ekey);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(14,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>(m_resp_side)));
            return totalSize;
        }

        void Encode(uint8_t*& dest, uint8_t* max) const {
            if ( IncludeAccnt()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,10,static_cast<string>(m_accnt));
            }
            if ( IncludeClientFirm()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,11,static_cast<string>(m_client_firm));
            }
            if ( IncludeEkey()) {
                SRProtobufCPP::ExpiryKeyLayout expiryKeyLayout_ekey;
                m_ekey.setCodecExpiryKey(expiryKeyLayout_ekey);
                dest = SRProtobufCPP::FieldCodec::EncodeExpiryKey(dest, 15, expiryKeyLayout_ekey);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,14,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>(m_resp_side)));
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
                    case 10: {m_accnt = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                    case 11: {m_client_firm = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                    case 15: {auto expiryKey = SRProtobufCPP::FieldCodec::DecodeExpiryKey(pos,max);
                        m_ekey.setFromCodec(expiryKey);
                        break;
                    }
                    case 14: {m_resp_side = static_cast<spiderrock::protobuf::api::BuySell>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                }
            }
        }

    };
    

    class ResponderMarkupBX {
        public:
        //using statements for all types used in this class
    
        using _meta = spiderrock::protobuf::api::_meta;
        using pkey = spiderrock::protobuf::api::ResponderMarkupBX_PKey;
        using ticker = spiderrock::protobuf::api::ticker__TickerKey;
        using is_disabled = spiderrock::protobuf::api::is_disabled;
        using expiry_money_avail = spiderrock::protobuf::api::expiry_money_avail;
        using ticker_money_avail = spiderrock::protobuf::api::ticker_money_avail;
        using transact_fee = spiderrock::protobuf::api::transact_fee;
        using money_rate = spiderrock::protobuf::api::money_rate;
        using inc_fees_in_resp = spiderrock::protobuf::api::inc_fees_in_resp;
        using round_rule = spiderrock::protobuf::api::round_rule;
        using open_expiry_money = spiderrock::protobuf::api::open_expiry_money;
        using open_ticker_money = spiderrock::protobuf::api::open_ticker_money;
        using cum_fill_money = spiderrock::protobuf::api::cum_fill_money;
        using avg_fill_rate = spiderrock::protobuf::api::avg_fill_rate;
        using is_div_control_disabled = spiderrock::protobuf::api::is_div_control_disabled;
        using i_days = spiderrock::protobuf::api::i_days__double;
        using i_years = spiderrock::protobuf::api::i_years;
        using num_notices = spiderrock::protobuf::api::num_notices;
        using num_notice_sr = spiderrock::protobuf::api::num_notice_sr;
        using num_notice_amex = spiderrock::protobuf::api::num_notice_amex;
        using num_notice_bats = spiderrock::protobuf::api::num_notice_bats;
        using num_notice_box = spiderrock::protobuf::api::num_notice_box;
        using num_notice_cboe = spiderrock::protobuf::api::num_notice_cboe;
        using num_notice_c2 = spiderrock::protobuf::api::num_notice_c2;
        using num_notice_edgo = spiderrock::protobuf::api::num_notice_edgo;
        using num_notice_emld = spiderrock::protobuf::api::num_notice_emld;
        using num_notice_gmni = spiderrock::protobuf::api::num_notice_gmni;
        using num_notice_ise = spiderrock::protobuf::api::num_notice_ise;
        using num_notice_mcry = spiderrock::protobuf::api::num_notice_mcry;
        using num_notice_memx = spiderrock::protobuf::api::num_notice_memx;
        using num_notice_miax = spiderrock::protobuf::api::num_notice_miax;
        using num_notice_mprl = spiderrock::protobuf::api::num_notice_mprl;
        using num_notice_nyse = spiderrock::protobuf::api::num_notice_nyse;
        using num_notice_nqbx = spiderrock::protobuf::api::num_notice_nqbx;
        using num_notice_nsdq = spiderrock::protobuf::api::num_notice_nsdq;
        using num_notice_phlx = spiderrock::protobuf::api::num_notice_phlx;
        using num_notice_sphr = spiderrock::protobuf::api::num_notice_sphr;
        using num_disabled = spiderrock::protobuf::api::num_disabled;
        using num_listed_flex_miss = spiderrock::protobuf::api::num_listed_flex_miss;
        using num_notice_price_miss = spiderrock::protobuf::api::num_notice_price_miss;
        using num_agg_size_limit = spiderrock::protobuf::api::num_agg_size_limit;
        using num_risk_group_limit = spiderrock::protobuf::api::num_risk_group_limit;
        using num_responses = spiderrock::protobuf::api::num_responses__int64;
        using num_full_size = spiderrock::protobuf::api::num_full_size;
        using num_alloc_size = spiderrock::protobuf::api::num_alloc_size;
        using num_price_miss = spiderrock::protobuf::api::num_price_miss;
        using num_too_late = spiderrock::protobuf::api::num_too_late;
        using num_other_miss = spiderrock::protobuf::api::num_other_miss;
        using num_did_not_trade = spiderrock::protobuf::api::num_did_not_trade;
        using modified_by = spiderrock::protobuf::api::modified_by;
        using modified_in = spiderrock::protobuf::api::modified_in;
        using timestamp = spiderrock::protobuf::api::timestamp;

        private:
        _meta m__meta{};
        pkey m_pkey{};
        ticker m_ticker{};
        is_disabled m_is_disabled{};
        expiry_money_avail m_expiry_money_avail{};
        ticker_money_avail m_ticker_money_avail{};
        transact_fee m_transact_fee{};
        money_rate m_money_rate{};
        inc_fees_in_resp m_inc_fees_in_resp{};
        round_rule m_round_rule{};
        open_expiry_money m_open_expiry_money{};
        open_ticker_money m_open_ticker_money{};
        cum_fill_money m_cum_fill_money{};
        avg_fill_rate m_avg_fill_rate{};
        is_div_control_disabled m_is_div_control_disabled{};
        i_days m_i_days{};
        i_years m_i_years{};
        num_notices m_num_notices{};
        num_notice_sr m_num_notice_sr{};
        num_notice_amex m_num_notice_amex{};
        num_notice_bats m_num_notice_bats{};
        num_notice_box m_num_notice_box{};
        num_notice_cboe m_num_notice_cboe{};
        num_notice_c2 m_num_notice_c2{};
        num_notice_edgo m_num_notice_edgo{};
        num_notice_emld m_num_notice_emld{};
        num_notice_gmni m_num_notice_gmni{};
        num_notice_ise m_num_notice_ise{};
        num_notice_mcry m_num_notice_mcry{};
        num_notice_memx m_num_notice_memx{};
        num_notice_miax m_num_notice_miax{};
        num_notice_mprl m_num_notice_mprl{};
        num_notice_nyse m_num_notice_nyse{};
        num_notice_nqbx m_num_notice_nqbx{};
        num_notice_nsdq m_num_notice_nsdq{};
        num_notice_phlx m_num_notice_phlx{};
        num_notice_sphr m_num_notice_sphr{};
        num_disabled m_num_disabled{};
        num_listed_flex_miss m_num_listed_flex_miss{};
        num_notice_price_miss m_num_notice_price_miss{};
        num_agg_size_limit m_num_agg_size_limit{};
        num_risk_group_limit m_num_risk_group_limit{};
        num_responses m_num_responses{};
        num_full_size m_num_full_size{};
        num_alloc_size m_num_alloc_size{};
        num_price_miss m_num_price_miss{};
        num_too_late m_num_too_late{};
        num_other_miss m_num_other_miss{};
        num_did_not_trade m_num_did_not_trade{};
        modified_by m_modified_by{};
        modified_in m_modified_in{};
        timestamp m_timestamp{};

        static constexpr int _mlinkHeaderLength = 14;

        public:		
        _meta get__meta() const {
            return m__meta;
        }		
        pkey get_pkey() const {
            return m_pkey;
        }		
        ticker get_ticker() const {
            return m_ticker;
        }		
        is_disabled get_is_disabled() const {
            return m_is_disabled;
        }		
        expiry_money_avail get_expiry_money_avail() const {
            return m_expiry_money_avail;
        }		
        ticker_money_avail get_ticker_money_avail() const {
            return m_ticker_money_avail;
        }		
        transact_fee get_transact_fee() const {
            return m_transact_fee;
        }		
        money_rate get_money_rate() const {
            return m_money_rate;
        }		
        inc_fees_in_resp get_inc_fees_in_resp() const {
            return m_inc_fees_in_resp;
        }		
        round_rule get_round_rule() const {
            return m_round_rule;
        }		
        open_expiry_money get_open_expiry_money() const {
            return m_open_expiry_money;
        }		
        open_ticker_money get_open_ticker_money() const {
            return m_open_ticker_money;
        }		
        cum_fill_money get_cum_fill_money() const {
            return m_cum_fill_money;
        }		
        avg_fill_rate get_avg_fill_rate() const {
            return m_avg_fill_rate;
        }		
        is_div_control_disabled get_is_div_control_disabled() const {
            return m_is_div_control_disabled;
        }		
        i_days get_i_days() const {
            return m_i_days;
        }		
        i_years get_i_years() const {
            return m_i_years;
        }		
        num_notices get_num_notices() const {
            return m_num_notices;
        }		
        num_notice_sr get_num_notice_sr() const {
            return m_num_notice_sr;
        }		
        num_notice_amex get_num_notice_amex() const {
            return m_num_notice_amex;
        }		
        num_notice_bats get_num_notice_bats() const {
            return m_num_notice_bats;
        }		
        num_notice_box get_num_notice_box() const {
            return m_num_notice_box;
        }		
        num_notice_cboe get_num_notice_cboe() const {
            return m_num_notice_cboe;
        }		
        num_notice_c2 get_num_notice_c2() const {
            return m_num_notice_c2;
        }		
        num_notice_edgo get_num_notice_edgo() const {
            return m_num_notice_edgo;
        }		
        num_notice_emld get_num_notice_emld() const {
            return m_num_notice_emld;
        }		
        num_notice_gmni get_num_notice_gmni() const {
            return m_num_notice_gmni;
        }		
        num_notice_ise get_num_notice_ise() const {
            return m_num_notice_ise;
        }		
        num_notice_mcry get_num_notice_mcry() const {
            return m_num_notice_mcry;
        }		
        num_notice_memx get_num_notice_memx() const {
            return m_num_notice_memx;
        }		
        num_notice_miax get_num_notice_miax() const {
            return m_num_notice_miax;
        }		
        num_notice_mprl get_num_notice_mprl() const {
            return m_num_notice_mprl;
        }		
        num_notice_nyse get_num_notice_nyse() const {
            return m_num_notice_nyse;
        }		
        num_notice_nqbx get_num_notice_nqbx() const {
            return m_num_notice_nqbx;
        }		
        num_notice_nsdq get_num_notice_nsdq() const {
            return m_num_notice_nsdq;
        }		
        num_notice_phlx get_num_notice_phlx() const {
            return m_num_notice_phlx;
        }		
        num_notice_sphr get_num_notice_sphr() const {
            return m_num_notice_sphr;
        }		
        num_disabled get_num_disabled() const {
            return m_num_disabled;
        }		
        num_listed_flex_miss get_num_listed_flex_miss() const {
            return m_num_listed_flex_miss;
        }		
        num_notice_price_miss get_num_notice_price_miss() const {
            return m_num_notice_price_miss;
        }		
        num_agg_size_limit get_num_agg_size_limit() const {
            return m_num_agg_size_limit;
        }		
        num_risk_group_limit get_num_risk_group_limit() const {
            return m_num_risk_group_limit;
        }		
        num_responses get_num_responses() const {
            return m_num_responses;
        }		
        num_full_size get_num_full_size() const {
            return m_num_full_size;
        }		
        num_alloc_size get_num_alloc_size() const {
            return m_num_alloc_size;
        }		
        num_price_miss get_num_price_miss() const {
            return m_num_price_miss;
        }		
        num_too_late get_num_too_late() const {
            return m_num_too_late;
        }		
        num_other_miss get_num_other_miss() const {
            return m_num_other_miss;
        }		
        num_did_not_trade get_num_did_not_trade() const {
            return m_num_did_not_trade;
        }		
        modified_by get_modified_by() const {
            return m_modified_by;
        }		
        modified_in get_modified_in() const {
            return m_modified_in;
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
        void set_ticker(const ticker& value)  {
            m_ticker = value;
        }
        void set_is_disabled(const is_disabled& value)  {
            m_is_disabled = value;
        }
        void set_expiry_money_avail(const expiry_money_avail& value)  {
            m_expiry_money_avail = value;
        }
        void set_ticker_money_avail(const ticker_money_avail& value)  {
            m_ticker_money_avail = value;
        }
        void set_transact_fee(const transact_fee& value)  {
            m_transact_fee = value;
        }
        void set_money_rate(const money_rate& value)  {
            m_money_rate = value;
        }
        void set_inc_fees_in_resp(const inc_fees_in_resp& value)  {
            m_inc_fees_in_resp = value;
        }
        void set_round_rule(const round_rule& value)  {
            m_round_rule = value;
        }
        void set_open_expiry_money(const open_expiry_money& value)  {
            m_open_expiry_money = value;
        }
        void set_open_ticker_money(const open_ticker_money& value)  {
            m_open_ticker_money = value;
        }
        void set_cum_fill_money(const cum_fill_money& value)  {
            m_cum_fill_money = value;
        }
        void set_avg_fill_rate(const avg_fill_rate& value)  {
            m_avg_fill_rate = value;
        }
        void set_is_div_control_disabled(const is_div_control_disabled& value)  {
            m_is_div_control_disabled = value;
        }
        void set_i_days(const i_days& value)  {
            m_i_days = value;
        }
        void set_i_years(const i_years& value)  {
            m_i_years = value;
        }
        void set_num_notices(const num_notices& value)  {
            m_num_notices = value;
        }
        void set_num_notice_sr(const num_notice_sr& value)  {
            m_num_notice_sr = value;
        }
        void set_num_notice_amex(const num_notice_amex& value)  {
            m_num_notice_amex = value;
        }
        void set_num_notice_bats(const num_notice_bats& value)  {
            m_num_notice_bats = value;
        }
        void set_num_notice_box(const num_notice_box& value)  {
            m_num_notice_box = value;
        }
        void set_num_notice_cboe(const num_notice_cboe& value)  {
            m_num_notice_cboe = value;
        }
        void set_num_notice_c2(const num_notice_c2& value)  {
            m_num_notice_c2 = value;
        }
        void set_num_notice_edgo(const num_notice_edgo& value)  {
            m_num_notice_edgo = value;
        }
        void set_num_notice_emld(const num_notice_emld& value)  {
            m_num_notice_emld = value;
        }
        void set_num_notice_gmni(const num_notice_gmni& value)  {
            m_num_notice_gmni = value;
        }
        void set_num_notice_ise(const num_notice_ise& value)  {
            m_num_notice_ise = value;
        }
        void set_num_notice_mcry(const num_notice_mcry& value)  {
            m_num_notice_mcry = value;
        }
        void set_num_notice_memx(const num_notice_memx& value)  {
            m_num_notice_memx = value;
        }
        void set_num_notice_miax(const num_notice_miax& value)  {
            m_num_notice_miax = value;
        }
        void set_num_notice_mprl(const num_notice_mprl& value)  {
            m_num_notice_mprl = value;
        }
        void set_num_notice_nyse(const num_notice_nyse& value)  {
            m_num_notice_nyse = value;
        }
        void set_num_notice_nqbx(const num_notice_nqbx& value)  {
            m_num_notice_nqbx = value;
        }
        void set_num_notice_nsdq(const num_notice_nsdq& value)  {
            m_num_notice_nsdq = value;
        }
        void set_num_notice_phlx(const num_notice_phlx& value)  {
            m_num_notice_phlx = value;
        }
        void set_num_notice_sphr(const num_notice_sphr& value)  {
            m_num_notice_sphr = value;
        }
        void set_num_disabled(const num_disabled& value)  {
            m_num_disabled = value;
        }
        void set_num_listed_flex_miss(const num_listed_flex_miss& value)  {
            m_num_listed_flex_miss = value;
        }
        void set_num_notice_price_miss(const num_notice_price_miss& value)  {
            m_num_notice_price_miss = value;
        }
        void set_num_agg_size_limit(const num_agg_size_limit& value)  {
            m_num_agg_size_limit = value;
        }
        void set_num_risk_group_limit(const num_risk_group_limit& value)  {
            m_num_risk_group_limit = value;
        }
        void set_num_responses(const num_responses& value)  {
            m_num_responses = value;
        }
        void set_num_full_size(const num_full_size& value)  {
            m_num_full_size = value;
        }
        void set_num_alloc_size(const num_alloc_size& value)  {
            m_num_alloc_size = value;
        }
        void set_num_price_miss(const num_price_miss& value)  {
            m_num_price_miss = value;
        }
        void set_num_too_late(const num_too_late& value)  {
            m_num_too_late = value;
        }
        void set_num_other_miss(const num_other_miss& value)  {
            m_num_other_miss = value;
        }
        void set_num_did_not_trade(const num_did_not_trade& value)  {
            m_num_did_not_trade = value;
        }
        void set_modified_by(const modified_by& value)  {
            m_modified_by = value;
        }
        void set_modified_in(const modified_in& value)  {
            m_modified_in = value;
        }
        void set_timestamp(const timestamp& value)  {
            m_timestamp = value;
        }

        //templatized getters and setters

        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to ResponderMarkupBX::get()"); return T{}; }  // specializations for valid types are listed below the class definition

        //specializations for set functions for the valid types
    
        void set(const _meta & value) {
            set__meta(value);
        }
        void set(const pkey & value) {
            set_pkey(value);
        }
        void set(const ticker & value) {
            set_ticker(value);
        }
        void set(const is_disabled & value) {
            set_is_disabled(value);
        }
        void set(const expiry_money_avail & value) {
            set_expiry_money_avail(value);
        }
        void set(const ticker_money_avail & value) {
            set_ticker_money_avail(value);
        }
        void set(const transact_fee & value) {
            set_transact_fee(value);
        }
        void set(const money_rate & value) {
            set_money_rate(value);
        }
        void set(const inc_fees_in_resp & value) {
            set_inc_fees_in_resp(value);
        }
        void set(const round_rule & value) {
            set_round_rule(value);
        }
        void set(const open_expiry_money & value) {
            set_open_expiry_money(value);
        }
        void set(const open_ticker_money & value) {
            set_open_ticker_money(value);
        }
        void set(const cum_fill_money & value) {
            set_cum_fill_money(value);
        }
        void set(const avg_fill_rate & value) {
            set_avg_fill_rate(value);
        }
        void set(const is_div_control_disabled & value) {
            set_is_div_control_disabled(value);
        }
        void set(const i_days & value) {
            set_i_days(value);
        }
        void set(const i_years & value) {
            set_i_years(value);
        }
        void set(const num_notices & value) {
            set_num_notices(value);
        }
        void set(const num_notice_sr & value) {
            set_num_notice_sr(value);
        }
        void set(const num_notice_amex & value) {
            set_num_notice_amex(value);
        }
        void set(const num_notice_bats & value) {
            set_num_notice_bats(value);
        }
        void set(const num_notice_box & value) {
            set_num_notice_box(value);
        }
        void set(const num_notice_cboe & value) {
            set_num_notice_cboe(value);
        }
        void set(const num_notice_c2 & value) {
            set_num_notice_c2(value);
        }
        void set(const num_notice_edgo & value) {
            set_num_notice_edgo(value);
        }
        void set(const num_notice_emld & value) {
            set_num_notice_emld(value);
        }
        void set(const num_notice_gmni & value) {
            set_num_notice_gmni(value);
        }
        void set(const num_notice_ise & value) {
            set_num_notice_ise(value);
        }
        void set(const num_notice_mcry & value) {
            set_num_notice_mcry(value);
        }
        void set(const num_notice_memx & value) {
            set_num_notice_memx(value);
        }
        void set(const num_notice_miax & value) {
            set_num_notice_miax(value);
        }
        void set(const num_notice_mprl & value) {
            set_num_notice_mprl(value);
        }
        void set(const num_notice_nyse & value) {
            set_num_notice_nyse(value);
        }
        void set(const num_notice_nqbx & value) {
            set_num_notice_nqbx(value);
        }
        void set(const num_notice_nsdq & value) {
            set_num_notice_nsdq(value);
        }
        void set(const num_notice_phlx & value) {
            set_num_notice_phlx(value);
        }
        void set(const num_notice_sphr & value) {
            set_num_notice_sphr(value);
        }
        void set(const num_disabled & value) {
            set_num_disabled(value);
        }
        void set(const num_listed_flex_miss & value) {
            set_num_listed_flex_miss(value);
        }
        void set(const num_notice_price_miss & value) {
            set_num_notice_price_miss(value);
        }
        void set(const num_agg_size_limit & value) {
            set_num_agg_size_limit(value);
        }
        void set(const num_risk_group_limit & value) {
            set_num_risk_group_limit(value);
        }
        void set(const num_responses & value) {
            set_num_responses(value);
        }
        void set(const num_full_size & value) {
            set_num_full_size(value);
        }
        void set(const num_alloc_size & value) {
            set_num_alloc_size(value);
        }
        void set(const num_price_miss & value) {
            set_num_price_miss(value);
        }
        void set(const num_too_late & value) {
            set_num_too_late(value);
        }
        void set(const num_other_miss & value) {
            set_num_other_miss(value);
        }
        void set(const num_did_not_trade & value) {
            set_num_did_not_trade(value);
        }
        void set(const modified_by & value) {
            set_modified_by(value);
        }
        void set(const modified_in & value) {
            set_modified_in(value);
        }
        void set(const timestamp & value) {
            set_timestamp(value);
        }

        void set(const ResponderMarkupBX & value) {
            set(value.m__meta);
            set(value.m_pkey);
            set(value.m_ticker);
            set(value.m_is_disabled);
            set(value.m_expiry_money_avail);
            set(value.m_ticker_money_avail);
            set(value.m_transact_fee);
            set(value.m_money_rate);
            set(value.m_inc_fees_in_resp);
            set(value.m_round_rule);
            set(value.m_open_expiry_money);
            set(value.m_open_ticker_money);
            set(value.m_cum_fill_money);
            set(value.m_avg_fill_rate);
            set(value.m_is_div_control_disabled);
            set(value.m_i_days);
            set(value.m_i_years);
            set(value.m_num_notices);
            set(value.m_num_notice_sr);
            set(value.m_num_notice_amex);
            set(value.m_num_notice_bats);
            set(value.m_num_notice_box);
            set(value.m_num_notice_cboe);
            set(value.m_num_notice_c2);
            set(value.m_num_notice_edgo);
            set(value.m_num_notice_emld);
            set(value.m_num_notice_gmni);
            set(value.m_num_notice_ise);
            set(value.m_num_notice_mcry);
            set(value.m_num_notice_memx);
            set(value.m_num_notice_miax);
            set(value.m_num_notice_mprl);
            set(value.m_num_notice_nyse);
            set(value.m_num_notice_nqbx);
            set(value.m_num_notice_nsdq);
            set(value.m_num_notice_phlx);
            set(value.m_num_notice_sphr);
            set(value.m_num_disabled);
            set(value.m_num_listed_flex_miss);
            set(value.m_num_notice_price_miss);
            set(value.m_num_agg_size_limit);
            set(value.m_num_risk_group_limit);
            set(value.m_num_responses);
            set(value.m_num_full_size);
            set(value.m_num_alloc_size);
            set(value.m_num_price_miss);
            set(value.m_num_too_late);
            set(value.m_num_other_miss);
            set(value.m_num_did_not_trade);
            set(value.m_modified_by);
            set(value.m_modified_in);
            set(value.m_timestamp);
        }

        ResponderMarkupBX() {
            m__meta.set_message_type("ResponderMarkupBX");
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
            std::snprintf(reinterpret_cast<char*>(data), size, "\r\nP%05d%06zd", 2503, length);
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
            std::snprintf(const_cast<char*>(s->data()), s->size(), "\r\nP%05d%06zd", 2503, length);
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
             *this = ResponderMarkupBX{};
        }
        bool IncludeMeta() const {
            return (m__meta.ByteSizeLong() > 0);
        }
        bool IncludePkey() const {
            return (m_pkey.ByteSizeLong() > 0);
        }
        bool IncludeTicker() const {
            return (m_ticker.ByteSizeLong() > 0);
        }
        bool IncludeExpiryMoneyAvail() const {
            return !(m_expiry_money_avail == 0);
        }
        bool IncludeTickerMoneyAvail() const {
            return !(m_ticker_money_avail == 0);
        }
        bool IncludeTransactFee() const {
            return !(m_transact_fee == 0.0);
        }
        bool IncludeMoneyRate() const {
            return !(m_money_rate == 0.0);
        }
        bool IncludeOpenExpiryMoney() const {
            return !(m_open_expiry_money == 0);
        }
        bool IncludeOpenTickerMoney() const {
            return !(m_open_ticker_money == 0);
        }
        bool IncludeCumFillMoney() const {
            return !(m_cum_fill_money == 0.0);
        }
        bool IncludeAvgFillRate() const {
            return !(m_avg_fill_rate == 0.0);
        }
        bool IncludeIDays() const {
            return !(m_i_days == 0.0);
        }
        bool IncludeIYears() const {
            return !(m_i_years == 0.0);
        }
        bool IncludeNumNotices() const {
            return !(m_num_notices == 0);
        }
        bool IncludeNumNoticeSr() const {
            return !(m_num_notice_sr == 0);
        }
        bool IncludeNumNoticeAmex() const {
            return !(m_num_notice_amex == 0);
        }
        bool IncludeNumNoticeBats() const {
            return !(m_num_notice_bats == 0);
        }
        bool IncludeNumNoticeBox() const {
            return !(m_num_notice_box == 0);
        }
        bool IncludeNumNoticeCboe() const {
            return !(m_num_notice_cboe == 0);
        }
        bool IncludeNumNoticeC2() const {
            return !(m_num_notice_c2 == 0);
        }
        bool IncludeNumNoticeEdgo() const {
            return !(m_num_notice_edgo == 0);
        }
        bool IncludeNumNoticeEmld() const {
            return !(m_num_notice_emld == 0);
        }
        bool IncludeNumNoticeGmni() const {
            return !(m_num_notice_gmni == 0);
        }
        bool IncludeNumNoticeIse() const {
            return !(m_num_notice_ise == 0);
        }
        bool IncludeNumNoticeMcry() const {
            return !(m_num_notice_mcry == 0);
        }
        bool IncludeNumNoticeMemx() const {
            return !(m_num_notice_memx == 0);
        }
        bool IncludeNumNoticeMiax() const {
            return !(m_num_notice_miax == 0);
        }
        bool IncludeNumNoticeMprl() const {
            return !(m_num_notice_mprl == 0);
        }
        bool IncludeNumNoticeNyse() const {
            return !(m_num_notice_nyse == 0);
        }
        bool IncludeNumNoticeNqbx() const {
            return !(m_num_notice_nqbx == 0);
        }
        bool IncludeNumNoticeNsdq() const {
            return !(m_num_notice_nsdq == 0);
        }
        bool IncludeNumNoticePhlx() const {
            return !(m_num_notice_phlx == 0);
        }
        bool IncludeNumNoticeSphr() const {
            return !(m_num_notice_sphr == 0);
        }
        bool IncludeNumDisabled() const {
            return !(m_num_disabled == 0);
        }
        bool IncludeNumListedFlexMiss() const {
            return !(m_num_listed_flex_miss == 0);
        }
        bool IncludeNumNoticePriceMiss() const {
            return !(m_num_notice_price_miss == 0);
        }
        bool IncludeNumAggSizeLimit() const {
            return !(m_num_agg_size_limit == 0);
        }
        bool IncludeNumRiskGroupLimit() const {
            return !(m_num_risk_group_limit == 0);
        }
        bool IncludeNumResponses() const {
            return !(m_num_responses == 0);
        }
        bool IncludeNumFullSize() const {
            return !(m_num_full_size == 0);
        }
        bool IncludeNumAllocSize() const {
            return !(m_num_alloc_size == 0);
        }
        bool IncludeNumPriceMiss() const {
            return !(m_num_price_miss == 0);
        }
        bool IncludeNumTooLate() const {
            return !(m_num_too_late == 0);
        }
        bool IncludeNumOtherMiss() const {
            return !(m_num_other_miss == 0);
        }
        bool IncludeNumDidNotTrade() const {
            return !(m_num_did_not_trade == 0);
        }
        bool IncludeModifiedBy() const {
            return !(m_modified_by.empty());
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
            if ( IncludeTicker()) {
                SRProtobufCPP::TickerKeyLayout tickerKeyLayout_ticker{};
                m_ticker.setCodecTickerKey(tickerKeyLayout_ticker);
                totalSize += SRProtobufCPP::FieldCodec::TickerKeyFieldSize(100, tickerKeyLayout_ticker);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(101,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_is_disabled)));
            if ( IncludeExpiryMoneyAvail()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(102,m_expiry_money_avail);
            }
            if ( IncludeTickerMoneyAvail()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(103,m_ticker_money_avail);
            }
            if ( IncludeTransactFee()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(104,m_transact_fee);
            }
            if ( IncludeMoneyRate()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(105,m_money_rate);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(106,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_inc_fees_in_resp)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(107,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::RoundRule>(m_round_rule)));
            if ( IncludeOpenExpiryMoney()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(108,m_open_expiry_money);
            }
            if ( IncludeOpenTickerMoney()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(109,m_open_ticker_money);
            }
            if ( IncludeCumFillMoney()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(110,m_cum_fill_money);
            }
            if ( IncludeAvgFillRate()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(111,m_avg_fill_rate);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(112,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_is_div_control_disabled)));
            if ( IncludeIDays()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(113,m_i_days);
            }
            if ( IncludeIYears()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(114,m_i_years);
            }
            if ( IncludeNumNotices()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(118,m_num_notices);
            }
            if ( IncludeNumNoticeSr()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(119,m_num_notice_sr);
            }
            if ( IncludeNumNoticeAmex()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(120,m_num_notice_amex);
            }
            if ( IncludeNumNoticeBats()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(121,m_num_notice_bats);
            }
            if ( IncludeNumNoticeBox()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(122,m_num_notice_box);
            }
            if ( IncludeNumNoticeCboe()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(123,m_num_notice_cboe);
            }
            if ( IncludeNumNoticeC2()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(124,m_num_notice_c2);
            }
            if ( IncludeNumNoticeEdgo()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(125,m_num_notice_edgo);
            }
            if ( IncludeNumNoticeEmld()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(126,m_num_notice_emld);
            }
            if ( IncludeNumNoticeGmni()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(127,m_num_notice_gmni);
            }
            if ( IncludeNumNoticeIse()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(128,m_num_notice_ise);
            }
            if ( IncludeNumNoticeMcry()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(129,m_num_notice_mcry);
            }
            if ( IncludeNumNoticeMemx()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(130,m_num_notice_memx);
            }
            if ( IncludeNumNoticeMiax()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(131,m_num_notice_miax);
            }
            if ( IncludeNumNoticeMprl()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(132,m_num_notice_mprl);
            }
            if ( IncludeNumNoticeNyse()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(133,m_num_notice_nyse);
            }
            if ( IncludeNumNoticeNqbx()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(134,m_num_notice_nqbx);
            }
            if ( IncludeNumNoticeNsdq()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(135,m_num_notice_nsdq);
            }
            if ( IncludeNumNoticePhlx()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(136,m_num_notice_phlx);
            }
            if ( IncludeNumNoticeSphr()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(137,m_num_notice_sphr);
            }
            if ( IncludeNumDisabled()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(138,m_num_disabled);
            }
            if ( IncludeNumListedFlexMiss()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(139,m_num_listed_flex_miss);
            }
            if ( IncludeNumNoticePriceMiss()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(140,m_num_notice_price_miss);
            }
            if ( IncludeNumAggSizeLimit()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(141,m_num_agg_size_limit);
            }
            if ( IncludeNumRiskGroupLimit()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(142,m_num_risk_group_limit);
            }
            if ( IncludeNumResponses()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(143,m_num_responses);
            }
            if ( IncludeNumFullSize()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(144,m_num_full_size);
            }
            if ( IncludeNumAllocSize()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(145,m_num_alloc_size);
            }
            if ( IncludeNumPriceMiss()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(146,m_num_price_miss);
            }
            if ( IncludeNumTooLate()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(147,m_num_too_late);
            }
            if ( IncludeNumOtherMiss()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(148,m_num_other_miss);
            }
            if ( IncludeNumDidNotTrade()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(149,m_num_did_not_trade);
            }
            if ( IncludeModifiedBy()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(115,m_modified_by);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(116,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SysEnvironment>(m_modified_in)));
            if ( IncludeTimestamp()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(117, m_timestamp);
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
            if ( IncludeTicker()) {
                SRProtobufCPP::TickerKeyLayout tickerKeyLayout_ticker{};
                m_ticker.setCodecTickerKey(tickerKeyLayout_ticker);
                dest = SRProtobufCPP::FieldCodec::EncodeTickerKey(dest, 100, tickerKeyLayout_ticker);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,101,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_is_disabled)));
            if ( IncludeExpiryMoneyAvail()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,102,m_expiry_money_avail);
            }
            if ( IncludeTickerMoneyAvail()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,103,m_ticker_money_avail);
            }
            if ( IncludeTransactFee()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,104,m_transact_fee);
            }
            if ( IncludeMoneyRate()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,105,m_money_rate);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,106,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_inc_fees_in_resp)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,107,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::RoundRule>(m_round_rule)));
            if ( IncludeOpenExpiryMoney()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,108,m_open_expiry_money);
            }
            if ( IncludeOpenTickerMoney()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,109,m_open_ticker_money);
            }
            if ( IncludeCumFillMoney()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,110,m_cum_fill_money);
            }
            if ( IncludeAvgFillRate()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,111,m_avg_fill_rate);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,112,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_is_div_control_disabled)));
            if ( IncludeIDays()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,113,m_i_days);
            }
            if ( IncludeIYears()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,114,m_i_years);
            }
            if ( IncludeNumNotices()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,118,m_num_notices);
            }
            if ( IncludeNumNoticeSr()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,119,m_num_notice_sr);
            }
            if ( IncludeNumNoticeAmex()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,120,m_num_notice_amex);
            }
            if ( IncludeNumNoticeBats()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,121,m_num_notice_bats);
            }
            if ( IncludeNumNoticeBox()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,122,m_num_notice_box);
            }
            if ( IncludeNumNoticeCboe()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,123,m_num_notice_cboe);
            }
            if ( IncludeNumNoticeC2()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,124,m_num_notice_c2);
            }
            if ( IncludeNumNoticeEdgo()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,125,m_num_notice_edgo);
            }
            if ( IncludeNumNoticeEmld()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,126,m_num_notice_emld);
            }
            if ( IncludeNumNoticeGmni()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,127,m_num_notice_gmni);
            }
            if ( IncludeNumNoticeIse()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,128,m_num_notice_ise);
            }
            if ( IncludeNumNoticeMcry()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,129,m_num_notice_mcry);
            }
            if ( IncludeNumNoticeMemx()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,130,m_num_notice_memx);
            }
            if ( IncludeNumNoticeMiax()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,131,m_num_notice_miax);
            }
            if ( IncludeNumNoticeMprl()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,132,m_num_notice_mprl);
            }
            if ( IncludeNumNoticeNyse()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,133,m_num_notice_nyse);
            }
            if ( IncludeNumNoticeNqbx()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,134,m_num_notice_nqbx);
            }
            if ( IncludeNumNoticeNsdq()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,135,m_num_notice_nsdq);
            }
            if ( IncludeNumNoticePhlx()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,136,m_num_notice_phlx);
            }
            if ( IncludeNumNoticeSphr()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,137,m_num_notice_sphr);
            }
            if ( IncludeNumDisabled()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,138,m_num_disabled);
            }
            if ( IncludeNumListedFlexMiss()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,139,m_num_listed_flex_miss);
            }
            if ( IncludeNumNoticePriceMiss()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,140,m_num_notice_price_miss);
            }
            if ( IncludeNumAggSizeLimit()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,141,m_num_agg_size_limit);
            }
            if ( IncludeNumRiskGroupLimit()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,142,m_num_risk_group_limit);
            }
            if ( IncludeNumResponses()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,143,m_num_responses);
            }
            if ( IncludeNumFullSize()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,144,m_num_full_size);
            }
            if ( IncludeNumAllocSize()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,145,m_num_alloc_size);
            }
            if ( IncludeNumPriceMiss()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,146,m_num_price_miss);
            }
            if ( IncludeNumTooLate()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,147,m_num_too_late);
            }
            if ( IncludeNumOtherMiss()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,148,m_num_other_miss);
            }
            if ( IncludeNumDidNotTrade()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,149,m_num_did_not_trade);
            }
            if ( IncludeModifiedBy()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,115,static_cast<string>(m_modified_by));
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,116,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SysEnvironment>(m_modified_in)));
            if ( IncludeTimestamp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 117, m_timestamp);
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
                    case 100: {
                        if (tagType == SRProtobufCPP::TickerKeyCodec::TagType){
                            auto tickerKey = SRProtobufCPP::FieldCodec::DecodeTickerKey(pos,max);
                            m_ticker.setFromCodec(tickerKey);
                        }
                        break;
                    }
                    case 101: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_is_disabled = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 102: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_expiry_money_avail = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 103: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_ticker_money_avail = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 104: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_transact_fee = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 105: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_money_rate = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 106: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_inc_fees_in_resp = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 107: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_round_rule = static_cast<spiderrock::protobuf::api::RoundRule>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 108: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_open_expiry_money = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 109: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_open_ticker_money = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 110: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_cum_fill_money = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 111: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_avg_fill_rate = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 112: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_is_div_control_disabled = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 113: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_i_days = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 114: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_i_years = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 118: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_num_notices = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 119: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_num_notice_sr = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 120: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_num_notice_amex = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 121: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_num_notice_bats = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 122: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_num_notice_box = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 123: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_num_notice_cboe = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 124: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_num_notice_c2 = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 125: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_num_notice_edgo = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 126: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_num_notice_emld = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 127: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_num_notice_gmni = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 128: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_num_notice_ise = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 129: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_num_notice_mcry = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 130: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_num_notice_memx = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 131: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_num_notice_miax = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 132: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_num_notice_mprl = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 133: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_num_notice_nyse = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 134: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_num_notice_nqbx = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 135: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_num_notice_nsdq = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 136: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_num_notice_phlx = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 137: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_num_notice_sphr = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 138: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_num_disabled = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 139: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_num_listed_flex_miss = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 140: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_num_notice_price_miss = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 141: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_num_agg_size_limit = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 142: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_num_risk_group_limit = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 143: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_num_responses = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 144: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_num_full_size = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 145: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_num_alloc_size = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 146: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_num_price_miss = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 147: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_num_too_late = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 148: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_num_other_miss = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 149: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_num_did_not_trade = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 115: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_modified_by = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 116: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_modified_in = static_cast<spiderrock::protobuf::api::SysEnvironment>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 117: {
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

    template<> inline const auto ResponderMarkupBX::get<ResponderMarkupBX::_meta>() const { return ResponderMarkupBX::_meta{ m__meta}; }
    template<> inline const auto ResponderMarkupBX::get<ResponderMarkupBX::pkey>() const { return ResponderMarkupBX::pkey{ m_pkey}; }
    template<> inline const auto ResponderMarkupBX::get<ResponderMarkupBX::ticker>() const { return ResponderMarkupBX::ticker{ m_ticker}; }
    template<> inline const auto ResponderMarkupBX::get<ResponderMarkupBX::is_disabled>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_is_disabled)); }
    template<> inline const auto ResponderMarkupBX::get<ResponderMarkupBX::expiry_money_avail>() const { return m_expiry_money_avail; }
    template<> inline const auto ResponderMarkupBX::get<ResponderMarkupBX::ticker_money_avail>() const { return m_ticker_money_avail; }
    template<> inline const auto ResponderMarkupBX::get<ResponderMarkupBX::transact_fee>() const { return m_transact_fee; }
    template<> inline const auto ResponderMarkupBX::get<ResponderMarkupBX::money_rate>() const { return m_money_rate; }
    template<> inline const auto ResponderMarkupBX::get<ResponderMarkupBX::inc_fees_in_resp>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_inc_fees_in_resp)); }
    template<> inline const auto ResponderMarkupBX::get<ResponderMarkupBX::round_rule>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::RoundRule>( m_round_rule)); }
    template<> inline const auto ResponderMarkupBX::get<ResponderMarkupBX::open_expiry_money>() const { return m_open_expiry_money; }
    template<> inline const auto ResponderMarkupBX::get<ResponderMarkupBX::open_ticker_money>() const { return m_open_ticker_money; }
    template<> inline const auto ResponderMarkupBX::get<ResponderMarkupBX::cum_fill_money>() const { return m_cum_fill_money; }
    template<> inline const auto ResponderMarkupBX::get<ResponderMarkupBX::avg_fill_rate>() const { return m_avg_fill_rate; }
    template<> inline const auto ResponderMarkupBX::get<ResponderMarkupBX::is_div_control_disabled>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_is_div_control_disabled)); }
    template<> inline const auto ResponderMarkupBX::get<ResponderMarkupBX::i_days>() const { return m_i_days; }
    template<> inline const auto ResponderMarkupBX::get<ResponderMarkupBX::i_years>() const { return m_i_years; }
    template<> inline const auto ResponderMarkupBX::get<ResponderMarkupBX::num_notices>() const { return m_num_notices; }
    template<> inline const auto ResponderMarkupBX::get<ResponderMarkupBX::num_notice_sr>() const { return m_num_notice_sr; }
    template<> inline const auto ResponderMarkupBX::get<ResponderMarkupBX::num_notice_amex>() const { return m_num_notice_amex; }
    template<> inline const auto ResponderMarkupBX::get<ResponderMarkupBX::num_notice_bats>() const { return m_num_notice_bats; }
    template<> inline const auto ResponderMarkupBX::get<ResponderMarkupBX::num_notice_box>() const { return m_num_notice_box; }
    template<> inline const auto ResponderMarkupBX::get<ResponderMarkupBX::num_notice_cboe>() const { return m_num_notice_cboe; }
    template<> inline const auto ResponderMarkupBX::get<ResponderMarkupBX::num_notice_c2>() const { return m_num_notice_c2; }
    template<> inline const auto ResponderMarkupBX::get<ResponderMarkupBX::num_notice_edgo>() const { return m_num_notice_edgo; }
    template<> inline const auto ResponderMarkupBX::get<ResponderMarkupBX::num_notice_emld>() const { return m_num_notice_emld; }
    template<> inline const auto ResponderMarkupBX::get<ResponderMarkupBX::num_notice_gmni>() const { return m_num_notice_gmni; }
    template<> inline const auto ResponderMarkupBX::get<ResponderMarkupBX::num_notice_ise>() const { return m_num_notice_ise; }
    template<> inline const auto ResponderMarkupBX::get<ResponderMarkupBX::num_notice_mcry>() const { return m_num_notice_mcry; }
    template<> inline const auto ResponderMarkupBX::get<ResponderMarkupBX::num_notice_memx>() const { return m_num_notice_memx; }
    template<> inline const auto ResponderMarkupBX::get<ResponderMarkupBX::num_notice_miax>() const { return m_num_notice_miax; }
    template<> inline const auto ResponderMarkupBX::get<ResponderMarkupBX::num_notice_mprl>() const { return m_num_notice_mprl; }
    template<> inline const auto ResponderMarkupBX::get<ResponderMarkupBX::num_notice_nyse>() const { return m_num_notice_nyse; }
    template<> inline const auto ResponderMarkupBX::get<ResponderMarkupBX::num_notice_nqbx>() const { return m_num_notice_nqbx; }
    template<> inline const auto ResponderMarkupBX::get<ResponderMarkupBX::num_notice_nsdq>() const { return m_num_notice_nsdq; }
    template<> inline const auto ResponderMarkupBX::get<ResponderMarkupBX::num_notice_phlx>() const { return m_num_notice_phlx; }
    template<> inline const auto ResponderMarkupBX::get<ResponderMarkupBX::num_notice_sphr>() const { return m_num_notice_sphr; }
    template<> inline const auto ResponderMarkupBX::get<ResponderMarkupBX::num_disabled>() const { return m_num_disabled; }
    template<> inline const auto ResponderMarkupBX::get<ResponderMarkupBX::num_listed_flex_miss>() const { return m_num_listed_flex_miss; }
    template<> inline const auto ResponderMarkupBX::get<ResponderMarkupBX::num_notice_price_miss>() const { return m_num_notice_price_miss; }
    template<> inline const auto ResponderMarkupBX::get<ResponderMarkupBX::num_agg_size_limit>() const { return m_num_agg_size_limit; }
    template<> inline const auto ResponderMarkupBX::get<ResponderMarkupBX::num_risk_group_limit>() const { return m_num_risk_group_limit; }
    template<> inline const auto ResponderMarkupBX::get<ResponderMarkupBX::num_responses>() const { return m_num_responses; }
    template<> inline const auto ResponderMarkupBX::get<ResponderMarkupBX::num_full_size>() const { return m_num_full_size; }
    template<> inline const auto ResponderMarkupBX::get<ResponderMarkupBX::num_alloc_size>() const { return m_num_alloc_size; }
    template<> inline const auto ResponderMarkupBX::get<ResponderMarkupBX::num_price_miss>() const { return m_num_price_miss; }
    template<> inline const auto ResponderMarkupBX::get<ResponderMarkupBX::num_too_late>() const { return m_num_too_late; }
    template<> inline const auto ResponderMarkupBX::get<ResponderMarkupBX::num_other_miss>() const { return m_num_other_miss; }
    template<> inline const auto ResponderMarkupBX::get<ResponderMarkupBX::num_did_not_trade>() const { return m_num_did_not_trade; }
    template<> inline const auto ResponderMarkupBX::get<ResponderMarkupBX::modified_by>() const { return m_modified_by; }
    template<> inline const auto ResponderMarkupBX::get<ResponderMarkupBX::modified_in>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SysEnvironment>( m_modified_in)); }
    template<> inline const auto ResponderMarkupBX::get<ResponderMarkupBX::timestamp>() const { return m_timestamp; }
    template<> inline const auto ResponderMarkupBX_PKey::get<ResponderMarkupBX_PKey::accnt>() const { return m_accnt; }
    template<> inline const auto ResponderMarkupBX_PKey::get<ResponderMarkupBX_PKey::client_firm>() const { return m_client_firm; }
    template<> inline const auto ResponderMarkupBX_PKey::get<ResponderMarkupBX_PKey::ekey>() const { return ResponderMarkupBX_PKey::ekey{m_ekey}; }
    template<> inline const auto ResponderMarkupBX_PKey::get<ResponderMarkupBX_PKey::resp_side>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>(m_resp_side));}
    
    // ostream operators for all classes above, output should adhere to a JSON format

    inline std::ostream& operator<<(std::ostream &o, const ResponderMarkupBX_PKey& m) {
        o << "\"accnt\":\"" << m.get<ResponderMarkupBX_PKey::accnt>() << "\"";
        o << ",\"client_firm\":\"" << m.get<ResponderMarkupBX_PKey::client_firm>() << "\"";
        o << ",\"ekey\":{" << m.get<ResponderMarkupBX_PKey::ekey>() << "}";
        o << ",\"resp_side\":" << (int64_t)m.get<ResponderMarkupBX_PKey::resp_side>();
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const ResponderMarkupBX& m) {
        o << "\"_meta\":{" << m.get<ResponderMarkupBX::_meta>() << "}";
        o << ",\"pkey\":{" << m.get<ResponderMarkupBX::pkey>() << "}";
        o << ",\"ticker\":{" << m.get<ResponderMarkupBX::ticker>() << "}";
        o << ",\"is_disabled\":" << (int64_t)m.get<ResponderMarkupBX::is_disabled>();
        o << ",\"expiry_money_avail\":" << m.get<ResponderMarkupBX::expiry_money_avail>();
        o << ",\"ticker_money_avail\":" << m.get<ResponderMarkupBX::ticker_money_avail>();
        o << ",\"transact_fee\":" << m.get<ResponderMarkupBX::transact_fee>();
        o << ",\"money_rate\":" << m.get<ResponderMarkupBX::money_rate>();
        o << ",\"inc_fees_in_resp\":" << (int64_t)m.get<ResponderMarkupBX::inc_fees_in_resp>();
        o << ",\"round_rule\":" << (int64_t)m.get<ResponderMarkupBX::round_rule>();
        o << ",\"open_expiry_money\":" << m.get<ResponderMarkupBX::open_expiry_money>();
        o << ",\"open_ticker_money\":" << m.get<ResponderMarkupBX::open_ticker_money>();
        o << ",\"cum_fill_money\":" << m.get<ResponderMarkupBX::cum_fill_money>();
        o << ",\"avg_fill_rate\":" << m.get<ResponderMarkupBX::avg_fill_rate>();
        o << ",\"is_div_control_disabled\":" << (int64_t)m.get<ResponderMarkupBX::is_div_control_disabled>();
        o << ",\"i_days\":" << m.get<ResponderMarkupBX::i_days>();
        o << ",\"i_years\":" << m.get<ResponderMarkupBX::i_years>();
        o << ",\"num_notices\":" << m.get<ResponderMarkupBX::num_notices>();
        o << ",\"num_notice_sr\":" << m.get<ResponderMarkupBX::num_notice_sr>();
        o << ",\"num_notice_amex\":" << m.get<ResponderMarkupBX::num_notice_amex>();
        o << ",\"num_notice_bats\":" << m.get<ResponderMarkupBX::num_notice_bats>();
        o << ",\"num_notice_box\":" << m.get<ResponderMarkupBX::num_notice_box>();
        o << ",\"num_notice_cboe\":" << m.get<ResponderMarkupBX::num_notice_cboe>();
        o << ",\"num_notice_c2\":" << m.get<ResponderMarkupBX::num_notice_c2>();
        o << ",\"num_notice_edgo\":" << m.get<ResponderMarkupBX::num_notice_edgo>();
        o << ",\"num_notice_emld\":" << m.get<ResponderMarkupBX::num_notice_emld>();
        o << ",\"num_notice_gmni\":" << m.get<ResponderMarkupBX::num_notice_gmni>();
        o << ",\"num_notice_ise\":" << m.get<ResponderMarkupBX::num_notice_ise>();
        o << ",\"num_notice_mcry\":" << m.get<ResponderMarkupBX::num_notice_mcry>();
        o << ",\"num_notice_memx\":" << m.get<ResponderMarkupBX::num_notice_memx>();
        o << ",\"num_notice_miax\":" << m.get<ResponderMarkupBX::num_notice_miax>();
        o << ",\"num_notice_mprl\":" << m.get<ResponderMarkupBX::num_notice_mprl>();
        o << ",\"num_notice_nyse\":" << m.get<ResponderMarkupBX::num_notice_nyse>();
        o << ",\"num_notice_nqbx\":" << m.get<ResponderMarkupBX::num_notice_nqbx>();
        o << ",\"num_notice_nsdq\":" << m.get<ResponderMarkupBX::num_notice_nsdq>();
        o << ",\"num_notice_phlx\":" << m.get<ResponderMarkupBX::num_notice_phlx>();
        o << ",\"num_notice_sphr\":" << m.get<ResponderMarkupBX::num_notice_sphr>();
        o << ",\"num_disabled\":" << m.get<ResponderMarkupBX::num_disabled>();
        o << ",\"num_listed_flex_miss\":" << m.get<ResponderMarkupBX::num_listed_flex_miss>();
        o << ",\"num_notice_price_miss\":" << m.get<ResponderMarkupBX::num_notice_price_miss>();
        o << ",\"num_agg_size_limit\":" << m.get<ResponderMarkupBX::num_agg_size_limit>();
        o << ",\"num_risk_group_limit\":" << m.get<ResponderMarkupBX::num_risk_group_limit>();
        o << ",\"num_responses\":" << m.get<ResponderMarkupBX::num_responses>();
        o << ",\"num_full_size\":" << m.get<ResponderMarkupBX::num_full_size>();
        o << ",\"num_alloc_size\":" << m.get<ResponderMarkupBX::num_alloc_size>();
        o << ",\"num_price_miss\":" << m.get<ResponderMarkupBX::num_price_miss>();
        o << ",\"num_too_late\":" << m.get<ResponderMarkupBX::num_too_late>();
        o << ",\"num_other_miss\":" << m.get<ResponderMarkupBX::num_other_miss>();
        o << ",\"num_did_not_trade\":" << m.get<ResponderMarkupBX::num_did_not_trade>();
        o << ",\"modified_by\":\"" << m.get<ResponderMarkupBX::modified_by>() << "\"";
        o << ",\"modified_in\":" << (int64_t)m.get<ResponderMarkupBX::modified_in>();
        {
            std::time_t tt = m.get<ResponderMarkupBX::timestamp>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"timestamp\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        return o;
    }

}
}
}