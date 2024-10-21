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

    #ifndef _security_id__int32__GUARD__
    #define _security_id__int32__GUARD__
    DECL_STRONG_TYPE(security_id__int32, int32);
    #endif//_security_id__int32__GUARD__

    #ifndef _symbol_type__GUARD__
    #define _symbol_type__GUARD__
    DECL_STRONG_TYPE(symbol_type, spiderrock::protobuf::api::SymbolType);
    #endif//_symbol_type__GUARD__

    #ifndef _name__GUARD__
    #define _name__GUARD__
    DECL_STRONG_TYPE(name, string);
    #endif//_name__GUARD__

    #ifndef _country__GUARD__
    #define _country__GUARD__
    DECL_STRONG_TYPE(country, string);
    #endif//_country__GUARD__

    #ifndef _primary_currency__GUARD__
    #define _primary_currency__GUARD__
    DECL_STRONG_TYPE(primary_currency, spiderrock::protobuf::api::Currency);
    #endif//_primary_currency__GUARD__

    #ifndef _rate_curve__GUARD__
    #define _rate_curve__GUARD__
    DECL_STRONG_TYPE(rate_curve, spiderrock::protobuf::api::RateCurve);
    #endif//_rate_curve__GUARD__

    #ifndef _par_value__GUARD__
    #define _par_value__GUARD__
    DECL_STRONG_TYPE(par_value, float);
    #endif//_par_value__GUARD__

    #ifndef _par_value_currency__GUARD__
    #define _par_value_currency__GUARD__
    DECL_STRONG_TYPE(par_value_currency, string);
    #endif//_par_value_currency__GUARD__

    #ifndef _point_value__float__GUARD__
    #define _point_value__float__GUARD__
    DECL_STRONG_TYPE(point_value__float, float);
    #endif//_point_value__float__GUARD__

    #ifndef _point_currency__GUARD__
    #define _point_currency__GUARD__
    DECL_STRONG_TYPE(point_currency, spiderrock::protobuf::api::Currency);
    #endif//_point_currency__GUARD__

    #ifndef _primary_exch__GUARD__
    #define _primary_exch__GUARD__
    DECL_STRONG_TYPE(primary_exch, spiderrock::protobuf::api::PrimaryExchange);
    #endif//_primary_exch__GUARD__

    #ifndef _alt_id__GUARD__
    #define _alt_id__GUARD__
    DECL_STRONG_TYPE(alt_id, int32);
    #endif//_alt_id__GUARD__

    #ifndef _mic__GUARD__
    #define _mic__GUARD__
    DECL_STRONG_TYPE(mic, string);
    #endif//_mic__GUARD__

    #ifndef _mic_seg__GUARD__
    #define _mic_seg__GUARD__
    DECL_STRONG_TYPE(mic_seg, string);
    #endif//_mic_seg__GUARD__

    #ifndef _symbol__GUARD__
    #define _symbol__GUARD__
    DECL_STRONG_TYPE(symbol, string);
    #endif//_symbol__GUARD__

    #ifndef _issue_class__GUARD__
    #define _issue_class__GUARD__
    DECL_STRONG_TYPE(issue_class, string);
    #endif//_issue_class__GUARD__

    #ifndef _shares_outstanding__GUARD__
    #define _shares_outstanding__GUARD__
    DECL_STRONG_TYPE(shares_outstanding, int64);
    #endif//_shares_outstanding__GUARD__

    #ifndef _cusip__GUARD__
    #define _cusip__GUARD__
    DECL_STRONG_TYPE(cusip, string);
    #endif//_cusip__GUARD__

    #ifndef _ind_num__GUARD__
    #define _ind_num__GUARD__
    DECL_STRONG_TYPE(ind_num, int32);
    #endif//_ind_num__GUARD__

    #ifndef _sub_num__GUARD__
    #define _sub_num__GUARD__
    DECL_STRONG_TYPE(sub_num, int32);
    #endif//_sub_num__GUARD__

    #ifndef _grp_num__GUARD__
    #define _grp_num__GUARD__
    DECL_STRONG_TYPE(grp_num, int32);
    #endif//_grp_num__GUARD__

    #ifndef _nbr_num__GUARD__
    #define _nbr_num__GUARD__
    DECL_STRONG_TYPE(nbr_num, int32);
    #endif//_nbr_num__GUARD__

    #ifndef _sic__GUARD__
    #define _sic__GUARD__
    DECL_STRONG_TYPE(sic, string);
    #endif//_sic__GUARD__

    #ifndef _cik__GUARD__
    #define _cik__GUARD__
    DECL_STRONG_TYPE(cik, string);
    #endif//_cik__GUARD__

    #ifndef _gics__GUARD__
    #define _gics__GUARD__
    DECL_STRONG_TYPE(gics, string);
    #endif//_gics__GUARD__

    #ifndef _lei__GUARD__
    #define _lei__GUARD__
    DECL_STRONG_TYPE(lei, string);
    #endif//_lei__GUARD__

    #ifndef _naics__GUARD__
    #define _naics__GUARD__
    DECL_STRONG_TYPE(naics, string);
    #endif//_naics__GUARD__

    #ifndef _cfi__GUARD__
    #define _cfi__GUARD__
    DECL_STRONG_TYPE(cfi, string);
    #endif//_cfi__GUARD__

    #ifndef _cic__GUARD__
    #define _cic__GUARD__
    DECL_STRONG_TYPE(cic, string);
    #endif//_cic__GUARD__

    #ifndef _fisn__GUARD__
    #define _fisn__GUARD__
    DECL_STRONG_TYPE(fisn, string);
    #endif//_fisn__GUARD__

    #ifndef _isin__GUARD__
    #define _isin__GUARD__
    DECL_STRONG_TYPE(isin, string);
    #endif//_isin__GUARD__

    #ifndef _figi__GUARD__
    #define _figi__GUARD__
    DECL_STRONG_TYPE(figi, string);
    #endif//_figi__GUARD__

    #ifndef _bbg_composite_ticker__GUARD__
    #define _bbg_composite_ticker__GUARD__
    DECL_STRONG_TYPE(bbg_composite_ticker, string);
    #endif//_bbg_composite_ticker__GUARD__

    #ifndef _bbg_exchange_ticker__GUARD__
    #define _bbg_exchange_ticker__GUARD__
    DECL_STRONG_TYPE(bbg_exchange_ticker, string);
    #endif//_bbg_exchange_ticker__GUARD__

    #ifndef _bbg_composite_global_id__GUARD__
    #define _bbg_composite_global_id__GUARD__
    DECL_STRONG_TYPE(bbg_composite_global_id, string);
    #endif//_bbg_composite_global_id__GUARD__

    #ifndef _bbg_global_id__GUARD__
    #define _bbg_global_id__GUARD__
    DECL_STRONG_TYPE(bbg_global_id, string);
    #endif//_bbg_global_id__GUARD__

    #ifndef _bbg_currency__GUARD__
    #define _bbg_currency__GUARD__
    DECL_STRONG_TYPE(bbg_currency, string);
    #endif//_bbg_currency__GUARD__

    #ifndef _otc_primary_market__GUARD__
    #define _otc_primary_market__GUARD__
    DECL_STRONG_TYPE(otc_primary_market, spiderrock::protobuf::api::OTCPrimaryMarket);
    #endif//_otc_primary_market__GUARD__

    #ifndef _otc_tier__GUARD__
    #define _otc_tier__GUARD__
    DECL_STRONG_TYPE(otc_tier, spiderrock::protobuf::api::OTCTier);
    #endif//_otc_tier__GUARD__

    #ifndef _otc_reporting_status__GUARD__
    #define _otc_reporting_status__GUARD__
    DECL_STRONG_TYPE(otc_reporting_status, string);
    #endif//_otc_reporting_status__GUARD__

    #ifndef _otc_disclosure_status__GUARD__
    #define _otc_disclosure_status__GUARD__
    DECL_STRONG_TYPE(otc_disclosure_status, int32);
    #endif//_otc_disclosure_status__GUARD__

    #ifndef _otc_flags__GUARD__
    #define _otc_flags__GUARD__
    DECL_STRONG_TYPE(otc_flags, int32);
    #endif//_otc_flags__GUARD__

    #ifndef _stk_price_inc__GUARD__
    #define _stk_price_inc__GUARD__
    DECL_STRONG_TYPE(stk_price_inc, spiderrock::protobuf::api::StkPriceInc);
    #endif//_stk_price_inc__GUARD__

    #ifndef _tk_def_source__GUARD__
    #define _tk_def_source__GUARD__
    DECL_STRONG_TYPE(tk_def_source, spiderrock::protobuf::api::TkDefSource);
    #endif//_tk_def_source__GUARD__

    #ifndef _status_flag__GUARD__
    #define _status_flag__GUARD__
    DECL_STRONG_TYPE(status_flag, spiderrock::protobuf::api::TkStatusFlag);
    #endif//_status_flag__GUARD__

    #ifndef _tape_code__GUARD__
    #define _tape_code__GUARD__
    DECL_STRONG_TYPE(tape_code, spiderrock::protobuf::api::TapeCode);
    #endif//_tape_code__GUARD__

    #ifndef _stk_volume__GUARD__
    #define _stk_volume__GUARD__
    DECL_STRONG_TYPE(stk_volume, float);
    #endif//_stk_volume__GUARD__

    #ifndef _fut_volume__GUARD__
    #define _fut_volume__GUARD__
    DECL_STRONG_TYPE(fut_volume, float);
    #endif//_fut_volume__GUARD__

    #ifndef _opt_volume__GUARD__
    #define _opt_volume__GUARD__
    DECL_STRONG_TYPE(opt_volume, float);
    #endif//_opt_volume__GUARD__

    #ifndef _exch_string__GUARD__
    #define _exch_string__GUARD__
    DECL_STRONG_TYPE(exch_string, string);
    #endif//_exch_string__GUARD__

    #ifndef _has_options__GUARD__
    #define _has_options__GUARD__
    DECL_STRONG_TYPE(has_options, spiderrock::protobuf::api::YesNo);
    #endif//_has_options__GUARD__

    #ifndef _num_options__GUARD__
    #define _num_options__GUARD__
    DECL_STRONG_TYPE(num_options, int32);
    #endif//_num_options__GUARD__

    #ifndef _basis_key__GUARD__
    #define _basis_key__GUARD__
    DECL_STRONG_TYPE(basis_key, TickerKey);
    #endif//_basis_key__GUARD__

    #ifndef _reverse_skew__GUARD__
    #define _reverse_skew__GUARD__
    DECL_STRONG_TYPE(reverse_skew, spiderrock::protobuf::api::YesNo);
    #endif//_reverse_skew__GUARD__

    #ifndef _time_metric__GUARD__
    #define _time_metric__GUARD__
    DECL_STRONG_TYPE(time_metric, spiderrock::protobuf::api::TimeMetric);
    #endif//_time_metric__GUARD__

    #ifndef _trading_period__TradingPeriod__GUARD__
    #define _trading_period__TradingPeriod__GUARD__
    DECL_STRONG_TYPE(trading_period__TradingPeriod, spiderrock::protobuf::api::TradingPeriod);
    #endif//_trading_period__TradingPeriod__GUARD__

    #ifndef _timestamp__GUARD__
    #define _timestamp__GUARD__
    DECL_STRONG_TYPE(timestamp, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_timestamp__GUARD__

    #ifndef _ticker__TickerKey__GUARD__
    #define _ticker__TickerKey__GUARD__
    DECL_STRONG_TYPE(ticker__TickerKey, TickerKey);
    #endif//_ticker__TickerKey__GUARD__

    #ifndef _stk_exch__StkExch__GUARD__
    #define _stk_exch__StkExch__GUARD__
    DECL_STRONG_TYPE(stk_exch__StkExch, spiderrock::protobuf::api::StkExch);
    #endif//_stk_exch__StkExch__GUARD__

    #ifndef _ticker__TickerKey__GUARD__
    #define _ticker__TickerKey__GUARD__
    DECL_STRONG_TYPE(ticker__TickerKey, TickerKey);
    #endif//_ticker__TickerKey__GUARD__

    
    class TickerDefinition_PKey {
        public:
        //using statements for all types used in this class
        using ticker = spiderrock::protobuf::api::ticker__TickerKey;

        private:
        ticker m_ticker{};

        public:
		ticker get_ticker() const {
            return m_ticker;
        }
        void set_ticker(const ticker& value)  {
            m_ticker = value;
        }
        //templatized getters and setters
        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to TickerDefinition_PKey::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to TickerDefinition_PKey::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const ticker & value) { set_ticker(value); }


        TickerDefinition_PKey() {}

        virtual ~TickerDefinition_PKey() {
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


        size_t ByteSizeLong() const {
            size_t totalSize = 0;
            if ( IncludeTicker()) {
                SRProtobufCPP::TickerKeyLayout tickerKeyLayout;
                m_ticker.setCodecTickerKey(tickerKeyLayout);
                totalSize += SRProtobufCPP::FieldCodec::TickerKeyFieldSize(10,tickerKeyLayout);
            }
            return totalSize;
        }

        void Encode(uint8_t*& dest, uint8_t* max) const {
            if ( IncludeTicker()) {
                SRProtobufCPP::TickerKeyLayout tickerKeyLayout;
                m_ticker.setCodecTickerKey(tickerKeyLayout);
                dest = SRProtobufCPP::FieldCodec::EncodeTickerKey(dest, 10, tickerKeyLayout);
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
                }
            }
        }

    };
    
    class TickerDefinition_Exchange {
        public:
        //using statements for all types used in this class
        using stk_exch = spiderrock::protobuf::api::stk_exch__StkExch;
        using ticker = spiderrock::protobuf::api::ticker__TickerKey;

        private:
        stk_exch m_stk_exch{};
        ticker m_ticker{};

        public:
        stk_exch get_stk_exch() const {
            return m_stk_exch;
        }
		ticker get_ticker() const {
            return m_ticker;
        }
        void set_stk_exch(const stk_exch& value)  {
            m_stk_exch = value;
        }
        void set_ticker(const ticker& value)  {
            m_ticker = value;
        }
        //templatized getters and setters
        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to TickerDefinition_Exchange::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to TickerDefinition_Exchange::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const stk_exch & value) { set_stk_exch(value); }
        void set(const ticker & value) { set_ticker(value); }


        TickerDefinition_Exchange() {}

        virtual ~TickerDefinition_Exchange() {
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

        size_t ByteSizeLong() const {
            size_t totalSize = 0;
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(261,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::StkExch>(m_stk_exch)));
            SRProtobufCPP::TickerKeyLayout tickerKeyLayout;
            m_ticker.setCodecTickerKey(tickerKeyLayout);
            totalSize += SRProtobufCPP::FieldCodec::TickerKeyFieldSize(262,tickerKeyLayout);
            return totalSize;
        }

        uint8_t* Encode(uint8_t*& dest, uint8_t* max) const {
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,261,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::StkExch>(m_stk_exch)));
            SRProtobufCPP::TickerKeyLayout tickerKeyLayout;
            m_ticker.setCodecTickerKey(tickerKeyLayout);
            dest = SRProtobufCPP::FieldCodec::EncodeTickerKey(dest, 262, tickerKeyLayout);
            return dest;
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
                    case 261: {m_stk_exch = static_cast<spiderrock::protobuf::api::StkExch>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                    case 262: {
                        auto tickerKey = SRProtobufCPP::FieldCodec::DecodeTickerKey(pos,max);
                        m_ticker.setFromCodec(tickerKey);
                        break;
                    }
                }
            }
        }

    };
    

    class TickerDefinition {
        public:
        //using statements for all types used in this class
    
        using _meta = spiderrock::protobuf::api::_meta;
        using pkey = spiderrock::protobuf::api::TickerDefinition_PKey;
        using security_id = spiderrock::protobuf::api::security_id__int32;
        using symbol_type = spiderrock::protobuf::api::symbol_type;
        using name = spiderrock::protobuf::api::name;
        using country = spiderrock::protobuf::api::country;
        using primary_currency = spiderrock::protobuf::api::primary_currency;
        using rate_curve = spiderrock::protobuf::api::rate_curve;
        using par_value = spiderrock::protobuf::api::par_value;
        using par_value_currency = spiderrock::protobuf::api::par_value_currency;
        using point_value = spiderrock::protobuf::api::point_value__float;
        using point_currency = spiderrock::protobuf::api::point_currency;
        using primary_exch = spiderrock::protobuf::api::primary_exch;
        using alt_id = spiderrock::protobuf::api::alt_id;
        using mic = spiderrock::protobuf::api::mic;
        using mic_seg = spiderrock::protobuf::api::mic_seg;
        using symbol = spiderrock::protobuf::api::symbol;
        using issue_class = spiderrock::protobuf::api::issue_class;
        using shares_outstanding = spiderrock::protobuf::api::shares_outstanding;
        using cusip = spiderrock::protobuf::api::cusip;
        using ind_num = spiderrock::protobuf::api::ind_num;
        using sub_num = spiderrock::protobuf::api::sub_num;
        using grp_num = spiderrock::protobuf::api::grp_num;
        using nbr_num = spiderrock::protobuf::api::nbr_num;
        using sic = spiderrock::protobuf::api::sic;
        using cik = spiderrock::protobuf::api::cik;
        using gics = spiderrock::protobuf::api::gics;
        using lei = spiderrock::protobuf::api::lei;
        using naics = spiderrock::protobuf::api::naics;
        using cfi = spiderrock::protobuf::api::cfi;
        using cic = spiderrock::protobuf::api::cic;
        using fisn = spiderrock::protobuf::api::fisn;
        using isin = spiderrock::protobuf::api::isin;
        using figi = spiderrock::protobuf::api::figi;
        using bbg_composite_ticker = spiderrock::protobuf::api::bbg_composite_ticker;
        using bbg_exchange_ticker = spiderrock::protobuf::api::bbg_exchange_ticker;
        using bbg_composite_global_id = spiderrock::protobuf::api::bbg_composite_global_id;
        using bbg_global_id = spiderrock::protobuf::api::bbg_global_id;
        using bbg_currency = spiderrock::protobuf::api::bbg_currency;
        using otc_primary_market = spiderrock::protobuf::api::otc_primary_market;
        using otc_tier = spiderrock::protobuf::api::otc_tier;
        using otc_reporting_status = spiderrock::protobuf::api::otc_reporting_status;
        using otc_disclosure_status = spiderrock::protobuf::api::otc_disclosure_status;
        using otc_flags = spiderrock::protobuf::api::otc_flags;
        using stk_price_inc = spiderrock::protobuf::api::stk_price_inc;
        using tk_def_source = spiderrock::protobuf::api::tk_def_source;
        using status_flag = spiderrock::protobuf::api::status_flag;
        using tape_code = spiderrock::protobuf::api::tape_code;
        using stk_volume = spiderrock::protobuf::api::stk_volume;
        using fut_volume = spiderrock::protobuf::api::fut_volume;
        using opt_volume = spiderrock::protobuf::api::opt_volume;
        using exch_string = spiderrock::protobuf::api::exch_string;
        using has_options = spiderrock::protobuf::api::has_options;
        using num_options = spiderrock::protobuf::api::num_options;
        using basis_key = spiderrock::protobuf::api::basis_key;
        using reverse_skew = spiderrock::protobuf::api::reverse_skew;
        using time_metric = spiderrock::protobuf::api::time_metric;
        using trading_period = spiderrock::protobuf::api::trading_period__TradingPeriod;
        using timestamp = spiderrock::protobuf::api::timestamp;
        using exchange = spiderrock::protobuf::api::TickerDefinition_Exchange;

        private:
        _meta m__meta{};
        pkey m_pkey{};
        security_id m_security_id{};
        symbol_type m_symbol_type{};
        name m_name{};
        country m_country{};
        primary_currency m_primary_currency{};
        rate_curve m_rate_curve{};
        par_value m_par_value{};
        par_value_currency m_par_value_currency{};
        point_value m_point_value{};
        point_currency m_point_currency{};
        primary_exch m_primary_exch{};
        alt_id m_alt_id{};
        mic m_mic{};
        mic_seg m_mic_seg{};
        symbol m_symbol{};
        issue_class m_issue_class{};
        shares_outstanding m_shares_outstanding{};
        cusip m_cusip{};
        ind_num m_ind_num{};
        sub_num m_sub_num{};
        grp_num m_grp_num{};
        nbr_num m_nbr_num{};
        sic m_sic{};
        cik m_cik{};
        gics m_gics{};
        lei m_lei{};
        naics m_naics{};
        cfi m_cfi{};
        cic m_cic{};
        fisn m_fisn{};
        isin m_isin{};
        figi m_figi{};
        bbg_composite_ticker m_bbg_composite_ticker{};
        bbg_exchange_ticker m_bbg_exchange_ticker{};
        bbg_composite_global_id m_bbg_composite_global_id{};
        bbg_global_id m_bbg_global_id{};
        bbg_currency m_bbg_currency{};
        otc_primary_market m_otc_primary_market{};
        otc_tier m_otc_tier{};
        otc_reporting_status m_otc_reporting_status{};
        otc_disclosure_status m_otc_disclosure_status{};
        otc_flags m_otc_flags{};
        stk_price_inc m_stk_price_inc{};
        tk_def_source m_tk_def_source{};
        status_flag m_status_flag{};
        tape_code m_tape_code{};
        stk_volume m_stk_volume{};
        fut_volume m_fut_volume{};
        opt_volume m_opt_volume{};
        exch_string m_exch_string{};
        has_options m_has_options{};
        num_options m_num_options{};
        basis_key m_basis_key{};
        reverse_skew m_reverse_skew{};
        time_metric m_time_metric{};
        trading_period m_trading_period{};
        timestamp m_timestamp{};
        std::vector<exchange> m_exchange{};

        static constexpr int _mlinkHeaderLength = 14;

        public:		
        _meta get__meta() const {
            return m__meta;
        }		
        pkey get_pkey() const {
            return m_pkey;
        }		
        security_id get_security_id() const {
            return m_security_id;
        }		
        symbol_type get_symbol_type() const {
            return m_symbol_type;
        }		
        name get_name() const {
            return m_name;
        }		
        country get_country() const {
            return m_country;
        }		
        primary_currency get_primary_currency() const {
            return m_primary_currency;
        }		
        rate_curve get_rate_curve() const {
            return m_rate_curve;
        }		
        par_value get_par_value() const {
            return m_par_value;
        }		
        par_value_currency get_par_value_currency() const {
            return m_par_value_currency;
        }		
        point_value get_point_value() const {
            return m_point_value;
        }		
        point_currency get_point_currency() const {
            return m_point_currency;
        }		
        primary_exch get_primary_exch() const {
            return m_primary_exch;
        }		
        alt_id get_alt_id() const {
            return m_alt_id;
        }		
        mic get_mic() const {
            return m_mic;
        }		
        mic_seg get_mic_seg() const {
            return m_mic_seg;
        }		
        symbol get_symbol() const {
            return m_symbol;
        }		
        issue_class get_issue_class() const {
            return m_issue_class;
        }		
        shares_outstanding get_shares_outstanding() const {
            return m_shares_outstanding;
        }		
        cusip get_cusip() const {
            return m_cusip;
        }		
        ind_num get_ind_num() const {
            return m_ind_num;
        }		
        sub_num get_sub_num() const {
            return m_sub_num;
        }		
        grp_num get_grp_num() const {
            return m_grp_num;
        }		
        nbr_num get_nbr_num() const {
            return m_nbr_num;
        }		
        sic get_sic() const {
            return m_sic;
        }		
        cik get_cik() const {
            return m_cik;
        }		
        gics get_gics() const {
            return m_gics;
        }		
        lei get_lei() const {
            return m_lei;
        }		
        naics get_naics() const {
            return m_naics;
        }		
        cfi get_cfi() const {
            return m_cfi;
        }		
        cic get_cic() const {
            return m_cic;
        }		
        fisn get_fisn() const {
            return m_fisn;
        }		
        isin get_isin() const {
            return m_isin;
        }		
        figi get_figi() const {
            return m_figi;
        }		
        bbg_composite_ticker get_bbg_composite_ticker() const {
            return m_bbg_composite_ticker;
        }		
        bbg_exchange_ticker get_bbg_exchange_ticker() const {
            return m_bbg_exchange_ticker;
        }		
        bbg_composite_global_id get_bbg_composite_global_id() const {
            return m_bbg_composite_global_id;
        }		
        bbg_global_id get_bbg_global_id() const {
            return m_bbg_global_id;
        }		
        bbg_currency get_bbg_currency() const {
            return m_bbg_currency;
        }		
        otc_primary_market get_otc_primary_market() const {
            return m_otc_primary_market;
        }		
        otc_tier get_otc_tier() const {
            return m_otc_tier;
        }		
        otc_reporting_status get_otc_reporting_status() const {
            return m_otc_reporting_status;
        }		
        otc_disclosure_status get_otc_disclosure_status() const {
            return m_otc_disclosure_status;
        }		
        otc_flags get_otc_flags() const {
            return m_otc_flags;
        }		
        stk_price_inc get_stk_price_inc() const {
            return m_stk_price_inc;
        }		
        tk_def_source get_tk_def_source() const {
            return m_tk_def_source;
        }		
        status_flag get_status_flag() const {
            return m_status_flag;
        }		
        tape_code get_tape_code() const {
            return m_tape_code;
        }		
        stk_volume get_stk_volume() const {
            return m_stk_volume;
        }		
        fut_volume get_fut_volume() const {
            return m_fut_volume;
        }		
        opt_volume get_opt_volume() const {
            return m_opt_volume;
        }		
        exch_string get_exch_string() const {
            return m_exch_string;
        }		
        has_options get_has_options() const {
            return m_has_options;
        }		
        num_options get_num_options() const {
            return m_num_options;
        }		
        basis_key get_basis_key() const {
            return m_basis_key;
        }		
        reverse_skew get_reverse_skew() const {
            return m_reverse_skew;
        }		
        time_metric get_time_metric() const {
            return m_time_metric;
        }		
        trading_period get_trading_period() const {
            return m_trading_period;
        }		
        timestamp get_timestamp() const {
            return m_timestamp;
        }
        const std::vector<exchange>& get_exchange_list() const {
            return m_exchange;
        }
        const exchange& get_exchange(const int i) const {
            return m_exchange.at(i);
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
        void set_security_id(const security_id& value)  {
            m_security_id = value;
        }
        void set_symbol_type(const symbol_type& value)  {
            m_symbol_type = value;
        }
        void set_name(const name& value)  {
            m_name = value;
        }
        void set_country(const country& value)  {
            m_country = value;
        }
        void set_primary_currency(const primary_currency& value)  {
            m_primary_currency = value;
        }
        void set_rate_curve(const rate_curve& value)  {
            m_rate_curve = value;
        }
        void set_par_value(const par_value& value)  {
            m_par_value = value;
        }
        void set_par_value_currency(const par_value_currency& value)  {
            m_par_value_currency = value;
        }
        void set_point_value(const point_value& value)  {
            m_point_value = value;
        }
        void set_point_currency(const point_currency& value)  {
            m_point_currency = value;
        }
        void set_primary_exch(const primary_exch& value)  {
            m_primary_exch = value;
        }
        void set_alt_id(const alt_id& value)  {
            m_alt_id = value;
        }
        void set_mic(const mic& value)  {
            m_mic = value;
        }
        void set_mic_seg(const mic_seg& value)  {
            m_mic_seg = value;
        }
        void set_symbol(const symbol& value)  {
            m_symbol = value;
        }
        void set_issue_class(const issue_class& value)  {
            m_issue_class = value;
        }
        void set_shares_outstanding(const shares_outstanding& value)  {
            m_shares_outstanding = value;
        }
        void set_cusip(const cusip& value)  {
            m_cusip = value;
        }
        void set_ind_num(const ind_num& value)  {
            m_ind_num = value;
        }
        void set_sub_num(const sub_num& value)  {
            m_sub_num = value;
        }
        void set_grp_num(const grp_num& value)  {
            m_grp_num = value;
        }
        void set_nbr_num(const nbr_num& value)  {
            m_nbr_num = value;
        }
        void set_sic(const sic& value)  {
            m_sic = value;
        }
        void set_cik(const cik& value)  {
            m_cik = value;
        }
        void set_gics(const gics& value)  {
            m_gics = value;
        }
        void set_lei(const lei& value)  {
            m_lei = value;
        }
        void set_naics(const naics& value)  {
            m_naics = value;
        }
        void set_cfi(const cfi& value)  {
            m_cfi = value;
        }
        void set_cic(const cic& value)  {
            m_cic = value;
        }
        void set_fisn(const fisn& value)  {
            m_fisn = value;
        }
        void set_isin(const isin& value)  {
            m_isin = value;
        }
        void set_figi(const figi& value)  {
            m_figi = value;
        }
        void set_bbg_composite_ticker(const bbg_composite_ticker& value)  {
            m_bbg_composite_ticker = value;
        }
        void set_bbg_exchange_ticker(const bbg_exchange_ticker& value)  {
            m_bbg_exchange_ticker = value;
        }
        void set_bbg_composite_global_id(const bbg_composite_global_id& value)  {
            m_bbg_composite_global_id = value;
        }
        void set_bbg_global_id(const bbg_global_id& value)  {
            m_bbg_global_id = value;
        }
        void set_bbg_currency(const bbg_currency& value)  {
            m_bbg_currency = value;
        }
        void set_otc_primary_market(const otc_primary_market& value)  {
            m_otc_primary_market = value;
        }
        void set_otc_tier(const otc_tier& value)  {
            m_otc_tier = value;
        }
        void set_otc_reporting_status(const otc_reporting_status& value)  {
            m_otc_reporting_status = value;
        }
        void set_otc_disclosure_status(const otc_disclosure_status& value)  {
            m_otc_disclosure_status = value;
        }
        void set_otc_flags(const otc_flags& value)  {
            m_otc_flags = value;
        }
        void set_stk_price_inc(const stk_price_inc& value)  {
            m_stk_price_inc = value;
        }
        void set_tk_def_source(const tk_def_source& value)  {
            m_tk_def_source = value;
        }
        void set_status_flag(const status_flag& value)  {
            m_status_flag = value;
        }
        void set_tape_code(const tape_code& value)  {
            m_tape_code = value;
        }
        void set_stk_volume(const stk_volume& value)  {
            m_stk_volume = value;
        }
        void set_fut_volume(const fut_volume& value)  {
            m_fut_volume = value;
        }
        void set_opt_volume(const opt_volume& value)  {
            m_opt_volume = value;
        }
        void set_exch_string(const exch_string& value)  {
            m_exch_string = value;
        }
        void set_has_options(const has_options& value)  {
            m_has_options = value;
        }
        void set_num_options(const num_options& value)  {
            m_num_options = value;
        }
        void set_basis_key(const basis_key& value)  {
            m_basis_key = value;
        }
        void set_reverse_skew(const reverse_skew& value)  {
            m_reverse_skew = value;
        }
        void set_time_metric(const time_metric& value)  {
            m_time_metric = value;
        }
        void set_trading_period(const trading_period& value)  {
            m_trading_period = value;
        }
        void set_timestamp(const timestamp& value)  {
            m_timestamp = value;
        }
        void set_exchange_list(const std::vector<exchange>& list)  {
            m_exchange = list;
        }
        void add_exchange(const exchange& item) {
            m_exchange.emplace_back(item);
        }

        //templatized getters and setters

        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to TickerDefinition::get()"); return T{}; }  // specializations for valid types are listed below the class definition

        template <typename T, size_t S = sizeof(T)>
        const auto get(int i) const { static_assert(sizeof(T) == -1, "Unexpected type in call to TickerDefinition::get(int)"); return T{};}  // specializations for valid types are listed below the class definition

        template <typename T, size_t S = sizeof(T)>
        int count() const { static_assert(sizeof(T) == -1, "Unexpected type in call to TickerDefinition::count()"); return 0;}  // specializations for valid types are listed below the class definition

        //specializations for set functions for the valid types
    
        void set(const _meta & value) {
            set__meta(value);
        }
        void set(const pkey & value) {
            set_pkey(value);
        }
        void set(const security_id & value) {
            set_security_id(value);
        }
        void set(const symbol_type & value) {
            set_symbol_type(value);
        }
        void set(const name & value) {
            set_name(value);
        }
        void set(const country & value) {
            set_country(value);
        }
        void set(const primary_currency & value) {
            set_primary_currency(value);
        }
        void set(const rate_curve & value) {
            set_rate_curve(value);
        }
        void set(const par_value & value) {
            set_par_value(value);
        }
        void set(const par_value_currency & value) {
            set_par_value_currency(value);
        }
        void set(const point_value & value) {
            set_point_value(value);
        }
        void set(const point_currency & value) {
            set_point_currency(value);
        }
        void set(const primary_exch & value) {
            set_primary_exch(value);
        }
        void set(const alt_id & value) {
            set_alt_id(value);
        }
        void set(const mic & value) {
            set_mic(value);
        }
        void set(const mic_seg & value) {
            set_mic_seg(value);
        }
        void set(const symbol & value) {
            set_symbol(value);
        }
        void set(const issue_class & value) {
            set_issue_class(value);
        }
        void set(const shares_outstanding & value) {
            set_shares_outstanding(value);
        }
        void set(const cusip & value) {
            set_cusip(value);
        }
        void set(const ind_num & value) {
            set_ind_num(value);
        }
        void set(const sub_num & value) {
            set_sub_num(value);
        }
        void set(const grp_num & value) {
            set_grp_num(value);
        }
        void set(const nbr_num & value) {
            set_nbr_num(value);
        }
        void set(const sic & value) {
            set_sic(value);
        }
        void set(const cik & value) {
            set_cik(value);
        }
        void set(const gics & value) {
            set_gics(value);
        }
        void set(const lei & value) {
            set_lei(value);
        }
        void set(const naics & value) {
            set_naics(value);
        }
        void set(const cfi & value) {
            set_cfi(value);
        }
        void set(const cic & value) {
            set_cic(value);
        }
        void set(const fisn & value) {
            set_fisn(value);
        }
        void set(const isin & value) {
            set_isin(value);
        }
        void set(const figi & value) {
            set_figi(value);
        }
        void set(const bbg_composite_ticker & value) {
            set_bbg_composite_ticker(value);
        }
        void set(const bbg_exchange_ticker & value) {
            set_bbg_exchange_ticker(value);
        }
        void set(const bbg_composite_global_id & value) {
            set_bbg_composite_global_id(value);
        }
        void set(const bbg_global_id & value) {
            set_bbg_global_id(value);
        }
        void set(const bbg_currency & value) {
            set_bbg_currency(value);
        }
        void set(const otc_primary_market & value) {
            set_otc_primary_market(value);
        }
        void set(const otc_tier & value) {
            set_otc_tier(value);
        }
        void set(const otc_reporting_status & value) {
            set_otc_reporting_status(value);
        }
        void set(const otc_disclosure_status & value) {
            set_otc_disclosure_status(value);
        }
        void set(const otc_flags & value) {
            set_otc_flags(value);
        }
        void set(const stk_price_inc & value) {
            set_stk_price_inc(value);
        }
        void set(const tk_def_source & value) {
            set_tk_def_source(value);
        }
        void set(const status_flag & value) {
            set_status_flag(value);
        }
        void set(const tape_code & value) {
            set_tape_code(value);
        }
        void set(const stk_volume & value) {
            set_stk_volume(value);
        }
        void set(const fut_volume & value) {
            set_fut_volume(value);
        }
        void set(const opt_volume & value) {
            set_opt_volume(value);
        }
        void set(const exch_string & value) {
            set_exch_string(value);
        }
        void set(const has_options & value) {
            set_has_options(value);
        }
        void set(const num_options & value) {
            set_num_options(value);
        }
        void set(const basis_key & value) {
            set_basis_key(value);
        }
        void set(const reverse_skew & value) {
            set_reverse_skew(value);
        }
        void set(const time_metric & value) {
            set_time_metric(value);
        }
        void set(const trading_period & value) {
            set_trading_period(value);
        }
        void set(const timestamp & value) {
            set_timestamp(value);
        }
        void set(const exchange & value) {
            add_exchange(value);
        }

        void set(const TickerDefinition & value) {
            set(value.m__meta);
            set(value.m_pkey);
            set(value.m_security_id);
            set(value.m_symbol_type);
            set(value.m_name);
            set(value.m_country);
            set(value.m_primary_currency);
            set(value.m_rate_curve);
            set(value.m_par_value);
            set(value.m_par_value_currency);
            set(value.m_point_value);
            set(value.m_point_currency);
            set(value.m_primary_exch);
            set(value.m_alt_id);
            set(value.m_mic);
            set(value.m_mic_seg);
            set(value.m_symbol);
            set(value.m_issue_class);
            set(value.m_shares_outstanding);
            set(value.m_cusip);
            set(value.m_ind_num);
            set(value.m_sub_num);
            set(value.m_grp_num);
            set(value.m_nbr_num);
            set(value.m_sic);
            set(value.m_cik);
            set(value.m_gics);
            set(value.m_lei);
            set(value.m_naics);
            set(value.m_cfi);
            set(value.m_cic);
            set(value.m_fisn);
            set(value.m_isin);
            set(value.m_figi);
            set(value.m_bbg_composite_ticker);
            set(value.m_bbg_exchange_ticker);
            set(value.m_bbg_composite_global_id);
            set(value.m_bbg_global_id);
            set(value.m_bbg_currency);
            set(value.m_otc_primary_market);
            set(value.m_otc_tier);
            set(value.m_otc_reporting_status);
            set(value.m_otc_disclosure_status);
            set(value.m_otc_flags);
            set(value.m_stk_price_inc);
            set(value.m_tk_def_source);
            set(value.m_status_flag);
            set(value.m_tape_code);
            set(value.m_stk_volume);
            set(value.m_fut_volume);
            set(value.m_opt_volume);
            set(value.m_exch_string);
            set(value.m_has_options);
            set(value.m_num_options);
            set(value.m_basis_key);
            set(value.m_reverse_skew);
            set(value.m_time_metric);
            set(value.m_trading_period);
            set(value.m_timestamp);set_exchange_list(value.m_exchange);
        }

        TickerDefinition() {
            m__meta.set_message_type("TickerDefinition");
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
            std::snprintf(reinterpret_cast<char*>(data), size, "\r\nP%05d%06zd", 4375, length);
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
            std::snprintf(const_cast<char*>(s->data()), s->size(), "\r\nP%05d%06zd", 4375, length);
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
             *this = TickerDefinition{};
        }
        bool IncludeMeta() const {
            return (m__meta.ByteSizeLong() > 0);
        }
        bool IncludePkey() const {
            return (m_pkey.ByteSizeLong() > 0);
        }
        bool IncludeSecurityId() const {
            return !(m_security_id == 0);
        }
        bool IncludeName() const {
            return !(m_name.empty());
        }
        bool IncludeCountry() const {
            return !(m_country.empty());
        }
        bool IncludeParValue() const {
            return !(m_par_value == 0.0);
        }
        bool IncludeParValueCurrency() const {
            return !(m_par_value_currency.empty());
        }
        bool IncludePointValue() const {
            return !(m_point_value == 0.0);
        }
        bool IncludeAltId() const {
            return !(m_alt_id == 0);
        }
        bool IncludeMic() const {
            return !(m_mic.empty());
        }
        bool IncludeMicSeg() const {
            return !(m_mic_seg.empty());
        }
        bool IncludeSymbol() const {
            return !(m_symbol.empty());
        }
        bool IncludeIssueClass() const {
            return !(m_issue_class.empty());
        }
        bool IncludeSharesOutstanding() const {
            return !(m_shares_outstanding == 0);
        }
        bool IncludeCusip() const {
            return !(m_cusip.empty());
        }
        bool IncludeIndNum() const {
            return !(m_ind_num == 0);
        }
        bool IncludeSubNum() const {
            return !(m_sub_num == 0);
        }
        bool IncludeGrpNum() const {
            return !(m_grp_num == 0);
        }
        bool IncludeNbrNum() const {
            return !(m_nbr_num == 0);
        }
        bool IncludeSic() const {
            return !(m_sic.empty());
        }
        bool IncludeCik() const {
            return !(m_cik.empty());
        }
        bool IncludeGics() const {
            return !(m_gics.empty());
        }
        bool IncludeLei() const {
            return !(m_lei.empty());
        }
        bool IncludeNaics() const {
            return !(m_naics.empty());
        }
        bool IncludeCfi() const {
            return !(m_cfi.empty());
        }
        bool IncludeCic() const {
            return !(m_cic.empty());
        }
        bool IncludeFisn() const {
            return !(m_fisn.empty());
        }
        bool IncludeIsin() const {
            return !(m_isin.empty());
        }
        bool IncludeFigi() const {
            return !(m_figi.empty());
        }
        bool IncludeBbgCompositeTicker() const {
            return !(m_bbg_composite_ticker.empty());
        }
        bool IncludeBbgExchangeTicker() const {
            return !(m_bbg_exchange_ticker.empty());
        }
        bool IncludeBbgCompositeGlobalId() const {
            return !(m_bbg_composite_global_id.empty());
        }
        bool IncludeBbgGlobalId() const {
            return !(m_bbg_global_id.empty());
        }
        bool IncludeBbgCurrency() const {
            return !(m_bbg_currency.empty());
        }
        bool IncludeOtcReportingStatus() const {
            return !(m_otc_reporting_status.empty());
        }
        bool IncludeOtcDisclosureStatus() const {
            return !(m_otc_disclosure_status == 0);
        }
        bool IncludeOtcFlags() const {
            return !(m_otc_flags == 0);
        }
        bool IncludeStkVolume() const {
            return !(m_stk_volume == 0.0);
        }
        bool IncludeFutVolume() const {
            return !(m_fut_volume == 0.0);
        }
        bool IncludeOptVolume() const {
            return !(m_opt_volume == 0.0);
        }
        bool IncludeExchString() const {
            return !(m_exch_string.empty());
        }
        bool IncludeNumOptions() const {
            return !(m_num_options == 0);
        }
        bool IncludeBasisKey() const {
            return (m_basis_key.ByteSizeLong() > 0);
        }
        bool IncludeTimestamp() const {
            return (m_timestamp.time_since_epoch().count() != 0);
        }
        bool IncludeExchange() const {
            return (!m_exchange.empty());
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
            if ( IncludeSecurityId()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(100,m_security_id);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(103,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SymbolType>(m_symbol_type)));
            if ( IncludeName()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(106,m_name);
            }
            if ( IncludeCountry()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(109,m_country);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(254,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::Currency>(m_primary_currency)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(255,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::RateCurve>(m_rate_curve)));
            if ( IncludeParValue()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(112,m_par_value);
            }
            if ( IncludeParValueCurrency()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(115,m_par_value_currency);
            }
            if ( IncludePointValue()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(118,m_point_value);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(121,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::Currency>(m_point_currency)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(124,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PrimaryExchange>(m_primary_exch)));
            if ( IncludeAltId()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(127,m_alt_id);
            }
            if ( IncludeMic()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(130,m_mic);
            }
            if ( IncludeMicSeg()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(133,m_mic_seg);
            }
            if ( IncludeSymbol()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(136,m_symbol);
            }
            if ( IncludeIssueClass()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(139,m_issue_class);
            }
            if ( IncludeSharesOutstanding()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(256,m_shares_outstanding);
            }
            if ( IncludeCusip()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(145,m_cusip);
            }
            if ( IncludeIndNum()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(148,m_ind_num);
            }
            if ( IncludeSubNum()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(151,m_sub_num);
            }
            if ( IncludeGrpNum()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(154,m_grp_num);
            }
            if ( IncludeNbrNum()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(157,m_nbr_num);
            }
            if ( IncludeSic()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(160,m_sic);
            }
            if ( IncludeCik()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(163,m_cik);
            }
            if ( IncludeGics()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(166,m_gics);
            }
            if ( IncludeLei()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(169,m_lei);
            }
            if ( IncludeNaics()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(172,m_naics);
            }
            if ( IncludeCfi()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(175,m_cfi);
            }
            if ( IncludeCic()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(178,m_cic);
            }
            if ( IncludeFisn()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(181,m_fisn);
            }
            if ( IncludeIsin()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(184,m_isin);
            }
            if ( IncludeFigi()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(187,m_figi);
            }
            if ( IncludeBbgCompositeTicker()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(190,m_bbg_composite_ticker);
            }
            if ( IncludeBbgExchangeTicker()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(193,m_bbg_exchange_ticker);
            }
            if ( IncludeBbgCompositeGlobalId()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(196,m_bbg_composite_global_id);
            }
            if ( IncludeBbgGlobalId()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(199,m_bbg_global_id);
            }
            if ( IncludeBbgCurrency()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(202,m_bbg_currency);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(205,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::OTCPrimaryMarket>(m_otc_primary_market)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(208,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::OTCTier>(m_otc_tier)));
            if ( IncludeOtcReportingStatus()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(211,m_otc_reporting_status);
            }
            if ( IncludeOtcDisclosureStatus()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(214,m_otc_disclosure_status);
            }
            if ( IncludeOtcFlags()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(217,m_otc_flags);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(220,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::StkPriceInc>(m_stk_price_inc)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(223,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::TkDefSource>(m_tk_def_source)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(226,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::TkStatusFlag>(m_status_flag)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(229,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::TapeCode>(m_tape_code)));
            if ( IncludeStkVolume()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(232,m_stk_volume);
            }
            if ( IncludeFutVolume()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(235,m_fut_volume);
            }
            if ( IncludeOptVolume()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(238,m_opt_volume);
            }
            if ( IncludeExchString()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(241,m_exch_string);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(244,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_has_options)));
            if ( IncludeNumOptions()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(247,m_num_options);
            }
            if ( IncludeBasisKey()) {
                SRProtobufCPP::TickerKeyLayout tickerKeyLayout{};
                m_basis_key.setCodecTickerKey(tickerKeyLayout);
                totalSize += SRProtobufCPP::FieldCodec::TickerKeyFieldSize(257, tickerKeyLayout);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(258,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_reverse_skew)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(250,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::TimeMetric>(m_time_metric)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(259,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::TradingPeriod>(m_trading_period)));
            if ( IncludeTimestamp()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(253, m_timestamp);
            }
            if ( IncludeExchange()) {
                for (auto& item : m_exchange) {
					totalSize += SRProtobufCPP::TagCodec::Size(260, SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited);
                    totalSize += SRProtobufCPP::LengthCodec::Size((int)item.ByteSizeLong());
                    totalSize += item.ByteSizeLong();
                }
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
            if ( IncludeSecurityId()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,100,m_security_id);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,103,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SymbolType>(m_symbol_type)));
            if ( IncludeName()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,106,static_cast<string>(m_name));
            }
            if ( IncludeCountry()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,109,static_cast<string>(m_country));
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,254,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::Currency>(m_primary_currency)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,255,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::RateCurve>(m_rate_curve)));
            if ( IncludeParValue()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,112,m_par_value);
            }
            if ( IncludeParValueCurrency()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,115,static_cast<string>(m_par_value_currency));
            }
            if ( IncludePointValue()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,118,m_point_value);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,121,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::Currency>(m_point_currency)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,124,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PrimaryExchange>(m_primary_exch)));
            if ( IncludeAltId()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,127,m_alt_id);
            }
            if ( IncludeMic()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,130,static_cast<string>(m_mic));
            }
            if ( IncludeMicSeg()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,133,static_cast<string>(m_mic_seg));
            }
            if ( IncludeSymbol()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,136,static_cast<string>(m_symbol));
            }
            if ( IncludeIssueClass()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,139,static_cast<string>(m_issue_class));
            }
            if ( IncludeSharesOutstanding()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,256,m_shares_outstanding);
            }
            if ( IncludeCusip()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,145,static_cast<string>(m_cusip));
            }
            if ( IncludeIndNum()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,148,m_ind_num);
            }
            if ( IncludeSubNum()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,151,m_sub_num);
            }
            if ( IncludeGrpNum()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,154,m_grp_num);
            }
            if ( IncludeNbrNum()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,157,m_nbr_num);
            }
            if ( IncludeSic()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,160,static_cast<string>(m_sic));
            }
            if ( IncludeCik()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,163,static_cast<string>(m_cik));
            }
            if ( IncludeGics()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,166,static_cast<string>(m_gics));
            }
            if ( IncludeLei()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,169,static_cast<string>(m_lei));
            }
            if ( IncludeNaics()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,172,static_cast<string>(m_naics));
            }
            if ( IncludeCfi()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,175,static_cast<string>(m_cfi));
            }
            if ( IncludeCic()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,178,static_cast<string>(m_cic));
            }
            if ( IncludeFisn()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,181,static_cast<string>(m_fisn));
            }
            if ( IncludeIsin()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,184,static_cast<string>(m_isin));
            }
            if ( IncludeFigi()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,187,static_cast<string>(m_figi));
            }
            if ( IncludeBbgCompositeTicker()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,190,static_cast<string>(m_bbg_composite_ticker));
            }
            if ( IncludeBbgExchangeTicker()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,193,static_cast<string>(m_bbg_exchange_ticker));
            }
            if ( IncludeBbgCompositeGlobalId()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,196,static_cast<string>(m_bbg_composite_global_id));
            }
            if ( IncludeBbgGlobalId()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,199,static_cast<string>(m_bbg_global_id));
            }
            if ( IncludeBbgCurrency()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,202,static_cast<string>(m_bbg_currency));
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,205,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::OTCPrimaryMarket>(m_otc_primary_market)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,208,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::OTCTier>(m_otc_tier)));
            if ( IncludeOtcReportingStatus()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,211,static_cast<string>(m_otc_reporting_status));
            }
            if ( IncludeOtcDisclosureStatus()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,214,m_otc_disclosure_status);
            }
            if ( IncludeOtcFlags()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,217,m_otc_flags);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,220,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::StkPriceInc>(m_stk_price_inc)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,223,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::TkDefSource>(m_tk_def_source)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,226,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::TkStatusFlag>(m_status_flag)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,229,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::TapeCode>(m_tape_code)));
            if ( IncludeStkVolume()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,232,m_stk_volume);
            }
            if ( IncludeFutVolume()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,235,m_fut_volume);
            }
            if ( IncludeOptVolume()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,238,m_opt_volume);
            }
            if ( IncludeExchString()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,241,static_cast<string>(m_exch_string));
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,244,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_has_options)));
            if ( IncludeNumOptions()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,247,m_num_options);
            }
            if ( IncludeBasisKey()) {
                SRProtobufCPP::TickerKeyLayout tickerKeyLayout{};
                m_basis_key.setCodecTickerKey(tickerKeyLayout);
                dest = SRProtobufCPP::FieldCodec::EncodeTickerKey(dest, 257, tickerKeyLayout);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,258,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_reverse_skew)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,250,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::TimeMetric>(m_time_metric)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,259,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::TradingPeriod>(m_trading_period)));
            if ( IncludeTimestamp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 253, m_timestamp);
            }
            if ( IncludeExchange()) {
                for (auto& item : m_exchange) {
                    dest = SRProtobufCPP::TagCodec::Encode(dest, 260, SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited);
                    dest = SRProtobufCPP::LengthCodec::Encode(dest,static_cast<int>(item.ByteSizeLong()));
                    item.Encode(dest, max);
                }
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
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_security_id = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 103: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_symbol_type = static_cast<spiderrock::protobuf::api::SymbolType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 106: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_name = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 109: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_country = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 254: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_primary_currency = static_cast<spiderrock::protobuf::api::Currency>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 255: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_rate_curve = static_cast<spiderrock::protobuf::api::RateCurve>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 112: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_par_value = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 115: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_par_value_currency = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 118: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_point_value = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 121: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_point_currency = static_cast<spiderrock::protobuf::api::Currency>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 124: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_primary_exch = static_cast<spiderrock::protobuf::api::PrimaryExchange>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 127: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_alt_id = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 130: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_mic = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 133: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_mic_seg = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 136: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_symbol = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 139: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_issue_class = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 256: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_shares_outstanding = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 145: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_cusip = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 148: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_ind_num = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 151: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_sub_num = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 154: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_grp_num = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 157: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_nbr_num = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 160: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_sic = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 163: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_cik = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 166: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_gics = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 169: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_lei = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 172: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_naics = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 175: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_cfi = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 178: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_cic = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 181: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_fisn = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 184: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_isin = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 187: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_figi = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 190: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_bbg_composite_ticker = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 193: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_bbg_exchange_ticker = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 196: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_bbg_composite_global_id = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 199: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_bbg_global_id = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 202: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_bbg_currency = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 205: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_otc_primary_market = static_cast<spiderrock::protobuf::api::OTCPrimaryMarket>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 208: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_otc_tier = static_cast<spiderrock::protobuf::api::OTCTier>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 211: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_otc_reporting_status = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 214: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_otc_disclosure_status = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 217: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_otc_flags = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 220: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_stk_price_inc = static_cast<spiderrock::protobuf::api::StkPriceInc>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 223: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_tk_def_source = static_cast<spiderrock::protobuf::api::TkDefSource>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 226: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_status_flag = static_cast<spiderrock::protobuf::api::TkStatusFlag>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 229: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_tape_code = static_cast<spiderrock::protobuf::api::TapeCode>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 232: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_stk_volume = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 235: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_fut_volume = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 238: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_opt_volume = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 241: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_exch_string = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 244: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_has_options = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 247: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_num_options = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 257: {
                        if (tagType == SRProtobufCPP::TickerKeyCodec::TagType){
                            auto tickerKey = SRProtobufCPP::FieldCodec::DecodeTickerKey(pos,max);
                            m_basis_key.setFromCodec(tickerKey);
                        }
                        break;
                    }
                    case 258: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_reverse_skew = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 250: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_time_metric = static_cast<spiderrock::protobuf::api::TimeMetric>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 259: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_trading_period = static_cast<spiderrock::protobuf::api::TradingPeriod>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 253: {
                        if (tagType == SRProtobufCPP::DateKeyCodec::TagType) {
                            m_timestamp = SRProtobufCPP::FieldCodec::DecodeDateTime(pos,max);
                        }
                        break;
                    }
                    case 260: {
                        if (tagType == SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited) {
                            const int length = SRProtobufCPP::LengthCodec::Decode(pos, max);
                            exchange item_exchange;
                            item_exchange.Decode(pos, pos+length);  
                            m_exchange.emplace_back(item_exchange);
                        }
                        break;
                    }
                }
            }
        }

    };


    // getter definitions for all classes above, both inner and outer classes

    template<> inline const auto TickerDefinition::get<TickerDefinition::_meta>() const { return TickerDefinition::_meta{ m__meta}; }
    template<> inline const auto TickerDefinition::get<TickerDefinition::pkey>() const { return TickerDefinition::pkey{ m_pkey}; }
    template<> inline const auto TickerDefinition::get<TickerDefinition::security_id>() const { return m_security_id; }
    template<> inline const auto TickerDefinition::get<TickerDefinition::symbol_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SymbolType>( m_symbol_type)); }
    template<> inline const auto TickerDefinition::get<TickerDefinition::name>() const { return m_name; }
    template<> inline const auto TickerDefinition::get<TickerDefinition::country>() const { return m_country; }
    template<> inline const auto TickerDefinition::get<TickerDefinition::primary_currency>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::Currency>( m_primary_currency)); }
    template<> inline const auto TickerDefinition::get<TickerDefinition::rate_curve>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::RateCurve>( m_rate_curve)); }
    template<> inline const auto TickerDefinition::get<TickerDefinition::par_value>() const { return m_par_value; }
    template<> inline const auto TickerDefinition::get<TickerDefinition::par_value_currency>() const { return m_par_value_currency; }
    template<> inline const auto TickerDefinition::get<TickerDefinition::point_value>() const { return m_point_value; }
    template<> inline const auto TickerDefinition::get<TickerDefinition::point_currency>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::Currency>( m_point_currency)); }
    template<> inline const auto TickerDefinition::get<TickerDefinition::primary_exch>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PrimaryExchange>( m_primary_exch)); }
    template<> inline const auto TickerDefinition::get<TickerDefinition::alt_id>() const { return m_alt_id; }
    template<> inline const auto TickerDefinition::get<TickerDefinition::mic>() const { return m_mic; }
    template<> inline const auto TickerDefinition::get<TickerDefinition::mic_seg>() const { return m_mic_seg; }
    template<> inline const auto TickerDefinition::get<TickerDefinition::symbol>() const { return m_symbol; }
    template<> inline const auto TickerDefinition::get<TickerDefinition::issue_class>() const { return m_issue_class; }
    template<> inline const auto TickerDefinition::get<TickerDefinition::shares_outstanding>() const { return m_shares_outstanding; }
    template<> inline const auto TickerDefinition::get<TickerDefinition::cusip>() const { return m_cusip; }
    template<> inline const auto TickerDefinition::get<TickerDefinition::ind_num>() const { return m_ind_num; }
    template<> inline const auto TickerDefinition::get<TickerDefinition::sub_num>() const { return m_sub_num; }
    template<> inline const auto TickerDefinition::get<TickerDefinition::grp_num>() const { return m_grp_num; }
    template<> inline const auto TickerDefinition::get<TickerDefinition::nbr_num>() const { return m_nbr_num; }
    template<> inline const auto TickerDefinition::get<TickerDefinition::sic>() const { return m_sic; }
    template<> inline const auto TickerDefinition::get<TickerDefinition::cik>() const { return m_cik; }
    template<> inline const auto TickerDefinition::get<TickerDefinition::gics>() const { return m_gics; }
    template<> inline const auto TickerDefinition::get<TickerDefinition::lei>() const { return m_lei; }
    template<> inline const auto TickerDefinition::get<TickerDefinition::naics>() const { return m_naics; }
    template<> inline const auto TickerDefinition::get<TickerDefinition::cfi>() const { return m_cfi; }
    template<> inline const auto TickerDefinition::get<TickerDefinition::cic>() const { return m_cic; }
    template<> inline const auto TickerDefinition::get<TickerDefinition::fisn>() const { return m_fisn; }
    template<> inline const auto TickerDefinition::get<TickerDefinition::isin>() const { return m_isin; }
    template<> inline const auto TickerDefinition::get<TickerDefinition::figi>() const { return m_figi; }
    template<> inline const auto TickerDefinition::get<TickerDefinition::bbg_composite_ticker>() const { return m_bbg_composite_ticker; }
    template<> inline const auto TickerDefinition::get<TickerDefinition::bbg_exchange_ticker>() const { return m_bbg_exchange_ticker; }
    template<> inline const auto TickerDefinition::get<TickerDefinition::bbg_composite_global_id>() const { return m_bbg_composite_global_id; }
    template<> inline const auto TickerDefinition::get<TickerDefinition::bbg_global_id>() const { return m_bbg_global_id; }
    template<> inline const auto TickerDefinition::get<TickerDefinition::bbg_currency>() const { return m_bbg_currency; }
    template<> inline const auto TickerDefinition::get<TickerDefinition::otc_primary_market>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::OTCPrimaryMarket>( m_otc_primary_market)); }
    template<> inline const auto TickerDefinition::get<TickerDefinition::otc_tier>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::OTCTier>( m_otc_tier)); }
    template<> inline const auto TickerDefinition::get<TickerDefinition::otc_reporting_status>() const { return m_otc_reporting_status; }
    template<> inline const auto TickerDefinition::get<TickerDefinition::otc_disclosure_status>() const { return m_otc_disclosure_status; }
    template<> inline const auto TickerDefinition::get<TickerDefinition::otc_flags>() const { return m_otc_flags; }
    template<> inline const auto TickerDefinition::get<TickerDefinition::stk_price_inc>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::StkPriceInc>( m_stk_price_inc)); }
    template<> inline const auto TickerDefinition::get<TickerDefinition::tk_def_source>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::TkDefSource>( m_tk_def_source)); }
    template<> inline const auto TickerDefinition::get<TickerDefinition::status_flag>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::TkStatusFlag>( m_status_flag)); }
    template<> inline const auto TickerDefinition::get<TickerDefinition::tape_code>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::TapeCode>( m_tape_code)); }
    template<> inline const auto TickerDefinition::get<TickerDefinition::stk_volume>() const { return m_stk_volume; }
    template<> inline const auto TickerDefinition::get<TickerDefinition::fut_volume>() const { return m_fut_volume; }
    template<> inline const auto TickerDefinition::get<TickerDefinition::opt_volume>() const { return m_opt_volume; }
    template<> inline const auto TickerDefinition::get<TickerDefinition::exch_string>() const { return m_exch_string; }
    template<> inline const auto TickerDefinition::get<TickerDefinition::has_options>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_has_options)); }
    template<> inline const auto TickerDefinition::get<TickerDefinition::num_options>() const { return m_num_options; }
    template<> inline const auto TickerDefinition::get<TickerDefinition::basis_key>() const { return TickerDefinition::basis_key{ m_basis_key}; }
    template<> inline const auto TickerDefinition::get<TickerDefinition::reverse_skew>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_reverse_skew)); }
    template<> inline const auto TickerDefinition::get<TickerDefinition::time_metric>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::TimeMetric>( m_time_metric)); }
    template<> inline const auto TickerDefinition::get<TickerDefinition::trading_period>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::TradingPeriod>( m_trading_period)); }
    template<> inline const auto TickerDefinition::get<TickerDefinition::timestamp>() const { return m_timestamp; }
    template<> inline const auto TickerDefinition::get<TickerDefinition::exchange>(int i) const { return TickerDefinition::exchange{ get_exchange(i)}; }
    template<> inline int TickerDefinition::count<TickerDefinition::exchange>() const { return static_cast<int>( m_exchange.size()); }
    template<> inline const auto TickerDefinition_PKey::get<TickerDefinition_PKey::ticker>() const { return TickerDefinition_PKey::ticker{m_ticker}; }
    
    template<> inline const auto TickerDefinition_Exchange::get<TickerDefinition_Exchange::stk_exch>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::StkExch>(m_stk_exch));}
    template<> inline const auto TickerDefinition_Exchange::get<TickerDefinition_Exchange::ticker>() const { return TickerDefinition_Exchange::ticker{m_ticker}; }
    
    // ostream operators for all classes above, output should adhere to a JSON format

    inline std::ostream& operator<<(std::ostream &o, const TickerDefinition_PKey& m) {
        o << "\"ticker\":{" << m.get<TickerDefinition_PKey::ticker>() << "}";
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const TickerDefinition_Exchange& m) {
        o << "\"stk_exch\":" << (int64_t)m.get<TickerDefinition_Exchange::stk_exch>();
        o << ",\"ticker\":{" << m.get<TickerDefinition_Exchange::ticker>() << "}";
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const TickerDefinition& m) {
        o << "\"_meta\":{" << m.get<TickerDefinition::_meta>() << "}";
        o << ",\"pkey\":{" << m.get<TickerDefinition::pkey>() << "}";
        o << ",\"security_id\":" << m.get<TickerDefinition::security_id>();
        o << ",\"symbol_type\":" << (int64_t)m.get<TickerDefinition::symbol_type>();
        o << ",\"name\":\"" << m.get<TickerDefinition::name>() << "\"";
        o << ",\"country\":\"" << m.get<TickerDefinition::country>() << "\"";
        o << ",\"primary_currency\":" << (int64_t)m.get<TickerDefinition::primary_currency>();
        o << ",\"rate_curve\":" << (int64_t)m.get<TickerDefinition::rate_curve>();
        o << ",\"par_value\":" << m.get<TickerDefinition::par_value>();
        o << ",\"par_value_currency\":\"" << m.get<TickerDefinition::par_value_currency>() << "\"";
        o << ",\"point_value\":" << m.get<TickerDefinition::point_value>();
        o << ",\"point_currency\":" << (int64_t)m.get<TickerDefinition::point_currency>();
        o << ",\"primary_exch\":" << (int64_t)m.get<TickerDefinition::primary_exch>();
        o << ",\"alt_id\":" << m.get<TickerDefinition::alt_id>();
        o << ",\"mic\":\"" << m.get<TickerDefinition::mic>() << "\"";
        o << ",\"mic_seg\":\"" << m.get<TickerDefinition::mic_seg>() << "\"";
        o << ",\"symbol\":\"" << m.get<TickerDefinition::symbol>() << "\"";
        o << ",\"issue_class\":\"" << m.get<TickerDefinition::issue_class>() << "\"";
        o << ",\"shares_outstanding\":" << m.get<TickerDefinition::shares_outstanding>();
        o << ",\"cusip\":\"" << m.get<TickerDefinition::cusip>() << "\"";
        o << ",\"ind_num\":" << m.get<TickerDefinition::ind_num>();
        o << ",\"sub_num\":" << m.get<TickerDefinition::sub_num>();
        o << ",\"grp_num\":" << m.get<TickerDefinition::grp_num>();
        o << ",\"nbr_num\":" << m.get<TickerDefinition::nbr_num>();
        o << ",\"sic\":\"" << m.get<TickerDefinition::sic>() << "\"";
        o << ",\"cik\":\"" << m.get<TickerDefinition::cik>() << "\"";
        o << ",\"gics\":\"" << m.get<TickerDefinition::gics>() << "\"";
        o << ",\"lei\":\"" << m.get<TickerDefinition::lei>() << "\"";
        o << ",\"naics\":\"" << m.get<TickerDefinition::naics>() << "\"";
        o << ",\"cfi\":\"" << m.get<TickerDefinition::cfi>() << "\"";
        o << ",\"cic\":\"" << m.get<TickerDefinition::cic>() << "\"";
        o << ",\"fisn\":\"" << m.get<TickerDefinition::fisn>() << "\"";
        o << ",\"isin\":\"" << m.get<TickerDefinition::isin>() << "\"";
        o << ",\"figi\":\"" << m.get<TickerDefinition::figi>() << "\"";
        o << ",\"bbg_composite_ticker\":\"" << m.get<TickerDefinition::bbg_composite_ticker>() << "\"";
        o << ",\"bbg_exchange_ticker\":\"" << m.get<TickerDefinition::bbg_exchange_ticker>() << "\"";
        o << ",\"bbg_composite_global_id\":\"" << m.get<TickerDefinition::bbg_composite_global_id>() << "\"";
        o << ",\"bbg_global_id\":\"" << m.get<TickerDefinition::bbg_global_id>() << "\"";
        o << ",\"bbg_currency\":\"" << m.get<TickerDefinition::bbg_currency>() << "\"";
        o << ",\"otc_primary_market\":" << (int64_t)m.get<TickerDefinition::otc_primary_market>();
        o << ",\"otc_tier\":" << (int64_t)m.get<TickerDefinition::otc_tier>();
        o << ",\"otc_reporting_status\":\"" << m.get<TickerDefinition::otc_reporting_status>() << "\"";
        o << ",\"otc_disclosure_status\":" << m.get<TickerDefinition::otc_disclosure_status>();
        o << ",\"otc_flags\":" << m.get<TickerDefinition::otc_flags>();
        o << ",\"stk_price_inc\":" << (int64_t)m.get<TickerDefinition::stk_price_inc>();
        o << ",\"tk_def_source\":" << (int64_t)m.get<TickerDefinition::tk_def_source>();
        o << ",\"status_flag\":" << (int64_t)m.get<TickerDefinition::status_flag>();
        o << ",\"tape_code\":" << (int64_t)m.get<TickerDefinition::tape_code>();
        o << ",\"stk_volume\":" << m.get<TickerDefinition::stk_volume>();
        o << ",\"fut_volume\":" << m.get<TickerDefinition::fut_volume>();
        o << ",\"opt_volume\":" << m.get<TickerDefinition::opt_volume>();
        o << ",\"exch_string\":\"" << m.get<TickerDefinition::exch_string>() << "\"";
        o << ",\"has_options\":" << (int64_t)m.get<TickerDefinition::has_options>();
        o << ",\"num_options\":" << m.get<TickerDefinition::num_options>();
        o << ",\"basis_key\":{" << m.get<TickerDefinition::basis_key>() << "}";
        o << ",\"reverse_skew\":" << (int64_t)m.get<TickerDefinition::reverse_skew>();
        o << ",\"time_metric\":" << (int64_t)m.get<TickerDefinition::time_metric>();
        o << ",\"trading_period\":" << (int64_t)m.get<TickerDefinition::trading_period>();
        {
            std::time_t tt = m.get<TickerDefinition::timestamp>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"timestamp\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        o << ",\"exchange\":[";
        {
            const char *delim = "{";
            for (int i=0; i<m.count<TickerDefinition::exchange>(); ++i) {
                o << delim << m.get<TickerDefinition::exchange>(i) << '}';
                delim = ",{";
            }
        }
        o << "]";
        return o;
    }

}
}
}