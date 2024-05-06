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

    #ifndef _u_prc__double__GUARD__
    #define _u_prc__double__GUARD__
    DECL_STRONG_TYPE(u_prc__double, double);
    #endif//_u_prc__double__GUARD__

    #ifndef _years__float__GUARD__
    #define _years__float__GUARD__
    DECL_STRONG_TYPE(years__float, float);
    #endif//_years__float__GUARD__

    #ifndef _rate__float__GUARD__
    #define _rate__float__GUARD__
    DECL_STRONG_TYPE(rate__float, float);
    #endif//_rate__float__GUARD__

    #ifndef _ddiv__GUARD__
    #define _ddiv__GUARD__
    DECL_STRONG_TYPE(ddiv, float);
    #endif//_ddiv__GUARD__

    #ifndef _ddiv_pv__float__GUARD__
    #define _ddiv_pv__float__GUARD__
    DECL_STRONG_TYPE(ddiv_pv__float, float);
    #endif//_ddiv_pv__float__GUARD__

    #ifndef _ddiv_source__GUARD__
    #define _ddiv_source__GUARD__
    DECL_STRONG_TYPE(ddiv_source, spiderrock::protobuf::api::DDivSource);
    #endif//_ddiv_source__GUARD__

    #ifndef _atm_vol__GUARD__
    #define _atm_vol__GUARD__
    DECL_STRONG_TYPE(atm_vol, float);
    #endif//_atm_vol__GUARD__

    #ifndef _atm_ema__GUARD__
    #define _atm_ema__GUARD__
    DECL_STRONG_TYPE(atm_ema, float);
    #endif//_atm_ema__GUARD__

    #ifndef _u_prc_ratio__GUARD__
    #define _u_prc_ratio__GUARD__
    DECL_STRONG_TYPE(u_prc_ratio, double);
    #endif//_u_prc_ratio__GUARD__

    #ifndef _u_prc_ratio_ema__GUARD__
    #define _u_prc_ratio_ema__GUARD__
    DECL_STRONG_TYPE(u_prc_ratio_ema, double);
    #endif//_u_prc_ratio_ema__GUARD__

    #ifndef _sdiv__float__GUARD__
    #define _sdiv__float__GUARD__
    DECL_STRONG_TYPE(sdiv__float, float);
    #endif//_sdiv__float__GUARD__

    #ifndef _sdiv_ema__GUARD__
    #define _sdiv_ema__GUARD__
    DECL_STRONG_TYPE(sdiv_ema, float);
    #endif//_sdiv_ema__GUARD__

    #ifndef _min_cpadj_val__GUARD__
    #define _min_cpadj_val__GUARD__
    DECL_STRONG_TYPE(min_cpadj_val, double);
    #endif//_min_cpadj_val__GUARD__

    #ifndef _max_cpadj_val__GUARD__
    #define _max_cpadj_val__GUARD__
    DECL_STRONG_TYPE(max_cpadj_val, double);
    #endif//_max_cpadj_val__GUARD__

    #ifndef _cp_adj_type__GUARD__
    #define _cp_adj_type__GUARD__
    DECL_STRONG_TYPE(cp_adj_type, spiderrock::protobuf::api::CPAdjType);
    #endif//_cp_adj_type__GUARD__

    #ifndef _price_type__CalcPriceType__GUARD__
    #define _price_type__CalcPriceType__GUARD__
    DECL_STRONG_TYPE(price_type__CalcPriceType, spiderrock::protobuf::api::CalcPriceType);
    #endif//_price_type__CalcPriceType__GUARD__

    #ifndef _u_prc_driver_key__GUARD__
    #define _u_prc_driver_key__GUARD__
    DECL_STRONG_TYPE(u_prc_driver_key, ExpiryKey);
    #endif//_u_prc_driver_key__GUARD__

    #ifndef _u_prc_driver_type__GUARD__
    #define _u_prc_driver_type__GUARD__
    DECL_STRONG_TYPE(u_prc_driver_type, spiderrock::protobuf::api::SpdrKeyType);
    #endif//_u_prc_driver_type__GUARD__

    #ifndef _u_prc_driver__GUARD__
    #define _u_prc_driver__GUARD__
    DECL_STRONG_TYPE(u_prc_driver, double);
    #endif//_u_prc_driver__GUARD__

    #ifndef _axis_fuprc__GUARD__
    #define _axis_fuprc__GUARD__
    DECL_STRONG_TYPE(axis_fuprc, float);
    #endif//_axis_fuprc__GUARD__

    #ifndef _syn_spot__GUARD__
    #define _syn_spot__GUARD__
    DECL_STRONG_TYPE(syn_spot, double);
    #endif//_syn_spot__GUARD__

    #ifndef _v_width__GUARD__
    #define _v_width__GUARD__
    DECL_STRONG_TYPE(v_width, float);
    #endif//_v_width__GUARD__

    #ifndef _num_atm_strikes__GUARD__
    #define _num_atm_strikes__GUARD__
    DECL_STRONG_TYPE(num_atm_strikes, int32);
    #endif//_num_atm_strikes__GUARD__

    #ifndef _tradeable_status__GUARD__
    #define _tradeable_status__GUARD__
    DECL_STRONG_TYPE(tradeable_status, spiderrock::protobuf::api::TradeableStatus);
    #endif//_tradeable_status__GUARD__

    #ifndef _surface_result__SurfaceAdjResult__GUARD__
    #define _surface_result__SurfaceAdjResult__GUARD__
    DECL_STRONG_TYPE(surface_result__SurfaceAdjResult, spiderrock::protobuf::api::SurfaceAdjResult);
    #endif//_surface_result__SurfaceAdjResult__GUARD__

    #ifndef _net_timestamp__GUARD__
    #define _net_timestamp__GUARD__
    DECL_STRONG_TYPE(net_timestamp, int64);
    #endif//_net_timestamp__GUARD__

    #ifndef _timestamp__GUARD__
    #define _timestamp__GUARD__
    DECL_STRONG_TYPE(timestamp, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_timestamp__GUARD__

    #ifndef _ekey__GUARD__
    #define _ekey__GUARD__
    DECL_STRONG_TYPE(ekey, ExpiryKey);
    #endif//_ekey__GUARD__

    
    class LiveAtmVol_PKey {
        public:
        //using statements for all types used in this class
        using ekey = spiderrock::protobuf::api::ekey;

        private:
        ekey m_ekey{};

        public:
        void set_ekey(const ekey& value)  {
            m_ekey = value;
        }
        //templatized getters and setters
        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to LiveAtmVol_PKey::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to LiveAtmVol_PKey::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const ekey & value) { set_ekey(value); }


        LiveAtmVol_PKey() {}

        virtual ~LiveAtmVol_PKey() {
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
        bool IncludeEkey() const {
            return (m_ekey.ByteSizeLong() > 0);
        }


        size_t ByteSizeLong() const {
            size_t totalSize = 0;
            if ( IncludeEkey()) {
                SRProtobufCPP::ExpiryKeyLayout expiryKeyLayout;
                m_ekey.setCodecExpiryKey(expiryKeyLayout);
                totalSize += SRProtobufCPP::FieldCodec::ExpiryKeyFieldSize(10,expiryKeyLayout);
            }
            return totalSize;
        }

        void Encode(uint8_t*& dest, uint8_t* max) const {
            if ( IncludeEkey()) {
                SRProtobufCPP::ExpiryKeyLayout expiryKeyLayout;
                m_ekey.setCodecExpiryKey(expiryKeyLayout);
                dest = SRProtobufCPP::FieldCodec::EncodeExpiryKey(dest, 10, expiryKeyLayout);
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
                    case 10: {auto expiryKey = SRProtobufCPP::FieldCodec::DecodeExpiryKey(pos,max);
                        m_ekey.setFromCodec(expiryKey);
                        break;
                    }
                }
            }
        }

    };
    

    class LiveAtmVol {
        public:
        //using statements for all types used in this class
    
        using _meta = spiderrock::protobuf::api::_meta;
        using pkey = spiderrock::protobuf::api::LiveAtmVol_PKey;
        using ticker = spiderrock::protobuf::api::ticker__TickerKey;
        using u_prc = spiderrock::protobuf::api::u_prc__double;
        using years = spiderrock::protobuf::api::years__float;
        using rate = spiderrock::protobuf::api::rate__float;
        using ddiv = spiderrock::protobuf::api::ddiv;
        using ddiv_pv = spiderrock::protobuf::api::ddiv_pv__float;
        using ddiv_source = spiderrock::protobuf::api::ddiv_source;
        using atm_vol = spiderrock::protobuf::api::atm_vol;
        using atm_ema = spiderrock::protobuf::api::atm_ema;
        using u_prc_ratio = spiderrock::protobuf::api::u_prc_ratio;
        using u_prc_ratio_ema = spiderrock::protobuf::api::u_prc_ratio_ema;
        using sdiv = spiderrock::protobuf::api::sdiv__float;
        using sdiv_ema = spiderrock::protobuf::api::sdiv_ema;
        using min_cpadj_val = spiderrock::protobuf::api::min_cpadj_val;
        using max_cpadj_val = spiderrock::protobuf::api::max_cpadj_val;
        using cp_adj_type = spiderrock::protobuf::api::cp_adj_type;
        using price_type = spiderrock::protobuf::api::price_type__CalcPriceType;
        using u_prc_driver_key = spiderrock::protobuf::api::u_prc_driver_key;
        using u_prc_driver_type = spiderrock::protobuf::api::u_prc_driver_type;
        using u_prc_driver = spiderrock::protobuf::api::u_prc_driver;
        using axis_fuprc = spiderrock::protobuf::api::axis_fuprc;
        using syn_spot = spiderrock::protobuf::api::syn_spot;
        using v_width = spiderrock::protobuf::api::v_width;
        using num_atm_strikes = spiderrock::protobuf::api::num_atm_strikes;
        using tradeable_status = spiderrock::protobuf::api::tradeable_status;
        using surface_result = spiderrock::protobuf::api::surface_result__SurfaceAdjResult;
        using net_timestamp = spiderrock::protobuf::api::net_timestamp;
        using timestamp = spiderrock::protobuf::api::timestamp;

        private:
        _meta m__meta{};
        pkey m_pkey{};
        ticker m_ticker{};
        u_prc m_u_prc{};
        years m_years{};
        rate m_rate{};
        ddiv m_ddiv{};
        ddiv_pv m_ddiv_pv{};
        ddiv_source m_ddiv_source{};
        atm_vol m_atm_vol{};
        atm_ema m_atm_ema{};
        u_prc_ratio m_u_prc_ratio{};
        u_prc_ratio_ema m_u_prc_ratio_ema{};
        sdiv m_sdiv{};
        sdiv_ema m_sdiv_ema{};
        min_cpadj_val m_min_cpadj_val{};
        max_cpadj_val m_max_cpadj_val{};
        cp_adj_type m_cp_adj_type{};
        price_type m_price_type{};
        u_prc_driver_key m_u_prc_driver_key{};
        u_prc_driver_type m_u_prc_driver_type{};
        u_prc_driver m_u_prc_driver{};
        axis_fuprc m_axis_fuprc{};
        syn_spot m_syn_spot{};
        v_width m_v_width{};
        num_atm_strikes m_num_atm_strikes{};
        tradeable_status m_tradeable_status{};
        surface_result m_surface_result{};
        net_timestamp m_net_timestamp{};
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
        u_prc get_u_prc() const {
            return m_u_prc;
        }		
        years get_years() const {
            return m_years;
        }		
        rate get_rate() const {
            return m_rate;
        }		
        ddiv get_ddiv() const {
            return m_ddiv;
        }		
        ddiv_pv get_ddiv_pv() const {
            return m_ddiv_pv;
        }		
        ddiv_source get_ddiv_source() const {
            return m_ddiv_source;
        }		
        atm_vol get_atm_vol() const {
            return m_atm_vol;
        }		
        atm_ema get_atm_ema() const {
            return m_atm_ema;
        }		
        u_prc_ratio get_u_prc_ratio() const {
            return m_u_prc_ratio;
        }		
        u_prc_ratio_ema get_u_prc_ratio_ema() const {
            return m_u_prc_ratio_ema;
        }		
        sdiv get_sdiv() const {
            return m_sdiv;
        }		
        sdiv_ema get_sdiv_ema() const {
            return m_sdiv_ema;
        }		
        min_cpadj_val get_min_cpadj_val() const {
            return m_min_cpadj_val;
        }		
        max_cpadj_val get_max_cpadj_val() const {
            return m_max_cpadj_val;
        }		
        cp_adj_type get_cp_adj_type() const {
            return m_cp_adj_type;
        }		
        price_type get_price_type() const {
            return m_price_type;
        }		
        u_prc_driver_key get_u_prc_driver_key() const {
            return m_u_prc_driver_key;
        }		
        u_prc_driver_type get_u_prc_driver_type() const {
            return m_u_prc_driver_type;
        }		
        u_prc_driver get_u_prc_driver() const {
            return m_u_prc_driver;
        }		
        axis_fuprc get_axis_fuprc() const {
            return m_axis_fuprc;
        }		
        syn_spot get_syn_spot() const {
            return m_syn_spot;
        }		
        v_width get_v_width() const {
            return m_v_width;
        }		
        num_atm_strikes get_num_atm_strikes() const {
            return m_num_atm_strikes;
        }		
        tradeable_status get_tradeable_status() const {
            return m_tradeable_status;
        }		
        surface_result get_surface_result() const {
            return m_surface_result;
        }		
        net_timestamp get_net_timestamp() const {
            return m_net_timestamp;
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
        void set_u_prc(const u_prc& value)  {
            m_u_prc = value;
        }
        void set_years(const years& value)  {
            m_years = value;
        }
        void set_rate(const rate& value)  {
            m_rate = value;
        }
        void set_ddiv(const ddiv& value)  {
            m_ddiv = value;
        }
        void set_ddiv_pv(const ddiv_pv& value)  {
            m_ddiv_pv = value;
        }
        void set_ddiv_source(const ddiv_source& value)  {
            m_ddiv_source = value;
        }
        void set_atm_vol(const atm_vol& value)  {
            m_atm_vol = value;
        }
        void set_atm_ema(const atm_ema& value)  {
            m_atm_ema = value;
        }
        void set_u_prc_ratio(const u_prc_ratio& value)  {
            m_u_prc_ratio = value;
        }
        void set_u_prc_ratio_ema(const u_prc_ratio_ema& value)  {
            m_u_prc_ratio_ema = value;
        }
        void set_sdiv(const sdiv& value)  {
            m_sdiv = value;
        }
        void set_sdiv_ema(const sdiv_ema& value)  {
            m_sdiv_ema = value;
        }
        void set_min_cpadj_val(const min_cpadj_val& value)  {
            m_min_cpadj_val = value;
        }
        void set_max_cpadj_val(const max_cpadj_val& value)  {
            m_max_cpadj_val = value;
        }
        void set_cp_adj_type(const cp_adj_type& value)  {
            m_cp_adj_type = value;
        }
        void set_price_type(const price_type& value)  {
            m_price_type = value;
        }
        void set_u_prc_driver_key(const u_prc_driver_key& value)  {
            m_u_prc_driver_key = value;
        }
        void set_u_prc_driver_type(const u_prc_driver_type& value)  {
            m_u_prc_driver_type = value;
        }
        void set_u_prc_driver(const u_prc_driver& value)  {
            m_u_prc_driver = value;
        }
        void set_axis_fuprc(const axis_fuprc& value)  {
            m_axis_fuprc = value;
        }
        void set_syn_spot(const syn_spot& value)  {
            m_syn_spot = value;
        }
        void set_v_width(const v_width& value)  {
            m_v_width = value;
        }
        void set_num_atm_strikes(const num_atm_strikes& value)  {
            m_num_atm_strikes = value;
        }
        void set_tradeable_status(const tradeable_status& value)  {
            m_tradeable_status = value;
        }
        void set_surface_result(const surface_result& value)  {
            m_surface_result = value;
        }
        void set_net_timestamp(const net_timestamp& value)  {
            m_net_timestamp = value;
        }
        void set_timestamp(const timestamp& value)  {
            m_timestamp = value;
        }

        //templatized getters and setters

        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to LiveAtmVol::get()"); return T{}; }  // specializations for valid types are listed below the class definition

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
        void set(const u_prc & value) {
            set_u_prc(value);
        }
        void set(const years & value) {
            set_years(value);
        }
        void set(const rate & value) {
            set_rate(value);
        }
        void set(const ddiv & value) {
            set_ddiv(value);
        }
        void set(const ddiv_pv & value) {
            set_ddiv_pv(value);
        }
        void set(const ddiv_source & value) {
            set_ddiv_source(value);
        }
        void set(const atm_vol & value) {
            set_atm_vol(value);
        }
        void set(const atm_ema & value) {
            set_atm_ema(value);
        }
        void set(const u_prc_ratio & value) {
            set_u_prc_ratio(value);
        }
        void set(const u_prc_ratio_ema & value) {
            set_u_prc_ratio_ema(value);
        }
        void set(const sdiv & value) {
            set_sdiv(value);
        }
        void set(const sdiv_ema & value) {
            set_sdiv_ema(value);
        }
        void set(const min_cpadj_val & value) {
            set_min_cpadj_val(value);
        }
        void set(const max_cpadj_val & value) {
            set_max_cpadj_val(value);
        }
        void set(const cp_adj_type & value) {
            set_cp_adj_type(value);
        }
        void set(const price_type & value) {
            set_price_type(value);
        }
        void set(const u_prc_driver_key & value) {
            set_u_prc_driver_key(value);
        }
        void set(const u_prc_driver_type & value) {
            set_u_prc_driver_type(value);
        }
        void set(const u_prc_driver & value) {
            set_u_prc_driver(value);
        }
        void set(const axis_fuprc & value) {
            set_axis_fuprc(value);
        }
        void set(const syn_spot & value) {
            set_syn_spot(value);
        }
        void set(const v_width & value) {
            set_v_width(value);
        }
        void set(const num_atm_strikes & value) {
            set_num_atm_strikes(value);
        }
        void set(const tradeable_status & value) {
            set_tradeable_status(value);
        }
        void set(const surface_result & value) {
            set_surface_result(value);
        }
        void set(const net_timestamp & value) {
            set_net_timestamp(value);
        }
        void set(const timestamp & value) {
            set_timestamp(value);
        }

        void set(const LiveAtmVol & value) {
            set(value.m__meta);
            set(value.m_pkey);
            set(value.m_ticker);
            set(value.m_u_prc);
            set(value.m_years);
            set(value.m_rate);
            set(value.m_ddiv);
            set(value.m_ddiv_pv);
            set(value.m_ddiv_source);
            set(value.m_atm_vol);
            set(value.m_atm_ema);
            set(value.m_u_prc_ratio);
            set(value.m_u_prc_ratio_ema);
            set(value.m_sdiv);
            set(value.m_sdiv_ema);
            set(value.m_min_cpadj_val);
            set(value.m_max_cpadj_val);
            set(value.m_cp_adj_type);
            set(value.m_price_type);
            set(value.m_u_prc_driver_key);
            set(value.m_u_prc_driver_type);
            set(value.m_u_prc_driver);
            set(value.m_axis_fuprc);
            set(value.m_syn_spot);
            set(value.m_v_width);
            set(value.m_num_atm_strikes);
            set(value.m_tradeable_status);
            set(value.m_surface_result);
            set(value.m_net_timestamp);
            set(value.m_timestamp);
        }

        LiveAtmVol() {
            m__meta.set_message_type("LiveAtmVol");
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
            std::snprintf(reinterpret_cast<char*>(data), size, "\r\nP%05d%06zd", 1010, length);
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
            std::snprintf(const_cast<char*>(s->data()), s->size(), "\r\nP%05d%06zd", 1010, length);
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
             *this = LiveAtmVol{};
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
        bool IncludeUPrc() const {
            return !(m_u_prc == 0.0);
        }
        bool IncludeYears() const {
            return !(m_years == 0.0);
        }
        bool IncludeRate() const {
            return !(m_rate == 0.0);
        }
        bool IncludeDdiv() const {
            return !(m_ddiv == 0.0);
        }
        bool IncludeDdivPv() const {
            return !(m_ddiv_pv == 0.0);
        }
        bool IncludeAtmVol() const {
            return !(m_atm_vol == 0.0);
        }
        bool IncludeAtmEma() const {
            return !(m_atm_ema == 0.0);
        }
        bool IncludeUPrcRatio() const {
            return !(m_u_prc_ratio == 0.0);
        }
        bool IncludeUPrcRatioEma() const {
            return !(m_u_prc_ratio_ema == 0.0);
        }
        bool IncludeSdiv() const {
            return !(m_sdiv == 0.0);
        }
        bool IncludeSdivEma() const {
            return !(m_sdiv_ema == 0.0);
        }
        bool IncludeMinCpadjVal() const {
            return !(m_min_cpadj_val == 0.0);
        }
        bool IncludeMaxCpadjVal() const {
            return !(m_max_cpadj_val == 0.0);
        }
        bool IncludeUPrcDriverKey() const {
            return (m_u_prc_driver_key.ByteSizeLong() > 0);
        }
        bool IncludeUPrcDriver() const {
            return !(m_u_prc_driver == 0.0);
        }
        bool IncludeAxisFuprc() const {
            return !(m_axis_fuprc == 0.0);
        }
        bool IncludeSynSpot() const {
            return !(m_syn_spot == 0.0);
        }
        bool IncludeVWidth() const {
            return !(m_v_width == 0.0);
        }
        bool IncludeNumAtmStrikes() const {
            return !(m_num_atm_strikes == 0);
        }
        bool IncludeNetTimestamp() const {
            return !(m_net_timestamp == 0);
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
                SRProtobufCPP::TickerKeyLayout tickerKeyLayout{};
                m_ticker.setCodecTickerKey(tickerKeyLayout);
                totalSize += SRProtobufCPP::FieldCodec::TickerKeyFieldSize(100, tickerKeyLayout);
            }
            if ( IncludeUPrc()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(103,m_u_prc);
            }
            if ( IncludeYears()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(106,m_years);
            }
            if ( IncludeRate()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(109,m_rate);
            }
            if ( IncludeDdiv()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(112,m_ddiv);
            }
            if ( IncludeDdivPv()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(115,m_ddiv_pv);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(118,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::DDivSource>(m_ddiv_source)));
            if ( IncludeAtmVol()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(121,m_atm_vol);
            }
            if ( IncludeAtmEma()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(124,m_atm_ema);
            }
            if ( IncludeUPrcRatio()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(127,m_u_prc_ratio);
            }
            if ( IncludeUPrcRatioEma()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(130,m_u_prc_ratio_ema);
            }
            if ( IncludeSdiv()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(133,m_sdiv);
            }
            if ( IncludeSdivEma()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(136,m_sdiv_ema);
            }
            if ( IncludeMinCpadjVal()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(139,m_min_cpadj_val);
            }
            if ( IncludeMaxCpadjVal()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(142,m_max_cpadj_val);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(145,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::CPAdjType>(m_cp_adj_type)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(148,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::CalcPriceType>(m_price_type)));
            if ( IncludeUPrcDriverKey()) {
                SRProtobufCPP::ExpiryKeyLayout expiryKeyLayout{};
                m_u_prc_driver_key.setCodecExpiryKey(expiryKeyLayout);
                totalSize += SRProtobufCPP::FieldCodec::ExpiryKeyFieldSize(151, expiryKeyLayout);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(154,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>(m_u_prc_driver_type)));
            if ( IncludeUPrcDriver()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(157,m_u_prc_driver);
            }
            if ( IncludeAxisFuprc()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(160,m_axis_fuprc);
            }
            if ( IncludeSynSpot()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(163,m_syn_spot);
            }
            if ( IncludeVWidth()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(166,m_v_width);
            }
            if ( IncludeNumAtmStrikes()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(169,m_num_atm_strikes);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(172,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::TradeableStatus>(m_tradeable_status)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(175,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SurfaceAdjResult>(m_surface_result)));
            if ( IncludeNetTimestamp()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(178,m_net_timestamp);
            }
            if ( IncludeTimestamp()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(181, m_timestamp);
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
                SRProtobufCPP::TickerKeyLayout tickerKeyLayout{};
                m_ticker.setCodecTickerKey(tickerKeyLayout);
                dest = SRProtobufCPP::FieldCodec::EncodeTickerKey(dest, 100, tickerKeyLayout);
            }
            if ( IncludeUPrc()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,103,m_u_prc);
            }
            if ( IncludeYears()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,106,m_years);
            }
            if ( IncludeRate()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,109,m_rate);
            }
            if ( IncludeDdiv()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,112,m_ddiv);
            }
            if ( IncludeDdivPv()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,115,m_ddiv_pv);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,118,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::DDivSource>(m_ddiv_source)));
            if ( IncludeAtmVol()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,121,m_atm_vol);
            }
            if ( IncludeAtmEma()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,124,m_atm_ema);
            }
            if ( IncludeUPrcRatio()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,127,m_u_prc_ratio);
            }
            if ( IncludeUPrcRatioEma()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,130,m_u_prc_ratio_ema);
            }
            if ( IncludeSdiv()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,133,m_sdiv);
            }
            if ( IncludeSdivEma()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,136,m_sdiv_ema);
            }
            if ( IncludeMinCpadjVal()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,139,m_min_cpadj_val);
            }
            if ( IncludeMaxCpadjVal()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,142,m_max_cpadj_val);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,145,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::CPAdjType>(m_cp_adj_type)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,148,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::CalcPriceType>(m_price_type)));
            if ( IncludeUPrcDriverKey()) {
                SRProtobufCPP::ExpiryKeyLayout expiryKeyLayout{};
                m_u_prc_driver_key.setCodecExpiryKey(expiryKeyLayout);
                dest = SRProtobufCPP::FieldCodec::EncodeExpiryKey(dest, 151, expiryKeyLayout);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,154,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>(m_u_prc_driver_type)));
            if ( IncludeUPrcDriver()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,157,m_u_prc_driver);
            }
            if ( IncludeAxisFuprc()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,160,m_axis_fuprc);
            }
            if ( IncludeSynSpot()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,163,m_syn_spot);
            }
            if ( IncludeVWidth()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,166,m_v_width);
            }
            if ( IncludeNumAtmStrikes()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,169,m_num_atm_strikes);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,172,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::TradeableStatus>(m_tradeable_status)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,175,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SurfaceAdjResult>(m_surface_result)));
            if ( IncludeNetTimestamp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,178,m_net_timestamp);
            }
            if ( IncludeTimestamp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 181, m_timestamp);
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
                    case 103: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_u_prc = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 106: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_years = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 109: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_rate = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 112: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_ddiv = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 115: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_ddiv_pv = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 118: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_ddiv_source = static_cast<spiderrock::protobuf::api::DDivSource>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 121: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_atm_vol = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 124: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_atm_ema = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 127: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_u_prc_ratio = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 130: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_u_prc_ratio_ema = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 133: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_sdiv = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 136: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_sdiv_ema = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 139: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_min_cpadj_val = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 142: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_max_cpadj_val = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 145: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_cp_adj_type = static_cast<spiderrock::protobuf::api::CPAdjType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 148: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_price_type = static_cast<spiderrock::protobuf::api::CalcPriceType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 151: {
                        if (tagType == SRProtobufCPP::ExpiryKeyCodec::TagType) {
                            auto expiryKey = SRProtobufCPP::FieldCodec::DecodeExpiryKey(pos,max);
                            m_u_prc_driver_key.setFromCodec(expiryKey);
                        }
                        break;
                    }
                    case 154: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_u_prc_driver_type = static_cast<spiderrock::protobuf::api::SpdrKeyType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 157: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_u_prc_driver = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 160: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_axis_fuprc = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 163: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_syn_spot = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 166: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_v_width = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 169: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_num_atm_strikes = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 172: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_tradeable_status = static_cast<spiderrock::protobuf::api::TradeableStatus>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 175: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_surface_result = static_cast<spiderrock::protobuf::api::SurfaceAdjResult>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 178: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_net_timestamp = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 181: {
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

    template<> inline const auto LiveAtmVol::get<LiveAtmVol::_meta>() const { return LiveAtmVol::_meta{ m__meta}; }
    template<> inline const auto LiveAtmVol::get<LiveAtmVol::pkey>() const { return LiveAtmVol::pkey{ m_pkey}; }
    template<> inline const auto LiveAtmVol::get<LiveAtmVol::ticker>() const { return LiveAtmVol::ticker{ m_ticker}; }
    template<> inline const auto LiveAtmVol::get<LiveAtmVol::u_prc>() const { return m_u_prc; }
    template<> inline const auto LiveAtmVol::get<LiveAtmVol::years>() const { return m_years; }
    template<> inline const auto LiveAtmVol::get<LiveAtmVol::rate>() const { return m_rate; }
    template<> inline const auto LiveAtmVol::get<LiveAtmVol::ddiv>() const { return m_ddiv; }
    template<> inline const auto LiveAtmVol::get<LiveAtmVol::ddiv_pv>() const { return m_ddiv_pv; }
    template<> inline const auto LiveAtmVol::get<LiveAtmVol::ddiv_source>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::DDivSource>( m_ddiv_source)); }
    template<> inline const auto LiveAtmVol::get<LiveAtmVol::atm_vol>() const { return m_atm_vol; }
    template<> inline const auto LiveAtmVol::get<LiveAtmVol::atm_ema>() const { return m_atm_ema; }
    template<> inline const auto LiveAtmVol::get<LiveAtmVol::u_prc_ratio>() const { return m_u_prc_ratio; }
    template<> inline const auto LiveAtmVol::get<LiveAtmVol::u_prc_ratio_ema>() const { return m_u_prc_ratio_ema; }
    template<> inline const auto LiveAtmVol::get<LiveAtmVol::sdiv>() const { return m_sdiv; }
    template<> inline const auto LiveAtmVol::get<LiveAtmVol::sdiv_ema>() const { return m_sdiv_ema; }
    template<> inline const auto LiveAtmVol::get<LiveAtmVol::min_cpadj_val>() const { return m_min_cpadj_val; }
    template<> inline const auto LiveAtmVol::get<LiveAtmVol::max_cpadj_val>() const { return m_max_cpadj_val; }
    template<> inline const auto LiveAtmVol::get<LiveAtmVol::cp_adj_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::CPAdjType>( m_cp_adj_type)); }
    template<> inline const auto LiveAtmVol::get<LiveAtmVol::price_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::CalcPriceType>( m_price_type)); }
    template<> inline const auto LiveAtmVol::get<LiveAtmVol::u_prc_driver_key>() const { return LiveAtmVol::u_prc_driver_key{ m_u_prc_driver_key}; }
    template<> inline const auto LiveAtmVol::get<LiveAtmVol::u_prc_driver_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>( m_u_prc_driver_type)); }
    template<> inline const auto LiveAtmVol::get<LiveAtmVol::u_prc_driver>() const { return m_u_prc_driver; }
    template<> inline const auto LiveAtmVol::get<LiveAtmVol::axis_fuprc>() const { return m_axis_fuprc; }
    template<> inline const auto LiveAtmVol::get<LiveAtmVol::syn_spot>() const { return m_syn_spot; }
    template<> inline const auto LiveAtmVol::get<LiveAtmVol::v_width>() const { return m_v_width; }
    template<> inline const auto LiveAtmVol::get<LiveAtmVol::num_atm_strikes>() const { return m_num_atm_strikes; }
    template<> inline const auto LiveAtmVol::get<LiveAtmVol::tradeable_status>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::TradeableStatus>( m_tradeable_status)); }
    template<> inline const auto LiveAtmVol::get<LiveAtmVol::surface_result>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SurfaceAdjResult>( m_surface_result)); }
    template<> inline const auto LiveAtmVol::get<LiveAtmVol::net_timestamp>() const { return m_net_timestamp; }
    template<> inline const auto LiveAtmVol::get<LiveAtmVol::timestamp>() const { return m_timestamp; }
    template<> inline const auto LiveAtmVol_PKey::get<LiveAtmVol_PKey::ekey>() const { return LiveAtmVol_PKey::ekey{m_ekey}; }
    
    // ostream operators for all classes above, output should adhere to a JSON format

    inline std::ostream& operator<<(std::ostream &o, const LiveAtmVol_PKey& m) {
        o << "\"ekey\":{" << m.get<LiveAtmVol_PKey::ekey>() << "}";
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const LiveAtmVol& m) {
        o << "\"_meta\":{" << m.get<LiveAtmVol::_meta>() << "}";
        o << ",\"pkey\":{" << m.get<LiveAtmVol::pkey>() << "}";
        o << ",\"ticker\":{" << m.get<LiveAtmVol::ticker>() << "}";
        o << ",\"u_prc\":" << m.get<LiveAtmVol::u_prc>();
        o << ",\"years\":" << m.get<LiveAtmVol::years>();
        o << ",\"rate\":" << m.get<LiveAtmVol::rate>();
        o << ",\"ddiv\":" << m.get<LiveAtmVol::ddiv>();
        o << ",\"ddiv_pv\":" << m.get<LiveAtmVol::ddiv_pv>();
        o << ",\"ddiv_source\":" << (int64_t)m.get<LiveAtmVol::ddiv_source>();
        o << ",\"atm_vol\":" << m.get<LiveAtmVol::atm_vol>();
        o << ",\"atm_ema\":" << m.get<LiveAtmVol::atm_ema>();
        o << ",\"u_prc_ratio\":" << m.get<LiveAtmVol::u_prc_ratio>();
        o << ",\"u_prc_ratio_ema\":" << m.get<LiveAtmVol::u_prc_ratio_ema>();
        o << ",\"sdiv\":" << m.get<LiveAtmVol::sdiv>();
        o << ",\"sdiv_ema\":" << m.get<LiveAtmVol::sdiv_ema>();
        o << ",\"min_cpadj_val\":" << m.get<LiveAtmVol::min_cpadj_val>();
        o << ",\"max_cpadj_val\":" << m.get<LiveAtmVol::max_cpadj_val>();
        o << ",\"cp_adj_type\":" << (int64_t)m.get<LiveAtmVol::cp_adj_type>();
        o << ",\"price_type\":" << (int64_t)m.get<LiveAtmVol::price_type>();
        o << ",\"u_prc_driver_key\":{" << m.get<LiveAtmVol::u_prc_driver_key>() << "}";
        o << ",\"u_prc_driver_type\":" << (int64_t)m.get<LiveAtmVol::u_prc_driver_type>();
        o << ",\"u_prc_driver\":" << m.get<LiveAtmVol::u_prc_driver>();
        o << ",\"axis_fuprc\":" << m.get<LiveAtmVol::axis_fuprc>();
        o << ",\"syn_spot\":" << m.get<LiveAtmVol::syn_spot>();
        o << ",\"v_width\":" << m.get<LiveAtmVol::v_width>();
        o << ",\"num_atm_strikes\":" << m.get<LiveAtmVol::num_atm_strikes>();
        o << ",\"tradeable_status\":" << (int64_t)m.get<LiveAtmVol::tradeable_status>();
        o << ",\"surface_result\":" << (int64_t)m.get<LiveAtmVol::surface_result>();
        o << ",\"net_timestamp\":" << m.get<LiveAtmVol::net_timestamp>();
        {
            std::time_t tt = m.get<LiveAtmVol::timestamp>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"timestamp\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        return o;
    }

}
}
}