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

    #ifndef _i_var_swap_5d__GUARD__
    #define _i_var_swap_5d__GUARD__
    DECL_STRONG_TYPE(i_var_swap_5d, float);
    #endif//_i_var_swap_5d__GUARD__

    #ifndef _i_var_swap_10d__GUARD__
    #define _i_var_swap_10d__GUARD__
    DECL_STRONG_TYPE(i_var_swap_10d, float);
    #endif//_i_var_swap_10d__GUARD__

    #ifndef _i_var_swap_21d__GUARD__
    #define _i_var_swap_21d__GUARD__
    DECL_STRONG_TYPE(i_var_swap_21d, float);
    #endif//_i_var_swap_21d__GUARD__

    #ifndef _i_var_swap_42d__GUARD__
    #define _i_var_swap_42d__GUARD__
    DECL_STRONG_TYPE(i_var_swap_42d, float);
    #endif//_i_var_swap_42d__GUARD__

    #ifndef _i_var_swap_63d__GUARD__
    #define _i_var_swap_63d__GUARD__
    DECL_STRONG_TYPE(i_var_swap_63d, float);
    #endif//_i_var_swap_63d__GUARD__

    #ifndef _i_var_swap_84d__GUARD__
    #define _i_var_swap_84d__GUARD__
    DECL_STRONG_TYPE(i_var_swap_84d, float);
    #endif//_i_var_swap_84d__GUARD__

    #ifndef _i_var_swap_105d__GUARD__
    #define _i_var_swap_105d__GUARD__
    DECL_STRONG_TYPE(i_var_swap_105d, float);
    #endif//_i_var_swap_105d__GUARD__

    #ifndef _i_var_swap_126d__GUARD__
    #define _i_var_swap_126d__GUARD__
    DECL_STRONG_TYPE(i_var_swap_126d, float);
    #endif//_i_var_swap_126d__GUARD__

    #ifndef _i_var_swap_189d__GUARD__
    #define _i_var_swap_189d__GUARD__
    DECL_STRONG_TYPE(i_var_swap_189d, float);
    #endif//_i_var_swap_189d__GUARD__

    #ifndef _i_var_swap_252d__GUARD__
    #define _i_var_swap_252d__GUARD__
    DECL_STRONG_TYPE(i_var_swap_252d, float);
    #endif//_i_var_swap_252d__GUARD__

    #ifndef _i_var_swap_378d__GUARD__
    #define _i_var_swap_378d__GUARD__
    DECL_STRONG_TYPE(i_var_swap_378d, float);
    #endif//_i_var_swap_378d__GUARD__

    #ifndef _i_var_swap_504d__GUARD__
    #define _i_var_swap_504d__GUARD__
    DECL_STRONG_TYPE(i_var_swap_504d, float);
    #endif//_i_var_swap_504d__GUARD__

    #ifndef _status__CurveStatus__GUARD__
    #define _status__CurveStatus__GUARD__
    DECL_STRONG_TYPE(status__CurveStatus, spiderrock::protobuf::api::CurveStatus);
    #endif//_status__CurveStatus__GUARD__

    #ifndef _time__duration__GUARD__
    #define _time__duration__GUARD__
    DECL_STRONG_TYPE(time__duration, std::chrono::nanoseconds);
    #endif//_time__duration__GUARD__

    #ifndef _timestamp__GUARD__
    #define _timestamp__GUARD__
    DECL_STRONG_TYPE(timestamp, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_timestamp__GUARD__

    #ifndef _ticker__TickerKey__GUARD__
    #define _ticker__TickerKey__GUARD__
    DECL_STRONG_TYPE(ticker__TickerKey, TickerKey);
    #endif//_ticker__TickerKey__GUARD__

    #ifndef _surface_type__GUARD__
    #define _surface_type__GUARD__
    DECL_STRONG_TYPE(surface_type, spiderrock::protobuf::api::SurfaceCurveType);
    #endif//_surface_type__GUARD__

    
    class LiveIVarSwapFixedTerm_PKey {
        public:
        //using statements for all types used in this class
        using ticker = spiderrock::protobuf::api::ticker__TickerKey;
        using surface_type = spiderrock::protobuf::api::surface_type;

        private:
        ticker m_ticker{};
        surface_type m_surface_type{};

        public:
		ticker get_ticker() const {
            return m_ticker;
        }
        surface_type get_surface_type() const {
            return m_surface_type;
        }
        void set_ticker(const ticker& value)  {
            m_ticker = value;
        }
        void set_surface_type(const surface_type& value)  {
            m_surface_type = value;
        }
        //templatized getters and setters
        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to LiveIVarSwapFixedTerm_PKey::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to LiveIVarSwapFixedTerm_PKey::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const ticker & value) { set_ticker(value); }
        void set(const surface_type & value) { set_surface_type(value); }


        LiveIVarSwapFixedTerm_PKey() {}

        virtual ~LiveIVarSwapFixedTerm_PKey() {
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
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(11,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SurfaceCurveType>(m_surface_type)));
            return totalSize;
        }

        void Encode(uint8_t*& dest, uint8_t* max) const {
            if ( IncludeTicker()) {
                SRProtobufCPP::TickerKeyLayout tickerKeyLayout;
                m_ticker.setCodecTickerKey(tickerKeyLayout);
                dest = SRProtobufCPP::FieldCodec::EncodeTickerKey(dest, 10, tickerKeyLayout);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,11,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SurfaceCurveType>(m_surface_type)));
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
                    case 11: {m_surface_type = static_cast<spiderrock::protobuf::api::SurfaceCurveType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                }
            }
        }

    };
    

    class LiveIVarSwapFixedTerm {
        public:
        //using statements for all types used in this class
    
        using _meta = spiderrock::protobuf::api::_meta;
        using pkey = spiderrock::protobuf::api::LiveIVarSwapFixedTerm_PKey;
        using i_var_swap_5d = spiderrock::protobuf::api::i_var_swap_5d;
        using i_var_swap_10d = spiderrock::protobuf::api::i_var_swap_10d;
        using i_var_swap_21d = spiderrock::protobuf::api::i_var_swap_21d;
        using i_var_swap_42d = spiderrock::protobuf::api::i_var_swap_42d;
        using i_var_swap_63d = spiderrock::protobuf::api::i_var_swap_63d;
        using i_var_swap_84d = spiderrock::protobuf::api::i_var_swap_84d;
        using i_var_swap_105d = spiderrock::protobuf::api::i_var_swap_105d;
        using i_var_swap_126d = spiderrock::protobuf::api::i_var_swap_126d;
        using i_var_swap_189d = spiderrock::protobuf::api::i_var_swap_189d;
        using i_var_swap_252d = spiderrock::protobuf::api::i_var_swap_252d;
        using i_var_swap_378d = spiderrock::protobuf::api::i_var_swap_378d;
        using i_var_swap_504d = spiderrock::protobuf::api::i_var_swap_504d;
        using status = spiderrock::protobuf::api::status__CurveStatus;
        using time = spiderrock::protobuf::api::time__duration;
        using timestamp = spiderrock::protobuf::api::timestamp;

        private:
        _meta m__meta{};
        pkey m_pkey{};
        i_var_swap_5d m_i_var_swap_5d{};
        i_var_swap_10d m_i_var_swap_10d{};
        i_var_swap_21d m_i_var_swap_21d{};
        i_var_swap_42d m_i_var_swap_42d{};
        i_var_swap_63d m_i_var_swap_63d{};
        i_var_swap_84d m_i_var_swap_84d{};
        i_var_swap_105d m_i_var_swap_105d{};
        i_var_swap_126d m_i_var_swap_126d{};
        i_var_swap_189d m_i_var_swap_189d{};
        i_var_swap_252d m_i_var_swap_252d{};
        i_var_swap_378d m_i_var_swap_378d{};
        i_var_swap_504d m_i_var_swap_504d{};
        status m_status{};
        time m_time{};
        timestamp m_timestamp{};

        static constexpr int _mlinkHeaderLength = 14;

        public:		
        _meta get__meta() const {
            return m__meta;
        }		
        pkey get_pkey() const {
            return m_pkey;
        }		
        i_var_swap_5d get_i_var_swap_5d() const {
            return m_i_var_swap_5d;
        }		
        i_var_swap_10d get_i_var_swap_10d() const {
            return m_i_var_swap_10d;
        }		
        i_var_swap_21d get_i_var_swap_21d() const {
            return m_i_var_swap_21d;
        }		
        i_var_swap_42d get_i_var_swap_42d() const {
            return m_i_var_swap_42d;
        }		
        i_var_swap_63d get_i_var_swap_63d() const {
            return m_i_var_swap_63d;
        }		
        i_var_swap_84d get_i_var_swap_84d() const {
            return m_i_var_swap_84d;
        }		
        i_var_swap_105d get_i_var_swap_105d() const {
            return m_i_var_swap_105d;
        }		
        i_var_swap_126d get_i_var_swap_126d() const {
            return m_i_var_swap_126d;
        }		
        i_var_swap_189d get_i_var_swap_189d() const {
            return m_i_var_swap_189d;
        }		
        i_var_swap_252d get_i_var_swap_252d() const {
            return m_i_var_swap_252d;
        }		
        i_var_swap_378d get_i_var_swap_378d() const {
            return m_i_var_swap_378d;
        }		
        i_var_swap_504d get_i_var_swap_504d() const {
            return m_i_var_swap_504d;
        }		
        status get_status() const {
            return m_status;
        }		
        time get_time() const {
            return m_time;
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
        void set_i_var_swap_5d(const i_var_swap_5d& value)  {
            m_i_var_swap_5d = value;
        }
        void set_i_var_swap_10d(const i_var_swap_10d& value)  {
            m_i_var_swap_10d = value;
        }
        void set_i_var_swap_21d(const i_var_swap_21d& value)  {
            m_i_var_swap_21d = value;
        }
        void set_i_var_swap_42d(const i_var_swap_42d& value)  {
            m_i_var_swap_42d = value;
        }
        void set_i_var_swap_63d(const i_var_swap_63d& value)  {
            m_i_var_swap_63d = value;
        }
        void set_i_var_swap_84d(const i_var_swap_84d& value)  {
            m_i_var_swap_84d = value;
        }
        void set_i_var_swap_105d(const i_var_swap_105d& value)  {
            m_i_var_swap_105d = value;
        }
        void set_i_var_swap_126d(const i_var_swap_126d& value)  {
            m_i_var_swap_126d = value;
        }
        void set_i_var_swap_189d(const i_var_swap_189d& value)  {
            m_i_var_swap_189d = value;
        }
        void set_i_var_swap_252d(const i_var_swap_252d& value)  {
            m_i_var_swap_252d = value;
        }
        void set_i_var_swap_378d(const i_var_swap_378d& value)  {
            m_i_var_swap_378d = value;
        }
        void set_i_var_swap_504d(const i_var_swap_504d& value)  {
            m_i_var_swap_504d = value;
        }
        void set_status(const status& value)  {
            m_status = value;
        }
        void set_time(const time& value)  {
            m_time = value;
        }
        void set_timestamp(const timestamp& value)  {
            m_timestamp = value;
        }

        //templatized getters and setters

        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to LiveIVarSwapFixedTerm::get()"); return T{}; }  // specializations for valid types are listed below the class definition

        //specializations for set functions for the valid types
    
        void set(const _meta & value) {
            set__meta(value);
        }
        void set(const pkey & value) {
            set_pkey(value);
        }
        void set(const i_var_swap_5d & value) {
            set_i_var_swap_5d(value);
        }
        void set(const i_var_swap_10d & value) {
            set_i_var_swap_10d(value);
        }
        void set(const i_var_swap_21d & value) {
            set_i_var_swap_21d(value);
        }
        void set(const i_var_swap_42d & value) {
            set_i_var_swap_42d(value);
        }
        void set(const i_var_swap_63d & value) {
            set_i_var_swap_63d(value);
        }
        void set(const i_var_swap_84d & value) {
            set_i_var_swap_84d(value);
        }
        void set(const i_var_swap_105d & value) {
            set_i_var_swap_105d(value);
        }
        void set(const i_var_swap_126d & value) {
            set_i_var_swap_126d(value);
        }
        void set(const i_var_swap_189d & value) {
            set_i_var_swap_189d(value);
        }
        void set(const i_var_swap_252d & value) {
            set_i_var_swap_252d(value);
        }
        void set(const i_var_swap_378d & value) {
            set_i_var_swap_378d(value);
        }
        void set(const i_var_swap_504d & value) {
            set_i_var_swap_504d(value);
        }
        void set(const status & value) {
            set_status(value);
        }
        void set(const time & value) {
            set_time(value);
        }
        void set(const timestamp & value) {
            set_timestamp(value);
        }

        void set(const LiveIVarSwapFixedTerm & value) {
            set(value.m__meta);
            set(value.m_pkey);
            set(value.m_i_var_swap_5d);
            set(value.m_i_var_swap_10d);
            set(value.m_i_var_swap_21d);
            set(value.m_i_var_swap_42d);
            set(value.m_i_var_swap_63d);
            set(value.m_i_var_swap_84d);
            set(value.m_i_var_swap_105d);
            set(value.m_i_var_swap_126d);
            set(value.m_i_var_swap_189d);
            set(value.m_i_var_swap_252d);
            set(value.m_i_var_swap_378d);
            set(value.m_i_var_swap_504d);
            set(value.m_status);
            set(value.m_time);
            set(value.m_timestamp);
        }

        LiveIVarSwapFixedTerm() {
            m__meta.set_message_type("LiveIVarSwapFixedTerm");
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
            std::snprintf(reinterpret_cast<char*>(data), size, "\r\nP%05d%06zd", 1025, length);
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
            std::snprintf(const_cast<char*>(s->data()), s->size(), "\r\nP%05d%06zd", 1025, length);
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
             *this = LiveIVarSwapFixedTerm{};
        }
        bool IncludeMeta() const {
            return (m__meta.ByteSizeLong() > 0);
        }
        bool IncludePkey() const {
            return (m_pkey.ByteSizeLong() > 0);
        }
        bool IncludeIVarSwap5d() const {
            return !(m_i_var_swap_5d == 0.0);
        }
        bool IncludeIVarSwap10d() const {
            return !(m_i_var_swap_10d == 0.0);
        }
        bool IncludeIVarSwap21d() const {
            return !(m_i_var_swap_21d == 0.0);
        }
        bool IncludeIVarSwap42d() const {
            return !(m_i_var_swap_42d == 0.0);
        }
        bool IncludeIVarSwap63d() const {
            return !(m_i_var_swap_63d == 0.0);
        }
        bool IncludeIVarSwap84d() const {
            return !(m_i_var_swap_84d == 0.0);
        }
        bool IncludeIVarSwap105d() const {
            return !(m_i_var_swap_105d == 0.0);
        }
        bool IncludeIVarSwap126d() const {
            return !(m_i_var_swap_126d == 0.0);
        }
        bool IncludeIVarSwap189d() const {
            return !(m_i_var_swap_189d == 0.0);
        }
        bool IncludeIVarSwap252d() const {
            return !(m_i_var_swap_252d == 0.0);
        }
        bool IncludeIVarSwap378d() const {
            return !(m_i_var_swap_378d == 0.0);
        }
        bool IncludeIVarSwap504d() const {
            return !(m_i_var_swap_504d == 0.0);
        }
        bool IncludeTime() const {
            return (m_time.count() != 0);
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
            if ( IncludeIVarSwap5d()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(100,m_i_var_swap_5d);
            }
            if ( IncludeIVarSwap10d()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(103,m_i_var_swap_10d);
            }
            if ( IncludeIVarSwap21d()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(106,m_i_var_swap_21d);
            }
            if ( IncludeIVarSwap42d()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(109,m_i_var_swap_42d);
            }
            if ( IncludeIVarSwap63d()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(112,m_i_var_swap_63d);
            }
            if ( IncludeIVarSwap84d()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(115,m_i_var_swap_84d);
            }
            if ( IncludeIVarSwap105d()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(118,m_i_var_swap_105d);
            }
            if ( IncludeIVarSwap126d()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(121,m_i_var_swap_126d);
            }
            if ( IncludeIVarSwap189d()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(124,m_i_var_swap_189d);
            }
            if ( IncludeIVarSwap252d()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(127,m_i_var_swap_252d);
            }
            if ( IncludeIVarSwap378d()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(130,m_i_var_swap_378d);
            }
            if ( IncludeIVarSwap504d()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(133,m_i_var_swap_504d);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(136,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::CurveStatus>(m_status)));
            if ( IncludeTime()) {
                totalSize += SRProtobufCPP::FieldCodec::TimeSpanFieldSize(139, m_time);
            }
            if ( IncludeTimestamp()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(142, m_timestamp);
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
            if ( IncludeIVarSwap5d()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,100,m_i_var_swap_5d);
            }
            if ( IncludeIVarSwap10d()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,103,m_i_var_swap_10d);
            }
            if ( IncludeIVarSwap21d()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,106,m_i_var_swap_21d);
            }
            if ( IncludeIVarSwap42d()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,109,m_i_var_swap_42d);
            }
            if ( IncludeIVarSwap63d()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,112,m_i_var_swap_63d);
            }
            if ( IncludeIVarSwap84d()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,115,m_i_var_swap_84d);
            }
            if ( IncludeIVarSwap105d()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,118,m_i_var_swap_105d);
            }
            if ( IncludeIVarSwap126d()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,121,m_i_var_swap_126d);
            }
            if ( IncludeIVarSwap189d()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,124,m_i_var_swap_189d);
            }
            if ( IncludeIVarSwap252d()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,127,m_i_var_swap_252d);
            }
            if ( IncludeIVarSwap378d()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,130,m_i_var_swap_378d);
            }
            if ( IncludeIVarSwap504d()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,133,m_i_var_swap_504d);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,136,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::CurveStatus>(m_status)));
            if ( IncludeTime()) {
                dest = SRProtobufCPP::FieldCodec::EncodeTimeSpan(dest, 139, m_time);
            }
            if ( IncludeTimestamp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 142, m_timestamp);
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
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_i_var_swap_5d = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 103: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_i_var_swap_10d = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 106: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_i_var_swap_21d = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 109: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_i_var_swap_42d = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 112: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_i_var_swap_63d = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 115: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_i_var_swap_84d = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 118: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_i_var_swap_105d = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 121: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_i_var_swap_126d = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 124: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_i_var_swap_189d = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 127: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_i_var_swap_252d = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 130: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_i_var_swap_378d = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 133: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_i_var_swap_504d = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 136: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_status = static_cast<spiderrock::protobuf::api::CurveStatus>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 139: {
                        if (tagType == SRProtobufCPP::DateKeyCodec::TagType) {
                            m_time = SRProtobufCPP::FieldCodec::DecodeTimeSpan(pos,max);
                        }
                        break;
                    }
                    case 142: {
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

    template<> inline const auto LiveIVarSwapFixedTerm::get<LiveIVarSwapFixedTerm::_meta>() const { return LiveIVarSwapFixedTerm::_meta{ m__meta}; }
    template<> inline const auto LiveIVarSwapFixedTerm::get<LiveIVarSwapFixedTerm::pkey>() const { return LiveIVarSwapFixedTerm::pkey{ m_pkey}; }
    template<> inline const auto LiveIVarSwapFixedTerm::get<LiveIVarSwapFixedTerm::i_var_swap_5d>() const { return m_i_var_swap_5d; }
    template<> inline const auto LiveIVarSwapFixedTerm::get<LiveIVarSwapFixedTerm::i_var_swap_10d>() const { return m_i_var_swap_10d; }
    template<> inline const auto LiveIVarSwapFixedTerm::get<LiveIVarSwapFixedTerm::i_var_swap_21d>() const { return m_i_var_swap_21d; }
    template<> inline const auto LiveIVarSwapFixedTerm::get<LiveIVarSwapFixedTerm::i_var_swap_42d>() const { return m_i_var_swap_42d; }
    template<> inline const auto LiveIVarSwapFixedTerm::get<LiveIVarSwapFixedTerm::i_var_swap_63d>() const { return m_i_var_swap_63d; }
    template<> inline const auto LiveIVarSwapFixedTerm::get<LiveIVarSwapFixedTerm::i_var_swap_84d>() const { return m_i_var_swap_84d; }
    template<> inline const auto LiveIVarSwapFixedTerm::get<LiveIVarSwapFixedTerm::i_var_swap_105d>() const { return m_i_var_swap_105d; }
    template<> inline const auto LiveIVarSwapFixedTerm::get<LiveIVarSwapFixedTerm::i_var_swap_126d>() const { return m_i_var_swap_126d; }
    template<> inline const auto LiveIVarSwapFixedTerm::get<LiveIVarSwapFixedTerm::i_var_swap_189d>() const { return m_i_var_swap_189d; }
    template<> inline const auto LiveIVarSwapFixedTerm::get<LiveIVarSwapFixedTerm::i_var_swap_252d>() const { return m_i_var_swap_252d; }
    template<> inline const auto LiveIVarSwapFixedTerm::get<LiveIVarSwapFixedTerm::i_var_swap_378d>() const { return m_i_var_swap_378d; }
    template<> inline const auto LiveIVarSwapFixedTerm::get<LiveIVarSwapFixedTerm::i_var_swap_504d>() const { return m_i_var_swap_504d; }
    template<> inline const auto LiveIVarSwapFixedTerm::get<LiveIVarSwapFixedTerm::status>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::CurveStatus>( m_status)); }
    template<> inline const auto LiveIVarSwapFixedTerm::get<LiveIVarSwapFixedTerm::time>() const { return m_time; }
    template<> inline const auto LiveIVarSwapFixedTerm::get<LiveIVarSwapFixedTerm::timestamp>() const { return m_timestamp; }
    template<> inline const auto LiveIVarSwapFixedTerm_PKey::get<LiveIVarSwapFixedTerm_PKey::ticker>() const { return LiveIVarSwapFixedTerm_PKey::ticker{m_ticker}; }
    template<> inline const auto LiveIVarSwapFixedTerm_PKey::get<LiveIVarSwapFixedTerm_PKey::surface_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SurfaceCurveType>(m_surface_type));}
    
    // ostream operators for all classes above, output should adhere to a JSON format

    inline std::ostream& operator<<(std::ostream &o, const LiveIVarSwapFixedTerm_PKey& m) {
        o << "\"ticker\":{" << m.get<LiveIVarSwapFixedTerm_PKey::ticker>() << "}";
        o << ",\"surface_type\":" << (int64_t)m.get<LiveIVarSwapFixedTerm_PKey::surface_type>();
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const LiveIVarSwapFixedTerm& m) {
        o << "\"_meta\":{" << m.get<LiveIVarSwapFixedTerm::_meta>() << "}";
        o << ",\"pkey\":{" << m.get<LiveIVarSwapFixedTerm::pkey>() << "}";
        o << ",\"i_var_swap_5d\":" << m.get<LiveIVarSwapFixedTerm::i_var_swap_5d>();
        o << ",\"i_var_swap_10d\":" << m.get<LiveIVarSwapFixedTerm::i_var_swap_10d>();
        o << ",\"i_var_swap_21d\":" << m.get<LiveIVarSwapFixedTerm::i_var_swap_21d>();
        o << ",\"i_var_swap_42d\":" << m.get<LiveIVarSwapFixedTerm::i_var_swap_42d>();
        o << ",\"i_var_swap_63d\":" << m.get<LiveIVarSwapFixedTerm::i_var_swap_63d>();
        o << ",\"i_var_swap_84d\":" << m.get<LiveIVarSwapFixedTerm::i_var_swap_84d>();
        o << ",\"i_var_swap_105d\":" << m.get<LiveIVarSwapFixedTerm::i_var_swap_105d>();
        o << ",\"i_var_swap_126d\":" << m.get<LiveIVarSwapFixedTerm::i_var_swap_126d>();
        o << ",\"i_var_swap_189d\":" << m.get<LiveIVarSwapFixedTerm::i_var_swap_189d>();
        o << ",\"i_var_swap_252d\":" << m.get<LiveIVarSwapFixedTerm::i_var_swap_252d>();
        o << ",\"i_var_swap_378d\":" << m.get<LiveIVarSwapFixedTerm::i_var_swap_378d>();
        o << ",\"i_var_swap_504d\":" << m.get<LiveIVarSwapFixedTerm::i_var_swap_504d>();
        o << ",\"status\":" << (int64_t)m.get<LiveIVarSwapFixedTerm::status>();
        o << ",\"time\":\"" << m.get<LiveIVarSwapFixedTerm::time>().count() << "\"";
        {
            std::time_t tt = m.get<LiveIVarSwapFixedTerm::timestamp>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"timestamp\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        return o;
    }

}
}
}