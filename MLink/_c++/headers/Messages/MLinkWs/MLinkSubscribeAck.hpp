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

    #ifndef _num_active_subscriptions__GUARD__
    #define _num_active_subscriptions__GUARD__
    DECL_STRONG_TYPE(num_active_subscriptions, int32);
    #endif//_num_active_subscriptions__GUARD__

    #ifndef _did_reset__GUARD__
    #define _did_reset__GUARD__
    DECL_STRONG_TYPE(did_reset, spiderrock::protobuf::api::YesNo);
    #endif//_did_reset__GUARD__

    #ifndef _msg_name__GUARD__
    #define _msg_name__GUARD__
    DECL_STRONG_TYPE(msg_name, string);
    #endif//_msg_name__GUARD__

    #ifndef _msg_pkey__GUARD__
    #define _msg_pkey__GUARD__
    DECL_STRONG_TYPE(msg_pkey, string);
    #endif//_msg_pkey__GUARD__

    #ifndef _result__SubscribeMsgResult__GUARD__
    #define _result__SubscribeMsgResult__GUARD__
    DECL_STRONG_TYPE(result__SubscribeMsgResult, spiderrock::protobuf::api::SubscribeMsgResult);
    #endif//_result__SubscribeMsgResult__GUARD__

    #ifndef _detail__GUARD__
    #define _detail__GUARD__
    DECL_STRONG_TYPE(detail, string);
    #endif//_detail__GUARD__

    #ifndef _msg_name__GUARD__
    #define _msg_name__GUARD__
    DECL_STRONG_TYPE(msg_name, string);
    #endif//_msg_name__GUARD__

    #ifndef _msg_pkey__GUARD__
    #define _msg_pkey__GUARD__
    DECL_STRONG_TYPE(msg_pkey, string);
    #endif//_msg_pkey__GUARD__

    #ifndef _result__SubscribeMsgResult__GUARD__
    #define _result__SubscribeMsgResult__GUARD__
    DECL_STRONG_TYPE(result__SubscribeMsgResult, spiderrock::protobuf::api::SubscribeMsgResult);
    #endif//_result__SubscribeMsgResult__GUARD__

    #ifndef _msg_name__GUARD__
    #define _msg_name__GUARD__
    DECL_STRONG_TYPE(msg_name, string);
    #endif//_msg_name__GUARD__

    #ifndef _view__GUARD__
    #define _view__GUARD__
    DECL_STRONG_TYPE(view, string);
    #endif//_view__GUARD__

    #ifndef _result__SubscribeMsgResult__GUARD__
    #define _result__SubscribeMsgResult__GUARD__
    DECL_STRONG_TYPE(result__SubscribeMsgResult, spiderrock::protobuf::api::SubscribeMsgResult);
    #endif//_result__SubscribeMsgResult__GUARD__

    #ifndef _detail__GUARD__
    #define _detail__GUARD__
    DECL_STRONG_TYPE(detail, string);
    #endif//_detail__GUARD__

    
    class MLinkSubscribeAck_Subscribe {
        public:
        //using statements for all types used in this class
        using msg_name = spiderrock::protobuf::api::msg_name;
        using msg_pkey = spiderrock::protobuf::api::msg_pkey;
        using result = spiderrock::protobuf::api::result__SubscribeMsgResult;
        using detail = spiderrock::protobuf::api::detail;

        private:
        msg_name m_msg_name{};
        msg_pkey m_msg_pkey{};
        result m_result{};
        detail m_detail{};

        public:
        msg_name get_msg_name() const {
            return m_msg_name;
        }
        msg_pkey get_msg_pkey() const {
            return m_msg_pkey;
        }
        result get_result() const {
            return m_result;
        }
        detail get_detail() const {
            return m_detail;
        }
        void set_msg_name(const msg_name& value)  {
            m_msg_name = value;
        }
        void set_msg_pkey(const msg_pkey& value)  {
            m_msg_pkey = value;
        }
        void set_result(const result& value)  {
            m_result = value;
        }
        void set_detail(const detail& value)  {
            m_detail = value;
        }
        //templatized getters and setters
        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to MLinkSubscribeAck_Subscribe::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to MLinkSubscribeAck_Subscribe::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const msg_name & value) { set_msg_name(value); }
        void set(const msg_pkey & value) { set_msg_pkey(value); }
        void set(const result & value) { set_result(value); }
        void set(const detail & value) { set_detail(value); }


        MLinkSubscribeAck_Subscribe() {}

        virtual ~MLinkSubscribeAck_Subscribe() {
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
            totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(142,m_msg_name);
            totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(145,m_msg_pkey);
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(148,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SubscribeMsgResult>(m_result)));
            totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(151,m_detail);
            return totalSize;
        }

        uint8_t* Encode(uint8_t*& dest, uint8_t* max) const {
            dest = SRProtobufCPP::FieldCodec::EncodeString(dest,142,static_cast<string>(m_msg_name));
            dest = SRProtobufCPP::FieldCodec::EncodeString(dest,145,static_cast<string>(m_msg_pkey));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,148,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SubscribeMsgResult>(m_result)));
            dest = SRProtobufCPP::FieldCodec::EncodeString(dest,151,static_cast<string>(m_detail));
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
                    case 142: {m_msg_name = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                    case 145: {m_msg_pkey = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                    case 148: {m_result = static_cast<spiderrock::protobuf::api::SubscribeMsgResult>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                    case 151: {m_detail = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                }
            }
        }

    };
    
    class MLinkSubscribeAck_Unsubscribe {
        public:
        //using statements for all types used in this class
        using msg_name = spiderrock::protobuf::api::msg_name;
        using msg_pkey = spiderrock::protobuf::api::msg_pkey;
        using result = spiderrock::protobuf::api::result__SubscribeMsgResult;

        private:
        msg_name m_msg_name{};
        msg_pkey m_msg_pkey{};
        result m_result{};

        public:
        msg_name get_msg_name() const {
            return m_msg_name;
        }
        msg_pkey get_msg_pkey() const {
            return m_msg_pkey;
        }
        result get_result() const {
            return m_result;
        }
        void set_msg_name(const msg_name& value)  {
            m_msg_name = value;
        }
        void set_msg_pkey(const msg_pkey& value)  {
            m_msg_pkey = value;
        }
        void set_result(const result& value)  {
            m_result = value;
        }
        //templatized getters and setters
        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to MLinkSubscribeAck_Unsubscribe::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to MLinkSubscribeAck_Unsubscribe::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const msg_name & value) { set_msg_name(value); }
        void set(const msg_pkey & value) { set_msg_pkey(value); }
        void set(const result & value) { set_result(value); }


        MLinkSubscribeAck_Unsubscribe() {}

        virtual ~MLinkSubscribeAck_Unsubscribe() {
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
            totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(130,m_msg_name);
            totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(133,m_msg_pkey);
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(136,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SubscribeMsgResult>(m_result)));
            return totalSize;
        }

        uint8_t* Encode(uint8_t*& dest, uint8_t* max) const {
            dest = SRProtobufCPP::FieldCodec::EncodeString(dest,130,static_cast<string>(m_msg_name));
            dest = SRProtobufCPP::FieldCodec::EncodeString(dest,133,static_cast<string>(m_msg_pkey));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,136,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SubscribeMsgResult>(m_result)));
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
                    case 130: {m_msg_name = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                    case 133: {m_msg_pkey = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                    case 136: {m_result = static_cast<spiderrock::protobuf::api::SubscribeMsgResult>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                }
            }
        }

    };
    
    class MLinkSubscribeAck_View {
        public:
        //using statements for all types used in this class
        using msg_name = spiderrock::protobuf::api::msg_name;
        using view = spiderrock::protobuf::api::view;
        using result = spiderrock::protobuf::api::result__SubscribeMsgResult;
        using detail = spiderrock::protobuf::api::detail;

        private:
        msg_name m_msg_name{};
        view m_view{};
        result m_result{};
        detail m_detail{};

        public:
        msg_name get_msg_name() const {
            return m_msg_name;
        }
        view get_view() const {
            return m_view;
        }
        result get_result() const {
            return m_result;
        }
        detail get_detail() const {
            return m_detail;
        }
        void set_msg_name(const msg_name& value)  {
            m_msg_name = value;
        }
        void set_view(const view& value)  {
            m_view = value;
        }
        void set_result(const result& value)  {
            m_result = value;
        }
        void set_detail(const detail& value)  {
            m_detail = value;
        }
        //templatized getters and setters
        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to MLinkSubscribeAck_View::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to MLinkSubscribeAck_View::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const msg_name & value) { set_msg_name(value); }
        void set(const view & value) { set_view(value); }
        void set(const result & value) { set_result(value); }
        void set(const detail & value) { set_detail(value); }


        MLinkSubscribeAck_View() {}

        virtual ~MLinkSubscribeAck_View() {
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
            totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(115,m_msg_name);
            totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(118,m_view);
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(121,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SubscribeMsgResult>(m_result)));
            totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(124,m_detail);
            return totalSize;
        }

        uint8_t* Encode(uint8_t*& dest, uint8_t* max) const {
            dest = SRProtobufCPP::FieldCodec::EncodeString(dest,115,static_cast<string>(m_msg_name));
            dest = SRProtobufCPP::FieldCodec::EncodeString(dest,118,static_cast<string>(m_view));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,121,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SubscribeMsgResult>(m_result)));
            dest = SRProtobufCPP::FieldCodec::EncodeString(dest,124,static_cast<string>(m_detail));
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
                    case 115: {m_msg_name = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                    case 118: {m_view = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                    case 121: {m_result = static_cast<spiderrock::protobuf::api::SubscribeMsgResult>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                    case 124: {m_detail = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                }
            }
        }

    };
    

    class MLinkSubscribeAck {
        public:
        //using statements for all types used in this class
    
        using _meta = spiderrock::protobuf::api::_meta;
        using session_id = spiderrock::protobuf::api::session_id;
        using subscribe_id = spiderrock::protobuf::api::subscribe_id;
        using num_active_subscriptions = spiderrock::protobuf::api::num_active_subscriptions;
        using did_reset = spiderrock::protobuf::api::did_reset;
        using subscribe = spiderrock::protobuf::api::MLinkSubscribeAck_Subscribe;
        using unsubscribe = spiderrock::protobuf::api::MLinkSubscribeAck_Unsubscribe;
        using view = spiderrock::protobuf::api::MLinkSubscribeAck_View;

        private:
        _meta m__meta{};
        session_id m_session_id{};
        subscribe_id m_subscribe_id{};
        num_active_subscriptions m_num_active_subscriptions{};
        did_reset m_did_reset{};
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
        num_active_subscriptions get_num_active_subscriptions() const {
            return m_num_active_subscriptions;
        }		
        did_reset get_did_reset() const {
            return m_did_reset;
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
        void set_num_active_subscriptions(const num_active_subscriptions& value)  {
            m_num_active_subscriptions = value;
        }
        void set_did_reset(const did_reset& value)  {
            m_did_reset = value;
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
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to MLinkSubscribeAck::get()"); return T{}; }  // specializations for valid types are listed below the class definition

        template <typename T, size_t S = sizeof(T)>
        const auto get(int i) const { static_assert(sizeof(T) == -1, "Unexpected type in call to MLinkSubscribeAck::get(int)"); return T{};}  // specializations for valid types are listed below the class definition

        template <typename T, size_t S = sizeof(T)>
        int count() const { static_assert(sizeof(T) == -1, "Unexpected type in call to MLinkSubscribeAck::count()"); return 0;}  // specializations for valid types are listed below the class definition

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
        void set(const num_active_subscriptions & value) {
            set_num_active_subscriptions(value);
        }
        void set(const did_reset & value) {
            set_did_reset(value);
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

        void set(const MLinkSubscribeAck & value) {
            set(value.m__meta);
            set(value.m_session_id);
            set(value.m_subscribe_id);
            set(value.m_num_active_subscriptions);
            set(value.m_did_reset);set_subscribe_list(value.m_subscribe);set_unsubscribe_list(value.m_unsubscribe);set_view_list(value.m_view);
        }

        MLinkSubscribeAck() {
            m__meta.set_message_type("MLinkSubscribeAck");
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
            std::snprintf(reinterpret_cast<char*>(data), size, "\r\nP%05d%06zd", 3387, length);
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
            std::snprintf(const_cast<char*>(s->data()), s->size(), "\r\nP%05d%06zd", 3387, length);
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
             *this = MLinkSubscribeAck{};
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
        bool IncludeNumActiveSubscriptions() const {
            return !(m_num_active_subscriptions == 0);
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
            if ( IncludeNumActiveSubscriptions()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(106,m_num_active_subscriptions);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(109,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_did_reset)));
            if ( IncludeSubscribe()) {
                for (auto& item : m_subscribe) {
					totalSize += SRProtobufCPP::TagCodec::Size(139, SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited);
                    totalSize += SRProtobufCPP::LengthCodec::Size((int)item.ByteSizeLong());
                    totalSize += item.ByteSizeLong();
                }
            }
            if ( IncludeUnsubscribe()) {
                for (auto& item : m_unsubscribe) {
					totalSize += SRProtobufCPP::TagCodec::Size(127, SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited);
                    totalSize += SRProtobufCPP::LengthCodec::Size((int)item.ByteSizeLong());
                    totalSize += item.ByteSizeLong();
                }
            }
            if ( IncludeView()) {
                for (auto& item : m_view) {
					totalSize += SRProtobufCPP::TagCodec::Size(112, SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited);
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
            if ( IncludeNumActiveSubscriptions()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,106,m_num_active_subscriptions);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,109,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_did_reset)));
            if ( IncludeSubscribe()) {
                for (auto& item : m_subscribe) {
                    dest = SRProtobufCPP::TagCodec::Encode(dest, 139, SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited);
                    dest = SRProtobufCPP::LengthCodec::Encode(dest,static_cast<int>(item.ByteSizeLong()));
                    item.Encode(dest, max);
                }
            }
            if ( IncludeUnsubscribe()) {
                for (auto& item : m_unsubscribe) {
                    dest = SRProtobufCPP::TagCodec::Encode(dest, 127, SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited);
                    dest = SRProtobufCPP::LengthCodec::Encode(dest,static_cast<int>(item.ByteSizeLong()));
                    item.Encode(dest, max);
                }
            }
            if ( IncludeView()) {
                for (auto& item : m_view) {
                    dest = SRProtobufCPP::TagCodec::Encode(dest, 112, SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited);
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
                            m_num_active_subscriptions = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 109: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_did_reset = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 139: {
                        if (tagType == SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited) {
                            const int length = SRProtobufCPP::LengthCodec::Decode(pos, max);
                            subscribe item_subscribe;
                            item_subscribe.Decode(pos, pos+length);  
                            m_subscribe.emplace_back(item_subscribe);
                        }
                        break;
                    }
                    case 127: {
                        if (tagType == SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited) {
                            const int length = SRProtobufCPP::LengthCodec::Decode(pos, max);
                            unsubscribe item_unsubscribe;
                            item_unsubscribe.Decode(pos, pos+length);  
                            m_unsubscribe.emplace_back(item_unsubscribe);
                        }
                        break;
                    }
                    case 112: {
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

    template<> inline const auto MLinkSubscribeAck::get<MLinkSubscribeAck::_meta>() const { return MLinkSubscribeAck::_meta{ m__meta}; }
    template<> inline const auto MLinkSubscribeAck::get<MLinkSubscribeAck::session_id>() const { return m_session_id; }
    template<> inline const auto MLinkSubscribeAck::get<MLinkSubscribeAck::subscribe_id>() const { return m_subscribe_id; }
    template<> inline const auto MLinkSubscribeAck::get<MLinkSubscribeAck::num_active_subscriptions>() const { return m_num_active_subscriptions; }
    template<> inline const auto MLinkSubscribeAck::get<MLinkSubscribeAck::did_reset>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_did_reset)); }
    template<> inline const auto MLinkSubscribeAck::get<MLinkSubscribeAck::subscribe>(int i) const { return MLinkSubscribeAck::subscribe{ get_subscribe(i)}; }
    template<> inline int MLinkSubscribeAck::count<MLinkSubscribeAck::subscribe>() const { return static_cast<int>( m_subscribe.size()); }
    template<> inline const auto MLinkSubscribeAck::get<MLinkSubscribeAck::unsubscribe>(int i) const { return MLinkSubscribeAck::unsubscribe{ get_unsubscribe(i)}; }
    template<> inline int MLinkSubscribeAck::count<MLinkSubscribeAck::unsubscribe>() const { return static_cast<int>( m_unsubscribe.size()); }
    template<> inline const auto MLinkSubscribeAck::get<MLinkSubscribeAck::view>(int i) const { return MLinkSubscribeAck::view{ get_view(i)}; }
    template<> inline int MLinkSubscribeAck::count<MLinkSubscribeAck::view>() const { return static_cast<int>( m_view.size()); }
    template<> inline const auto MLinkSubscribeAck_Subscribe::get<MLinkSubscribeAck_Subscribe::msg_name>() const { return m_msg_name; }
    template<> inline const auto MLinkSubscribeAck_Subscribe::get<MLinkSubscribeAck_Subscribe::msg_pkey>() const { return m_msg_pkey; }
    template<> inline const auto MLinkSubscribeAck_Subscribe::get<MLinkSubscribeAck_Subscribe::result>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SubscribeMsgResult>(m_result));}
    template<> inline const auto MLinkSubscribeAck_Subscribe::get<MLinkSubscribeAck_Subscribe::detail>() const { return m_detail; }
    
    template<> inline const auto MLinkSubscribeAck_Unsubscribe::get<MLinkSubscribeAck_Unsubscribe::msg_name>() const { return m_msg_name; }
    template<> inline const auto MLinkSubscribeAck_Unsubscribe::get<MLinkSubscribeAck_Unsubscribe::msg_pkey>() const { return m_msg_pkey; }
    template<> inline const auto MLinkSubscribeAck_Unsubscribe::get<MLinkSubscribeAck_Unsubscribe::result>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SubscribeMsgResult>(m_result));}
    
    template<> inline const auto MLinkSubscribeAck_View::get<MLinkSubscribeAck_View::msg_name>() const { return m_msg_name; }
    template<> inline const auto MLinkSubscribeAck_View::get<MLinkSubscribeAck_View::view>() const { return m_view; }
    template<> inline const auto MLinkSubscribeAck_View::get<MLinkSubscribeAck_View::result>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SubscribeMsgResult>(m_result));}
    template<> inline const auto MLinkSubscribeAck_View::get<MLinkSubscribeAck_View::detail>() const { return m_detail; }
    
    // ostream operators for all classes above, output should adhere to a JSON format

    inline std::ostream& operator<<(std::ostream &o, const MLinkSubscribeAck_Subscribe& m) {
        o << "\"msg_name\":\"" << m.get<MLinkSubscribeAck_Subscribe::msg_name>() << "\"";
        o << ",\"msg_pkey\":\"" << m.get<MLinkSubscribeAck_Subscribe::msg_pkey>() << "\"";
        o << ",\"result\":" << (int64_t)m.get<MLinkSubscribeAck_Subscribe::result>();
        o << ",\"detail\":\"" << m.get<MLinkSubscribeAck_Subscribe::detail>() << "\"";
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const MLinkSubscribeAck_Unsubscribe& m) {
        o << "\"msg_name\":\"" << m.get<MLinkSubscribeAck_Unsubscribe::msg_name>() << "\"";
        o << ",\"msg_pkey\":\"" << m.get<MLinkSubscribeAck_Unsubscribe::msg_pkey>() << "\"";
        o << ",\"result\":" << (int64_t)m.get<MLinkSubscribeAck_Unsubscribe::result>();
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const MLinkSubscribeAck_View& m) {
        o << "\"msg_name\":\"" << m.get<MLinkSubscribeAck_View::msg_name>() << "\"";
        o << ",\"view\":\"" << m.get<MLinkSubscribeAck_View::view>() << "\"";
        o << ",\"result\":" << (int64_t)m.get<MLinkSubscribeAck_View::result>();
        o << ",\"detail\":\"" << m.get<MLinkSubscribeAck_View::detail>() << "\"";
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const MLinkSubscribeAck& m) {
        o << "\"_meta\":{" << m.get<MLinkSubscribeAck::_meta>() << "}";
        o << ",\"session_id\":" << m.get<MLinkSubscribeAck::session_id>();
        o << ",\"subscribe_id\":" << m.get<MLinkSubscribeAck::subscribe_id>();
        o << ",\"num_active_subscriptions\":" << m.get<MLinkSubscribeAck::num_active_subscriptions>();
        o << ",\"did_reset\":" << (int64_t)m.get<MLinkSubscribeAck::did_reset>();
        o << ",\"subscribe\":[";
        {
            const char *delim = "{";
            for (int i=0; i<m.count<MLinkSubscribeAck::subscribe>(); ++i) {
                o << delim << m.get<MLinkSubscribeAck::subscribe>(i) << '}';
                delim = ",{";
            }
        }
        o << "]";
        o << ",\"unsubscribe\":[";
        {
            const char *delim = "{";
            for (int i=0; i<m.count<MLinkSubscribeAck::unsubscribe>(); ++i) {
                o << delim << m.get<MLinkSubscribeAck::unsubscribe>(i) << '}';
                delim = ",{";
            }
        }
        o << "]";
        o << ",\"view\":[";
        {
            const char *delim = "{";
            for (int i=0; i<m.count<MLinkSubscribeAck::view>(); ++i) {
                o << delim << m.get<MLinkSubscribeAck::view>(i) << '}';
                delim = ",{";
            }
        }
        o << "]";
        return o;
    }

}
}
}