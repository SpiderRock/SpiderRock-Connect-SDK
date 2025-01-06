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

    #ifndef _opn_size__GUARD__
    #define _opn_size__GUARD__
    DECL_STRONG_TYPE(opn_size, int32);
    #endif//_opn_size__GUARD__

    #ifndef _opn_price__float__GUARD__
    #define _opn_price__float__GUARD__
    DECL_STRONG_TYPE(opn_price__float, float);
    #endif//_opn_price__float__GUARD__

    #ifndef _opt_opn_type__GUARD__
    #define _opt_opn_type__GUARD__
    DECL_STRONG_TYPE(opt_opn_type, spiderrock::protobuf::api::OptOpnType);
    #endif//_opt_opn_type__GUARD__

    #ifndef _legal_market__GUARD__
    #define _legal_market__GUARD__
    DECL_STRONG_TYPE(legal_market, spiderrock::protobuf::api::YesNo);
    #endif//_legal_market__GUARD__

    #ifndef _eop_timestamp__GUARD__
    #define _eop_timestamp__GUARD__
    DECL_STRONG_TYPE(eop_timestamp, int64);
    #endif//_eop_timestamp__GUARD__

    #ifndef _net_timestamp__GUARD__
    #define _net_timestamp__GUARD__
    DECL_STRONG_TYPE(net_timestamp, int64);
    #endif//_net_timestamp__GUARD__

    #ifndef _timestamp__GUARD__
    #define _timestamp__GUARD__
    DECL_STRONG_TYPE(timestamp, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_timestamp__GUARD__

    #ifndef _okey__GUARD__
    #define _okey__GUARD__
    DECL_STRONG_TYPE(okey, OptionKey);
    #endif//_okey__GUARD__

    #ifndef _source_exch__GUARD__
    #define _source_exch__GUARD__
    DECL_STRONG_TYPE(source_exch, spiderrock::protobuf::api::TickerSrc);
    #endif//_source_exch__GUARD__

    
    class OptionEOP_PKey {
        public:
        //using statements for all types used in this class
        using okey = spiderrock::protobuf::api::okey;
        using source_exch = spiderrock::protobuf::api::source_exch;

        private:
        okey m_okey{};
        source_exch m_source_exch{};

        public:
		okey get_okey() const {
            return m_okey;
        }
        source_exch get_source_exch() const {
            return m_source_exch;
        }
        void set_okey(const okey& value)  {
            m_okey = value;
        }
        void set_source_exch(const source_exch& value)  {
            m_source_exch = value;
        }
        //templatized getters and setters
        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to OptionEOP_PKey::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to OptionEOP_PKey::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const okey & value) { set_okey(value); }
        void set(const source_exch & value) { set_source_exch(value); }


        OptionEOP_PKey() {}

        virtual ~OptionEOP_PKey() {
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
                SRProtobufCPP::OptionKeyLayout optionKeyLayout_okey;
                m_okey.setCodecOptionKey(optionKeyLayout_okey);
                totalSize += SRProtobufCPP::FieldCodec::OptionKeyFieldSize(10,optionKeyLayout_okey);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(11,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::TickerSrc>(m_source_exch)));
            return totalSize;
        }

        void Encode(uint8_t*& dest, uint8_t* max) const {
            if ( IncludeOkey()) {
                SRProtobufCPP::OptionKeyLayout optionKeyLayout_okey;
                m_okey.setCodecOptionKey(optionKeyLayout_okey);
                dest = SRProtobufCPP::FieldCodec::EncodeOptionKey(dest, 10, optionKeyLayout_okey);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,11,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::TickerSrc>(m_source_exch)));
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
                    case 11: {m_source_exch = static_cast<spiderrock::protobuf::api::TickerSrc>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                }
            }
        }

    };
    

    class OptionEOP {
        public:
        //using statements for all types used in this class
    
        using _meta = spiderrock::protobuf::api::_meta;
        using pkey = spiderrock::protobuf::api::OptionEOP_PKey;
        using opn_size = spiderrock::protobuf::api::opn_size;
        using opn_price = spiderrock::protobuf::api::opn_price__float;
        using opt_opn_type = spiderrock::protobuf::api::opt_opn_type;
        using legal_market = spiderrock::protobuf::api::legal_market;
        using eop_timestamp = spiderrock::protobuf::api::eop_timestamp;
        using net_timestamp = spiderrock::protobuf::api::net_timestamp;
        using timestamp = spiderrock::protobuf::api::timestamp;

        private:
        _meta m__meta{};
        pkey m_pkey{};
        opn_size m_opn_size{};
        opn_price m_opn_price{};
        opt_opn_type m_opt_opn_type{};
        legal_market m_legal_market{};
        eop_timestamp m_eop_timestamp{};
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
        opn_size get_opn_size() const {
            return m_opn_size;
        }		
        opn_price get_opn_price() const {
            return m_opn_price;
        }		
        opt_opn_type get_opt_opn_type() const {
            return m_opt_opn_type;
        }		
        legal_market get_legal_market() const {
            return m_legal_market;
        }		
        eop_timestamp get_eop_timestamp() const {
            return m_eop_timestamp;
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
        void set_opn_size(const opn_size& value)  {
            m_opn_size = value;
        }
        void set_opn_price(const opn_price& value)  {
            m_opn_price = value;
        }
        void set_opt_opn_type(const opt_opn_type& value)  {
            m_opt_opn_type = value;
        }
        void set_legal_market(const legal_market& value)  {
            m_legal_market = value;
        }
        void set_eop_timestamp(const eop_timestamp& value)  {
            m_eop_timestamp = value;
        }
        void set_net_timestamp(const net_timestamp& value)  {
            m_net_timestamp = value;
        }
        void set_timestamp(const timestamp& value)  {
            m_timestamp = value;
        }

        //templatized getters and setters

        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to OptionEOP::get()"); return T{}; }  // specializations for valid types are listed below the class definition

        //specializations for set functions for the valid types
    
        void set(const _meta & value) {
            set__meta(value);
        }
        void set(const pkey & value) {
            set_pkey(value);
        }
        void set(const opn_size & value) {
            set_opn_size(value);
        }
        void set(const opn_price & value) {
            set_opn_price(value);
        }
        void set(const opt_opn_type & value) {
            set_opt_opn_type(value);
        }
        void set(const legal_market & value) {
            set_legal_market(value);
        }
        void set(const eop_timestamp & value) {
            set_eop_timestamp(value);
        }
        void set(const net_timestamp & value) {
            set_net_timestamp(value);
        }
        void set(const timestamp & value) {
            set_timestamp(value);
        }

        void set(const OptionEOP & value) {
            set(value.m__meta);
            set(value.m_pkey);
            set(value.m_opn_size);
            set(value.m_opn_price);
            set(value.m_opt_opn_type);
            set(value.m_legal_market);
            set(value.m_eop_timestamp);
            set(value.m_net_timestamp);
            set(value.m_timestamp);
        }

        OptionEOP() {
            m__meta.set_message_type("OptionEOP");
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
            std::snprintf(reinterpret_cast<char*>(data), size, "\r\nP%05d%06zd", 2760, length);
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
            std::snprintf(const_cast<char*>(s->data()), s->size(), "\r\nP%05d%06zd", 2760, length);
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
             *this = OptionEOP{};
        }
        bool IncludeMeta() const {
            return (m__meta.ByteSizeLong() > 0);
        }
        bool IncludePkey() const {
            return (m_pkey.ByteSizeLong() > 0);
        }
        bool IncludeOpnSize() const {
            return !(m_opn_size == 0);
        }
        bool IncludeOpnPrice() const {
            return !(m_opn_price == 0.0);
        }
        bool IncludeEopTimestamp() const {
            return !(m_eop_timestamp == 0);
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
            if ( IncludeOpnSize()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(100,m_opn_size);
            }
            if ( IncludeOpnPrice()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(103,m_opn_price);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(106,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::OptOpnType>(m_opt_opn_type)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(109,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_legal_market)));
            if ( IncludeEopTimestamp()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(112,m_eop_timestamp);
            }
            if ( IncludeNetTimestamp()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(115,m_net_timestamp);
            }
            if ( IncludeTimestamp()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(118, m_timestamp);
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
            if ( IncludeOpnSize()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,100,m_opn_size);
            }
            if ( IncludeOpnPrice()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,103,m_opn_price);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,106,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::OptOpnType>(m_opt_opn_type)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,109,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_legal_market)));
            if ( IncludeEopTimestamp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,112,m_eop_timestamp);
            }
            if ( IncludeNetTimestamp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,115,m_net_timestamp);
            }
            if ( IncludeTimestamp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 118, m_timestamp);
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
                            m_opn_size = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 103: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_opn_price = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 106: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_opt_opn_type = static_cast<spiderrock::protobuf::api::OptOpnType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 109: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_legal_market = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 112: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_eop_timestamp = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 115: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_net_timestamp = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 118: {
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

    template<> inline const auto OptionEOP::get<OptionEOP::_meta>() const { return OptionEOP::_meta{ m__meta}; }
    template<> inline const auto OptionEOP::get<OptionEOP::pkey>() const { return OptionEOP::pkey{ m_pkey}; }
    template<> inline const auto OptionEOP::get<OptionEOP::opn_size>() const { return m_opn_size; }
    template<> inline const auto OptionEOP::get<OptionEOP::opn_price>() const { return m_opn_price; }
    template<> inline const auto OptionEOP::get<OptionEOP::opt_opn_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::OptOpnType>( m_opt_opn_type)); }
    template<> inline const auto OptionEOP::get<OptionEOP::legal_market>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_legal_market)); }
    template<> inline const auto OptionEOP::get<OptionEOP::eop_timestamp>() const { return m_eop_timestamp; }
    template<> inline const auto OptionEOP::get<OptionEOP::net_timestamp>() const { return m_net_timestamp; }
    template<> inline const auto OptionEOP::get<OptionEOP::timestamp>() const { return m_timestamp; }
    template<> inline const auto OptionEOP_PKey::get<OptionEOP_PKey::okey>() const { return OptionEOP_PKey::okey{m_okey}; }
    template<> inline const auto OptionEOP_PKey::get<OptionEOP_PKey::source_exch>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::TickerSrc>(m_source_exch));}
    
    // ostream operators for all classes above, output should adhere to a JSON format

    inline std::ostream& operator<<(std::ostream &o, const OptionEOP_PKey& m) {
        o << "\"okey\":{" << m.get<OptionEOP_PKey::okey>() << "}";
        o << ",\"source_exch\":" << (int64_t)m.get<OptionEOP_PKey::source_exch>();
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const OptionEOP& m) {
        o << "\"_meta\":{" << m.get<OptionEOP::_meta>() << "}";
        o << ",\"pkey\":{" << m.get<OptionEOP::pkey>() << "}";
        o << ",\"opn_size\":" << m.get<OptionEOP::opn_size>();
        o << ",\"opn_price\":" << m.get<OptionEOP::opn_price>();
        o << ",\"opt_opn_type\":" << (int64_t)m.get<OptionEOP::opt_opn_type>();
        o << ",\"legal_market\":" << (int64_t)m.get<OptionEOP::legal_market>();
        o << ",\"eop_timestamp\":" << m.get<OptionEOP::eop_timestamp>();
        o << ",\"net_timestamp\":" << m.get<OptionEOP::net_timestamp>();
        {
            std::time_t tt = m.get<OptionEOP::timestamp>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"timestamp\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        return o;
    }

}
}
}