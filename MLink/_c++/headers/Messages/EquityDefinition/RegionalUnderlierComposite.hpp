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

    #ifndef _currency__GUARD__
    #define _currency__GUARD__
    DECL_STRONG_TYPE(currency, spiderrock::protobuf::api::Currency);
    #endif//_currency__GUARD__

    #ifndef _composite_tkey__GUARD__
    #define _composite_tkey__GUARD__
    DECL_STRONG_TYPE(composite_tkey, TickerKey);
    #endif//_composite_tkey__GUARD__

    #ifndef _underlier_type__ProductClass__GUARD__
    #define _underlier_type__ProductClass__GUARD__
    DECL_STRONG_TYPE(underlier_type__ProductClass, spiderrock::protobuf::api::ProductClass);
    #endif//_underlier_type__ProductClass__GUARD__

    #ifndef _isin__GUARD__
    #define _isin__GUARD__
    DECL_STRONG_TYPE(isin, string);
    #endif//_isin__GUARD__

    #ifndef _exchange__StkExch__GUARD__
    #define _exchange__StkExch__GUARD__
    DECL_STRONG_TYPE(exchange__StkExch, spiderrock::protobuf::api::StkExch);
    #endif//_exchange__StkExch__GUARD__

    #ifndef _native_exch_symbol__GUARD__
    #define _native_exch_symbol__GUARD__
    DECL_STRONG_TYPE(native_exch_symbol, string);
    #endif//_native_exch_symbol__GUARD__

    
    class RegionalUnderlierComposite_PKey {
        public:
        //using statements for all types used in this class
        using isin = spiderrock::protobuf::api::isin;

        private:
        isin m_isin{};

        public:
        isin get_isin() const {
            return m_isin;
        }
        void set_isin(const isin& value)  {
            m_isin = value;
        }
        //templatized getters and setters
        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to RegionalUnderlierComposite_PKey::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to RegionalUnderlierComposite_PKey::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const isin & value) { set_isin(value); }


        RegionalUnderlierComposite_PKey() {}

        virtual ~RegionalUnderlierComposite_PKey() {
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
        bool IncludeIsin() const {
            return !(m_isin.empty());
        }


        size_t ByteSizeLong() const {
            size_t totalSize = 0;
            if ( IncludeIsin()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(10,m_isin);
            }
            return totalSize;
        }

        void Encode(uint8_t*& dest, uint8_t* max) const {
            if ( IncludeIsin()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,10,static_cast<string>(m_isin));
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
                    case 10: {m_isin = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                }
            }
        }

    };
    
    class RegionalUnderlierComposite_Contributors {
        public:
        //using statements for all types used in this class
        using exchange = spiderrock::protobuf::api::exchange__StkExch;
        using native_exch_symbol = spiderrock::protobuf::api::native_exch_symbol;

        private:
        exchange m_exchange{};
        native_exch_symbol m_native_exch_symbol{};

        public:
        exchange get_exchange() const {
            return m_exchange;
        }
        native_exch_symbol get_native_exch_symbol() const {
            return m_native_exch_symbol;
        }
        void set_exchange(const exchange& value)  {
            m_exchange = value;
        }
        void set_native_exch_symbol(const native_exch_symbol& value)  {
            m_native_exch_symbol = value;
        }
        //templatized getters and setters
        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to RegionalUnderlierComposite_Contributors::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to RegionalUnderlierComposite_Contributors::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const exchange & value) { set_exchange(value); }
        void set(const native_exch_symbol & value) { set_native_exch_symbol(value); }


        RegionalUnderlierComposite_Contributors() {}

        virtual ~RegionalUnderlierComposite_Contributors() {
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
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(104,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::StkExch>(m_exchange)));
            totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(105,m_native_exch_symbol);
            return totalSize;
        }

        uint8_t* Encode(uint8_t*& dest, uint8_t* max) const {
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,104,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::StkExch>(m_exchange)));
            dest = SRProtobufCPP::FieldCodec::EncodeString(dest,105,static_cast<string>(m_native_exch_symbol));
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
                    case 104: {m_exchange = static_cast<spiderrock::protobuf::api::StkExch>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                    case 105: {m_native_exch_symbol = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                }
            }
        }

    };
    

    class RegionalUnderlierComposite {
        public:
        //using statements for all types used in this class
    
        using _meta = spiderrock::protobuf::api::_meta;
        using pkey = spiderrock::protobuf::api::RegionalUnderlierComposite_PKey;
        using currency = spiderrock::protobuf::api::currency;
        using composite_tkey = spiderrock::protobuf::api::composite_tkey;
        using underlier_type = spiderrock::protobuf::api::underlier_type__ProductClass;
        using contributors = spiderrock::protobuf::api::RegionalUnderlierComposite_Contributors;

        private:
        _meta m__meta{};
        pkey m_pkey{};
        currency m_currency{};
        composite_tkey m_composite_tkey{};
        underlier_type m_underlier_type{};
        std::vector<contributors> m_contributors{};

        static constexpr int _mlinkHeaderLength = 14;

        public:		
        _meta get__meta() const {
            return m__meta;
        }		
        pkey get_pkey() const {
            return m_pkey;
        }		
        currency get_currency() const {
            return m_currency;
        }		
        composite_tkey get_composite_tkey() const {
            return m_composite_tkey;
        }		
        underlier_type get_underlier_type() const {
            return m_underlier_type;
        }
        const std::vector<contributors>& get_contributors_list() const {
            return m_contributors;
        }
        const contributors& get_contributors(const int i) const {
            return m_contributors.at(i);
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
        void set_currency(const currency& value)  {
            m_currency = value;
        }
        void set_composite_tkey(const composite_tkey& value)  {
            m_composite_tkey = value;
        }
        void set_underlier_type(const underlier_type& value)  {
            m_underlier_type = value;
        }
        void set_contributors_list(const std::vector<contributors>& list)  {
            m_contributors = list;
        }
        void add_contributors(const contributors& item) {
            m_contributors.emplace_back(item);
        }

        //templatized getters and setters

        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to RegionalUnderlierComposite::get()"); return T{}; }  // specializations for valid types are listed below the class definition

        template <typename T, size_t S = sizeof(T)>
        const auto get(int i) const { static_assert(sizeof(T) == -1, "Unexpected type in call to RegionalUnderlierComposite::get(int)"); return T{};}  // specializations for valid types are listed below the class definition

        template <typename T, size_t S = sizeof(T)>
        int count() const { static_assert(sizeof(T) == -1, "Unexpected type in call to RegionalUnderlierComposite::count()"); return 0;}  // specializations for valid types are listed below the class definition

        //specializations for set functions for the valid types
    
        void set(const _meta & value) {
            set__meta(value);
        }
        void set(const pkey & value) {
            set_pkey(value);
        }
        void set(const currency & value) {
            set_currency(value);
        }
        void set(const composite_tkey & value) {
            set_composite_tkey(value);
        }
        void set(const underlier_type & value) {
            set_underlier_type(value);
        }
        void set(const contributors & value) {
            add_contributors(value);
        }

        void set(const RegionalUnderlierComposite & value) {
            set(value.m__meta);
            set(value.m_pkey);
            set(value.m_currency);
            set(value.m_composite_tkey);
            set(value.m_underlier_type);set_contributors_list(value.m_contributors);
        }

        RegionalUnderlierComposite() {
            m__meta.set_message_type("RegionalUnderlierComposite");
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
            std::snprintf(reinterpret_cast<char*>(data), size, "\r\nP%05d%06zd", 4400, length);
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
            std::snprintf(const_cast<char*>(s->data()), s->size(), "\r\nP%05d%06zd", 4400, length);
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
             *this = RegionalUnderlierComposite{};
        }
        bool IncludeMeta() const {
            return (m__meta.ByteSizeLong() > 0);
        }
        bool IncludePkey() const {
            return (m_pkey.ByteSizeLong() > 0);
        }
        bool IncludeCompositeTkey() const {
            return (m_composite_tkey.ByteSizeLong() > 0);
        }
        bool IncludeContributors() const {
            return (!m_contributors.empty());
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
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(100,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::Currency>(m_currency)));
            if ( IncludeCompositeTkey()) {
                SRProtobufCPP::TickerKeyLayout tickerKeyLayout_composite_tkey{};
                m_composite_tkey.setCodecTickerKey(tickerKeyLayout_composite_tkey);
                totalSize += SRProtobufCPP::FieldCodec::TickerKeyFieldSize(101, tickerKeyLayout_composite_tkey);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(102,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ProductClass>(m_underlier_type)));
            if ( IncludeContributors()) {
                for (auto& item : m_contributors) {
					totalSize += SRProtobufCPP::TagCodec::Size(103, SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited);
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
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,100,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::Currency>(m_currency)));
            if ( IncludeCompositeTkey()) {
                SRProtobufCPP::TickerKeyLayout tickerKeyLayout_composite_tkey{};
                m_composite_tkey.setCodecTickerKey(tickerKeyLayout_composite_tkey);
                dest = SRProtobufCPP::FieldCodec::EncodeTickerKey(dest, 101, tickerKeyLayout_composite_tkey);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,102,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ProductClass>(m_underlier_type)));
            if ( IncludeContributors()) {
                for (auto& item : m_contributors) {
                    dest = SRProtobufCPP::TagCodec::Encode(dest, 103, SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited);
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
                    case 100: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_currency = static_cast<spiderrock::protobuf::api::Currency>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 101: {
                        if (tagType == SRProtobufCPP::TickerKeyCodec::TagType){
                            auto tickerKey = SRProtobufCPP::FieldCodec::DecodeTickerKey(pos,max);
                            m_composite_tkey.setFromCodec(tickerKey);
                        }
                        break;
                    }
                    case 102: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_underlier_type = static_cast<spiderrock::protobuf::api::ProductClass>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 103: {
                        if (tagType == SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited) {
                            const int length = SRProtobufCPP::LengthCodec::Decode(pos, max);
                            contributors item_contributors;
                            item_contributors.Decode(pos, pos+length);  
                            m_contributors.emplace_back(item_contributors);
                        }
                        break;
                    }
                }
            }
        }

    };


    // getter definitions for all classes above, both inner and outer classes

    template<> inline const auto RegionalUnderlierComposite::get<RegionalUnderlierComposite::_meta>() const { return RegionalUnderlierComposite::_meta{ m__meta}; }
    template<> inline const auto RegionalUnderlierComposite::get<RegionalUnderlierComposite::pkey>() const { return RegionalUnderlierComposite::pkey{ m_pkey}; }
    template<> inline const auto RegionalUnderlierComposite::get<RegionalUnderlierComposite::currency>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::Currency>( m_currency)); }
    template<> inline const auto RegionalUnderlierComposite::get<RegionalUnderlierComposite::composite_tkey>() const { return RegionalUnderlierComposite::composite_tkey{ m_composite_tkey}; }
    template<> inline const auto RegionalUnderlierComposite::get<RegionalUnderlierComposite::underlier_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ProductClass>( m_underlier_type)); }
    template<> inline const auto RegionalUnderlierComposite::get<RegionalUnderlierComposite::contributors>(int i) const { return RegionalUnderlierComposite::contributors{ get_contributors(i)}; }
    template<> inline int RegionalUnderlierComposite::count<RegionalUnderlierComposite::contributors>() const { return static_cast<int>( m_contributors.size()); }
    template<> inline const auto RegionalUnderlierComposite_PKey::get<RegionalUnderlierComposite_PKey::isin>() const { return m_isin; }
    
    template<> inline const auto RegionalUnderlierComposite_Contributors::get<RegionalUnderlierComposite_Contributors::exchange>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::StkExch>(m_exchange));}
    template<> inline const auto RegionalUnderlierComposite_Contributors::get<RegionalUnderlierComposite_Contributors::native_exch_symbol>() const { return m_native_exch_symbol; }
    
    // ostream operators for all classes above, output should adhere to a JSON format

    inline std::ostream& operator<<(std::ostream &o, const RegionalUnderlierComposite_PKey& m) {
        o << "\"isin\":\"" << m.get<RegionalUnderlierComposite_PKey::isin>() << "\"";
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const RegionalUnderlierComposite_Contributors& m) {
        o << "\"exchange\":" << (int64_t)m.get<RegionalUnderlierComposite_Contributors::exchange>();
        o << ",\"native_exch_symbol\":\"" << m.get<RegionalUnderlierComposite_Contributors::native_exch_symbol>() << "\"";
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const RegionalUnderlierComposite& m) {
        o << "\"_meta\":{" << m.get<RegionalUnderlierComposite::_meta>() << "}";
        o << ",\"pkey\":{" << m.get<RegionalUnderlierComposite::pkey>() << "}";
        o << ",\"currency\":" << (int64_t)m.get<RegionalUnderlierComposite::currency>();
        o << ",\"composite_tkey\":{" << m.get<RegionalUnderlierComposite::composite_tkey>() << "}";
        o << ",\"underlier_type\":" << (int64_t)m.get<RegionalUnderlierComposite::underlier_type>();
        o << ",\"contributors\":[";
        {
            const char *delim = "{";
            for (int i=0; i<m.count<RegionalUnderlierComposite::contributors>(); ++i) {
                o << delim << m.get<RegionalUnderlierComposite::contributors>(i) << '}';
                delim = ",{";
            }
        }
        o << "]";
        return o;
    }

}
}
}