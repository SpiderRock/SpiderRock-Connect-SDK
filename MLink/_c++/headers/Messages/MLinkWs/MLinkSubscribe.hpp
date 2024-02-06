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

    #ifndef _session_id__GUARD__
    #define _session_id__GUARD__
    DECL_STRONG_TYPE(session_id, int32);
    #endif//_session_id__GUARD__

    #ifndef _subscribe_id__GUARD__
    #define _subscribe_id__GUARD__
    DECL_STRONG_TYPE(subscribe_id, int64);
    #endif//_subscribe_id__GUARD__

    #ifndef _active_latency__GUARD__
    #define _active_latency__GUARD__
    DECL_STRONG_TYPE(active_latency, int32);
    #endif//_active_latency__GUARD__

    #ifndef _compression__GUARD__
    #define _compression__GUARD__
    DECL_STRONG_TYPE(compression, spiderrock::protobuf::api::MLinkCompression);
    #endif//_compression__GUARD__

    #ifndef _do_reset__GUARD__
    #define _do_reset__GUARD__
    DECL_STRONG_TYPE(do_reset, spiderrock::protobuf::api::YesNo);
    #endif//_do_reset__GUARD__

    #ifndef _msg_name__GUARD__
    #define _msg_name__GUARD__
    DECL_STRONG_TYPE(msg_name, string);
    #endif//_msg_name__GUARD__

    #ifndef _msg_pkey__GUARD__
    #define _msg_pkey__GUARD__
    DECL_STRONG_TYPE(msg_pkey, string);
    #endif//_msg_pkey__GUARD__

    #ifndef _msg_name__GUARD__
    #define _msg_name__GUARD__
    DECL_STRONG_TYPE(msg_name, string);
    #endif//_msg_name__GUARD__

    #ifndef _msg_pkey__GUARD__
    #define _msg_pkey__GUARD__
    DECL_STRONG_TYPE(msg_pkey, string);
    #endif//_msg_pkey__GUARD__

    #ifndef _msg_name__GUARD__
    #define _msg_name__GUARD__
    DECL_STRONG_TYPE(msg_name, string);
    #endif//_msg_name__GUARD__

    #ifndef _view__GUARD__
    #define _view__GUARD__
    DECL_STRONG_TYPE(view, string);
    #endif//_view__GUARD__

    
    class MLinkSubscribe_Subscribe {
        public:
        //using statements for all types used in this class
        using msg_name = spiderrock::protobuf::api::msg_name;
        using msg_pkey = spiderrock::protobuf::api::msg_pkey;

        private:
        msg_name m_msg_name{};
        msg_pkey m_msg_pkey{};

        public:
        msg_name get_msg_name() const {
            return m_msg_name;
        }
        msg_pkey get_msg_pkey() const {
            return m_msg_pkey;
        }
        void set_msg_name(const msg_name& value)  {
            m_msg_name = value;
        }
        void set_msg_pkey(const msg_pkey& value)  {
            m_msg_pkey = value;
        }
        //templatized getters and setters
        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to MLinkSubscribe_Subscribe::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to MLinkSubscribe_Subscribe::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const msg_name & value) { set_msg_name(value); }
        void set(const msg_pkey & value) { set_msg_pkey(value); }


        MLinkSubscribe_Subscribe() {}

        virtual ~MLinkSubscribe_Subscribe() {
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
            totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(136,m_msg_name);
            totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(139,m_msg_pkey);
            return totalSize;
        }

        uint8_t* Encode(uint8_t*& dest, uint8_t* max) const {
            dest = SRProtobufCPP::FieldCodec::EncodeString(dest,136,static_cast<string>(m_msg_name));
            dest = SRProtobufCPP::FieldCodec::EncodeString(dest,139,static_cast<string>(m_msg_pkey));
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
                    case 136: {m_msg_name = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                    case 139: {m_msg_pkey = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                }
            }
        }

    };
    
    class MLinkSubscribe_Unsubscribe {
        public:
        //using statements for all types used in this class
        using msg_name = spiderrock::protobuf::api::msg_name;
        using msg_pkey = spiderrock::protobuf::api::msg_pkey;

        private:
        msg_name m_msg_name{};
        msg_pkey m_msg_pkey{};

        public:
        msg_name get_msg_name() const {
            return m_msg_name;
        }
        msg_pkey get_msg_pkey() const {
            return m_msg_pkey;
        }
        void set_msg_name(const msg_name& value)  {
            m_msg_name = value;
        }
        void set_msg_pkey(const msg_pkey& value)  {
            m_msg_pkey = value;
        }
        //templatized getters and setters
        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to MLinkSubscribe_Unsubscribe::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to MLinkSubscribe_Unsubscribe::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const msg_name & value) { set_msg_name(value); }
        void set(const msg_pkey & value) { set_msg_pkey(value); }


        MLinkSubscribe_Unsubscribe() {}

        virtual ~MLinkSubscribe_Unsubscribe() {
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
            totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(127,m_msg_name);
            totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(130,m_msg_pkey);
            return totalSize;
        }

        uint8_t* Encode(uint8_t*& dest, uint8_t* max) const {
            dest = SRProtobufCPP::FieldCodec::EncodeString(dest,127,static_cast<string>(m_msg_name));
            dest = SRProtobufCPP::FieldCodec::EncodeString(dest,130,static_cast<string>(m_msg_pkey));
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
                    case 127: {m_msg_name = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                    case 130: {m_msg_pkey = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                }
            }
        }

    };
    
    class MLinkSubscribe_View {
        public:
        //using statements for all types used in this class
        using msg_name = spiderrock::protobuf::api::msg_name;
        using view = spiderrock::protobuf::api::view;

        private:
        msg_name m_msg_name{};
        view m_view{};

        public:
        msg_name get_msg_name() const {
            return m_msg_name;
        }
        view get_view() const {
            return m_view;
        }
        void set_msg_name(const msg_name& value)  {
            m_msg_name = value;
        }
        void set_view(const view& value)  {
            m_view = value;
        }
        //templatized getters and setters
        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to MLinkSubscribe_View::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to MLinkSubscribe_View::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const msg_name & value) { set_msg_name(value); }
        void set(const view & value) { set_view(value); }


        MLinkSubscribe_View() {}

        virtual ~MLinkSubscribe_View() {
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
            totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(118,m_msg_name);
            totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(121,m_view);
            return totalSize;
        }

        uint8_t* Encode(uint8_t*& dest, uint8_t* max) const {
            dest = SRProtobufCPP::FieldCodec::EncodeString(dest,118,static_cast<string>(m_msg_name));
            dest = SRProtobufCPP::FieldCodec::EncodeString(dest,121,static_cast<string>(m_view));
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
                    case 118: {m_msg_name = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                    case 121: {m_view = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                }
            }
        }

    };
    

    class MLinkSubscribe {
        public:
        //using statements for all types used in this class
    
        using _meta = spiderrock::protobuf::api::_meta;
        using session_id = spiderrock::protobuf::api::session_id;
        using subscribe_id = spiderrock::protobuf::api::subscribe_id;
        using active_latency = spiderrock::protobuf::api::active_latency;
        using compression = spiderrock::protobuf::api::compression;
        using do_reset = spiderrock::protobuf::api::do_reset;
        using subscribe = spiderrock::protobuf::api::MLinkSubscribe_Subscribe;
        using unsubscribe = spiderrock::protobuf::api::MLinkSubscribe_Unsubscribe;
        using view = spiderrock::protobuf::api::MLinkSubscribe_View;

        private:
        _meta m__meta{};
        session_id m_session_id{};
        subscribe_id m_subscribe_id{};
        active_latency m_active_latency{};
        compression m_compression{};
        do_reset m_do_reset{};
        std::vector<subscribe> m_subscribe{};
        std::vector<unsubscribe> m_unsubscribe{};
        std::vector<view> m_view{};

        static constexpr int _mlinkHeaderLength = 14;

        public:		
        _meta get__meta() const {
            return m__meta;
        }		
        session_id get_session_id() const {
            return m_session_id;
        }		
        subscribe_id get_subscribe_id() const {
            return m_subscribe_id;
        }		
        active_latency get_active_latency() const {
            return m_active_latency;
        }		
        compression get_compression() const {
            return m_compression;
        }		
        do_reset get_do_reset() const {
            return m_do_reset;
        }
        const std::vector<subscribe>& get_subscribe_list() const {
            return m_subscribe;
        }
        const subscribe& get_subscribe(const int i) const {
            return m_subscribe.at(i);
        }
        const std::vector<unsubscribe>& get_unsubscribe_list() const {
            return m_unsubscribe;
        }
        const unsubscribe& get_unsubscribe(const int i) const {
            return m_unsubscribe.at(i);
        }
        const std::vector<view>& get_view_list() const {
            return m_view;
        }
        const view& get_view(const int i) const {
            return m_view.at(i);
        }
        size_t getMLinkHeaderLength() const
        {
            return _mlinkHeaderLength;
        }
        void set__meta(const _meta& value)  {
            m__meta = value;
        }
        void set_session_id(const session_id& value)  {
            m_session_id = value;
        }
        void set_subscribe_id(const subscribe_id& value)  {
            m_subscribe_id = value;
        }
        void set_active_latency(const active_latency& value)  {
            m_active_latency = value;
        }
        void set_compression(const compression& value)  {
            m_compression = value;
        }
        void set_do_reset(const do_reset& value)  {
            m_do_reset = value;
        }
        void set_subscribe_list(const std::vector<subscribe>& list)  {
            m_subscribe = list;
        }
        void add_subscribe(const subscribe& item) {
            m_subscribe.emplace_back(item);
        }
        void set_unsubscribe_list(const std::vector<unsubscribe>& list)  {
            m_unsubscribe = list;
        }
        void add_unsubscribe(const unsubscribe& item) {
            m_unsubscribe.emplace_back(item);
        }
        void set_view_list(const std::vector<view>& list)  {
            m_view = list;
        }
        void add_view(const view& item) {
            m_view.emplace_back(item);
        }

        //templatized getters and setters

        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to MLinkSubscribe::get()"); return T{}; }  // specializations for valid types are listed below the class definition

        template <typename T, size_t S = sizeof(T)>
        const auto get(int i) const { static_assert(sizeof(T) == -1, "Unexpected type in call to MLinkSubscribe::get(int)"); return T{};}  // specializations for valid types are listed below the class definition

        template <typename T, size_t S = sizeof(T)>
        int count() const { static_assert(sizeof(T) == -1, "Unexpected type in call to MLinkSubscribe::count()"); return 0;}  // specializations for valid types are listed below the class definition

        //specializations for set functions for the valid types
    
        void set(const _meta & value) {
            set__meta(value);
        }
        void set(const session_id & value) {
            set_session_id(value);
        }
        void set(const subscribe_id & value) {
            set_subscribe_id(value);
        }
        void set(const active_latency & value) {
            set_active_latency(value);
        }
        void set(const compression & value) {
            set_compression(value);
        }
        void set(const do_reset & value) {
            set_do_reset(value);
        }
        void set(const subscribe & value) {
            add_subscribe(value);
        }
        void set(const unsubscribe & value) {
            add_unsubscribe(value);
        }
        void set(const view & value) {
            add_view(value);
        }

        void set(const MLinkSubscribe & value) {
            set(value.m__meta);
            set(value.m_session_id);
            set(value.m_subscribe_id);
            set(value.m_active_latency);
            set(value.m_compression);
            set(value.m_do_reset);set_subscribe_list(value.m_subscribe);set_unsubscribe_list(value.m_unsubscribe);set_view_list(value.m_view);
        }

        MLinkSubscribe() {
            m__meta.set_message_type("MLinkSubscribe");
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
            std::snprintf(reinterpret_cast<char*>(data), size, "\r\nP%05d%06zd", 3386, length);
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
            std::snprintf(const_cast<char*>(s->data()), s->size(), "\r\nP%05d%06zd", 3386, length);
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
             *this = MLinkSubscribe{};
        }
        bool IncludeMeta() const {
            return (m__meta.ByteSizeLong() > 0);
        }
        bool IncludeSessionId() const {
            return !(m_session_id == 0);
        }
        bool IncludeSubscribeId() const {
            return !(m_subscribe_id == 0);
        }
        bool IncludeActiveLatency() const {
            return !(m_active_latency == 0);
        }
        bool IncludeSubscribe() const {
            return (!m_subscribe.empty());
        }
        bool IncludeUnsubscribe() const {
            return (!m_unsubscribe.empty());
        }
        bool IncludeView() const {
            return (!m_view.empty());
        }

        size_t ByteSizeLong() const {
            size_t totalSize = 0;
            if ( IncludeMeta()) {
                SRProtobufCPP::MessageMetadata messageMetadata{};
                m__meta.setCodecMessageMetadata(messageMetadata);
                totalSize += SRProtobufCPP::FieldCodec::MessageMetadataFieldSize(1, messageMetadata);
            }
            if ( IncludeSessionId()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(100,m_session_id);
            }
            if ( IncludeSubscribeId()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(103,m_subscribe_id);
            }
            if ( IncludeActiveLatency()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(106,m_active_latency);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(109,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MLinkCompression>(m_compression)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(112,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_do_reset)));
            if ( IncludeSubscribe()) {
                for (auto& item : m_subscribe) {
					totalSize += SRProtobufCPP::TagCodec::Size(133, SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited);
                    totalSize += SRProtobufCPP::LengthCodec::Size((int)item.ByteSizeLong());
                    totalSize += item.ByteSizeLong();
                }
            }
            if ( IncludeUnsubscribe()) {
                for (auto& item : m_unsubscribe) {
					totalSize += SRProtobufCPP::TagCodec::Size(124, SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited);
                    totalSize += SRProtobufCPP::LengthCodec::Size((int)item.ByteSizeLong());
                    totalSize += item.ByteSizeLong();
                }
            }
            if ( IncludeView()) {
                for (auto& item : m_view) {
					totalSize += SRProtobufCPP::TagCodec::Size(115, SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited);
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
            if ( IncludeSessionId()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,100,m_session_id);
            }
            if ( IncludeSubscribeId()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,103,m_subscribe_id);
            }
            if ( IncludeActiveLatency()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,106,m_active_latency);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,109,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MLinkCompression>(m_compression)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,112,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_do_reset)));
            if ( IncludeSubscribe()) {
                for (auto& item : m_subscribe) {
                    dest = SRProtobufCPP::TagCodec::Encode(dest, 133, SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited);
                    dest = SRProtobufCPP::LengthCodec::Encode(dest,static_cast<int>(item.ByteSizeLong()));
                    item.Encode(dest, max);
                }
            }
            if ( IncludeUnsubscribe()) {
                for (auto& item : m_unsubscribe) {
                    dest = SRProtobufCPP::TagCodec::Encode(dest, 124, SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited);
                    dest = SRProtobufCPP::LengthCodec::Encode(dest,static_cast<int>(item.ByteSizeLong()));
                    item.Encode(dest, max);
                }
            }
            if ( IncludeView()) {
                for (auto& item : m_view) {
                    dest = SRProtobufCPP::TagCodec::Encode(dest, 115, SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited);
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
                    case 100: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_session_id = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 103: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_subscribe_id = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 106: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_active_latency = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 109: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_compression = static_cast<spiderrock::protobuf::api::MLinkCompression>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 112: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_do_reset = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 133: {
                        if (tagType == SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited) {
                            const int length = SRProtobufCPP::LengthCodec::Decode(pos, max);
                            subscribe item_subscribe;
                            item_subscribe.Decode(pos, pos+length);  
                            m_subscribe.emplace_back(item_subscribe);
                        }
                        break;
                    }
                    case 124: {
                        if (tagType == SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited) {
                            const int length = SRProtobufCPP::LengthCodec::Decode(pos, max);
                            unsubscribe item_unsubscribe;
                            item_unsubscribe.Decode(pos, pos+length);  
                            m_unsubscribe.emplace_back(item_unsubscribe);
                        }
                        break;
                    }
                    case 115: {
                        if (tagType == SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited) {
                            const int length = SRProtobufCPP::LengthCodec::Decode(pos, max);
                            view item_view;
                            item_view.Decode(pos, pos+length);  
                            m_view.emplace_back(item_view);
                        }
                        break;
                    }
                }
            }
        }

    };


    // getter definitions for all classes above, both inner and outer classes

    template<> inline const auto MLinkSubscribe::get<MLinkSubscribe::_meta>() const { return MLinkSubscribe::_meta{ m__meta}; }
    template<> inline const auto MLinkSubscribe::get<MLinkSubscribe::session_id>() const { return m_session_id; }
    template<> inline const auto MLinkSubscribe::get<MLinkSubscribe::subscribe_id>() const { return m_subscribe_id; }
    template<> inline const auto MLinkSubscribe::get<MLinkSubscribe::active_latency>() const { return m_active_latency; }
    template<> inline const auto MLinkSubscribe::get<MLinkSubscribe::compression>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MLinkCompression>( m_compression)); }
    template<> inline const auto MLinkSubscribe::get<MLinkSubscribe::do_reset>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_do_reset)); }
    template<> inline const auto MLinkSubscribe::get<MLinkSubscribe::subscribe>(int i) const { return MLinkSubscribe::subscribe{ get_subscribe(i)}; }
    template<> inline int MLinkSubscribe::count<MLinkSubscribe::subscribe>() const { return static_cast<int>( m_subscribe.size()); }
    template<> inline const auto MLinkSubscribe::get<MLinkSubscribe::unsubscribe>(int i) const { return MLinkSubscribe::unsubscribe{ get_unsubscribe(i)}; }
    template<> inline int MLinkSubscribe::count<MLinkSubscribe::unsubscribe>() const { return static_cast<int>( m_unsubscribe.size()); }
    template<> inline const auto MLinkSubscribe::get<MLinkSubscribe::view>(int i) const { return MLinkSubscribe::view{ get_view(i)}; }
    template<> inline int MLinkSubscribe::count<MLinkSubscribe::view>() const { return static_cast<int>( m_view.size()); }
    template<> inline const auto MLinkSubscribe_Subscribe::get<MLinkSubscribe_Subscribe::msg_name>() const { return m_msg_name; }
    template<> inline const auto MLinkSubscribe_Subscribe::get<MLinkSubscribe_Subscribe::msg_pkey>() const { return m_msg_pkey; }
    
    template<> inline const auto MLinkSubscribe_Unsubscribe::get<MLinkSubscribe_Unsubscribe::msg_name>() const { return m_msg_name; }
    template<> inline const auto MLinkSubscribe_Unsubscribe::get<MLinkSubscribe_Unsubscribe::msg_pkey>() const { return m_msg_pkey; }
    
    template<> inline const auto MLinkSubscribe_View::get<MLinkSubscribe_View::msg_name>() const { return m_msg_name; }
    template<> inline const auto MLinkSubscribe_View::get<MLinkSubscribe_View::view>() const { return m_view; }
    
    // ostream operators for all classes above, output should adhere to a JSON format

    inline std::ostream& operator<<(std::ostream &o, const MLinkSubscribe_Subscribe& m) {
        o << "\"msg_name\":\"" << m.get<MLinkSubscribe_Subscribe::msg_name>() << "\"";
        o << ",\"msg_pkey\":\"" << m.get<MLinkSubscribe_Subscribe::msg_pkey>() << "\"";
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const MLinkSubscribe_Unsubscribe& m) {
        o << "\"msg_name\":\"" << m.get<MLinkSubscribe_Unsubscribe::msg_name>() << "\"";
        o << ",\"msg_pkey\":\"" << m.get<MLinkSubscribe_Unsubscribe::msg_pkey>() << "\"";
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const MLinkSubscribe_View& m) {
        o << "\"msg_name\":\"" << m.get<MLinkSubscribe_View::msg_name>() << "\"";
        o << ",\"view\":\"" << m.get<MLinkSubscribe_View::view>() << "\"";
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const MLinkSubscribe& m) {
        o << "\"_meta\":{" << m.get<MLinkSubscribe::_meta>() << "}";
        o << ",\"session_id\":" << m.get<MLinkSubscribe::session_id>();
        o << ",\"subscribe_id\":" << m.get<MLinkSubscribe::subscribe_id>();
        o << ",\"active_latency\":" << m.get<MLinkSubscribe::active_latency>();
        o << ",\"compression\":" << (int64_t)m.get<MLinkSubscribe::compression>();
        o << ",\"do_reset\":" << (int64_t)m.get<MLinkSubscribe::do_reset>();
        o << ",\"subscribe\":[";
        {
            const char *delim = "{";
            for (int i=0; i<m.count<MLinkSubscribe::subscribe>(); ++i) {
                o << delim << m.get<MLinkSubscribe::subscribe>(i) << '}';
                delim = ",{";
            }
        }
        o << "]";
        o << ",\"unsubscribe\":[";
        {
            const char *delim = "{";
            for (int i=0; i<m.count<MLinkSubscribe::unsubscribe>(); ++i) {
                o << delim << m.get<MLinkSubscribe::unsubscribe>(i) << '}';
                delim = ",{";
            }
        }
        o << "]";
        o << ",\"view\":[";
        {
            const char *delim = "{";
            for (int i=0; i<m.count<MLinkSubscribe::view>(); ++i) {
                o << delim << m.get<MLinkSubscribe::view>(i) << '}';
                delim = ",{";
            }
        }
        o << "]";
        return o;
    }

}
}
}