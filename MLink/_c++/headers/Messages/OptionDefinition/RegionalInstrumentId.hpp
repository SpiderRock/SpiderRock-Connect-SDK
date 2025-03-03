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

    #ifndef _market_segment_id__string__GUARD__
    #define _market_segment_id__string__GUARD__
    DECL_STRONG_TYPE(market_segment_id__string, string);
    #endif//_market_segment_id__string__GUARD__

    #ifndef _instrument_id__GUARD__
    #define _instrument_id__GUARD__
    DECL_STRONG_TYPE(instrument_id, string);
    #endif//_instrument_id__GUARD__

    #ifndef _product_complex__GUARD__
    #define _product_complex__GUARD__
    DECL_STRONG_TYPE(product_complex, string);
    #endif//_product_complex__GUARD__

    #ifndef _ric__GUARD__
    #define _ric__GUARD__
    DECL_STRONG_TYPE(ric, string);
    #endif//_ric__GUARD__

    #ifndef _bbg__GUARD__
    #define _bbg__GUARD__
    DECL_STRONG_TYPE(bbg, string);
    #endif//_bbg__GUARD__

    #ifndef _isin__GUARD__
    #define _isin__GUARD__
    DECL_STRONG_TYPE(isin, string);
    #endif//_isin__GUARD__

    #ifndef _sedol__GUARD__
    #define _sedol__GUARD__
    DECL_STRONG_TYPE(sedol, string);
    #endif//_sedol__GUARD__

    #ifndef _cusip__GUARD__
    #define _cusip__GUARD__
    DECL_STRONG_TYPE(cusip, string);
    #endif//_cusip__GUARD__

    #ifndef _figi__GUARD__
    #define _figi__GUARD__
    DECL_STRONG_TYPE(figi, string);
    #endif//_figi__GUARD__

    #ifndef _sec_key__OptionKey__GUARD__
    #define _sec_key__OptionKey__GUARD__
    DECL_STRONG_TYPE(sec_key__OptionKey, OptionKey);
    #endif//_sec_key__OptionKey__GUARD__

    #ifndef _sec_type__SpdrKeyType__GUARD__
    #define _sec_type__SpdrKeyType__GUARD__
    DECL_STRONG_TYPE(sec_type__SpdrKeyType, spiderrock::protobuf::api::SpdrKeyType);
    #endif//_sec_type__SpdrKeyType__GUARD__

    
    class RegionalInstrumentId_PKey {
        public:
        //using statements for all types used in this class
        using sec_key = spiderrock::protobuf::api::sec_key__OptionKey;
        using sec_type = spiderrock::protobuf::api::sec_type__SpdrKeyType;

        private:
        sec_key m_sec_key{};
        sec_type m_sec_type{};

        public:
		sec_key get_sec_key() const {
            return m_sec_key;
        }
        sec_type get_sec_type() const {
            return m_sec_type;
        }
        void set_sec_key(const sec_key& value)  {
            m_sec_key = value;
        }
        void set_sec_type(const sec_type& value)  {
            m_sec_type = value;
        }
        //templatized getters and setters
        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to RegionalInstrumentId_PKey::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to RegionalInstrumentId_PKey::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const sec_key & value) { set_sec_key(value); }
        void set(const sec_type & value) { set_sec_type(value); }


        RegionalInstrumentId_PKey() {}

        virtual ~RegionalInstrumentId_PKey() {
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
        bool IncludeSecKey() const {
            return (m_sec_key.ByteSizeLong() > 0);
        }


        size_t ByteSizeLong() const {
            size_t totalSize = 0;
            if ( IncludeSecKey()) {
                SRProtobufCPP::OptionKeyLayout optionKeyLayout_sec_key;
                m_sec_key.setCodecOptionKey(optionKeyLayout_sec_key);
                totalSize += SRProtobufCPP::FieldCodec::OptionKeyFieldSize(10,optionKeyLayout_sec_key);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(11,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>(m_sec_type)));
            return totalSize;
        }

        void Encode(uint8_t*& dest, uint8_t* max) const {
            if ( IncludeSecKey()) {
                SRProtobufCPP::OptionKeyLayout optionKeyLayout_sec_key;
                m_sec_key.setCodecOptionKey(optionKeyLayout_sec_key);
                dest = SRProtobufCPP::FieldCodec::EncodeOptionKey(dest, 10, optionKeyLayout_sec_key);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,11,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>(m_sec_type)));
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
                        m_sec_key.setFromCodec(optionKey);
                        break;
                    }
                    case 11: {m_sec_type = static_cast<spiderrock::protobuf::api::SpdrKeyType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                }
            }
        }

    };
    

    class RegionalInstrumentId {
        public:
        //using statements for all types used in this class
    
        using _meta = spiderrock::protobuf::api::_meta;
        using pkey = spiderrock::protobuf::api::RegionalInstrumentId_PKey;
        using market_segment_id = spiderrock::protobuf::api::market_segment_id__string;
        using instrument_id = spiderrock::protobuf::api::instrument_id;
        using product_complex = spiderrock::protobuf::api::product_complex;
        using ric = spiderrock::protobuf::api::ric;
        using bbg = spiderrock::protobuf::api::bbg;
        using isin = spiderrock::protobuf::api::isin;
        using sedol = spiderrock::protobuf::api::sedol;
        using cusip = spiderrock::protobuf::api::cusip;
        using figi = spiderrock::protobuf::api::figi;

        private:
        _meta m__meta{};
        pkey m_pkey{};
        market_segment_id m_market_segment_id{};
        instrument_id m_instrument_id{};
        product_complex m_product_complex{};
        ric m_ric{};
        bbg m_bbg{};
        isin m_isin{};
        sedol m_sedol{};
        cusip m_cusip{};
        figi m_figi{};

        static constexpr int _mlinkHeaderLength = 14;

        public:		
        _meta get__meta() const {
            return m__meta;
        }		
        pkey get_pkey() const {
            return m_pkey;
        }		
        market_segment_id get_market_segment_id() const {
            return m_market_segment_id;
        }		
        instrument_id get_instrument_id() const {
            return m_instrument_id;
        }		
        product_complex get_product_complex() const {
            return m_product_complex;
        }		
        ric get_ric() const {
            return m_ric;
        }		
        bbg get_bbg() const {
            return m_bbg;
        }		
        isin get_isin() const {
            return m_isin;
        }		
        sedol get_sedol() const {
            return m_sedol;
        }		
        cusip get_cusip() const {
            return m_cusip;
        }		
        figi get_figi() const {
            return m_figi;
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
        void set_market_segment_id(const market_segment_id& value)  {
            m_market_segment_id = value;
        }
        void set_instrument_id(const instrument_id& value)  {
            m_instrument_id = value;
        }
        void set_product_complex(const product_complex& value)  {
            m_product_complex = value;
        }
        void set_ric(const ric& value)  {
            m_ric = value;
        }
        void set_bbg(const bbg& value)  {
            m_bbg = value;
        }
        void set_isin(const isin& value)  {
            m_isin = value;
        }
        void set_sedol(const sedol& value)  {
            m_sedol = value;
        }
        void set_cusip(const cusip& value)  {
            m_cusip = value;
        }
        void set_figi(const figi& value)  {
            m_figi = value;
        }

        //templatized getters and setters

        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to RegionalInstrumentId::get()"); return T{}; }  // specializations for valid types are listed below the class definition

        //specializations for set functions for the valid types
    
        void set(const _meta & value) {
            set__meta(value);
        }
        void set(const pkey & value) {
            set_pkey(value);
        }
        void set(const market_segment_id & value) {
            set_market_segment_id(value);
        }
        void set(const instrument_id & value) {
            set_instrument_id(value);
        }
        void set(const product_complex & value) {
            set_product_complex(value);
        }
        void set(const ric & value) {
            set_ric(value);
        }
        void set(const bbg & value) {
            set_bbg(value);
        }
        void set(const isin & value) {
            set_isin(value);
        }
        void set(const sedol & value) {
            set_sedol(value);
        }
        void set(const cusip & value) {
            set_cusip(value);
        }
        void set(const figi & value) {
            set_figi(value);
        }

        void set(const RegionalInstrumentId & value) {
            set(value.m__meta);
            set(value.m_pkey);
            set(value.m_market_segment_id);
            set(value.m_instrument_id);
            set(value.m_product_complex);
            set(value.m_ric);
            set(value.m_bbg);
            set(value.m_isin);
            set(value.m_sedol);
            set(value.m_cusip);
            set(value.m_figi);
        }

        RegionalInstrumentId() {
            m__meta.set_message_type("RegionalInstrumentId");
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
            std::snprintf(reinterpret_cast<char*>(data), size, "\r\nP%05d%06zd", 4410, length);
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
            std::snprintf(const_cast<char*>(s->data()), s->size(), "\r\nP%05d%06zd", 4410, length);
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
             *this = RegionalInstrumentId{};
        }
        bool IncludeMeta() const {
            return (m__meta.ByteSizeLong() > 0);
        }
        bool IncludePkey() const {
            return (m_pkey.ByteSizeLong() > 0);
        }
        bool IncludeMarketSegmentId() const {
            return !(m_market_segment_id.empty());
        }
        bool IncludeInstrumentId() const {
            return !(m_instrument_id.empty());
        }
        bool IncludeProductComplex() const {
            return !(m_product_complex.empty());
        }
        bool IncludeRic() const {
            return !(m_ric.empty());
        }
        bool IncludeBbg() const {
            return !(m_bbg.empty());
        }
        bool IncludeIsin() const {
            return !(m_isin.empty());
        }
        bool IncludeSedol() const {
            return !(m_sedol.empty());
        }
        bool IncludeCusip() const {
            return !(m_cusip.empty());
        }
        bool IncludeFigi() const {
            return !(m_figi.empty());
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
            if ( IncludeMarketSegmentId()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(100,m_market_segment_id);
            }
            if ( IncludeInstrumentId()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(101,m_instrument_id);
            }
            if ( IncludeProductComplex()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(102,m_product_complex);
            }
            if ( IncludeRic()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(103,m_ric);
            }
            if ( IncludeBbg()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(104,m_bbg);
            }
            if ( IncludeIsin()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(105,m_isin);
            }
            if ( IncludeSedol()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(106,m_sedol);
            }
            if ( IncludeCusip()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(107,m_cusip);
            }
            if ( IncludeFigi()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(108,m_figi);
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
            if ( IncludeMarketSegmentId()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,100,static_cast<string>(m_market_segment_id));
            }
            if ( IncludeInstrumentId()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,101,static_cast<string>(m_instrument_id));
            }
            if ( IncludeProductComplex()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,102,static_cast<string>(m_product_complex));
            }
            if ( IncludeRic()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,103,static_cast<string>(m_ric));
            }
            if ( IncludeBbg()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,104,static_cast<string>(m_bbg));
            }
            if ( IncludeIsin()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,105,static_cast<string>(m_isin));
            }
            if ( IncludeSedol()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,106,static_cast<string>(m_sedol));
            }
            if ( IncludeCusip()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,107,static_cast<string>(m_cusip));
            }
            if ( IncludeFigi()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,108,static_cast<string>(m_figi));
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
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_market_segment_id = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 101: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_instrument_id = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 102: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_product_complex = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 103: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_ric = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 104: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_bbg = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 105: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_isin = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 106: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_sedol = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 107: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_cusip = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 108: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_figi = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                }
            }
        }

    };


    // getter definitions for all classes above, both inner and outer classes

    template<> inline const auto RegionalInstrumentId::get<RegionalInstrumentId::_meta>() const { return RegionalInstrumentId::_meta{ m__meta}; }
    template<> inline const auto RegionalInstrumentId::get<RegionalInstrumentId::pkey>() const { return RegionalInstrumentId::pkey{ m_pkey}; }
    template<> inline const auto RegionalInstrumentId::get<RegionalInstrumentId::market_segment_id>() const { return m_market_segment_id; }
    template<> inline const auto RegionalInstrumentId::get<RegionalInstrumentId::instrument_id>() const { return m_instrument_id; }
    template<> inline const auto RegionalInstrumentId::get<RegionalInstrumentId::product_complex>() const { return m_product_complex; }
    template<> inline const auto RegionalInstrumentId::get<RegionalInstrumentId::ric>() const { return m_ric; }
    template<> inline const auto RegionalInstrumentId::get<RegionalInstrumentId::bbg>() const { return m_bbg; }
    template<> inline const auto RegionalInstrumentId::get<RegionalInstrumentId::isin>() const { return m_isin; }
    template<> inline const auto RegionalInstrumentId::get<RegionalInstrumentId::sedol>() const { return m_sedol; }
    template<> inline const auto RegionalInstrumentId::get<RegionalInstrumentId::cusip>() const { return m_cusip; }
    template<> inline const auto RegionalInstrumentId::get<RegionalInstrumentId::figi>() const { return m_figi; }
    template<> inline const auto RegionalInstrumentId_PKey::get<RegionalInstrumentId_PKey::sec_key>() const { return RegionalInstrumentId_PKey::sec_key{m_sec_key}; }
    template<> inline const auto RegionalInstrumentId_PKey::get<RegionalInstrumentId_PKey::sec_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>(m_sec_type));}
    
    // ostream operators for all classes above, output should adhere to a JSON format

    inline std::ostream& operator<<(std::ostream &o, const RegionalInstrumentId_PKey& m) {
        o << "\"sec_key\":{" << m.get<RegionalInstrumentId_PKey::sec_key>() << "}";
        o << ",\"sec_type\":" << (int64_t)m.get<RegionalInstrumentId_PKey::sec_type>();
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const RegionalInstrumentId& m) {
        o << "\"_meta\":{" << m.get<RegionalInstrumentId::_meta>() << "}";
        o << ",\"pkey\":{" << m.get<RegionalInstrumentId::pkey>() << "}";
        o << ",\"market_segment_id\":\"" << m.get<RegionalInstrumentId::market_segment_id>() << "\"";
        o << ",\"instrument_id\":\"" << m.get<RegionalInstrumentId::instrument_id>() << "\"";
        o << ",\"product_complex\":\"" << m.get<RegionalInstrumentId::product_complex>() << "\"";
        o << ",\"ric\":\"" << m.get<RegionalInstrumentId::ric>() << "\"";
        o << ",\"bbg\":\"" << m.get<RegionalInstrumentId::bbg>() << "\"";
        o << ",\"isin\":\"" << m.get<RegionalInstrumentId::isin>() << "\"";
        o << ",\"sedol\":\"" << m.get<RegionalInstrumentId::sedol>() << "\"";
        o << ",\"cusip\":\"" << m.get<RegionalInstrumentId::cusip>() << "\"";
        o << ",\"figi\":\"" << m.get<RegionalInstrumentId::figi>() << "\"";
        return o;
    }

}
}
}