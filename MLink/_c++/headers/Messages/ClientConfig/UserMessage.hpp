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

    #ifndef _user_name__GUARD__
    #define _user_name__GUARD__
    DECL_STRONG_TYPE(user_name, string);
    #endif//_user_name__GUARD__

    #ifndef _delivery_mode__GUARD__
    #define _delivery_mode__GUARD__
    DECL_STRONG_TYPE(delivery_mode, spiderrock::protobuf::api::DeliveryMode);
    #endif//_delivery_mode__GUARD__

    #ifndef _contact_address__GUARD__
    #define _contact_address__GUARD__
    DECL_STRONG_TYPE(contact_address, string);
    #endif//_contact_address__GUARD__

    #ifndef _subject__GUARD__
    #define _subject__GUARD__
    DECL_STRONG_TYPE(subject, string);
    #endif//_subject__GUARD__

    #ifndef _message__GUARD__
    #define _message__GUARD__
    DECL_STRONG_TYPE(message, string);
    #endif//_message__GUARD__

    #ifndef _send_reason__GUARD__
    #define _send_reason__GUARD__
    DECL_STRONG_TYPE(send_reason, spiderrock::protobuf::api::SendReason);
    #endif//_send_reason__GUARD__

    #ifndef _send_source__GUARD__
    #define _send_source__GUARD__
    DECL_STRONG_TYPE(send_source, string);
    #endif//_send_source__GUARD__

    #ifndef _delivery_state__GUARD__
    #define _delivery_state__GUARD__
    DECL_STRONG_TYPE(delivery_state, spiderrock::protobuf::api::DeliveryState);
    #endif//_delivery_state__GUARD__

    #ifndef _delivery_error__GUARD__
    #define _delivery_error__GUARD__
    DECL_STRONG_TYPE(delivery_error, string);
    #endif//_delivery_error__GUARD__

    #ifndef _delivery_dttm__GUARD__
    #define _delivery_dttm__GUARD__
    DECL_STRONG_TYPE(delivery_dttm, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_delivery_dttm__GUARD__

    #ifndef _modified_by__GUARD__
    #define _modified_by__GUARD__
    DECL_STRONG_TYPE(modified_by, string);
    #endif//_modified_by__GUARD__

    #ifndef _modified_in__GUARD__
    #define _modified_in__GUARD__
    DECL_STRONG_TYPE(modified_in, spiderrock::protobuf::api::SysEnvironment);
    #endif//_modified_in__GUARD__

    #ifndef _timestamp__GUARD__
    #define _timestamp__GUARD__
    DECL_STRONG_TYPE(timestamp, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_timestamp__GUARD__

    #ifndef _message_number__GUARD__
    #define _message_number__GUARD__
    DECL_STRONG_TYPE(message_number, int64);
    #endif//_message_number__GUARD__

    
    class UserMessage_PKey {
        public:
        //using statements for all types used in this class
        using message_number = spiderrock::protobuf::api::message_number;

        private:
        message_number m_message_number{};

        public:
        message_number get_message_number() const {
            return m_message_number;
        }
        void set_message_number(const message_number& value)  {
            m_message_number = value;
        }
        //templatized getters and setters
        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to UserMessage_PKey::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to UserMessage_PKey::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const message_number & value) { set_message_number(value); }


        UserMessage_PKey() {}

        virtual ~UserMessage_PKey() {
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
        bool IncludeMessageNumber() const {
            return !(m_message_number == 0);
        }


        size_t ByteSizeLong() const {
            size_t totalSize = 0;
            if ( IncludeMessageNumber()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(10,m_message_number);
            }
            return totalSize;
        }

        void Encode(uint8_t*& dest, uint8_t* max) const {
            if ( IncludeMessageNumber()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,10,m_message_number);
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
                    case 10: {m_message_number = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        break;
                    }
                }
            }
        }

    };
    

    class UserMessage {
        public:
        //using statements for all types used in this class
    
        using _meta = spiderrock::protobuf::api::_meta;
        using pkey = spiderrock::protobuf::api::UserMessage_PKey;
        using user_name = spiderrock::protobuf::api::user_name;
        using delivery_mode = spiderrock::protobuf::api::delivery_mode;
        using contact_address = spiderrock::protobuf::api::contact_address;
        using subject = spiderrock::protobuf::api::subject;
        using message = spiderrock::protobuf::api::message;
        using send_reason = spiderrock::protobuf::api::send_reason;
        using send_source = spiderrock::protobuf::api::send_source;
        using delivery_state = spiderrock::protobuf::api::delivery_state;
        using delivery_error = spiderrock::protobuf::api::delivery_error;
        using delivery_dttm = spiderrock::protobuf::api::delivery_dttm;
        using modified_by = spiderrock::protobuf::api::modified_by;
        using modified_in = spiderrock::protobuf::api::modified_in;
        using timestamp = spiderrock::protobuf::api::timestamp;

        private:
        _meta m__meta{};
        pkey m_pkey{};
        user_name m_user_name{};
        delivery_mode m_delivery_mode{};
        contact_address m_contact_address{};
        subject m_subject{};
        message m_message{};
        send_reason m_send_reason{};
        send_source m_send_source{};
        delivery_state m_delivery_state{};
        delivery_error m_delivery_error{};
        delivery_dttm m_delivery_dttm{};
        modified_by m_modified_by{};
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
        user_name get_user_name() const {
            return m_user_name;
        }		
        delivery_mode get_delivery_mode() const {
            return m_delivery_mode;
        }		
        contact_address get_contact_address() const {
            return m_contact_address;
        }		
        subject get_subject() const {
            return m_subject;
        }		
        message get_message() const {
            return m_message;
        }		
        send_reason get_send_reason() const {
            return m_send_reason;
        }		
        send_source get_send_source() const {
            return m_send_source;
        }		
        delivery_state get_delivery_state() const {
            return m_delivery_state;
        }		
        delivery_error get_delivery_error() const {
            return m_delivery_error;
        }		
        delivery_dttm get_delivery_dttm() const {
            return m_delivery_dttm;
        }		
        modified_by get_modified_by() const {
            return m_modified_by;
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
        void set_user_name(const user_name& value)  {
            m_user_name = value;
        }
        void set_delivery_mode(const delivery_mode& value)  {
            m_delivery_mode = value;
        }
        void set_contact_address(const contact_address& value)  {
            m_contact_address = value;
        }
        void set_subject(const subject& value)  {
            m_subject = value;
        }
        void set_message(const message& value)  {
            m_message = value;
        }
        void set_send_reason(const send_reason& value)  {
            m_send_reason = value;
        }
        void set_send_source(const send_source& value)  {
            m_send_source = value;
        }
        void set_delivery_state(const delivery_state& value)  {
            m_delivery_state = value;
        }
        void set_delivery_error(const delivery_error& value)  {
            m_delivery_error = value;
        }
        void set_delivery_dttm(const delivery_dttm& value)  {
            m_delivery_dttm = value;
        }
        void set_modified_by(const modified_by& value)  {
            m_modified_by = value;
        }
        void set_modified_in(const modified_in& value)  {
            m_modified_in = value;
        }
        void set_timestamp(const timestamp& value)  {
            m_timestamp = value;
        }

        //templatized getters and setters

        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to UserMessage::get()"); return T{}; }  // specializations for valid types are listed below the class definition

        //specializations for set functions for the valid types
    
        void set(const _meta & value) {
            set__meta(value);
        }
        void set(const pkey & value) {
            set_pkey(value);
        }
        void set(const user_name & value) {
            set_user_name(value);
        }
        void set(const delivery_mode & value) {
            set_delivery_mode(value);
        }
        void set(const contact_address & value) {
            set_contact_address(value);
        }
        void set(const subject & value) {
            set_subject(value);
        }
        void set(const message & value) {
            set_message(value);
        }
        void set(const send_reason & value) {
            set_send_reason(value);
        }
        void set(const send_source & value) {
            set_send_source(value);
        }
        void set(const delivery_state & value) {
            set_delivery_state(value);
        }
        void set(const delivery_error & value) {
            set_delivery_error(value);
        }
        void set(const delivery_dttm & value) {
            set_delivery_dttm(value);
        }
        void set(const modified_by & value) {
            set_modified_by(value);
        }
        void set(const modified_in & value) {
            set_modified_in(value);
        }
        void set(const timestamp & value) {
            set_timestamp(value);
        }

        void set(const UserMessage & value) {
            set(value.m__meta);
            set(value.m_pkey);
            set(value.m_user_name);
            set(value.m_delivery_mode);
            set(value.m_contact_address);
            set(value.m_subject);
            set(value.m_message);
            set(value.m_send_reason);
            set(value.m_send_source);
            set(value.m_delivery_state);
            set(value.m_delivery_error);
            set(value.m_delivery_dttm);
            set(value.m_modified_by);
            set(value.m_modified_in);
            set(value.m_timestamp);
        }

        UserMessage() {
            m__meta.set_message_type("UserMessage");
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
            std::snprintf(reinterpret_cast<char*>(data), size, "\r\nP%05d%06zd", 1900, length);
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
            std::snprintf(const_cast<char*>(s->data()), s->size(), "\r\nP%05d%06zd", 1900, length);
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
             *this = UserMessage{};
        }
        bool IncludeMeta() const {
            return (m__meta.ByteSizeLong() > 0);
        }
        bool IncludePkey() const {
            return (m_pkey.ByteSizeLong() > 0);
        }
        bool IncludeUserName() const {
            return !(m_user_name.empty());
        }
        bool IncludeContactAddress() const {
            return !(m_contact_address.empty());
        }
        bool IncludeSubject() const {
            return !(m_subject.empty());
        }
        bool IncludeMessage() const {
            return !(m_message.empty());
        }
        bool IncludeSendSource() const {
            return !(m_send_source.empty());
        }
        bool IncludeDeliveryError() const {
            return !(m_delivery_error.empty());
        }
        bool IncludeDeliveryDttm() const {
            return (m_delivery_dttm.time_since_epoch().count() != 0);
        }
        bool IncludeModifiedBy() const {
            return !(m_modified_by.empty());
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
            if ( IncludeUserName()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(100,m_user_name);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(103,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::DeliveryMode>(m_delivery_mode)));
            if ( IncludeContactAddress()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(106,m_contact_address);
            }
            if ( IncludeSubject()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(109,m_subject);
            }
            if ( IncludeMessage()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(112,m_message);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(115,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SendReason>(m_send_reason)));
            if ( IncludeSendSource()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(118,m_send_source);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(121,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::DeliveryState>(m_delivery_state)));
            if ( IncludeDeliveryError()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(124,m_delivery_error);
            }
            if ( IncludeDeliveryDttm()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(127, m_delivery_dttm);
            }
            if ( IncludeModifiedBy()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(130,m_modified_by);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(133,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SysEnvironment>(m_modified_in)));
            if ( IncludeTimestamp()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(136, m_timestamp);
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
            if ( IncludeUserName()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,100,static_cast<string>(m_user_name));
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,103,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::DeliveryMode>(m_delivery_mode)));
            if ( IncludeContactAddress()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,106,static_cast<string>(m_contact_address));
            }
            if ( IncludeSubject()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,109,static_cast<string>(m_subject));
            }
            if ( IncludeMessage()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,112,static_cast<string>(m_message));
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,115,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SendReason>(m_send_reason)));
            if ( IncludeSendSource()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,118,static_cast<string>(m_send_source));
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,121,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::DeliveryState>(m_delivery_state)));
            if ( IncludeDeliveryError()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,124,static_cast<string>(m_delivery_error));
            }
            if ( IncludeDeliveryDttm()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 127, m_delivery_dttm);
            }
            if ( IncludeModifiedBy()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,130,static_cast<string>(m_modified_by));
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,133,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SysEnvironment>(m_modified_in)));
            if ( IncludeTimestamp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 136, m_timestamp);
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
                            m_user_name = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 103: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_delivery_mode = static_cast<spiderrock::protobuf::api::DeliveryMode>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 106: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_contact_address = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 109: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_subject = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 112: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_message = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 115: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_send_reason = static_cast<spiderrock::protobuf::api::SendReason>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 118: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_send_source = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 121: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_delivery_state = static_cast<spiderrock::protobuf::api::DeliveryState>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 124: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_delivery_error = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 127: {
                        if (tagType == SRProtobufCPP::DateKeyCodec::TagType) {
                            m_delivery_dttm = SRProtobufCPP::FieldCodec::DecodeDateTime(pos,max);
                        }
                        break;
                    }
                    case 130: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_modified_by = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 133: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_modified_in = static_cast<spiderrock::protobuf::api::SysEnvironment>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 136: {
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

    template<> inline const auto UserMessage::get<UserMessage::_meta>() const { return UserMessage::_meta{ m__meta}; }
    template<> inline const auto UserMessage::get<UserMessage::pkey>() const { return UserMessage::pkey{ m_pkey}; }
    template<> inline const auto UserMessage::get<UserMessage::user_name>() const { return m_user_name; }
    template<> inline const auto UserMessage::get<UserMessage::delivery_mode>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::DeliveryMode>( m_delivery_mode)); }
    template<> inline const auto UserMessage::get<UserMessage::contact_address>() const { return m_contact_address; }
    template<> inline const auto UserMessage::get<UserMessage::subject>() const { return m_subject; }
    template<> inline const auto UserMessage::get<UserMessage::message>() const { return m_message; }
    template<> inline const auto UserMessage::get<UserMessage::send_reason>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SendReason>( m_send_reason)); }
    template<> inline const auto UserMessage::get<UserMessage::send_source>() const { return m_send_source; }
    template<> inline const auto UserMessage::get<UserMessage::delivery_state>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::DeliveryState>( m_delivery_state)); }
    template<> inline const auto UserMessage::get<UserMessage::delivery_error>() const { return m_delivery_error; }
    template<> inline const auto UserMessage::get<UserMessage::delivery_dttm>() const { return m_delivery_dttm; }
    template<> inline const auto UserMessage::get<UserMessage::modified_by>() const { return m_modified_by; }
    template<> inline const auto UserMessage::get<UserMessage::modified_in>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SysEnvironment>( m_modified_in)); }
    template<> inline const auto UserMessage::get<UserMessage::timestamp>() const { return m_timestamp; }
    template<> inline const auto UserMessage_PKey::get<UserMessage_PKey::message_number>() const { return m_message_number; }
    
    // ostream operators for all classes above, output should adhere to a JSON format

    inline std::ostream& operator<<(std::ostream &o, const UserMessage_PKey& m) {
        o << "\"message_number\":" << m.get<UserMessage_PKey::message_number>();
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const UserMessage& m) {
        o << "\"_meta\":{" << m.get<UserMessage::_meta>() << "}";
        o << ",\"pkey\":{" << m.get<UserMessage::pkey>() << "}";
        o << ",\"user_name\":\"" << m.get<UserMessage::user_name>() << "\"";
        o << ",\"delivery_mode\":" << (int64_t)m.get<UserMessage::delivery_mode>();
        o << ",\"contact_address\":\"" << m.get<UserMessage::contact_address>() << "\"";
        o << ",\"subject\":\"" << m.get<UserMessage::subject>() << "\"";
        o << ",\"message\":\"" << m.get<UserMessage::message>() << "\"";
        o << ",\"send_reason\":" << (int64_t)m.get<UserMessage::send_reason>();
        o << ",\"send_source\":\"" << m.get<UserMessage::send_source>() << "\"";
        o << ",\"delivery_state\":" << (int64_t)m.get<UserMessage::delivery_state>();
        o << ",\"delivery_error\":\"" << m.get<UserMessage::delivery_error>() << "\"";
        {
            std::time_t tt = m.get<UserMessage::delivery_dttm>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"delivery_dttm\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        o << ",\"modified_by\":\"" << m.get<UserMessage::modified_by>() << "\"";
        o << ",\"modified_in\":" << (int64_t)m.get<UserMessage::modified_in>();
        {
            std::time_t tt = m.get<UserMessage::timestamp>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"timestamp\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        return o;
    }

}
}
}