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

    #ifndef _date__string__GUARD__
    #define _date__string__GUARD__
    DECL_STRONG_TYPE(date__string, string);
    #endif//_date__string__GUARD__

    #ifndef _security_id__int32__GUARD__
    #define _security_id__int32__GUARD__
    DECL_STRONG_TYPE(security_id__int32, int32);
    #endif//_security_id__int32__GUARD__

    #ifndef _value__float__GUARD__
    #define _value__float__GUARD__
    DECL_STRONG_TYPE(value__float, float);
    #endif//_value__float__GUARD__

    #ifndef _mv_5d__GUARD__
    #define _mv_5d__GUARD__
    DECL_STRONG_TYPE(mv_5d, float);
    #endif//_mv_5d__GUARD__

    #ifndef _sd_5d__GUARD__
    #define _sd_5d__GUARD__
    DECL_STRONG_TYPE(sd_5d, float);
    #endif//_sd_5d__GUARD__

    #ifndef _mv_10d__GUARD__
    #define _mv_10d__GUARD__
    DECL_STRONG_TYPE(mv_10d, float);
    #endif//_mv_10d__GUARD__

    #ifndef _sd_10d__GUARD__
    #define _sd_10d__GUARD__
    DECL_STRONG_TYPE(sd_10d, float);
    #endif//_sd_10d__GUARD__

    #ifndef _mv_21d__GUARD__
    #define _mv_21d__GUARD__
    DECL_STRONG_TYPE(mv_21d, float);
    #endif//_mv_21d__GUARD__

    #ifndef _sd_21d__GUARD__
    #define _sd_21d__GUARD__
    DECL_STRONG_TYPE(sd_21d, float);
    #endif//_sd_21d__GUARD__

    #ifndef _mv_42d__GUARD__
    #define _mv_42d__GUARD__
    DECL_STRONG_TYPE(mv_42d, float);
    #endif//_mv_42d__GUARD__

    #ifndef _sd_42d__GUARD__
    #define _sd_42d__GUARD__
    DECL_STRONG_TYPE(sd_42d, float);
    #endif//_sd_42d__GUARD__

    #ifndef _mv_63d__GUARD__
    #define _mv_63d__GUARD__
    DECL_STRONG_TYPE(mv_63d, float);
    #endif//_mv_63d__GUARD__

    #ifndef _sd_63d__GUARD__
    #define _sd_63d__GUARD__
    DECL_STRONG_TYPE(sd_63d, float);
    #endif//_sd_63d__GUARD__

    #ifndef _mv_84d__GUARD__
    #define _mv_84d__GUARD__
    DECL_STRONG_TYPE(mv_84d, float);
    #endif//_mv_84d__GUARD__

    #ifndef _sd_84d__GUARD__
    #define _sd_84d__GUARD__
    DECL_STRONG_TYPE(sd_84d, float);
    #endif//_sd_84d__GUARD__

    #ifndef _mv_105d__GUARD__
    #define _mv_105d__GUARD__
    DECL_STRONG_TYPE(mv_105d, float);
    #endif//_mv_105d__GUARD__

    #ifndef _sd_105d__GUARD__
    #define _sd_105d__GUARD__
    DECL_STRONG_TYPE(sd_105d, float);
    #endif//_sd_105d__GUARD__

    #ifndef _mv_126d__GUARD__
    #define _mv_126d__GUARD__
    DECL_STRONG_TYPE(mv_126d, float);
    #endif//_mv_126d__GUARD__

    #ifndef _sd_126d__GUARD__
    #define _sd_126d__GUARD__
    DECL_STRONG_TYPE(sd_126d, float);
    #endif//_sd_126d__GUARD__

    #ifndef _mv_189d__GUARD__
    #define _mv_189d__GUARD__
    DECL_STRONG_TYPE(mv_189d, float);
    #endif//_mv_189d__GUARD__

    #ifndef _sd_189d__GUARD__
    #define _sd_189d__GUARD__
    DECL_STRONG_TYPE(sd_189d, float);
    #endif//_sd_189d__GUARD__

    #ifndef _mv_252d__GUARD__
    #define _mv_252d__GUARD__
    DECL_STRONG_TYPE(mv_252d, float);
    #endif//_mv_252d__GUARD__

    #ifndef _sd_252d__GUARD__
    #define _sd_252d__GUARD__
    DECL_STRONG_TYPE(sd_252d, float);
    #endif//_sd_252d__GUARD__

    #ifndef _mv_378d__GUARD__
    #define _mv_378d__GUARD__
    DECL_STRONG_TYPE(mv_378d, float);
    #endif//_mv_378d__GUARD__

    #ifndef _sd_378d__GUARD__
    #define _sd_378d__GUARD__
    DECL_STRONG_TYPE(sd_378d, float);
    #endif//_sd_378d__GUARD__

    #ifndef _mv_504d__GUARD__
    #define _mv_504d__GUARD__
    DECL_STRONG_TYPE(mv_504d, float);
    #endif//_mv_504d__GUARD__

    #ifndef _sd_504d__GUARD__
    #define _sd_504d__GUARD__
    DECL_STRONG_TYPE(sd_504d, float);
    #endif//_sd_504d__GUARD__

    #ifndef _timestamp__GUARD__
    #define _timestamp__GUARD__
    DECL_STRONG_TYPE(timestamp, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_timestamp__GUARD__

    #ifndef _ticker__TickerKey__GUARD__
    #define _ticker__TickerKey__GUARD__
    DECL_STRONG_TYPE(ticker__TickerKey, TickerKey);
    #endif//_ticker__TickerKey__GUARD__

    #ifndef _window_type__GUARD__
    #define _window_type__GUARD__
    DECL_STRONG_TYPE(window_type, string);
    #endif//_window_type__GUARD__

    
    class HistoricalVolatilities_PKey {
        public:
        //using statements for all types used in this class
        using ticker = spiderrock::protobuf::api::ticker__TickerKey;
        using window_type = spiderrock::protobuf::api::window_type;

        private:
        ticker m_ticker{};
        window_type m_window_type{};

        public:
        window_type get_window_type() const {
            return m_window_type;
        }
        void set_ticker(const ticker& value)  {
            m_ticker = value;
        }
        void set_window_type(const window_type& value)  {
            m_window_type = value;
        }
        //templatized getters and setters
        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to HistoricalVolatilities_PKey::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to HistoricalVolatilities_PKey::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const ticker & value) { set_ticker(value); }
        void set(const window_type & value) { set_window_type(value); }


        HistoricalVolatilities_PKey() {}

        virtual ~HistoricalVolatilities_PKey() {
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
        bool IncludeWindowType() const {
            return !(m_window_type.empty());
        }


        size_t ByteSizeLong() const {
            size_t totalSize = 0;
            if ( IncludeTicker()) {
                SRProtobufCPP::TickerKeyLayout tickerKeyLayout;
                m_ticker.setCodecTickerKey(tickerKeyLayout);
                totalSize += SRProtobufCPP::FieldCodec::TickerKeyFieldSize(10,tickerKeyLayout);
            }
            if ( IncludeWindowType()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(11,m_window_type);
            }
            return totalSize;
        }

        void Encode(uint8_t*& dest, uint8_t* max) const {
            if ( IncludeTicker()) {
                SRProtobufCPP::TickerKeyLayout tickerKeyLayout;
                m_ticker.setCodecTickerKey(tickerKeyLayout);
                dest = SRProtobufCPP::FieldCodec::EncodeTickerKey(dest, 10, tickerKeyLayout);
            }
            if ( IncludeWindowType()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,11,static_cast<string>(m_window_type));
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
                    case 11: {m_window_type = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                }
            }
        }

    };
    

    class HistoricalVolatilities {
        public:
        //using statements for all types used in this class
    
        using _meta = spiderrock::protobuf::api::_meta;
        using pkey = spiderrock::protobuf::api::HistoricalVolatilities_PKey;
        using date = spiderrock::protobuf::api::date__string;
        using security_id = spiderrock::protobuf::api::security_id__int32;
        using value = spiderrock::protobuf::api::value__float;
        using mv_5d = spiderrock::protobuf::api::mv_5d;
        using sd_5d = spiderrock::protobuf::api::sd_5d;
        using mv_10d = spiderrock::protobuf::api::mv_10d;
        using sd_10d = spiderrock::protobuf::api::sd_10d;
        using mv_21d = spiderrock::protobuf::api::mv_21d;
        using sd_21d = spiderrock::protobuf::api::sd_21d;
        using mv_42d = spiderrock::protobuf::api::mv_42d;
        using sd_42d = spiderrock::protobuf::api::sd_42d;
        using mv_63d = spiderrock::protobuf::api::mv_63d;
        using sd_63d = spiderrock::protobuf::api::sd_63d;
        using mv_84d = spiderrock::protobuf::api::mv_84d;
        using sd_84d = spiderrock::protobuf::api::sd_84d;
        using mv_105d = spiderrock::protobuf::api::mv_105d;
        using sd_105d = spiderrock::protobuf::api::sd_105d;
        using mv_126d = spiderrock::protobuf::api::mv_126d;
        using sd_126d = spiderrock::protobuf::api::sd_126d;
        using mv_189d = spiderrock::protobuf::api::mv_189d;
        using sd_189d = spiderrock::protobuf::api::sd_189d;
        using mv_252d = spiderrock::protobuf::api::mv_252d;
        using sd_252d = spiderrock::protobuf::api::sd_252d;
        using mv_378d = spiderrock::protobuf::api::mv_378d;
        using sd_378d = spiderrock::protobuf::api::sd_378d;
        using mv_504d = spiderrock::protobuf::api::mv_504d;
        using sd_504d = spiderrock::protobuf::api::sd_504d;
        using timestamp = spiderrock::protobuf::api::timestamp;

        private:
        _meta m__meta{};
        pkey m_pkey{};
        date m_date{};
        security_id m_security_id{};
        value m_value{};
        mv_5d m_mv_5d{};
        sd_5d m_sd_5d{};
        mv_10d m_mv_10d{};
        sd_10d m_sd_10d{};
        mv_21d m_mv_21d{};
        sd_21d m_sd_21d{};
        mv_42d m_mv_42d{};
        sd_42d m_sd_42d{};
        mv_63d m_mv_63d{};
        sd_63d m_sd_63d{};
        mv_84d m_mv_84d{};
        sd_84d m_sd_84d{};
        mv_105d m_mv_105d{};
        sd_105d m_sd_105d{};
        mv_126d m_mv_126d{};
        sd_126d m_sd_126d{};
        mv_189d m_mv_189d{};
        sd_189d m_sd_189d{};
        mv_252d m_mv_252d{};
        sd_252d m_sd_252d{};
        mv_378d m_mv_378d{};
        sd_378d m_sd_378d{};
        mv_504d m_mv_504d{};
        sd_504d m_sd_504d{};
        timestamp m_timestamp{};

        static constexpr int _mlinkHeaderLength = 14;

        public:		
        _meta get__meta() const {
            return m__meta;
        }		
        pkey get_pkey() const {
            return m_pkey;
        }		
        date get_date() const {
            return m_date;
        }		
        security_id get_security_id() const {
            return m_security_id;
        }		
        value get_value() const {
            return m_value;
        }		
        mv_5d get_mv_5d() const {
            return m_mv_5d;
        }		
        sd_5d get_sd_5d() const {
            return m_sd_5d;
        }		
        mv_10d get_mv_10d() const {
            return m_mv_10d;
        }		
        sd_10d get_sd_10d() const {
            return m_sd_10d;
        }		
        mv_21d get_mv_21d() const {
            return m_mv_21d;
        }		
        sd_21d get_sd_21d() const {
            return m_sd_21d;
        }		
        mv_42d get_mv_42d() const {
            return m_mv_42d;
        }		
        sd_42d get_sd_42d() const {
            return m_sd_42d;
        }		
        mv_63d get_mv_63d() const {
            return m_mv_63d;
        }		
        sd_63d get_sd_63d() const {
            return m_sd_63d;
        }		
        mv_84d get_mv_84d() const {
            return m_mv_84d;
        }		
        sd_84d get_sd_84d() const {
            return m_sd_84d;
        }		
        mv_105d get_mv_105d() const {
            return m_mv_105d;
        }		
        sd_105d get_sd_105d() const {
            return m_sd_105d;
        }		
        mv_126d get_mv_126d() const {
            return m_mv_126d;
        }		
        sd_126d get_sd_126d() const {
            return m_sd_126d;
        }		
        mv_189d get_mv_189d() const {
            return m_mv_189d;
        }		
        sd_189d get_sd_189d() const {
            return m_sd_189d;
        }		
        mv_252d get_mv_252d() const {
            return m_mv_252d;
        }		
        sd_252d get_sd_252d() const {
            return m_sd_252d;
        }		
        mv_378d get_mv_378d() const {
            return m_mv_378d;
        }		
        sd_378d get_sd_378d() const {
            return m_sd_378d;
        }		
        mv_504d get_mv_504d() const {
            return m_mv_504d;
        }		
        sd_504d get_sd_504d() const {
            return m_sd_504d;
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
        void set_date(const date& value)  {
            m_date = value;
        }
        void set_security_id(const security_id& value)  {
            m_security_id = value;
        }
        void set_value(const value& value)  {
            m_value = value;
        }
        void set_mv_5d(const mv_5d& value)  {
            m_mv_5d = value;
        }
        void set_sd_5d(const sd_5d& value)  {
            m_sd_5d = value;
        }
        void set_mv_10d(const mv_10d& value)  {
            m_mv_10d = value;
        }
        void set_sd_10d(const sd_10d& value)  {
            m_sd_10d = value;
        }
        void set_mv_21d(const mv_21d& value)  {
            m_mv_21d = value;
        }
        void set_sd_21d(const sd_21d& value)  {
            m_sd_21d = value;
        }
        void set_mv_42d(const mv_42d& value)  {
            m_mv_42d = value;
        }
        void set_sd_42d(const sd_42d& value)  {
            m_sd_42d = value;
        }
        void set_mv_63d(const mv_63d& value)  {
            m_mv_63d = value;
        }
        void set_sd_63d(const sd_63d& value)  {
            m_sd_63d = value;
        }
        void set_mv_84d(const mv_84d& value)  {
            m_mv_84d = value;
        }
        void set_sd_84d(const sd_84d& value)  {
            m_sd_84d = value;
        }
        void set_mv_105d(const mv_105d& value)  {
            m_mv_105d = value;
        }
        void set_sd_105d(const sd_105d& value)  {
            m_sd_105d = value;
        }
        void set_mv_126d(const mv_126d& value)  {
            m_mv_126d = value;
        }
        void set_sd_126d(const sd_126d& value)  {
            m_sd_126d = value;
        }
        void set_mv_189d(const mv_189d& value)  {
            m_mv_189d = value;
        }
        void set_sd_189d(const sd_189d& value)  {
            m_sd_189d = value;
        }
        void set_mv_252d(const mv_252d& value)  {
            m_mv_252d = value;
        }
        void set_sd_252d(const sd_252d& value)  {
            m_sd_252d = value;
        }
        void set_mv_378d(const mv_378d& value)  {
            m_mv_378d = value;
        }
        void set_sd_378d(const sd_378d& value)  {
            m_sd_378d = value;
        }
        void set_mv_504d(const mv_504d& value)  {
            m_mv_504d = value;
        }
        void set_sd_504d(const sd_504d& value)  {
            m_sd_504d = value;
        }
        void set_timestamp(const timestamp& value)  {
            m_timestamp = value;
        }

        //templatized getters and setters

        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to HistoricalVolatilities::get()"); return T{}; }  // specializations for valid types are listed below the class definition

        //specializations for set functions for the valid types
    
        void set(const _meta & value) {
            set__meta(value);
        }
        void set(const pkey & value) {
            set_pkey(value);
        }
        void set(const date & value) {
            set_date(value);
        }
        void set(const security_id & value) {
            set_security_id(value);
        }
        void set(const value & value) {
            set_value(value);
        }
        void set(const mv_5d & value) {
            set_mv_5d(value);
        }
        void set(const sd_5d & value) {
            set_sd_5d(value);
        }
        void set(const mv_10d & value) {
            set_mv_10d(value);
        }
        void set(const sd_10d & value) {
            set_sd_10d(value);
        }
        void set(const mv_21d & value) {
            set_mv_21d(value);
        }
        void set(const sd_21d & value) {
            set_sd_21d(value);
        }
        void set(const mv_42d & value) {
            set_mv_42d(value);
        }
        void set(const sd_42d & value) {
            set_sd_42d(value);
        }
        void set(const mv_63d & value) {
            set_mv_63d(value);
        }
        void set(const sd_63d & value) {
            set_sd_63d(value);
        }
        void set(const mv_84d & value) {
            set_mv_84d(value);
        }
        void set(const sd_84d & value) {
            set_sd_84d(value);
        }
        void set(const mv_105d & value) {
            set_mv_105d(value);
        }
        void set(const sd_105d & value) {
            set_sd_105d(value);
        }
        void set(const mv_126d & value) {
            set_mv_126d(value);
        }
        void set(const sd_126d & value) {
            set_sd_126d(value);
        }
        void set(const mv_189d & value) {
            set_mv_189d(value);
        }
        void set(const sd_189d & value) {
            set_sd_189d(value);
        }
        void set(const mv_252d & value) {
            set_mv_252d(value);
        }
        void set(const sd_252d & value) {
            set_sd_252d(value);
        }
        void set(const mv_378d & value) {
            set_mv_378d(value);
        }
        void set(const sd_378d & value) {
            set_sd_378d(value);
        }
        void set(const mv_504d & value) {
            set_mv_504d(value);
        }
        void set(const sd_504d & value) {
            set_sd_504d(value);
        }
        void set(const timestamp & value) {
            set_timestamp(value);
        }

        void set(const HistoricalVolatilities & value) {
            set(value.m__meta);
            set(value.m_pkey);
            set(value.m_date);
            set(value.m_security_id);
            set(value.m_value);
            set(value.m_mv_5d);
            set(value.m_sd_5d);
            set(value.m_mv_10d);
            set(value.m_sd_10d);
            set(value.m_mv_21d);
            set(value.m_sd_21d);
            set(value.m_mv_42d);
            set(value.m_sd_42d);
            set(value.m_mv_63d);
            set(value.m_sd_63d);
            set(value.m_mv_84d);
            set(value.m_sd_84d);
            set(value.m_mv_105d);
            set(value.m_sd_105d);
            set(value.m_mv_126d);
            set(value.m_sd_126d);
            set(value.m_mv_189d);
            set(value.m_sd_189d);
            set(value.m_mv_252d);
            set(value.m_sd_252d);
            set(value.m_mv_378d);
            set(value.m_sd_378d);
            set(value.m_mv_504d);
            set(value.m_sd_504d);
            set(value.m_timestamp);
        }

        HistoricalVolatilities() {
            m__meta.set_message_type("HistoricalVolatilities");
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
            std::snprintf(reinterpret_cast<char*>(data), size, "\r\nP%05d%06zd", 3225, length);
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
            std::snprintf(const_cast<char*>(s->data()), s->size(), "\r\nP%05d%06zd", 3225, length);
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
             *this = HistoricalVolatilities{};
        }
        bool IncludeMeta() const {
            return (m__meta.ByteSizeLong() > 0);
        }
        bool IncludePkey() const {
            return (m_pkey.ByteSizeLong() > 0);
        }
        bool IncludeDate() const {
            return !(m_date.empty());
        }
        bool IncludeSecurityId() const {
            return !(m_security_id == 0);
        }
        bool IncludeValue() const {
            return !(m_value == 0.0);
        }
        bool IncludeMv5d() const {
            return !(m_mv_5d == 0.0);
        }
        bool IncludeSd5d() const {
            return !(m_sd_5d == 0.0);
        }
        bool IncludeMv10d() const {
            return !(m_mv_10d == 0.0);
        }
        bool IncludeSd10d() const {
            return !(m_sd_10d == 0.0);
        }
        bool IncludeMv21d() const {
            return !(m_mv_21d == 0.0);
        }
        bool IncludeSd21d() const {
            return !(m_sd_21d == 0.0);
        }
        bool IncludeMv42d() const {
            return !(m_mv_42d == 0.0);
        }
        bool IncludeSd42d() const {
            return !(m_sd_42d == 0.0);
        }
        bool IncludeMv63d() const {
            return !(m_mv_63d == 0.0);
        }
        bool IncludeSd63d() const {
            return !(m_sd_63d == 0.0);
        }
        bool IncludeMv84d() const {
            return !(m_mv_84d == 0.0);
        }
        bool IncludeSd84d() const {
            return !(m_sd_84d == 0.0);
        }
        bool IncludeMv105d() const {
            return !(m_mv_105d == 0.0);
        }
        bool IncludeSd105d() const {
            return !(m_sd_105d == 0.0);
        }
        bool IncludeMv126d() const {
            return !(m_mv_126d == 0.0);
        }
        bool IncludeSd126d() const {
            return !(m_sd_126d == 0.0);
        }
        bool IncludeMv189d() const {
            return !(m_mv_189d == 0.0);
        }
        bool IncludeSd189d() const {
            return !(m_sd_189d == 0.0);
        }
        bool IncludeMv252d() const {
            return !(m_mv_252d == 0.0);
        }
        bool IncludeSd252d() const {
            return !(m_sd_252d == 0.0);
        }
        bool IncludeMv378d() const {
            return !(m_mv_378d == 0.0);
        }
        bool IncludeSd378d() const {
            return !(m_sd_378d == 0.0);
        }
        bool IncludeMv504d() const {
            return !(m_mv_504d == 0.0);
        }
        bool IncludeSd504d() const {
            return !(m_sd_504d == 0.0);
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
            if ( IncludeDate()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(100,m_date);
            }
            if ( IncludeSecurityId()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(103,m_security_id);
            }
            if ( IncludeValue()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(106,m_value);
            }
            if ( IncludeMv5d()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(109,m_mv_5d);
            }
            if ( IncludeSd5d()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(112,m_sd_5d);
            }
            if ( IncludeMv10d()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(115,m_mv_10d);
            }
            if ( IncludeSd10d()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(118,m_sd_10d);
            }
            if ( IncludeMv21d()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(121,m_mv_21d);
            }
            if ( IncludeSd21d()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(124,m_sd_21d);
            }
            if ( IncludeMv42d()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(127,m_mv_42d);
            }
            if ( IncludeSd42d()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(130,m_sd_42d);
            }
            if ( IncludeMv63d()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(133,m_mv_63d);
            }
            if ( IncludeSd63d()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(136,m_sd_63d);
            }
            if ( IncludeMv84d()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(139,m_mv_84d);
            }
            if ( IncludeSd84d()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(142,m_sd_84d);
            }
            if ( IncludeMv105d()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(145,m_mv_105d);
            }
            if ( IncludeSd105d()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(148,m_sd_105d);
            }
            if ( IncludeMv126d()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(151,m_mv_126d);
            }
            if ( IncludeSd126d()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(154,m_sd_126d);
            }
            if ( IncludeMv189d()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(157,m_mv_189d);
            }
            if ( IncludeSd189d()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(160,m_sd_189d);
            }
            if ( IncludeMv252d()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(163,m_mv_252d);
            }
            if ( IncludeSd252d()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(166,m_sd_252d);
            }
            if ( IncludeMv378d()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(169,m_mv_378d);
            }
            if ( IncludeSd378d()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(172,m_sd_378d);
            }
            if ( IncludeMv504d()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(175,m_mv_504d);
            }
            if ( IncludeSd504d()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(178,m_sd_504d);
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
            if ( IncludeDate()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,100,static_cast<string>(m_date));
            }
            if ( IncludeSecurityId()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,103,m_security_id);
            }
            if ( IncludeValue()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,106,m_value);
            }
            if ( IncludeMv5d()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,109,m_mv_5d);
            }
            if ( IncludeSd5d()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,112,m_sd_5d);
            }
            if ( IncludeMv10d()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,115,m_mv_10d);
            }
            if ( IncludeSd10d()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,118,m_sd_10d);
            }
            if ( IncludeMv21d()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,121,m_mv_21d);
            }
            if ( IncludeSd21d()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,124,m_sd_21d);
            }
            if ( IncludeMv42d()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,127,m_mv_42d);
            }
            if ( IncludeSd42d()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,130,m_sd_42d);
            }
            if ( IncludeMv63d()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,133,m_mv_63d);
            }
            if ( IncludeSd63d()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,136,m_sd_63d);
            }
            if ( IncludeMv84d()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,139,m_mv_84d);
            }
            if ( IncludeSd84d()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,142,m_sd_84d);
            }
            if ( IncludeMv105d()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,145,m_mv_105d);
            }
            if ( IncludeSd105d()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,148,m_sd_105d);
            }
            if ( IncludeMv126d()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,151,m_mv_126d);
            }
            if ( IncludeSd126d()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,154,m_sd_126d);
            }
            if ( IncludeMv189d()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,157,m_mv_189d);
            }
            if ( IncludeSd189d()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,160,m_sd_189d);
            }
            if ( IncludeMv252d()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,163,m_mv_252d);
            }
            if ( IncludeSd252d()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,166,m_sd_252d);
            }
            if ( IncludeMv378d()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,169,m_mv_378d);
            }
            if ( IncludeSd378d()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,172,m_sd_378d);
            }
            if ( IncludeMv504d()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,175,m_mv_504d);
            }
            if ( IncludeSd504d()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,178,m_sd_504d);
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
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_date = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 103: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_security_id = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 106: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_value = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 109: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_mv_5d = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 112: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_sd_5d = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 115: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_mv_10d = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 118: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_sd_10d = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 121: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_mv_21d = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 124: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_sd_21d = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 127: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_mv_42d = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 130: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_sd_42d = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 133: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_mv_63d = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 136: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_sd_63d = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 139: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_mv_84d = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 142: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_sd_84d = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 145: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_mv_105d = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 148: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_sd_105d = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 151: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_mv_126d = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 154: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_sd_126d = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 157: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_mv_189d = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 160: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_sd_189d = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 163: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_mv_252d = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 166: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_sd_252d = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 169: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_mv_378d = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 172: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_sd_378d = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 175: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_mv_504d = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 178: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_sd_504d = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
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

    template<> inline const auto HistoricalVolatilities::get<HistoricalVolatilities::_meta>() const { return HistoricalVolatilities::_meta{ m__meta}; }
    template<> inline const auto HistoricalVolatilities::get<HistoricalVolatilities::pkey>() const { return HistoricalVolatilities::pkey{ m_pkey}; }
    template<> inline const auto HistoricalVolatilities::get<HistoricalVolatilities::date>() const { return m_date; }
    template<> inline const auto HistoricalVolatilities::get<HistoricalVolatilities::security_id>() const { return m_security_id; }
    template<> inline const auto HistoricalVolatilities::get<HistoricalVolatilities::value>() const { return m_value; }
    template<> inline const auto HistoricalVolatilities::get<HistoricalVolatilities::mv_5d>() const { return m_mv_5d; }
    template<> inline const auto HistoricalVolatilities::get<HistoricalVolatilities::sd_5d>() const { return m_sd_5d; }
    template<> inline const auto HistoricalVolatilities::get<HistoricalVolatilities::mv_10d>() const { return m_mv_10d; }
    template<> inline const auto HistoricalVolatilities::get<HistoricalVolatilities::sd_10d>() const { return m_sd_10d; }
    template<> inline const auto HistoricalVolatilities::get<HistoricalVolatilities::mv_21d>() const { return m_mv_21d; }
    template<> inline const auto HistoricalVolatilities::get<HistoricalVolatilities::sd_21d>() const { return m_sd_21d; }
    template<> inline const auto HistoricalVolatilities::get<HistoricalVolatilities::mv_42d>() const { return m_mv_42d; }
    template<> inline const auto HistoricalVolatilities::get<HistoricalVolatilities::sd_42d>() const { return m_sd_42d; }
    template<> inline const auto HistoricalVolatilities::get<HistoricalVolatilities::mv_63d>() const { return m_mv_63d; }
    template<> inline const auto HistoricalVolatilities::get<HistoricalVolatilities::sd_63d>() const { return m_sd_63d; }
    template<> inline const auto HistoricalVolatilities::get<HistoricalVolatilities::mv_84d>() const { return m_mv_84d; }
    template<> inline const auto HistoricalVolatilities::get<HistoricalVolatilities::sd_84d>() const { return m_sd_84d; }
    template<> inline const auto HistoricalVolatilities::get<HistoricalVolatilities::mv_105d>() const { return m_mv_105d; }
    template<> inline const auto HistoricalVolatilities::get<HistoricalVolatilities::sd_105d>() const { return m_sd_105d; }
    template<> inline const auto HistoricalVolatilities::get<HistoricalVolatilities::mv_126d>() const { return m_mv_126d; }
    template<> inline const auto HistoricalVolatilities::get<HistoricalVolatilities::sd_126d>() const { return m_sd_126d; }
    template<> inline const auto HistoricalVolatilities::get<HistoricalVolatilities::mv_189d>() const { return m_mv_189d; }
    template<> inline const auto HistoricalVolatilities::get<HistoricalVolatilities::sd_189d>() const { return m_sd_189d; }
    template<> inline const auto HistoricalVolatilities::get<HistoricalVolatilities::mv_252d>() const { return m_mv_252d; }
    template<> inline const auto HistoricalVolatilities::get<HistoricalVolatilities::sd_252d>() const { return m_sd_252d; }
    template<> inline const auto HistoricalVolatilities::get<HistoricalVolatilities::mv_378d>() const { return m_mv_378d; }
    template<> inline const auto HistoricalVolatilities::get<HistoricalVolatilities::sd_378d>() const { return m_sd_378d; }
    template<> inline const auto HistoricalVolatilities::get<HistoricalVolatilities::mv_504d>() const { return m_mv_504d; }
    template<> inline const auto HistoricalVolatilities::get<HistoricalVolatilities::sd_504d>() const { return m_sd_504d; }
    template<> inline const auto HistoricalVolatilities::get<HistoricalVolatilities::timestamp>() const { return m_timestamp; }
    template<> inline const auto HistoricalVolatilities_PKey::get<HistoricalVolatilities_PKey::ticker>() const { return HistoricalVolatilities_PKey::ticker{m_ticker}; }
    template<> inline const auto HistoricalVolatilities_PKey::get<HistoricalVolatilities_PKey::window_type>() const { return m_window_type; }
    
    // ostream operators for all classes above, output should adhere to a JSON format

    inline std::ostream& operator<<(std::ostream &o, const HistoricalVolatilities_PKey& m) {
        o << "\"ticker\":{" << m.get<HistoricalVolatilities_PKey::ticker>() << "}";
        o << ",\"window_type\":\"" << m.get<HistoricalVolatilities_PKey::window_type>() << "\"";
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const HistoricalVolatilities& m) {
        o << "\"_meta\":{" << m.get<HistoricalVolatilities::_meta>() << "}";
        o << ",\"pkey\":{" << m.get<HistoricalVolatilities::pkey>() << "}";
        o << ",\"date\":\"" << m.get<HistoricalVolatilities::date>() << "\"";
        o << ",\"security_id\":" << m.get<HistoricalVolatilities::security_id>();
        o << ",\"value\":" << m.get<HistoricalVolatilities::value>();
        o << ",\"mv_5d\":" << m.get<HistoricalVolatilities::mv_5d>();
        o << ",\"sd_5d\":" << m.get<HistoricalVolatilities::sd_5d>();
        o << ",\"mv_10d\":" << m.get<HistoricalVolatilities::mv_10d>();
        o << ",\"sd_10d\":" << m.get<HistoricalVolatilities::sd_10d>();
        o << ",\"mv_21d\":" << m.get<HistoricalVolatilities::mv_21d>();
        o << ",\"sd_21d\":" << m.get<HistoricalVolatilities::sd_21d>();
        o << ",\"mv_42d\":" << m.get<HistoricalVolatilities::mv_42d>();
        o << ",\"sd_42d\":" << m.get<HistoricalVolatilities::sd_42d>();
        o << ",\"mv_63d\":" << m.get<HistoricalVolatilities::mv_63d>();
        o << ",\"sd_63d\":" << m.get<HistoricalVolatilities::sd_63d>();
        o << ",\"mv_84d\":" << m.get<HistoricalVolatilities::mv_84d>();
        o << ",\"sd_84d\":" << m.get<HistoricalVolatilities::sd_84d>();
        o << ",\"mv_105d\":" << m.get<HistoricalVolatilities::mv_105d>();
        o << ",\"sd_105d\":" << m.get<HistoricalVolatilities::sd_105d>();
        o << ",\"mv_126d\":" << m.get<HistoricalVolatilities::mv_126d>();
        o << ",\"sd_126d\":" << m.get<HistoricalVolatilities::sd_126d>();
        o << ",\"mv_189d\":" << m.get<HistoricalVolatilities::mv_189d>();
        o << ",\"sd_189d\":" << m.get<HistoricalVolatilities::sd_189d>();
        o << ",\"mv_252d\":" << m.get<HistoricalVolatilities::mv_252d>();
        o << ",\"sd_252d\":" << m.get<HistoricalVolatilities::sd_252d>();
        o << ",\"mv_378d\":" << m.get<HistoricalVolatilities::mv_378d>();
        o << ",\"sd_378d\":" << m.get<HistoricalVolatilities::sd_378d>();
        o << ",\"mv_504d\":" << m.get<HistoricalVolatilities::mv_504d>();
        o << ",\"sd_504d\":" << m.get<HistoricalVolatilities::sd_504d>();
        {
            std::time_t tt = m.get<HistoricalVolatilities::timestamp>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"timestamp\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        return o;
    }

}
}
}