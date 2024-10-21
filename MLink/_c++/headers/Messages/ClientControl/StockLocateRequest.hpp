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

    #ifndef _request_quan__GUARD__
    #define _request_quan__GUARD__
    DECL_STRONG_TYPE(request_quan, int32);
    #endif//_request_quan__GUARD__

    #ifndef _request_origin__GUARD__
    #define _request_origin__GUARD__
    DECL_STRONG_TYPE(request_origin, spiderrock::protobuf::api::RequestOrigin);
    #endif//_request_origin__GUARD__

    #ifndef _request_machine__GUARD__
    #define _request_machine__GUARD__
    DECL_STRONG_TYPE(request_machine, string);
    #endif//_request_machine__GUARD__

    #ifndef _modified_in__GUARD__
    #define _modified_in__GUARD__
    DECL_STRONG_TYPE(modified_in, spiderrock::protobuf::api::SysEnvironment);
    #endif//_modified_in__GUARD__

    #ifndef _timestamp__GUARD__
    #define _timestamp__GUARD__
    DECL_STRONG_TYPE(timestamp, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_timestamp__GUARD__

    #ifndef _ticker__TickerKey__GUARD__
    #define _ticker__TickerKey__GUARD__
    DECL_STRONG_TYPE(ticker__TickerKey, TickerKey);
    #endif//_ticker__TickerKey__GUARD__

    #ifndef _core_client_firm__GUARD__
    #define _core_client_firm__GUARD__
    DECL_STRONG_TYPE(core_client_firm, string);
    #endif//_core_client_firm__GUARD__

    #ifndef _locate_firm__GUARD__
    #define _locate_firm__GUARD__
    DECL_STRONG_TYPE(locate_firm, string);
    #endif//_locate_firm__GUARD__

    #ifndef _locate_pool__GUARD__
    #define _locate_pool__GUARD__
    DECL_STRONG_TYPE(locate_pool, string);
    #endif//_locate_pool__GUARD__

    
    class StockLocateRequest_PKey {
        public:
        //using statements for all types used in this class
        using ticker = spiderrock::protobuf::api::ticker__TickerKey;
        using core_client_firm = spiderrock::protobuf::api::core_client_firm;
        using locate_firm = spiderrock::protobuf::api::locate_firm;
        using locate_pool = spiderrock::protobuf::api::locate_pool;

        private:
        ticker m_ticker{};
        core_client_firm m_core_client_firm{};
        locate_firm m_locate_firm{};
        locate_pool m_locate_pool{};

        public:
		ticker get_ticker() const {
            return m_ticker;
        }
        core_client_firm get_core_client_firm() const {
            return m_core_client_firm;
        }
        locate_firm get_locate_firm() const {
            return m_locate_firm;
        }
        locate_pool get_locate_pool() const {
            return m_locate_pool;
        }
        void set_ticker(const ticker& value)  {
            m_ticker = value;
        }
        void set_core_client_firm(const core_client_firm& value)  {
            m_core_client_firm = value;
        }
        void set_locate_firm(const locate_firm& value)  {
            m_locate_firm = value;
        }
        void set_locate_pool(const locate_pool& value)  {
            m_locate_pool = value;
        }
        //templatized getters and setters
        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to StockLocateRequest_PKey::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to StockLocateRequest_PKey::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const ticker & value) { set_ticker(value); }
        void set(const core_client_firm & value) { set_core_client_firm(value); }
        void set(const locate_firm & value) { set_locate_firm(value); }
        void set(const locate_pool & value) { set_locate_pool(value); }


        StockLocateRequest_PKey() {}

        virtual ~StockLocateRequest_PKey() {
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
        bool IncludeCoreClientFirm() const {
            return !(m_core_client_firm.empty());
        }
        bool IncludeLocateFirm() const {
            return !(m_locate_firm.empty());
        }
        bool IncludeLocatePool() const {
            return !(m_locate_pool.empty());
        }


        size_t ByteSizeLong() const {
            size_t totalSize = 0;
            if ( IncludeTicker()) {
                SRProtobufCPP::TickerKeyLayout tickerKeyLayout;
                m_ticker.setCodecTickerKey(tickerKeyLayout);
                totalSize += SRProtobufCPP::FieldCodec::TickerKeyFieldSize(10,tickerKeyLayout);
            }
            if ( IncludeCoreClientFirm()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(11,m_core_client_firm);
            }
            if ( IncludeLocateFirm()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(12,m_locate_firm);
            }
            if ( IncludeLocatePool()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(13,m_locate_pool);
            }
            return totalSize;
        }

        void Encode(uint8_t*& dest, uint8_t* max) const {
            if ( IncludeTicker()) {
                SRProtobufCPP::TickerKeyLayout tickerKeyLayout;
                m_ticker.setCodecTickerKey(tickerKeyLayout);
                dest = SRProtobufCPP::FieldCodec::EncodeTickerKey(dest, 10, tickerKeyLayout);
            }
            if ( IncludeCoreClientFirm()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,11,static_cast<string>(m_core_client_firm));
            }
            if ( IncludeLocateFirm()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,12,static_cast<string>(m_locate_firm));
            }
            if ( IncludeLocatePool()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,13,static_cast<string>(m_locate_pool));
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
                    case 11: {m_core_client_firm = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                    case 12: {m_locate_firm = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                    case 13: {m_locate_pool = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                }
            }
        }

    };
    

    class StockLocateRequest {
        public:
        //using statements for all types used in this class
    
        using _meta = spiderrock::protobuf::api::_meta;
        using pkey = spiderrock::protobuf::api::StockLocateRequest_PKey;
        using request_quan = spiderrock::protobuf::api::request_quan;
        using request_origin = spiderrock::protobuf::api::request_origin;
        using request_machine = spiderrock::protobuf::api::request_machine;
        using modified_in = spiderrock::protobuf::api::modified_in;
        using timestamp = spiderrock::protobuf::api::timestamp;

        private:
        _meta m__meta{};
        pkey m_pkey{};
        request_quan m_request_quan{};
        request_origin m_request_origin{};
        request_machine m_request_machine{};
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
        request_quan get_request_quan() const {
            return m_request_quan;
        }		
        request_origin get_request_origin() const {
            return m_request_origin;
        }		
        request_machine get_request_machine() const {
            return m_request_machine;
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
        void set_request_quan(const request_quan& value)  {
            m_request_quan = value;
        }
        void set_request_origin(const request_origin& value)  {
            m_request_origin = value;
        }
        void set_request_machine(const request_machine& value)  {
            m_request_machine = value;
        }
        void set_modified_in(const modified_in& value)  {
            m_modified_in = value;
        }
        void set_timestamp(const timestamp& value)  {
            m_timestamp = value;
        }

        //templatized getters and setters

        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to StockLocateRequest::get()"); return T{}; }  // specializations for valid types are listed below the class definition

        //specializations for set functions for the valid types
    
        void set(const _meta & value) {
            set__meta(value);
        }
        void set(const pkey & value) {
            set_pkey(value);
        }
        void set(const request_quan & value) {
            set_request_quan(value);
        }
        void set(const request_origin & value) {
            set_request_origin(value);
        }
        void set(const request_machine & value) {
            set_request_machine(value);
        }
        void set(const modified_in & value) {
            set_modified_in(value);
        }
        void set(const timestamp & value) {
            set_timestamp(value);
        }

        void set(const StockLocateRequest & value) {
            set(value.m__meta);
            set(value.m_pkey);
            set(value.m_request_quan);
            set(value.m_request_origin);
            set(value.m_request_machine);
            set(value.m_modified_in);
            set(value.m_timestamp);
        }

        StockLocateRequest() {
            m__meta.set_message_type("StockLocateRequest");
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
            std::snprintf(reinterpret_cast<char*>(data), size, "\r\nP%05d%06zd", 1735, length);
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
            std::snprintf(const_cast<char*>(s->data()), s->size(), "\r\nP%05d%06zd", 1735, length);
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
             *this = StockLocateRequest{};
        }
        bool IncludeMeta() const {
            return (m__meta.ByteSizeLong() > 0);
        }
        bool IncludePkey() const {
            return (m_pkey.ByteSizeLong() > 0);
        }
        bool IncludeRequestQuan() const {
            return !(m_request_quan == 0);
        }
        bool IncludeRequestMachine() const {
            return !(m_request_machine.empty());
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
            if ( IncludeRequestQuan()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(100,m_request_quan);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(103,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::RequestOrigin>(m_request_origin)));
            if ( IncludeRequestMachine()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(106,m_request_machine);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(112,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SysEnvironment>(m_modified_in)));
            if ( IncludeTimestamp()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(115, m_timestamp);
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
            if ( IncludeRequestQuan()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,100,m_request_quan);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,103,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::RequestOrigin>(m_request_origin)));
            if ( IncludeRequestMachine()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,106,static_cast<string>(m_request_machine));
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,112,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SysEnvironment>(m_modified_in)));
            if ( IncludeTimestamp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 115, m_timestamp);
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
                            m_request_quan = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 103: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_request_origin = static_cast<spiderrock::protobuf::api::RequestOrigin>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 106: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_request_machine = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 112: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_modified_in = static_cast<spiderrock::protobuf::api::SysEnvironment>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 115: {
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

    template<> inline const auto StockLocateRequest::get<StockLocateRequest::_meta>() const { return StockLocateRequest::_meta{ m__meta}; }
    template<> inline const auto StockLocateRequest::get<StockLocateRequest::pkey>() const { return StockLocateRequest::pkey{ m_pkey}; }
    template<> inline const auto StockLocateRequest::get<StockLocateRequest::request_quan>() const { return m_request_quan; }
    template<> inline const auto StockLocateRequest::get<StockLocateRequest::request_origin>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::RequestOrigin>( m_request_origin)); }
    template<> inline const auto StockLocateRequest::get<StockLocateRequest::request_machine>() const { return m_request_machine; }
    template<> inline const auto StockLocateRequest::get<StockLocateRequest::modified_in>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SysEnvironment>( m_modified_in)); }
    template<> inline const auto StockLocateRequest::get<StockLocateRequest::timestamp>() const { return m_timestamp; }
    template<> inline const auto StockLocateRequest_PKey::get<StockLocateRequest_PKey::ticker>() const { return StockLocateRequest_PKey::ticker{m_ticker}; }
    template<> inline const auto StockLocateRequest_PKey::get<StockLocateRequest_PKey::core_client_firm>() const { return m_core_client_firm; }
    template<> inline const auto StockLocateRequest_PKey::get<StockLocateRequest_PKey::locate_firm>() const { return m_locate_firm; }
    template<> inline const auto StockLocateRequest_PKey::get<StockLocateRequest_PKey::locate_pool>() const { return m_locate_pool; }
    
    // ostream operators for all classes above, output should adhere to a JSON format

    inline std::ostream& operator<<(std::ostream &o, const StockLocateRequest_PKey& m) {
        o << "\"ticker\":{" << m.get<StockLocateRequest_PKey::ticker>() << "}";
        o << ",\"core_client_firm\":\"" << m.get<StockLocateRequest_PKey::core_client_firm>() << "\"";
        o << ",\"locate_firm\":\"" << m.get<StockLocateRequest_PKey::locate_firm>() << "\"";
        o << ",\"locate_pool\":\"" << m.get<StockLocateRequest_PKey::locate_pool>() << "\"";
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const StockLocateRequest& m) {
        o << "\"_meta\":{" << m.get<StockLocateRequest::_meta>() << "}";
        o << ",\"pkey\":{" << m.get<StockLocateRequest::pkey>() << "}";
        o << ",\"request_quan\":" << m.get<StockLocateRequest::request_quan>();
        o << ",\"request_origin\":" << (int64_t)m.get<StockLocateRequest::request_origin>();
        o << ",\"request_machine\":\"" << m.get<StockLocateRequest::request_machine>() << "\"";
        o << ",\"modified_in\":" << (int64_t)m.get<StockLocateRequest::modified_in>();
        {
            std::time_t tt = m.get<StockLocateRequest::timestamp>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"timestamp\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        return o;
    }

}
}
}