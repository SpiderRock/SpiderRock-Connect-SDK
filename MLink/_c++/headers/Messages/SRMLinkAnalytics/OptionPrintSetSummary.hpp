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

    #ifndef _num_prints__GUARD__
    #define _num_prints__GUARD__
    DECL_STRONG_TYPE(num_prints, int32);
    #endif//_num_prints__GUARD__

    #ifndef _sum_print_size__GUARD__
    #define _sum_print_size__GUARD__
    DECL_STRONG_TYPE(sum_print_size, int32);
    #endif//_sum_print_size__GUARD__

    #ifndef _sum_exch_quote_size__GUARD__
    #define _sum_exch_quote_size__GUARD__
    DECL_STRONG_TYPE(sum_exch_quote_size, int32);
    #endif//_sum_exch_quote_size__GUARD__

    #ifndef _sum_print_m1_pn_l__GUARD__
    #define _sum_print_m1_pn_l__GUARD__
    DECL_STRONG_TYPE(sum_print_m1_pn_l, float);
    #endif//_sum_print_m1_pn_l__GUARD__

    #ifndef _sum_print_m10_pn_l__GUARD__
    #define _sum_print_m10_pn_l__GUARD__
    DECL_STRONG_TYPE(sum_print_m10_pn_l, float);
    #endif//_sum_print_m10_pn_l__GUARD__

    #ifndef _avg_vol__GUARD__
    #define _avg_vol__GUARD__
    DECL_STRONG_TYPE(avg_vol, float);
    #endif//_avg_vol__GUARD__

    #ifndef _avg_vega__GUARD__
    #define _avg_vega__GUARD__
    DECL_STRONG_TYPE(avg_vega, float);
    #endif//_avg_vega__GUARD__

    #ifndef _avg_delta__GUARD__
    #define _avg_delta__GUARD__
    DECL_STRONG_TYPE(avg_delta, float);
    #endif//_avg_delta__GUARD__

    #ifndef _avg_print_prob__GUARD__
    #define _avg_print_prob__GUARD__
    DECL_STRONG_TYPE(avg_print_prob, float);
    #endif//_avg_print_prob__GUARD__

    #ifndef _sum_surface_edge__GUARD__
    #define _sum_surface_edge__GUARD__
    DECL_STRONG_TYPE(sum_surface_edge, float);
    #endif//_sum_surface_edge__GUARD__

    #ifndef _okey__GUARD__
    #define _okey__GUARD__
    DECL_STRONG_TYPE(okey, OptionKey);
    #endif//_okey__GUARD__

    #ifndef _prt_exch__OptExch__GUARD__
    #define _prt_exch__OptExch__GUARD__
    DECL_STRONG_TYPE(prt_exch__OptExch, spiderrock::protobuf::api::OptExch);
    #endif//_prt_exch__OptExch__GUARD__

    #ifndef _prt_side__BuySell__GUARD__
    #define _prt_side__BuySell__GUARD__
    DECL_STRONG_TYPE(prt_side__BuySell, spiderrock::protobuf::api::BuySell);
    #endif//_prt_side__BuySell__GUARD__

    #ifndef _prt_type__PrtType__GUARD__
    #define _prt_type__PrtType__GUARD__
    DECL_STRONG_TYPE(prt_type__PrtType, spiderrock::protobuf::api::PrtType);
    #endif//_prt_type__PrtType__GUARD__

    #ifndef _trading_period__DateKey__GUARD__
    #define _trading_period__DateKey__GUARD__
    DECL_STRONG_TYPE(trading_period__DateKey, DateKey);
    #endif//_trading_period__DateKey__GUARD__

    
    class OptionPrintSetSummary_PKey {
        public:
        //using statements for all types used in this class
        using okey = spiderrock::protobuf::api::okey;
        using prt_exch = spiderrock::protobuf::api::prt_exch__OptExch;
        using prt_side = spiderrock::protobuf::api::prt_side__BuySell;
        using prt_type = spiderrock::protobuf::api::prt_type__PrtType;
        using trading_period = spiderrock::protobuf::api::trading_period__DateKey;

        private:
        okey m_okey{};
        prt_exch m_prt_exch{};
        prt_side m_prt_side{};
        prt_type m_prt_type{};
        trading_period m_trading_period{};

        public:
		okey get_okey() const {
            return m_okey;
        }
        prt_exch get_prt_exch() const {
            return m_prt_exch;
        }
        prt_side get_prt_side() const {
            return m_prt_side;
        }
        prt_type get_prt_type() const {
            return m_prt_type;
        }
		trading_period get_trading_period() const {
            return m_trading_period;
        }
        void set_okey(const okey& value)  {
            m_okey = value;
        }
        void set_prt_exch(const prt_exch& value)  {
            m_prt_exch = value;
        }
        void set_prt_side(const prt_side& value)  {
            m_prt_side = value;
        }
        void set_prt_type(const prt_type& value)  {
            m_prt_type = value;
        }
        void set_trading_period(const trading_period& value)  {
            m_trading_period = value;
        }
        //templatized getters and setters
        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to OptionPrintSetSummary_PKey::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to OptionPrintSetSummary_PKey::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const okey & value) { set_okey(value); }
        void set(const prt_exch & value) { set_prt_exch(value); }
        void set(const prt_side & value) { set_prt_side(value); }
        void set(const prt_type & value) { set_prt_type(value); }
        void set(const trading_period & value) { set_trading_period(value); }


        OptionPrintSetSummary_PKey() {}

        virtual ~OptionPrintSetSummary_PKey() {
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
        bool IncludeTradingPeriod() const {
            return (m_trading_period.ByteSizeLong() > 0);
        }


        size_t ByteSizeLong() const {
            size_t totalSize = 0;
            if ( IncludeOkey()) {
                SRProtobufCPP::OptionKeyLayout optionKeyLayout_okey;
                m_okey.setCodecOptionKey(optionKeyLayout_okey);
                totalSize += SRProtobufCPP::FieldCodec::OptionKeyFieldSize(10,optionKeyLayout_okey);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(11,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::OptExch>(m_prt_exch)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(12,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>(m_prt_side)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(13,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PrtType>(m_prt_type)));
            if ( IncludeTradingPeriod()) {
                totalSize += SRProtobufCPP::FieldCodec::DateKeyFieldSize(14, m_trading_period.get_year(), m_trading_period.get_month(), m_trading_period.get_day());
            }
            return totalSize;
        }

        void Encode(uint8_t*& dest, uint8_t* max) const {
            if ( IncludeOkey()) {
                SRProtobufCPP::OptionKeyLayout optionKeyLayout_okey;
                m_okey.setCodecOptionKey(optionKeyLayout_okey);
                dest = SRProtobufCPP::FieldCodec::EncodeOptionKey(dest, 10, optionKeyLayout_okey);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,11,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::OptExch>(m_prt_exch)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,12,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>(m_prt_side)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,13,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PrtType>(m_prt_type)));
            if ( IncludeTradingPeriod()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateKey(dest,14, m_trading_period.get_year(), m_trading_period.get_month(), m_trading_period.get_day());
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
                    case 11: {m_prt_exch = static_cast<spiderrock::protobuf::api::OptExch>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                    case 12: {m_prt_side = static_cast<spiderrock::protobuf::api::BuySell>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                    case 13: {m_prt_type = static_cast<spiderrock::protobuf::api::PrtType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                    case 14: {
                        auto dateKey = SRProtobufCPP::FieldCodec::DecodeDateKey(pos,max);
                        m_trading_period.set_year(dateKey.year());
                        m_trading_period.set_month(dateKey.month());
                        m_trading_period.set_day(dateKey.day());
                        break;
                    }
                }
            }
        }

    };
    

    class OptionPrintSetSummary {
        public:
        //using statements for all types used in this class
    
        using _meta = spiderrock::protobuf::api::_meta;
        using pkey = spiderrock::protobuf::api::OptionPrintSetSummary_PKey;
        using num_prints = spiderrock::protobuf::api::num_prints;
        using sum_print_size = spiderrock::protobuf::api::sum_print_size;
        using sum_exch_quote_size = spiderrock::protobuf::api::sum_exch_quote_size;
        using sum_print_m1_pn_l = spiderrock::protobuf::api::sum_print_m1_pn_l;
        using sum_print_m10_pn_l = spiderrock::protobuf::api::sum_print_m10_pn_l;
        using avg_vol = spiderrock::protobuf::api::avg_vol;
        using avg_vega = spiderrock::protobuf::api::avg_vega;
        using avg_delta = spiderrock::protobuf::api::avg_delta;
        using avg_print_prob = spiderrock::protobuf::api::avg_print_prob;
        using sum_surface_edge = spiderrock::protobuf::api::sum_surface_edge;

        private:
        _meta m__meta{};
        pkey m_pkey{};
        num_prints m_num_prints{};
        sum_print_size m_sum_print_size{};
        sum_exch_quote_size m_sum_exch_quote_size{};
        sum_print_m1_pn_l m_sum_print_m1_pn_l{};
        sum_print_m10_pn_l m_sum_print_m10_pn_l{};
        avg_vol m_avg_vol{};
        avg_vega m_avg_vega{};
        avg_delta m_avg_delta{};
        avg_print_prob m_avg_print_prob{};
        sum_surface_edge m_sum_surface_edge{};

        static constexpr int _mlinkHeaderLength = 14;

        public:		
        _meta get__meta() const {
            return m__meta;
        }		
        pkey get_pkey() const {
            return m_pkey;
        }		
        num_prints get_num_prints() const {
            return m_num_prints;
        }		
        sum_print_size get_sum_print_size() const {
            return m_sum_print_size;
        }		
        sum_exch_quote_size get_sum_exch_quote_size() const {
            return m_sum_exch_quote_size;
        }		
        sum_print_m1_pn_l get_sum_print_m1_pn_l() const {
            return m_sum_print_m1_pn_l;
        }		
        sum_print_m10_pn_l get_sum_print_m10_pn_l() const {
            return m_sum_print_m10_pn_l;
        }		
        avg_vol get_avg_vol() const {
            return m_avg_vol;
        }		
        avg_vega get_avg_vega() const {
            return m_avg_vega;
        }		
        avg_delta get_avg_delta() const {
            return m_avg_delta;
        }		
        avg_print_prob get_avg_print_prob() const {
            return m_avg_print_prob;
        }		
        sum_surface_edge get_sum_surface_edge() const {
            return m_sum_surface_edge;
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
        void set_num_prints(const num_prints& value)  {
            m_num_prints = value;
        }
        void set_sum_print_size(const sum_print_size& value)  {
            m_sum_print_size = value;
        }
        void set_sum_exch_quote_size(const sum_exch_quote_size& value)  {
            m_sum_exch_quote_size = value;
        }
        void set_sum_print_m1_pn_l(const sum_print_m1_pn_l& value)  {
            m_sum_print_m1_pn_l = value;
        }
        void set_sum_print_m10_pn_l(const sum_print_m10_pn_l& value)  {
            m_sum_print_m10_pn_l = value;
        }
        void set_avg_vol(const avg_vol& value)  {
            m_avg_vol = value;
        }
        void set_avg_vega(const avg_vega& value)  {
            m_avg_vega = value;
        }
        void set_avg_delta(const avg_delta& value)  {
            m_avg_delta = value;
        }
        void set_avg_print_prob(const avg_print_prob& value)  {
            m_avg_print_prob = value;
        }
        void set_sum_surface_edge(const sum_surface_edge& value)  {
            m_sum_surface_edge = value;
        }

        //templatized getters and setters

        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to OptionPrintSetSummary::get()"); return T{}; }  // specializations for valid types are listed below the class definition

        //specializations for set functions for the valid types
    
        void set(const _meta & value) {
            set__meta(value);
        }
        void set(const pkey & value) {
            set_pkey(value);
        }
        void set(const num_prints & value) {
            set_num_prints(value);
        }
        void set(const sum_print_size & value) {
            set_sum_print_size(value);
        }
        void set(const sum_exch_quote_size & value) {
            set_sum_exch_quote_size(value);
        }
        void set(const sum_print_m1_pn_l & value) {
            set_sum_print_m1_pn_l(value);
        }
        void set(const sum_print_m10_pn_l & value) {
            set_sum_print_m10_pn_l(value);
        }
        void set(const avg_vol & value) {
            set_avg_vol(value);
        }
        void set(const avg_vega & value) {
            set_avg_vega(value);
        }
        void set(const avg_delta & value) {
            set_avg_delta(value);
        }
        void set(const avg_print_prob & value) {
            set_avg_print_prob(value);
        }
        void set(const sum_surface_edge & value) {
            set_sum_surface_edge(value);
        }

        void set(const OptionPrintSetSummary & value) {
            set(value.m__meta);
            set(value.m_pkey);
            set(value.m_num_prints);
            set(value.m_sum_print_size);
            set(value.m_sum_exch_quote_size);
            set(value.m_sum_print_m1_pn_l);
            set(value.m_sum_print_m10_pn_l);
            set(value.m_avg_vol);
            set(value.m_avg_vega);
            set(value.m_avg_delta);
            set(value.m_avg_print_prob);
            set(value.m_sum_surface_edge);
        }

        OptionPrintSetSummary() {
            m__meta.set_message_type("OptionPrintSetSummary");
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
            std::snprintf(reinterpret_cast<char*>(data), size, "\r\nP%05d%06zd", 2820, length);
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
            std::snprintf(const_cast<char*>(s->data()), s->size(), "\r\nP%05d%06zd", 2820, length);
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
             *this = OptionPrintSetSummary{};
        }
        bool IncludeMeta() const {
            return (m__meta.ByteSizeLong() > 0);
        }
        bool IncludePkey() const {
            return (m_pkey.ByteSizeLong() > 0);
        }
        bool IncludeNumPrints() const {
            return !(m_num_prints == 0);
        }
        bool IncludeSumPrintSize() const {
            return !(m_sum_print_size == 0);
        }
        bool IncludeSumExchQuoteSize() const {
            return !(m_sum_exch_quote_size == 0);
        }
        bool IncludeSumPrintM1PnL() const {
            return !(m_sum_print_m1_pn_l == 0.0);
        }
        bool IncludeSumPrintM10PnL() const {
            return !(m_sum_print_m10_pn_l == 0.0);
        }
        bool IncludeAvgVol() const {
            return !(m_avg_vol == 0.0);
        }
        bool IncludeAvgVega() const {
            return !(m_avg_vega == 0.0);
        }
        bool IncludeAvgDelta() const {
            return !(m_avg_delta == 0.0);
        }
        bool IncludeAvgPrintProb() const {
            return !(m_avg_print_prob == 0.0);
        }
        bool IncludeSumSurfaceEdge() const {
            return !(m_sum_surface_edge == 0.0);
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
            if ( IncludeNumPrints()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(100,m_num_prints);
            }
            if ( IncludeSumPrintSize()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(103,m_sum_print_size);
            }
            if ( IncludeSumExchQuoteSize()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(106,m_sum_exch_quote_size);
            }
            if ( IncludeSumPrintM1PnL()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(109,m_sum_print_m1_pn_l);
            }
            if ( IncludeSumPrintM10PnL()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(112,m_sum_print_m10_pn_l);
            }
            if ( IncludeAvgVol()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(115,m_avg_vol);
            }
            if ( IncludeAvgVega()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(118,m_avg_vega);
            }
            if ( IncludeAvgDelta()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(121,m_avg_delta);
            }
            if ( IncludeAvgPrintProb()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(124,m_avg_print_prob);
            }
            if ( IncludeSumSurfaceEdge()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(127,m_sum_surface_edge);
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
            if ( IncludeNumPrints()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,100,m_num_prints);
            }
            if ( IncludeSumPrintSize()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,103,m_sum_print_size);
            }
            if ( IncludeSumExchQuoteSize()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,106,m_sum_exch_quote_size);
            }
            if ( IncludeSumPrintM1PnL()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,109,m_sum_print_m1_pn_l);
            }
            if ( IncludeSumPrintM10PnL()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,112,m_sum_print_m10_pn_l);
            }
            if ( IncludeAvgVol()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,115,m_avg_vol);
            }
            if ( IncludeAvgVega()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,118,m_avg_vega);
            }
            if ( IncludeAvgDelta()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,121,m_avg_delta);
            }
            if ( IncludeAvgPrintProb()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,124,m_avg_print_prob);
            }
            if ( IncludeSumSurfaceEdge()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,127,m_sum_surface_edge);
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
                            m_num_prints = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 103: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_sum_print_size = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 106: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_sum_exch_quote_size = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 109: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_sum_print_m1_pn_l = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 112: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_sum_print_m10_pn_l = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 115: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_avg_vol = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 118: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_avg_vega = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 121: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_avg_delta = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 124: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_avg_print_prob = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 127: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_sum_surface_edge = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                }
            }
        }

    };


    // getter definitions for all classes above, both inner and outer classes

    template<> inline const auto OptionPrintSetSummary::get<OptionPrintSetSummary::_meta>() const { return OptionPrintSetSummary::_meta{ m__meta}; }
    template<> inline const auto OptionPrintSetSummary::get<OptionPrintSetSummary::pkey>() const { return OptionPrintSetSummary::pkey{ m_pkey}; }
    template<> inline const auto OptionPrintSetSummary::get<OptionPrintSetSummary::num_prints>() const { return m_num_prints; }
    template<> inline const auto OptionPrintSetSummary::get<OptionPrintSetSummary::sum_print_size>() const { return m_sum_print_size; }
    template<> inline const auto OptionPrintSetSummary::get<OptionPrintSetSummary::sum_exch_quote_size>() const { return m_sum_exch_quote_size; }
    template<> inline const auto OptionPrintSetSummary::get<OptionPrintSetSummary::sum_print_m1_pn_l>() const { return m_sum_print_m1_pn_l; }
    template<> inline const auto OptionPrintSetSummary::get<OptionPrintSetSummary::sum_print_m10_pn_l>() const { return m_sum_print_m10_pn_l; }
    template<> inline const auto OptionPrintSetSummary::get<OptionPrintSetSummary::avg_vol>() const { return m_avg_vol; }
    template<> inline const auto OptionPrintSetSummary::get<OptionPrintSetSummary::avg_vega>() const { return m_avg_vega; }
    template<> inline const auto OptionPrintSetSummary::get<OptionPrintSetSummary::avg_delta>() const { return m_avg_delta; }
    template<> inline const auto OptionPrintSetSummary::get<OptionPrintSetSummary::avg_print_prob>() const { return m_avg_print_prob; }
    template<> inline const auto OptionPrintSetSummary::get<OptionPrintSetSummary::sum_surface_edge>() const { return m_sum_surface_edge; }
    template<> inline const auto OptionPrintSetSummary_PKey::get<OptionPrintSetSummary_PKey::okey>() const { return OptionPrintSetSummary_PKey::okey{m_okey}; }
    template<> inline const auto OptionPrintSetSummary_PKey::get<OptionPrintSetSummary_PKey::prt_exch>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::OptExch>(m_prt_exch));}
    template<> inline const auto OptionPrintSetSummary_PKey::get<OptionPrintSetSummary_PKey::prt_side>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>(m_prt_side));}
    template<> inline const auto OptionPrintSetSummary_PKey::get<OptionPrintSetSummary_PKey::prt_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::PrtType>(m_prt_type));}
    template<> inline const auto OptionPrintSetSummary_PKey::get<OptionPrintSetSummary_PKey::trading_period>() const { return OptionPrintSetSummary_PKey::trading_period{m_trading_period}; }
    
    // ostream operators for all classes above, output should adhere to a JSON format

    inline std::ostream& operator<<(std::ostream &o, const OptionPrintSetSummary_PKey& m) {
        o << "\"okey\":{" << m.get<OptionPrintSetSummary_PKey::okey>() << "}";
        o << ",\"prt_exch\":" << (int64_t)m.get<OptionPrintSetSummary_PKey::prt_exch>();
        o << ",\"prt_side\":" << (int64_t)m.get<OptionPrintSetSummary_PKey::prt_side>();
        o << ",\"prt_type\":" << (int64_t)m.get<OptionPrintSetSummary_PKey::prt_type>();
        o << ",\"trading_period\":{" << m.get<OptionPrintSetSummary_PKey::trading_period>() << "}";
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const OptionPrintSetSummary& m) {
        o << "\"_meta\":{" << m.get<OptionPrintSetSummary::_meta>() << "}";
        o << ",\"pkey\":{" << m.get<OptionPrintSetSummary::pkey>() << "}";
        o << ",\"num_prints\":" << m.get<OptionPrintSetSummary::num_prints>();
        o << ",\"sum_print_size\":" << m.get<OptionPrintSetSummary::sum_print_size>();
        o << ",\"sum_exch_quote_size\":" << m.get<OptionPrintSetSummary::sum_exch_quote_size>();
        o << ",\"sum_print_m1_pn_l\":" << m.get<OptionPrintSetSummary::sum_print_m1_pn_l>();
        o << ",\"sum_print_m10_pn_l\":" << m.get<OptionPrintSetSummary::sum_print_m10_pn_l>();
        o << ",\"avg_vol\":" << m.get<OptionPrintSetSummary::avg_vol>();
        o << ",\"avg_vega\":" << m.get<OptionPrintSetSummary::avg_vega>();
        o << ",\"avg_delta\":" << m.get<OptionPrintSetSummary::avg_delta>();
        o << ",\"avg_print_prob\":" << m.get<OptionPrintSetSummary::avg_print_prob>();
        o << ",\"sum_surface_edge\":" << m.get<OptionPrintSetSummary::sum_surface_edge>();
        return o;
    }

}
}
}