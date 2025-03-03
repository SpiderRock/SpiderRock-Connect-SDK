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

    #ifndef _ticker__TickerKey__GUARD__
    #define _ticker__TickerKey__GUARD__
    DECL_STRONG_TYPE(ticker__TickerKey, TickerKey);
    #endif//_ticker__TickerKey__GUARD__

    #ifndef _is_disabled__GUARD__
    #define _is_disabled__GUARD__
    DECL_STRONG_TYPE(is_disabled, spiderrock::protobuf::api::YesNo);
    #endif//_is_disabled__GUARD__

    #ifndef _expiry_money_avail__GUARD__
    #define _expiry_money_avail__GUARD__
    DECL_STRONG_TYPE(expiry_money_avail, int64);
    #endif//_expiry_money_avail__GUARD__

    #ifndef _ticker_money_avail__GUARD__
    #define _ticker_money_avail__GUARD__
    DECL_STRONG_TYPE(ticker_money_avail, int64);
    #endif//_ticker_money_avail__GUARD__

    #ifndef _transact_fee__GUARD__
    #define _transact_fee__GUARD__
    DECL_STRONG_TYPE(transact_fee, double);
    #endif//_transact_fee__GUARD__

    #ifndef _money_rate__GUARD__
    #define _money_rate__GUARD__
    DECL_STRONG_TYPE(money_rate, double);
    #endif//_money_rate__GUARD__

    #ifndef _inc_fees_in_resp__GUARD__
    #define _inc_fees_in_resp__GUARD__
    DECL_STRONG_TYPE(inc_fees_in_resp, spiderrock::protobuf::api::YesNo);
    #endif//_inc_fees_in_resp__GUARD__

    #ifndef _round_rule__GUARD__
    #define _round_rule__GUARD__
    DECL_STRONG_TYPE(round_rule, spiderrock::protobuf::api::RoundRule);
    #endif//_round_rule__GUARD__

    #ifndef _risk_group_id__GUARD__
    #define _risk_group_id__GUARD__
    DECL_STRONG_TYPE(risk_group_id, int64);
    #endif//_risk_group_id__GUARD__

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

    #ifndef _accnt__GUARD__
    #define _accnt__GUARD__
    DECL_STRONG_TYPE(accnt, string);
    #endif//_accnt__GUARD__

    #ifndef _client_firm__GUARD__
    #define _client_firm__GUARD__
    DECL_STRONG_TYPE(client_firm, string);
    #endif//_client_firm__GUARD__

    #ifndef _ekey__GUARD__
    #define _ekey__GUARD__
    DECL_STRONG_TYPE(ekey, ExpiryKey);
    #endif//_ekey__GUARD__

    #ifndef _resp_side__GUARD__
    #define _resp_side__GUARD__
    DECL_STRONG_TYPE(resp_side, spiderrock::protobuf::api::BuySell);
    #endif//_resp_side__GUARD__

    
    class AutoResponderBX_PKey {
        public:
        //using statements for all types used in this class
        using accnt = spiderrock::protobuf::api::accnt;
        using client_firm = spiderrock::protobuf::api::client_firm;
        using ekey = spiderrock::protobuf::api::ekey;
        using resp_side = spiderrock::protobuf::api::resp_side;

        private:
        accnt m_accnt{};
        client_firm m_client_firm{};
        ekey m_ekey{};
        resp_side m_resp_side{};

        public:
        accnt get_accnt() const {
            return m_accnt;
        }
        client_firm get_client_firm() const {
            return m_client_firm;
        }
		ekey get_ekey() const {
            return m_ekey;
        }
        resp_side get_resp_side() const {
            return m_resp_side;
        }
        void set_accnt(const accnt& value)  {
            m_accnt = value;
        }
        void set_client_firm(const client_firm& value)  {
            m_client_firm = value;
        }
        void set_ekey(const ekey& value)  {
            m_ekey = value;
        }
        void set_resp_side(const resp_side& value)  {
            m_resp_side = value;
        }
        //templatized getters and setters
        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to AutoResponderBX_PKey::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to AutoResponderBX_PKey::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const accnt & value) { set_accnt(value); }
        void set(const client_firm & value) { set_client_firm(value); }
        void set(const ekey & value) { set_ekey(value); }
        void set(const resp_side & value) { set_resp_side(value); }


        AutoResponderBX_PKey() {}

        virtual ~AutoResponderBX_PKey() {
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
        bool IncludeAccnt() const {
            return !(m_accnt.empty());
        }
        bool IncludeClientFirm() const {
            return !(m_client_firm.empty());
        }
        bool IncludeEkey() const {
            return (m_ekey.ByteSizeLong() > 0);
        }


        size_t ByteSizeLong() const {
            size_t totalSize = 0;
            if ( IncludeAccnt()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(10,m_accnt);
            }
            if ( IncludeClientFirm()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(11,m_client_firm);
            }
            if ( IncludeEkey()) {
                SRProtobufCPP::ExpiryKeyLayout expiryKeyLayout_ekey;
                m_ekey.setCodecExpiryKey(expiryKeyLayout_ekey);
                totalSize += SRProtobufCPP::FieldCodec::ExpiryKeyFieldSize(15,expiryKeyLayout_ekey);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(14,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>(m_resp_side)));
            return totalSize;
        }

        void Encode(uint8_t*& dest, uint8_t* max) const {
            if ( IncludeAccnt()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,10,static_cast<string>(m_accnt));
            }
            if ( IncludeClientFirm()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,11,static_cast<string>(m_client_firm));
            }
            if ( IncludeEkey()) {
                SRProtobufCPP::ExpiryKeyLayout expiryKeyLayout_ekey;
                m_ekey.setCodecExpiryKey(expiryKeyLayout_ekey);
                dest = SRProtobufCPP::FieldCodec::EncodeExpiryKey(dest, 15, expiryKeyLayout_ekey);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,14,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>(m_resp_side)));
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
                    case 10: {m_accnt = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                    case 11: {m_client_firm = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                    case 15: {auto expiryKey = SRProtobufCPP::FieldCodec::DecodeExpiryKey(pos,max);
                        m_ekey.setFromCodec(expiryKey);
                        break;
                    }
                    case 14: {m_resp_side = static_cast<spiderrock::protobuf::api::BuySell>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                }
            }
        }

    };
    

    class AutoResponderBX {
        public:
        //using statements for all types used in this class
    
        using _meta = spiderrock::protobuf::api::_meta;
        using pkey = spiderrock::protobuf::api::AutoResponderBX_PKey;
        using user_name = spiderrock::protobuf::api::user_name;
        using ticker = spiderrock::protobuf::api::ticker__TickerKey;
        using is_disabled = spiderrock::protobuf::api::is_disabled;
        using expiry_money_avail = spiderrock::protobuf::api::expiry_money_avail;
        using ticker_money_avail = spiderrock::protobuf::api::ticker_money_avail;
        using transact_fee = spiderrock::protobuf::api::transact_fee;
        using money_rate = spiderrock::protobuf::api::money_rate;
        using inc_fees_in_resp = spiderrock::protobuf::api::inc_fees_in_resp;
        using round_rule = spiderrock::protobuf::api::round_rule;
        using risk_group_id = spiderrock::protobuf::api::risk_group_id;
        using modified_by = spiderrock::protobuf::api::modified_by;
        using modified_in = spiderrock::protobuf::api::modified_in;
        using timestamp = spiderrock::protobuf::api::timestamp;

        private:
        _meta m__meta{};
        pkey m_pkey{};
        user_name m_user_name{};
        ticker m_ticker{};
        is_disabled m_is_disabled{};
        expiry_money_avail m_expiry_money_avail{};
        ticker_money_avail m_ticker_money_avail{};
        transact_fee m_transact_fee{};
        money_rate m_money_rate{};
        inc_fees_in_resp m_inc_fees_in_resp{};
        round_rule m_round_rule{};
        risk_group_id m_risk_group_id{};
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
        ticker get_ticker() const {
            return m_ticker;
        }		
        is_disabled get_is_disabled() const {
            return m_is_disabled;
        }		
        expiry_money_avail get_expiry_money_avail() const {
            return m_expiry_money_avail;
        }		
        ticker_money_avail get_ticker_money_avail() const {
            return m_ticker_money_avail;
        }		
        transact_fee get_transact_fee() const {
            return m_transact_fee;
        }		
        money_rate get_money_rate() const {
            return m_money_rate;
        }		
        inc_fees_in_resp get_inc_fees_in_resp() const {
            return m_inc_fees_in_resp;
        }		
        round_rule get_round_rule() const {
            return m_round_rule;
        }		
        risk_group_id get_risk_group_id() const {
            return m_risk_group_id;
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
        void set_ticker(const ticker& value)  {
            m_ticker = value;
        }
        void set_is_disabled(const is_disabled& value)  {
            m_is_disabled = value;
        }
        void set_expiry_money_avail(const expiry_money_avail& value)  {
            m_expiry_money_avail = value;
        }
        void set_ticker_money_avail(const ticker_money_avail& value)  {
            m_ticker_money_avail = value;
        }
        void set_transact_fee(const transact_fee& value)  {
            m_transact_fee = value;
        }
        void set_money_rate(const money_rate& value)  {
            m_money_rate = value;
        }
        void set_inc_fees_in_resp(const inc_fees_in_resp& value)  {
            m_inc_fees_in_resp = value;
        }
        void set_round_rule(const round_rule& value)  {
            m_round_rule = value;
        }
        void set_risk_group_id(const risk_group_id& value)  {
            m_risk_group_id = value;
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
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to AutoResponderBX::get()"); return T{}; }  // specializations for valid types are listed below the class definition

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
        void set(const ticker & value) {
            set_ticker(value);
        }
        void set(const is_disabled & value) {
            set_is_disabled(value);
        }
        void set(const expiry_money_avail & value) {
            set_expiry_money_avail(value);
        }
        void set(const ticker_money_avail & value) {
            set_ticker_money_avail(value);
        }
        void set(const transact_fee & value) {
            set_transact_fee(value);
        }
        void set(const money_rate & value) {
            set_money_rate(value);
        }
        void set(const inc_fees_in_resp & value) {
            set_inc_fees_in_resp(value);
        }
        void set(const round_rule & value) {
            set_round_rule(value);
        }
        void set(const risk_group_id & value) {
            set_risk_group_id(value);
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

        void set(const AutoResponderBX & value) {
            set(value.m__meta);
            set(value.m_pkey);
            set(value.m_user_name);
            set(value.m_ticker);
            set(value.m_is_disabled);
            set(value.m_expiry_money_avail);
            set(value.m_ticker_money_avail);
            set(value.m_transact_fee);
            set(value.m_money_rate);
            set(value.m_inc_fees_in_resp);
            set(value.m_round_rule);
            set(value.m_risk_group_id);
            set(value.m_modified_by);
            set(value.m_modified_in);
            set(value.m_timestamp);
        }

        AutoResponderBX() {
            m__meta.set_message_type("AutoResponderBX");
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
            std::snprintf(reinterpret_cast<char*>(data), size, "\r\nP%05d%06zd", 2498, length);
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
            std::snprintf(const_cast<char*>(s->data()), s->size(), "\r\nP%05d%06zd", 2498, length);
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
             *this = AutoResponderBX{};
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
        bool IncludeTicker() const {
            return (m_ticker.ByteSizeLong() > 0);
        }
        bool IncludeExpiryMoneyAvail() const {
            return !(m_expiry_money_avail == 0);
        }
        bool IncludeTickerMoneyAvail() const {
            return !(m_ticker_money_avail == 0);
        }
        bool IncludeTransactFee() const {
            return !(m_transact_fee == 0.0);
        }
        bool IncludeMoneyRate() const {
            return !(m_money_rate == 0.0);
        }
        bool IncludeRiskGroupId() const {
            return !(m_risk_group_id == 0);
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
            if ( IncludeTicker()) {
                SRProtobufCPP::TickerKeyLayout tickerKeyLayout_ticker{};
                m_ticker.setCodecTickerKey(tickerKeyLayout_ticker);
                totalSize += SRProtobufCPP::FieldCodec::TickerKeyFieldSize(101, tickerKeyLayout_ticker);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(102,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_is_disabled)));
            if ( IncludeExpiryMoneyAvail()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(103,m_expiry_money_avail);
            }
            if ( IncludeTickerMoneyAvail()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(104,m_ticker_money_avail);
            }
            if ( IncludeTransactFee()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(105,m_transact_fee);
            }
            if ( IncludeMoneyRate()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(106,m_money_rate);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(107,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_inc_fees_in_resp)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(108,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::RoundRule>(m_round_rule)));
            if ( IncludeRiskGroupId()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(109,m_risk_group_id);
            }
            if ( IncludeModifiedBy()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(110,m_modified_by);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(111,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SysEnvironment>(m_modified_in)));
            if ( IncludeTimestamp()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(112, m_timestamp);
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
            if ( IncludeTicker()) {
                SRProtobufCPP::TickerKeyLayout tickerKeyLayout_ticker{};
                m_ticker.setCodecTickerKey(tickerKeyLayout_ticker);
                dest = SRProtobufCPP::FieldCodec::EncodeTickerKey(dest, 101, tickerKeyLayout_ticker);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,102,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_is_disabled)));
            if ( IncludeExpiryMoneyAvail()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,103,m_expiry_money_avail);
            }
            if ( IncludeTickerMoneyAvail()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,104,m_ticker_money_avail);
            }
            if ( IncludeTransactFee()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,105,m_transact_fee);
            }
            if ( IncludeMoneyRate()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,106,m_money_rate);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,107,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_inc_fees_in_resp)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,108,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::RoundRule>(m_round_rule)));
            if ( IncludeRiskGroupId()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,109,m_risk_group_id);
            }
            if ( IncludeModifiedBy()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,110,static_cast<string>(m_modified_by));
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,111,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SysEnvironment>(m_modified_in)));
            if ( IncludeTimestamp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 112, m_timestamp);
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
                    case 101: {
                        if (tagType == SRProtobufCPP::TickerKeyCodec::TagType){
                            auto tickerKey = SRProtobufCPP::FieldCodec::DecodeTickerKey(pos,max);
                            m_ticker.setFromCodec(tickerKey);
                        }
                        break;
                    }
                    case 102: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_is_disabled = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 103: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_expiry_money_avail = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 104: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_ticker_money_avail = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 105: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_transact_fee = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 106: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_money_rate = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 107: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_inc_fees_in_resp = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 108: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_round_rule = static_cast<spiderrock::protobuf::api::RoundRule>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 109: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_risk_group_id = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 110: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_modified_by = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 111: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_modified_in = static_cast<spiderrock::protobuf::api::SysEnvironment>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 112: {
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

    template<> inline const auto AutoResponderBX::get<AutoResponderBX::_meta>() const { return AutoResponderBX::_meta{ m__meta}; }
    template<> inline const auto AutoResponderBX::get<AutoResponderBX::pkey>() const { return AutoResponderBX::pkey{ m_pkey}; }
    template<> inline const auto AutoResponderBX::get<AutoResponderBX::user_name>() const { return m_user_name; }
    template<> inline const auto AutoResponderBX::get<AutoResponderBX::ticker>() const { return AutoResponderBX::ticker{ m_ticker}; }
    template<> inline const auto AutoResponderBX::get<AutoResponderBX::is_disabled>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_is_disabled)); }
    template<> inline const auto AutoResponderBX::get<AutoResponderBX::expiry_money_avail>() const { return m_expiry_money_avail; }
    template<> inline const auto AutoResponderBX::get<AutoResponderBX::ticker_money_avail>() const { return m_ticker_money_avail; }
    template<> inline const auto AutoResponderBX::get<AutoResponderBX::transact_fee>() const { return m_transact_fee; }
    template<> inline const auto AutoResponderBX::get<AutoResponderBX::money_rate>() const { return m_money_rate; }
    template<> inline const auto AutoResponderBX::get<AutoResponderBX::inc_fees_in_resp>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_inc_fees_in_resp)); }
    template<> inline const auto AutoResponderBX::get<AutoResponderBX::round_rule>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::RoundRule>( m_round_rule)); }
    template<> inline const auto AutoResponderBX::get<AutoResponderBX::risk_group_id>() const { return m_risk_group_id; }
    template<> inline const auto AutoResponderBX::get<AutoResponderBX::modified_by>() const { return m_modified_by; }
    template<> inline const auto AutoResponderBX::get<AutoResponderBX::modified_in>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SysEnvironment>( m_modified_in)); }
    template<> inline const auto AutoResponderBX::get<AutoResponderBX::timestamp>() const { return m_timestamp; }
    template<> inline const auto AutoResponderBX_PKey::get<AutoResponderBX_PKey::accnt>() const { return m_accnt; }
    template<> inline const auto AutoResponderBX_PKey::get<AutoResponderBX_PKey::client_firm>() const { return m_client_firm; }
    template<> inline const auto AutoResponderBX_PKey::get<AutoResponderBX_PKey::ekey>() const { return AutoResponderBX_PKey::ekey{m_ekey}; }
    template<> inline const auto AutoResponderBX_PKey::get<AutoResponderBX_PKey::resp_side>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>(m_resp_side));}
    
    // ostream operators for all classes above, output should adhere to a JSON format

    inline std::ostream& operator<<(std::ostream &o, const AutoResponderBX_PKey& m) {
        o << "\"accnt\":\"" << m.get<AutoResponderBX_PKey::accnt>() << "\"";
        o << ",\"client_firm\":\"" << m.get<AutoResponderBX_PKey::client_firm>() << "\"";
        o << ",\"ekey\":{" << m.get<AutoResponderBX_PKey::ekey>() << "}";
        o << ",\"resp_side\":" << (int64_t)m.get<AutoResponderBX_PKey::resp_side>();
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const AutoResponderBX& m) {
        o << "\"_meta\":{" << m.get<AutoResponderBX::_meta>() << "}";
        o << ",\"pkey\":{" << m.get<AutoResponderBX::pkey>() << "}";
        o << ",\"user_name\":\"" << m.get<AutoResponderBX::user_name>() << "\"";
        o << ",\"ticker\":{" << m.get<AutoResponderBX::ticker>() << "}";
        o << ",\"is_disabled\":" << (int64_t)m.get<AutoResponderBX::is_disabled>();
        o << ",\"expiry_money_avail\":" << m.get<AutoResponderBX::expiry_money_avail>();
        o << ",\"ticker_money_avail\":" << m.get<AutoResponderBX::ticker_money_avail>();
        o << ",\"transact_fee\":" << m.get<AutoResponderBX::transact_fee>();
        o << ",\"money_rate\":" << m.get<AutoResponderBX::money_rate>();
        o << ",\"inc_fees_in_resp\":" << (int64_t)m.get<AutoResponderBX::inc_fees_in_resp>();
        o << ",\"round_rule\":" << (int64_t)m.get<AutoResponderBX::round_rule>();
        o << ",\"risk_group_id\":" << m.get<AutoResponderBX::risk_group_id>();
        o << ",\"modified_by\":\"" << m.get<AutoResponderBX::modified_by>() << "\"";
        o << ",\"modified_in\":" << (int64_t)m.get<AutoResponderBX::modified_in>();
        {
            std::time_t tt = m.get<AutoResponderBX::timestamp>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"timestamp\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        return o;
    }

}
}
}