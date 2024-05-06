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

    #ifndef _trade_date__GUARD__
    #define _trade_date__GUARD__
    DECL_STRONG_TYPE(trade_date, DateKey);
    #endif//_trade_date__GUARD__

    #ifndef _u_bid__GUARD__
    #define _u_bid__GUARD__
    DECL_STRONG_TYPE(u_bid, double);
    #endif//_u_bid__GUARD__

    #ifndef _u_ask__GUARD__
    #define _u_ask__GUARD__
    DECL_STRONG_TYPE(u_ask, double);
    #endif//_u_ask__GUARD__

    #ifndef _u_sr_cls__GUARD__
    #define _u_sr_cls__GUARD__
    DECL_STRONG_TYPE(u_sr_cls, double);
    #endif//_u_sr_cls__GUARD__

    #ifndef _u_close__GUARD__
    #define _u_close__GUARD__
    DECL_STRONG_TYPE(u_close, double);
    #endif//_u_close__GUARD__

    #ifndef _bid_prc__float__GUARD__
    #define _bid_prc__float__GUARD__
    DECL_STRONG_TYPE(bid_prc__float, float);
    #endif//_bid_prc__float__GUARD__

    #ifndef _ask_prc__float__GUARD__
    #define _ask_prc__float__GUARD__
    DECL_STRONG_TYPE(ask_prc__float, float);
    #endif//_ask_prc__float__GUARD__

    #ifndef _sr_cls_prc__double__GUARD__
    #define _sr_cls_prc__double__GUARD__
    DECL_STRONG_TYPE(sr_cls_prc__double, double);
    #endif//_sr_cls_prc__double__GUARD__

    #ifndef _close_prc__double__GUARD__
    #define _close_prc__double__GUARD__
    DECL_STRONG_TYPE(close_prc__double, double);
    #endif//_close_prc__double__GUARD__

    #ifndef _bid_iv__GUARD__
    #define _bid_iv__GUARD__
    DECL_STRONG_TYPE(bid_iv, float);
    #endif//_bid_iv__GUARD__

    #ifndef _ask_iv__GUARD__
    #define _ask_iv__GUARD__
    DECL_STRONG_TYPE(ask_iv, float);
    #endif//_ask_iv__GUARD__

    #ifndef _sr_prc__GUARD__
    #define _sr_prc__GUARD__
    DECL_STRONG_TYPE(sr_prc, float);
    #endif//_sr_prc__GUARD__

    #ifndef _sr_vol__GUARD__
    #define _sr_vol__GUARD__
    DECL_STRONG_TYPE(sr_vol, float);
    #endif//_sr_vol__GUARD__

    #ifndef _sr_src__GUARD__
    #define _sr_src__GUARD__
    DECL_STRONG_TYPE(sr_src, spiderrock::protobuf::api::MarkSource);
    #endif//_sr_src__GUARD__

    #ifndef _de__GUARD__
    #define _de__GUARD__
    DECL_STRONG_TYPE(de, float);
    #endif//_de__GUARD__

    #ifndef _ga__GUARD__
    #define _ga__GUARD__
    DECL_STRONG_TYPE(ga, float);
    #endif//_ga__GUARD__

    #ifndef _th__GUARD__
    #define _th__GUARD__
    DECL_STRONG_TYPE(th, float);
    #endif//_th__GUARD__

    #ifndef _ve__GUARD__
    #define _ve__GUARD__
    DECL_STRONG_TYPE(ve, float);
    #endif//_ve__GUARD__

    #ifndef _vo__GUARD__
    #define _vo__GUARD__
    DECL_STRONG_TYPE(vo, float);
    #endif//_vo__GUARD__

    #ifndef _va__GUARD__
    #define _va__GUARD__
    DECL_STRONG_TYPE(va, float);
    #endif//_va__GUARD__

    #ifndef _rh__GUARD__
    #define _rh__GUARD__
    DECL_STRONG_TYPE(rh, float);
    #endif//_rh__GUARD__

    #ifndef _ph__GUARD__
    #define _ph__GUARD__
    DECL_STRONG_TYPE(ph, float);
    #endif//_ph__GUARD__

    #ifndef _sr_slope__GUARD__
    #define _sr_slope__GUARD__
    DECL_STRONG_TYPE(sr_slope, float);
    #endif//_sr_slope__GUARD__

    #ifndef _de_decay__GUARD__
    #define _de_decay__GUARD__
    DECL_STRONG_TYPE(de_decay, float);
    #endif//_de_decay__GUARD__

    #ifndef _sdiv__float__GUARD__
    #define _sdiv__float__GUARD__
    DECL_STRONG_TYPE(sdiv__float, float);
    #endif//_sdiv__float__GUARD__

    #ifndef _ddiv__GUARD__
    #define _ddiv__GUARD__
    DECL_STRONG_TYPE(ddiv, float);
    #endif//_ddiv__GUARD__

    #ifndef _rate__float__GUARD__
    #define _rate__float__GUARD__
    DECL_STRONG_TYPE(rate__float, float);
    #endif//_rate__float__GUARD__

    #ifndef _years__float__GUARD__
    #define _years__float__GUARD__
    DECL_STRONG_TYPE(years__float, float);
    #endif//_years__float__GUARD__

    #ifndef _error__int32__GUARD__
    #define _error__int32__GUARD__
    DECL_STRONG_TYPE(error__int32, int32);
    #endif//_error__int32__GUARD__

    #ifndef _corp_action__GUARD__
    #define _corp_action__GUARD__
    DECL_STRONG_TYPE(corp_action, string);
    #endif//_corp_action__GUARD__

    #ifndef _timestamp__GUARD__
    #define _timestamp__GUARD__
    DECL_STRONG_TYPE(timestamp, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_timestamp__GUARD__

    #ifndef _okey__GUARD__
    #define _okey__GUARD__
    DECL_STRONG_TYPE(okey, OptionKey);
    #endif//_okey__GUARD__

    
    class OptionOpenMark_PKey {
        public:
        //using statements for all types used in this class
        using okey = spiderrock::protobuf::api::okey;

        private:
        okey m_okey{};

        public:
        void set_okey(const okey& value)  {
            m_okey = value;
        }
        //templatized getters and setters
        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to OptionOpenMark_PKey::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to OptionOpenMark_PKey::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const okey & value) { set_okey(value); }


        OptionOpenMark_PKey() {}

        virtual ~OptionOpenMark_PKey() {
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
        bool IncludeOkey() const {
            return (m_okey.ByteSizeLong() > 0);
        }


        size_t ByteSizeLong() const {
            size_t totalSize = 0;
            if ( IncludeOkey()) {
                SRProtobufCPP::OptionKeyLayout optionKeyLayout;
                m_okey.setCodecOptionKey(optionKeyLayout);
                totalSize += SRProtobufCPP::FieldCodec::OptionKeyFieldSize(10,optionKeyLayout);
            }
            return totalSize;
        }

        void Encode(uint8_t*& dest, uint8_t* max) const {
            if ( IncludeOkey()) {
                SRProtobufCPP::OptionKeyLayout optionKeyLayout;
                m_okey.setCodecOptionKey(optionKeyLayout);
                dest = SRProtobufCPP::FieldCodec::EncodeOptionKey(dest, 10, optionKeyLayout);
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
                        auto optionKey = SRProtobufCPP::FieldCodec::DecodeOptionKey(pos,max);
                        m_okey.setFromCodec(optionKey);
                        break;
                    }
                }
            }
        }

    };
    

    class OptionOpenMark {
        public:
        //using statements for all types used in this class
    
        using _meta = spiderrock::protobuf::api::_meta;
        using pkey = spiderrock::protobuf::api::OptionOpenMark_PKey;
        using trade_date = spiderrock::protobuf::api::trade_date;
        using u_bid = spiderrock::protobuf::api::u_bid;
        using u_ask = spiderrock::protobuf::api::u_ask;
        using u_sr_cls = spiderrock::protobuf::api::u_sr_cls;
        using u_close = spiderrock::protobuf::api::u_close;
        using bid_prc = spiderrock::protobuf::api::bid_prc__float;
        using ask_prc = spiderrock::protobuf::api::ask_prc__float;
        using sr_cls_prc = spiderrock::protobuf::api::sr_cls_prc__double;
        using close_prc = spiderrock::protobuf::api::close_prc__double;
        using bid_iv = spiderrock::protobuf::api::bid_iv;
        using ask_iv = spiderrock::protobuf::api::ask_iv;
        using sr_prc = spiderrock::protobuf::api::sr_prc;
        using sr_vol = spiderrock::protobuf::api::sr_vol;
        using sr_src = spiderrock::protobuf::api::sr_src;
        using de = spiderrock::protobuf::api::de;
        using ga = spiderrock::protobuf::api::ga;
        using th = spiderrock::protobuf::api::th;
        using ve = spiderrock::protobuf::api::ve;
        using vo = spiderrock::protobuf::api::vo;
        using va = spiderrock::protobuf::api::va;
        using rh = spiderrock::protobuf::api::rh;
        using ph = spiderrock::protobuf::api::ph;
        using sr_slope = spiderrock::protobuf::api::sr_slope;
        using de_decay = spiderrock::protobuf::api::de_decay;
        using sdiv = spiderrock::protobuf::api::sdiv__float;
        using ddiv = spiderrock::protobuf::api::ddiv;
        using rate = spiderrock::protobuf::api::rate__float;
        using years = spiderrock::protobuf::api::years__float;
        using error = spiderrock::protobuf::api::error__int32;
        using corp_action = spiderrock::protobuf::api::corp_action;
        using timestamp = spiderrock::protobuf::api::timestamp;

        private:
        _meta m__meta{};
        pkey m_pkey{};
        trade_date m_trade_date{};
        u_bid m_u_bid{};
        u_ask m_u_ask{};
        u_sr_cls m_u_sr_cls{};
        u_close m_u_close{};
        bid_prc m_bid_prc{};
        ask_prc m_ask_prc{};
        sr_cls_prc m_sr_cls_prc{};
        close_prc m_close_prc{};
        bid_iv m_bid_iv{};
        ask_iv m_ask_iv{};
        sr_prc m_sr_prc{};
        sr_vol m_sr_vol{};
        sr_src m_sr_src{};
        de m_de{};
        ga m_ga{};
        th m_th{};
        ve m_ve{};
        vo m_vo{};
        va m_va{};
        rh m_rh{};
        ph m_ph{};
        sr_slope m_sr_slope{};
        de_decay m_de_decay{};
        sdiv m_sdiv{};
        ddiv m_ddiv{};
        rate m_rate{};
        years m_years{};
        error m_error{};
        corp_action m_corp_action{};
        timestamp m_timestamp{};

        static constexpr int _mlinkHeaderLength = 14;

        public:		
        _meta get__meta() const {
            return m__meta;
        }		
        pkey get_pkey() const {
            return m_pkey;
        }		
        trade_date get_trade_date() const {
            return m_trade_date;
        }		
        u_bid get_u_bid() const {
            return m_u_bid;
        }		
        u_ask get_u_ask() const {
            return m_u_ask;
        }		
        u_sr_cls get_u_sr_cls() const {
            return m_u_sr_cls;
        }		
        u_close get_u_close() const {
            return m_u_close;
        }		
        bid_prc get_bid_prc() const {
            return m_bid_prc;
        }		
        ask_prc get_ask_prc() const {
            return m_ask_prc;
        }		
        sr_cls_prc get_sr_cls_prc() const {
            return m_sr_cls_prc;
        }		
        close_prc get_close_prc() const {
            return m_close_prc;
        }		
        bid_iv get_bid_iv() const {
            return m_bid_iv;
        }		
        ask_iv get_ask_iv() const {
            return m_ask_iv;
        }		
        sr_prc get_sr_prc() const {
            return m_sr_prc;
        }		
        sr_vol get_sr_vol() const {
            return m_sr_vol;
        }		
        sr_src get_sr_src() const {
            return m_sr_src;
        }		
        de get_de() const {
            return m_de;
        }		
        ga get_ga() const {
            return m_ga;
        }		
        th get_th() const {
            return m_th;
        }		
        ve get_ve() const {
            return m_ve;
        }		
        vo get_vo() const {
            return m_vo;
        }		
        va get_va() const {
            return m_va;
        }		
        rh get_rh() const {
            return m_rh;
        }		
        ph get_ph() const {
            return m_ph;
        }		
        sr_slope get_sr_slope() const {
            return m_sr_slope;
        }		
        de_decay get_de_decay() const {
            return m_de_decay;
        }		
        sdiv get_sdiv() const {
            return m_sdiv;
        }		
        ddiv get_ddiv() const {
            return m_ddiv;
        }		
        rate get_rate() const {
            return m_rate;
        }		
        years get_years() const {
            return m_years;
        }		
        error get_error() const {
            return m_error;
        }		
        corp_action get_corp_action() const {
            return m_corp_action;
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
        void set_trade_date(const trade_date& value)  {
            m_trade_date = value;
        }
        void set_u_bid(const u_bid& value)  {
            m_u_bid = value;
        }
        void set_u_ask(const u_ask& value)  {
            m_u_ask = value;
        }
        void set_u_sr_cls(const u_sr_cls& value)  {
            m_u_sr_cls = value;
        }
        void set_u_close(const u_close& value)  {
            m_u_close = value;
        }
        void set_bid_prc(const bid_prc& value)  {
            m_bid_prc = value;
        }
        void set_ask_prc(const ask_prc& value)  {
            m_ask_prc = value;
        }
        void set_sr_cls_prc(const sr_cls_prc& value)  {
            m_sr_cls_prc = value;
        }
        void set_close_prc(const close_prc& value)  {
            m_close_prc = value;
        }
        void set_bid_iv(const bid_iv& value)  {
            m_bid_iv = value;
        }
        void set_ask_iv(const ask_iv& value)  {
            m_ask_iv = value;
        }
        void set_sr_prc(const sr_prc& value)  {
            m_sr_prc = value;
        }
        void set_sr_vol(const sr_vol& value)  {
            m_sr_vol = value;
        }
        void set_sr_src(const sr_src& value)  {
            m_sr_src = value;
        }
        void set_de(const de& value)  {
            m_de = value;
        }
        void set_ga(const ga& value)  {
            m_ga = value;
        }
        void set_th(const th& value)  {
            m_th = value;
        }
        void set_ve(const ve& value)  {
            m_ve = value;
        }
        void set_vo(const vo& value)  {
            m_vo = value;
        }
        void set_va(const va& value)  {
            m_va = value;
        }
        void set_rh(const rh& value)  {
            m_rh = value;
        }
        void set_ph(const ph& value)  {
            m_ph = value;
        }
        void set_sr_slope(const sr_slope& value)  {
            m_sr_slope = value;
        }
        void set_de_decay(const de_decay& value)  {
            m_de_decay = value;
        }
        void set_sdiv(const sdiv& value)  {
            m_sdiv = value;
        }
        void set_ddiv(const ddiv& value)  {
            m_ddiv = value;
        }
        void set_rate(const rate& value)  {
            m_rate = value;
        }
        void set_years(const years& value)  {
            m_years = value;
        }
        void set_error(const error& value)  {
            m_error = value;
        }
        void set_corp_action(const corp_action& value)  {
            m_corp_action = value;
        }
        void set_timestamp(const timestamp& value)  {
            m_timestamp = value;
        }

        //templatized getters and setters

        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to OptionOpenMark::get()"); return T{}; }  // specializations for valid types are listed below the class definition

        //specializations for set functions for the valid types
    
        void set(const _meta & value) {
            set__meta(value);
        }
        void set(const pkey & value) {
            set_pkey(value);
        }
        void set(const trade_date & value) {
            set_trade_date(value);
        }
        void set(const u_bid & value) {
            set_u_bid(value);
        }
        void set(const u_ask & value) {
            set_u_ask(value);
        }
        void set(const u_sr_cls & value) {
            set_u_sr_cls(value);
        }
        void set(const u_close & value) {
            set_u_close(value);
        }
        void set(const bid_prc & value) {
            set_bid_prc(value);
        }
        void set(const ask_prc & value) {
            set_ask_prc(value);
        }
        void set(const sr_cls_prc & value) {
            set_sr_cls_prc(value);
        }
        void set(const close_prc & value) {
            set_close_prc(value);
        }
        void set(const bid_iv & value) {
            set_bid_iv(value);
        }
        void set(const ask_iv & value) {
            set_ask_iv(value);
        }
        void set(const sr_prc & value) {
            set_sr_prc(value);
        }
        void set(const sr_vol & value) {
            set_sr_vol(value);
        }
        void set(const sr_src & value) {
            set_sr_src(value);
        }
        void set(const de & value) {
            set_de(value);
        }
        void set(const ga & value) {
            set_ga(value);
        }
        void set(const th & value) {
            set_th(value);
        }
        void set(const ve & value) {
            set_ve(value);
        }
        void set(const vo & value) {
            set_vo(value);
        }
        void set(const va & value) {
            set_va(value);
        }
        void set(const rh & value) {
            set_rh(value);
        }
        void set(const ph & value) {
            set_ph(value);
        }
        void set(const sr_slope & value) {
            set_sr_slope(value);
        }
        void set(const de_decay & value) {
            set_de_decay(value);
        }
        void set(const sdiv & value) {
            set_sdiv(value);
        }
        void set(const ddiv & value) {
            set_ddiv(value);
        }
        void set(const rate & value) {
            set_rate(value);
        }
        void set(const years & value) {
            set_years(value);
        }
        void set(const error & value) {
            set_error(value);
        }
        void set(const corp_action & value) {
            set_corp_action(value);
        }
        void set(const timestamp & value) {
            set_timestamp(value);
        }

        void set(const OptionOpenMark & value) {
            set(value.m__meta);
            set(value.m_pkey);
            set(value.m_trade_date);
            set(value.m_u_bid);
            set(value.m_u_ask);
            set(value.m_u_sr_cls);
            set(value.m_u_close);
            set(value.m_bid_prc);
            set(value.m_ask_prc);
            set(value.m_sr_cls_prc);
            set(value.m_close_prc);
            set(value.m_bid_iv);
            set(value.m_ask_iv);
            set(value.m_sr_prc);
            set(value.m_sr_vol);
            set(value.m_sr_src);
            set(value.m_de);
            set(value.m_ga);
            set(value.m_th);
            set(value.m_ve);
            set(value.m_vo);
            set(value.m_va);
            set(value.m_rh);
            set(value.m_ph);
            set(value.m_sr_slope);
            set(value.m_de_decay);
            set(value.m_sdiv);
            set(value.m_ddiv);
            set(value.m_rate);
            set(value.m_years);
            set(value.m_error);
            set(value.m_corp_action);
            set(value.m_timestamp);
        }

        OptionOpenMark() {
            m__meta.set_message_type("OptionOpenMark");
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
            std::snprintf(reinterpret_cast<char*>(data), size, "\r\nP%05d%06zd", 3145, length);
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
            std::snprintf(const_cast<char*>(s->data()), s->size(), "\r\nP%05d%06zd", 3145, length);
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
             *this = OptionOpenMark{};
        }
        bool IncludeMeta() const {
            return (m__meta.ByteSizeLong() > 0);
        }
        bool IncludePkey() const {
            return (m_pkey.ByteSizeLong() > 0);
        }
        bool IncludeTradeDate() const {
            return (m_trade_date.ByteSizeLong() > 0);
        }
        bool IncludeUBid() const {
            return !(m_u_bid == 0.0);
        }
        bool IncludeUAsk() const {
            return !(m_u_ask == 0.0);
        }
        bool IncludeUSrCls() const {
            return !(m_u_sr_cls == 0.0);
        }
        bool IncludeUClose() const {
            return !(m_u_close == 0.0);
        }
        bool IncludeBidPrc() const {
            return !(m_bid_prc == 0.0);
        }
        bool IncludeAskPrc() const {
            return !(m_ask_prc == 0.0);
        }
        bool IncludeSrClsPrc() const {
            return !(m_sr_cls_prc == 0.0);
        }
        bool IncludeClosePrc() const {
            return !(m_close_prc == 0.0);
        }
        bool IncludeBidIv() const {
            return !(m_bid_iv == 0.0);
        }
        bool IncludeAskIv() const {
            return !(m_ask_iv == 0.0);
        }
        bool IncludeSrPrc() const {
            return !(m_sr_prc == 0.0);
        }
        bool IncludeSrVol() const {
            return !(m_sr_vol == 0.0);
        }
        bool IncludeDe() const {
            return !(m_de == 0.0);
        }
        bool IncludeGa() const {
            return !(m_ga == 0.0);
        }
        bool IncludeTh() const {
            return !(m_th == 0.0);
        }
        bool IncludeVe() const {
            return !(m_ve == 0.0);
        }
        bool IncludeVo() const {
            return !(m_vo == 0.0);
        }
        bool IncludeVa() const {
            return !(m_va == 0.0);
        }
        bool IncludeRh() const {
            return !(m_rh == 0.0);
        }
        bool IncludePh() const {
            return !(m_ph == 0.0);
        }
        bool IncludeSrSlope() const {
            return !(m_sr_slope == 0.0);
        }
        bool IncludeDeDecay() const {
            return !(m_de_decay == 0.0);
        }
        bool IncludeSdiv() const {
            return !(m_sdiv == 0.0);
        }
        bool IncludeDdiv() const {
            return !(m_ddiv == 0.0);
        }
        bool IncludeRate() const {
            return !(m_rate == 0.0);
        }
        bool IncludeYears() const {
            return !(m_years == 0.0);
        }
        bool IncludeError() const {
            return !(m_error == 0);
        }
        bool IncludeCorpAction() const {
            return !(m_corp_action.empty());
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
            if ( IncludeTradeDate()) {
                totalSize += SRProtobufCPP::FieldCodec::DateKeyFieldSize(100, m_trade_date.get_year(), m_trade_date.get_month(), m_trade_date.get_day());
            }
            if ( IncludeUBid()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(103,m_u_bid);
            }
            if ( IncludeUAsk()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(106,m_u_ask);
            }
            if ( IncludeUSrCls()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(109,m_u_sr_cls);
            }
            if ( IncludeUClose()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(112,m_u_close);
            }
            if ( IncludeBidPrc()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(115,m_bid_prc);
            }
            if ( IncludeAskPrc()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(118,m_ask_prc);
            }
            if ( IncludeSrClsPrc()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(121,m_sr_cls_prc);
            }
            if ( IncludeClosePrc()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(124,m_close_prc);
            }
            if ( IncludeBidIv()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(127,m_bid_iv);
            }
            if ( IncludeAskIv()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(130,m_ask_iv);
            }
            if ( IncludeSrPrc()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(133,m_sr_prc);
            }
            if ( IncludeSrVol()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(136,m_sr_vol);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(139,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MarkSource>(m_sr_src)));
            if ( IncludeDe()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(142,m_de);
            }
            if ( IncludeGa()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(145,m_ga);
            }
            if ( IncludeTh()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(148,m_th);
            }
            if ( IncludeVe()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(151,m_ve);
            }
            if ( IncludeVo()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(154,m_vo);
            }
            if ( IncludeVa()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(157,m_va);
            }
            if ( IncludeRh()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(160,m_rh);
            }
            if ( IncludePh()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(163,m_ph);
            }
            if ( IncludeSrSlope()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(166,m_sr_slope);
            }
            if ( IncludeDeDecay()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(169,m_de_decay);
            }
            if ( IncludeSdiv()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(172,m_sdiv);
            }
            if ( IncludeDdiv()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(175,m_ddiv);
            }
            if ( IncludeRate()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(178,m_rate);
            }
            if ( IncludeYears()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(181,m_years);
            }
            if ( IncludeError()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(184,m_error);
            }
            if ( IncludeCorpAction()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(187,m_corp_action);
            }
            if ( IncludeTimestamp()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(190, m_timestamp);
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
            if ( IncludeTradeDate()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateKey(dest,100, m_trade_date.get_year(), m_trade_date.get_month(), m_trade_date.get_day());
            }
            if ( IncludeUBid()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,103,m_u_bid);
            }
            if ( IncludeUAsk()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,106,m_u_ask);
            }
            if ( IncludeUSrCls()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,109,m_u_sr_cls);
            }
            if ( IncludeUClose()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,112,m_u_close);
            }
            if ( IncludeBidPrc()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,115,m_bid_prc);
            }
            if ( IncludeAskPrc()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,118,m_ask_prc);
            }
            if ( IncludeSrClsPrc()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,121,m_sr_cls_prc);
            }
            if ( IncludeClosePrc()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,124,m_close_prc);
            }
            if ( IncludeBidIv()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,127,m_bid_iv);
            }
            if ( IncludeAskIv()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,130,m_ask_iv);
            }
            if ( IncludeSrPrc()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,133,m_sr_prc);
            }
            if ( IncludeSrVol()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,136,m_sr_vol);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,139,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MarkSource>(m_sr_src)));
            if ( IncludeDe()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,142,m_de);
            }
            if ( IncludeGa()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,145,m_ga);
            }
            if ( IncludeTh()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,148,m_th);
            }
            if ( IncludeVe()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,151,m_ve);
            }
            if ( IncludeVo()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,154,m_vo);
            }
            if ( IncludeVa()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,157,m_va);
            }
            if ( IncludeRh()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,160,m_rh);
            }
            if ( IncludePh()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,163,m_ph);
            }
            if ( IncludeSrSlope()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,166,m_sr_slope);
            }
            if ( IncludeDeDecay()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,169,m_de_decay);
            }
            if ( IncludeSdiv()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,172,m_sdiv);
            }
            if ( IncludeDdiv()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,175,m_ddiv);
            }
            if ( IncludeRate()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,178,m_rate);
            }
            if ( IncludeYears()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,181,m_years);
            }
            if ( IncludeError()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,184,m_error);
            }
            if ( IncludeCorpAction()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,187,static_cast<string>(m_corp_action));
            }
            if ( IncludeTimestamp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 190, m_timestamp);
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
                        if (tagType == SRProtobufCPP::DateKeyCodec::TagType) {
                            auto dateKey = SRProtobufCPP::FieldCodec::DecodeDateKey(pos,max);
                            m_trade_date.set_year(dateKey.year());
                            m_trade_date.set_month(dateKey.month());
                            m_trade_date.set_day(dateKey.day());
                        }
                        break;
                    }
                    case 103: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_u_bid = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 106: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_u_ask = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 109: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_u_sr_cls = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 112: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_u_close = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 115: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_bid_prc = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 118: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_ask_prc = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 121: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_sr_cls_prc = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 124: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_close_prc = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 127: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_bid_iv = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 130: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_ask_iv = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 133: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_sr_prc = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 136: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_sr_vol = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 139: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_sr_src = static_cast<spiderrock::protobuf::api::MarkSource>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 142: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_de = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 145: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_ga = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 148: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_th = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 151: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_ve = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 154: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_vo = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 157: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_va = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 160: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_rh = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 163: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_ph = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 166: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_sr_slope = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 169: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_de_decay = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 172: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_sdiv = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 175: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_ddiv = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 178: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_rate = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 181: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_years = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 184: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_error = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 187: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_corp_action = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 190: {
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

    template<> inline const auto OptionOpenMark::get<OptionOpenMark::_meta>() const { return OptionOpenMark::_meta{ m__meta}; }
    template<> inline const auto OptionOpenMark::get<OptionOpenMark::pkey>() const { return OptionOpenMark::pkey{ m_pkey}; }
    template<> inline const auto OptionOpenMark::get<OptionOpenMark::trade_date>() const { return OptionOpenMark::trade_date{ m_trade_date}; }
    template<> inline const auto OptionOpenMark::get<OptionOpenMark::u_bid>() const { return m_u_bid; }
    template<> inline const auto OptionOpenMark::get<OptionOpenMark::u_ask>() const { return m_u_ask; }
    template<> inline const auto OptionOpenMark::get<OptionOpenMark::u_sr_cls>() const { return m_u_sr_cls; }
    template<> inline const auto OptionOpenMark::get<OptionOpenMark::u_close>() const { return m_u_close; }
    template<> inline const auto OptionOpenMark::get<OptionOpenMark::bid_prc>() const { return m_bid_prc; }
    template<> inline const auto OptionOpenMark::get<OptionOpenMark::ask_prc>() const { return m_ask_prc; }
    template<> inline const auto OptionOpenMark::get<OptionOpenMark::sr_cls_prc>() const { return m_sr_cls_prc; }
    template<> inline const auto OptionOpenMark::get<OptionOpenMark::close_prc>() const { return m_close_prc; }
    template<> inline const auto OptionOpenMark::get<OptionOpenMark::bid_iv>() const { return m_bid_iv; }
    template<> inline const auto OptionOpenMark::get<OptionOpenMark::ask_iv>() const { return m_ask_iv; }
    template<> inline const auto OptionOpenMark::get<OptionOpenMark::sr_prc>() const { return m_sr_prc; }
    template<> inline const auto OptionOpenMark::get<OptionOpenMark::sr_vol>() const { return m_sr_vol; }
    template<> inline const auto OptionOpenMark::get<OptionOpenMark::sr_src>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MarkSource>( m_sr_src)); }
    template<> inline const auto OptionOpenMark::get<OptionOpenMark::de>() const { return m_de; }
    template<> inline const auto OptionOpenMark::get<OptionOpenMark::ga>() const { return m_ga; }
    template<> inline const auto OptionOpenMark::get<OptionOpenMark::th>() const { return m_th; }
    template<> inline const auto OptionOpenMark::get<OptionOpenMark::ve>() const { return m_ve; }
    template<> inline const auto OptionOpenMark::get<OptionOpenMark::vo>() const { return m_vo; }
    template<> inline const auto OptionOpenMark::get<OptionOpenMark::va>() const { return m_va; }
    template<> inline const auto OptionOpenMark::get<OptionOpenMark::rh>() const { return m_rh; }
    template<> inline const auto OptionOpenMark::get<OptionOpenMark::ph>() const { return m_ph; }
    template<> inline const auto OptionOpenMark::get<OptionOpenMark::sr_slope>() const { return m_sr_slope; }
    template<> inline const auto OptionOpenMark::get<OptionOpenMark::de_decay>() const { return m_de_decay; }
    template<> inline const auto OptionOpenMark::get<OptionOpenMark::sdiv>() const { return m_sdiv; }
    template<> inline const auto OptionOpenMark::get<OptionOpenMark::ddiv>() const { return m_ddiv; }
    template<> inline const auto OptionOpenMark::get<OptionOpenMark::rate>() const { return m_rate; }
    template<> inline const auto OptionOpenMark::get<OptionOpenMark::years>() const { return m_years; }
    template<> inline const auto OptionOpenMark::get<OptionOpenMark::error>() const { return m_error; }
    template<> inline const auto OptionOpenMark::get<OptionOpenMark::corp_action>() const { return m_corp_action; }
    template<> inline const auto OptionOpenMark::get<OptionOpenMark::timestamp>() const { return m_timestamp; }
    template<> inline const auto OptionOpenMark_PKey::get<OptionOpenMark_PKey::okey>() const { return OptionOpenMark_PKey::okey{m_okey}; }
    
    // ostream operators for all classes above, output should adhere to a JSON format

    inline std::ostream& operator<<(std::ostream &o, const OptionOpenMark_PKey& m) {
        o << "\"okey\":{" << m.get<OptionOpenMark_PKey::okey>() << "}";
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const OptionOpenMark& m) {
        o << "\"_meta\":{" << m.get<OptionOpenMark::_meta>() << "}";
        o << ",\"pkey\":{" << m.get<OptionOpenMark::pkey>() << "}";
        o << ",\"trade_date\":{" << m.get<OptionOpenMark::trade_date>() << "}";
        o << ",\"u_bid\":" << m.get<OptionOpenMark::u_bid>();
        o << ",\"u_ask\":" << m.get<OptionOpenMark::u_ask>();
        o << ",\"u_sr_cls\":" << m.get<OptionOpenMark::u_sr_cls>();
        o << ",\"u_close\":" << m.get<OptionOpenMark::u_close>();
        o << ",\"bid_prc\":" << m.get<OptionOpenMark::bid_prc>();
        o << ",\"ask_prc\":" << m.get<OptionOpenMark::ask_prc>();
        o << ",\"sr_cls_prc\":" << m.get<OptionOpenMark::sr_cls_prc>();
        o << ",\"close_prc\":" << m.get<OptionOpenMark::close_prc>();
        o << ",\"bid_iv\":" << m.get<OptionOpenMark::bid_iv>();
        o << ",\"ask_iv\":" << m.get<OptionOpenMark::ask_iv>();
        o << ",\"sr_prc\":" << m.get<OptionOpenMark::sr_prc>();
        o << ",\"sr_vol\":" << m.get<OptionOpenMark::sr_vol>();
        o << ",\"sr_src\":" << (int64_t)m.get<OptionOpenMark::sr_src>();
        o << ",\"de\":" << m.get<OptionOpenMark::de>();
        o << ",\"ga\":" << m.get<OptionOpenMark::ga>();
        o << ",\"th\":" << m.get<OptionOpenMark::th>();
        o << ",\"ve\":" << m.get<OptionOpenMark::ve>();
        o << ",\"vo\":" << m.get<OptionOpenMark::vo>();
        o << ",\"va\":" << m.get<OptionOpenMark::va>();
        o << ",\"rh\":" << m.get<OptionOpenMark::rh>();
        o << ",\"ph\":" << m.get<OptionOpenMark::ph>();
        o << ",\"sr_slope\":" << m.get<OptionOpenMark::sr_slope>();
        o << ",\"de_decay\":" << m.get<OptionOpenMark::de_decay>();
        o << ",\"sdiv\":" << m.get<OptionOpenMark::sdiv>();
        o << ",\"ddiv\":" << m.get<OptionOpenMark::ddiv>();
        o << ",\"rate\":" << m.get<OptionOpenMark::rate>();
        o << ",\"years\":" << m.get<OptionOpenMark::years>();
        o << ",\"error\":" << m.get<OptionOpenMark::error>();
        o << ",\"corp_action\":\"" << m.get<OptionOpenMark::corp_action>() << "\"";
        {
            std::time_t tt = m.get<OptionOpenMark::timestamp>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"timestamp\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        return o;
    }

}
}
}