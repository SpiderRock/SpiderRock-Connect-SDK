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

    #ifndef _status__BetaStatus__GUARD__
    #define _status__BetaStatus__GUARD__
    DECL_STRONG_TYPE(status__BetaStatus, spiderrock::protobuf::api::BetaStatus);
    #endif//_status__BetaStatus__GUARD__

    #ifndef _beta__GUARD__
    #define _beta__GUARD__
    DECL_STRONG_TYPE(beta, float);
    #endif//_beta__GUARD__

    #ifndef _beta_ind__GUARD__
    #define _beta_ind__GUARD__
    DECL_STRONG_TYPE(beta_ind, float);
    #endif//_beta_ind__GUARD__

    #ifndef _beta_sub__GUARD__
    #define _beta_sub__GUARD__
    DECL_STRONG_TYPE(beta_sub, float);
    #endif//_beta_sub__GUARD__

    #ifndef _beta_grp__GUARD__
    #define _beta_grp__GUARD__
    DECL_STRONG_TYPE(beta_grp, float);
    #endif//_beta_grp__GUARD__

    #ifndef _beta_qqq__GUARD__
    #define _beta_qqq__GUARD__
    DECL_STRONG_TYPE(beta_qqq, float);
    #endif//_beta_qqq__GUARD__

    #ifndef _beta_spy__GUARD__
    #define _beta_spy__GUARD__
    DECL_STRONG_TYPE(beta_spy, float);
    #endif//_beta_spy__GUARD__

    #ifndef _beta_iwm__GUARD__
    #define _beta_iwm__GUARD__
    DECL_STRONG_TYPE(beta_iwm, float);
    #endif//_beta_iwm__GUARD__

    #ifndef _timestamp__GUARD__
    #define _timestamp__GUARD__
    DECL_STRONG_TYPE(timestamp, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_timestamp__GUARD__

    #ifndef _ticker__TickerKey__GUARD__
    #define _ticker__TickerKey__GUARD__
    DECL_STRONG_TYPE(ticker__TickerKey, TickerKey);
    #endif//_ticker__TickerKey__GUARD__

    
    class StockBeta_PKey {
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
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to StockBeta_PKey::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to StockBeta_PKey::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const ticker & value) { set_ticker(value); }


        StockBeta_PKey() {}

        virtual ~StockBeta_PKey() {
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
    

    class StockBeta {
        public:
        //using statements for all types used in this class
    
        using _meta = spiderrock::protobuf::api::_meta;
        using pkey = spiderrock::protobuf::api::StockBeta_PKey;
        using status = spiderrock::protobuf::api::status__BetaStatus;
        using beta = spiderrock::protobuf::api::beta;
        using beta_ind = spiderrock::protobuf::api::beta_ind;
        using beta_sub = spiderrock::protobuf::api::beta_sub;
        using beta_grp = spiderrock::protobuf::api::beta_grp;
        using beta_qqq = spiderrock::protobuf::api::beta_qqq;
        using beta_spy = spiderrock::protobuf::api::beta_spy;
        using beta_iwm = spiderrock::protobuf::api::beta_iwm;
        using timestamp = spiderrock::protobuf::api::timestamp;

        private:
        _meta m__meta{};
        pkey m_pkey{};
        status m_status{};
        beta m_beta{};
        beta_ind m_beta_ind{};
        beta_sub m_beta_sub{};
        beta_grp m_beta_grp{};
        beta_qqq m_beta_qqq{};
        beta_spy m_beta_spy{};
        beta_iwm m_beta_iwm{};
        timestamp m_timestamp{};

        static constexpr int _mlinkHeaderLength = 14;

        public:		
        _meta get__meta() const {
            return m__meta;
        }		
        pkey get_pkey() const {
            return m_pkey;
        }		
        status get_status() const {
            return m_status;
        }		
        beta get_beta() const {
            return m_beta;
        }		
        beta_ind get_beta_ind() const {
            return m_beta_ind;
        }		
        beta_sub get_beta_sub() const {
            return m_beta_sub;
        }		
        beta_grp get_beta_grp() const {
            return m_beta_grp;
        }		
        beta_qqq get_beta_qqq() const {
            return m_beta_qqq;
        }		
        beta_spy get_beta_spy() const {
            return m_beta_spy;
        }		
        beta_iwm get_beta_iwm() const {
            return m_beta_iwm;
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
        void set_status(const status& value)  {
            m_status = value;
        }
        void set_beta(const beta& value)  {
            m_beta = value;
        }
        void set_beta_ind(const beta_ind& value)  {
            m_beta_ind = value;
        }
        void set_beta_sub(const beta_sub& value)  {
            m_beta_sub = value;
        }
        void set_beta_grp(const beta_grp& value)  {
            m_beta_grp = value;
        }
        void set_beta_qqq(const beta_qqq& value)  {
            m_beta_qqq = value;
        }
        void set_beta_spy(const beta_spy& value)  {
            m_beta_spy = value;
        }
        void set_beta_iwm(const beta_iwm& value)  {
            m_beta_iwm = value;
        }
        void set_timestamp(const timestamp& value)  {
            m_timestamp = value;
        }

        //templatized getters and setters

        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to StockBeta::get()"); return T{}; }  // specializations for valid types are listed below the class definition

        //specializations for set functions for the valid types
    
        void set(const _meta & value) {
            set__meta(value);
        }
        void set(const pkey & value) {
            set_pkey(value);
        }
        void set(const status & value) {
            set_status(value);
        }
        void set(const beta & value) {
            set_beta(value);
        }
        void set(const beta_ind & value) {
            set_beta_ind(value);
        }
        void set(const beta_sub & value) {
            set_beta_sub(value);
        }
        void set(const beta_grp & value) {
            set_beta_grp(value);
        }
        void set(const beta_qqq & value) {
            set_beta_qqq(value);
        }
        void set(const beta_spy & value) {
            set_beta_spy(value);
        }
        void set(const beta_iwm & value) {
            set_beta_iwm(value);
        }
        void set(const timestamp & value) {
            set_timestamp(value);
        }

        void set(const StockBeta & value) {
            set(value.m__meta);
            set(value.m_pkey);
            set(value.m_status);
            set(value.m_beta);
            set(value.m_beta_ind);
            set(value.m_beta_sub);
            set(value.m_beta_grp);
            set(value.m_beta_qqq);
            set(value.m_beta_spy);
            set(value.m_beta_iwm);
            set(value.m_timestamp);
        }

        StockBeta() {
            m__meta.set_message_type("StockBeta");
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
            std::snprintf(reinterpret_cast<char*>(data), size, "\r\nP%05d%06zd", 3240, length);
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
            std::snprintf(const_cast<char*>(s->data()), s->size(), "\r\nP%05d%06zd", 3240, length);
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
             *this = StockBeta{};
        }
        bool IncludeMeta() const {
            return (m__meta.ByteSizeLong() > 0);
        }
        bool IncludePkey() const {
            return (m_pkey.ByteSizeLong() > 0);
        }
        bool IncludeBeta() const {
            return !(m_beta == 0.0);
        }
        bool IncludeBetaInd() const {
            return !(m_beta_ind == 0.0);
        }
        bool IncludeBetaSub() const {
            return !(m_beta_sub == 0.0);
        }
        bool IncludeBetaGrp() const {
            return !(m_beta_grp == 0.0);
        }
        bool IncludeBetaQqq() const {
            return !(m_beta_qqq == 0.0);
        }
        bool IncludeBetaSpy() const {
            return !(m_beta_spy == 0.0);
        }
        bool IncludeBetaIwm() const {
            return !(m_beta_iwm == 0.0);
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
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(100,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BetaStatus>(m_status)));
            if ( IncludeBeta()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(103,m_beta);
            }
            if ( IncludeBetaInd()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(106,m_beta_ind);
            }
            if ( IncludeBetaSub()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(109,m_beta_sub);
            }
            if ( IncludeBetaGrp()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(112,m_beta_grp);
            }
            if ( IncludeBetaQqq()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(115,m_beta_qqq);
            }
            if ( IncludeBetaSpy()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(118,m_beta_spy);
            }
            if ( IncludeBetaIwm()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(121,m_beta_iwm);
            }
            if ( IncludeTimestamp()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(124, m_timestamp);
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
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,100,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BetaStatus>(m_status)));
            if ( IncludeBeta()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,103,m_beta);
            }
            if ( IncludeBetaInd()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,106,m_beta_ind);
            }
            if ( IncludeBetaSub()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,109,m_beta_sub);
            }
            if ( IncludeBetaGrp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,112,m_beta_grp);
            }
            if ( IncludeBetaQqq()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,115,m_beta_qqq);
            }
            if ( IncludeBetaSpy()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,118,m_beta_spy);
            }
            if ( IncludeBetaIwm()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,121,m_beta_iwm);
            }
            if ( IncludeTimestamp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 124, m_timestamp);
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
                    case 100: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_status = static_cast<spiderrock::protobuf::api::BetaStatus>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 103: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_beta = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 106: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_beta_ind = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 109: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_beta_sub = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 112: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_beta_grp = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 115: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_beta_qqq = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 118: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_beta_spy = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 121: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_beta_iwm = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 124: {
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

    template<> inline const auto StockBeta::get<StockBeta::_meta>() const { return StockBeta::_meta{ m__meta}; }
    template<> inline const auto StockBeta::get<StockBeta::pkey>() const { return StockBeta::pkey{ m_pkey}; }
    template<> inline const auto StockBeta::get<StockBeta::status>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BetaStatus>( m_status)); }
    template<> inline const auto StockBeta::get<StockBeta::beta>() const { return m_beta; }
    template<> inline const auto StockBeta::get<StockBeta::beta_ind>() const { return m_beta_ind; }
    template<> inline const auto StockBeta::get<StockBeta::beta_sub>() const { return m_beta_sub; }
    template<> inline const auto StockBeta::get<StockBeta::beta_grp>() const { return m_beta_grp; }
    template<> inline const auto StockBeta::get<StockBeta::beta_qqq>() const { return m_beta_qqq; }
    template<> inline const auto StockBeta::get<StockBeta::beta_spy>() const { return m_beta_spy; }
    template<> inline const auto StockBeta::get<StockBeta::beta_iwm>() const { return m_beta_iwm; }
    template<> inline const auto StockBeta::get<StockBeta::timestamp>() const { return m_timestamp; }
    template<> inline const auto StockBeta_PKey::get<StockBeta_PKey::ticker>() const { return StockBeta_PKey::ticker{m_ticker}; }
    
    // ostream operators for all classes above, output should adhere to a JSON format

    inline std::ostream& operator<<(std::ostream &o, const StockBeta_PKey& m) {
        o << "\"ticker\":{" << m.get<StockBeta_PKey::ticker>() << "}";
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const StockBeta& m) {
        o << "\"_meta\":{" << m.get<StockBeta::_meta>() << "}";
        o << ",\"pkey\":{" << m.get<StockBeta::pkey>() << "}";
        o << ",\"status\":" << (int64_t)m.get<StockBeta::status>();
        o << ",\"beta\":" << m.get<StockBeta::beta>();
        o << ",\"beta_ind\":" << m.get<StockBeta::beta_ind>();
        o << ",\"beta_sub\":" << m.get<StockBeta::beta_sub>();
        o << ",\"beta_grp\":" << m.get<StockBeta::beta_grp>();
        o << ",\"beta_qqq\":" << m.get<StockBeta::beta_qqq>();
        o << ",\"beta_spy\":" << m.get<StockBeta::beta_spy>();
        o << ",\"beta_iwm\":" << m.get<StockBeta::beta_iwm>();
        {
            std::time_t tt = m.get<StockBeta::timestamp>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"timestamp\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        return o;
    }

}
}
}