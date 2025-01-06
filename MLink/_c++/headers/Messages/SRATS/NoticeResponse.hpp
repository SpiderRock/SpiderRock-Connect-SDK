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

    #ifndef _ticker__TickerKey__GUARD__
    #define _ticker__TickerKey__GUARD__
    DECL_STRONG_TYPE(ticker__TickerKey, TickerKey);
    #endif//_ticker__TickerKey__GUARD__

    #ifndef _trade_date__GUARD__
    #define _trade_date__GUARD__
    DECL_STRONG_TYPE(trade_date, DateKey);
    #endif//_trade_date__GUARD__

    #ifndef _stage_type__GUARD__
    #define _stage_type__GUARD__
    DECL_STRONG_TYPE(stage_type, spiderrock::protobuf::api::SpdrStageType);
    #endif//_stage_type__GUARD__

    #ifndef _resp_side__GUARD__
    #define _resp_side__GUARD__
    DECL_STRONG_TYPE(resp_side, spiderrock::protobuf::api::BuySell);
    #endif//_resp_side__GUARD__

    #ifndef _resp_size__GUARD__
    #define _resp_size__GUARD__
    DECL_STRONG_TYPE(resp_size, int32);
    #endif//_resp_size__GUARD__

    #ifndef _resp_price__GUARD__
    #define _resp_price__GUARD__
    DECL_STRONG_TYPE(resp_price, double);
    #endif//_resp_price__GUARD__

    #ifndef _ref_uprc__double__GUARD__
    #define _ref_uprc__double__GUARD__
    DECL_STRONG_TYPE(ref_uprc__double, double);
    #endif//_ref_uprc__double__GUARD__

    #ifndef _ref_de__GUARD__
    #define _ref_de__GUARD__
    DECL_STRONG_TYPE(ref_de, float);
    #endif//_ref_de__GUARD__

    #ifndef _ref_ga__GUARD__
    #define _ref_ga__GUARD__
    DECL_STRONG_TYPE(ref_ga, float);
    #endif//_ref_ga__GUARD__

    #ifndef _min_ubid__GUARD__
    #define _min_ubid__GUARD__
    DECL_STRONG_TYPE(min_ubid, float);
    #endif//_min_ubid__GUARD__

    #ifndef _max_uask__GUARD__
    #define _max_uask__GUARD__
    DECL_STRONG_TYPE(max_uask, float);
    #endif//_max_uask__GUARD__

    #ifndef _risk_group_id__GUARD__
    #define _risk_group_id__GUARD__
    DECL_STRONG_TYPE(risk_group_id, int64);
    #endif//_risk_group_id__GUARD__

    #ifndef _strategy__GUARD__
    #define _strategy__GUARD__
    DECL_STRONG_TYPE(strategy, string);
    #endif//_strategy__GUARD__

    #ifndef _user_data1__GUARD__
    #define _user_data1__GUARD__
    DECL_STRONG_TYPE(user_data1, string);
    #endif//_user_data1__GUARD__

    #ifndef _timestamp__GUARD__
    #define _timestamp__GUARD__
    DECL_STRONG_TYPE(timestamp, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_timestamp__GUARD__

    #ifndef _notice_number__GUARD__
    #define _notice_number__GUARD__
    DECL_STRONG_TYPE(notice_number, int64);
    #endif//_notice_number__GUARD__

    #ifndef _accnt__GUARD__
    #define _accnt__GUARD__
    DECL_STRONG_TYPE(accnt, string);
    #endif//_accnt__GUARD__

    #ifndef _client_firm__GUARD__
    #define _client_firm__GUARD__
    DECL_STRONG_TYPE(client_firm, string);
    #endif//_client_firm__GUARD__

    #ifndef _response_id__GUARD__
    #define _response_id__GUARD__
    DECL_STRONG_TYPE(response_id, string);
    #endif//_response_id__GUARD__

    #ifndef _sec_key__OptionKey__GUARD__
    #define _sec_key__OptionKey__GUARD__
    DECL_STRONG_TYPE(sec_key__OptionKey, OptionKey);
    #endif//_sec_key__OptionKey__GUARD__

    #ifndef _sec_type__SpdrKeyType__GUARD__
    #define _sec_type__SpdrKeyType__GUARD__
    DECL_STRONG_TYPE(sec_type__SpdrKeyType, spiderrock::protobuf::api::SpdrKeyType);
    #endif//_sec_type__SpdrKeyType__GUARD__

    #ifndef _side__GUARD__
    #define _side__GUARD__
    DECL_STRONG_TYPE(side, spiderrock::protobuf::api::BuySell);
    #endif//_side__GUARD__

    #ifndef _position_type__LegPositionType__GUARD__
    #define _position_type__LegPositionType__GUARD__
    DECL_STRONG_TYPE(position_type__LegPositionType, spiderrock::protobuf::api::LegPositionType);
    #endif//_position_type__LegPositionType__GUARD__

    
    class NoticeResponse_PKey {
        public:
        //using statements for all types used in this class
        using notice_number = spiderrock::protobuf::api::notice_number;
        using accnt = spiderrock::protobuf::api::accnt;
        using client_firm = spiderrock::protobuf::api::client_firm;
        using response_id = spiderrock::protobuf::api::response_id;

        private:
        notice_number m_notice_number{};
        accnt m_accnt{};
        client_firm m_client_firm{};
        response_id m_response_id{};

        public:
        notice_number get_notice_number() const {
            return m_notice_number;
        }
        accnt get_accnt() const {
            return m_accnt;
        }
        client_firm get_client_firm() const {
            return m_client_firm;
        }
        response_id get_response_id() const {
            return m_response_id;
        }
        void set_notice_number(const notice_number& value)  {
            m_notice_number = value;
        }
        void set_accnt(const accnt& value)  {
            m_accnt = value;
        }
        void set_client_firm(const client_firm& value)  {
            m_client_firm = value;
        }
        void set_response_id(const response_id& value)  {
            m_response_id = value;
        }
        //templatized getters and setters
        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to NoticeResponse_PKey::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to NoticeResponse_PKey::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const notice_number & value) { set_notice_number(value); }
        void set(const accnt & value) { set_accnt(value); }
        void set(const client_firm & value) { set_client_firm(value); }
        void set(const response_id & value) { set_response_id(value); }


        NoticeResponse_PKey() {}

        virtual ~NoticeResponse_PKey() {
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
        bool IncludeNoticeNumber() const {
            return !(m_notice_number == 0);
        }
        bool IncludeAccnt() const {
            return !(m_accnt.empty());
        }
        bool IncludeClientFirm() const {
            return !(m_client_firm.empty());
        }
        bool IncludeResponseId() const {
            return !(m_response_id.empty());
        }


        size_t ByteSizeLong() const {
            size_t totalSize = 0;
            if ( IncludeNoticeNumber()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(13,m_notice_number);
            }
            if ( IncludeAccnt()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(11,m_accnt);
            }
            if ( IncludeClientFirm()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(12,m_client_firm);
            }
            if ( IncludeResponseId()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(14,m_response_id);
            }
            return totalSize;
        }

        void Encode(uint8_t*& dest, uint8_t* max) const {
            if ( IncludeNoticeNumber()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,13,m_notice_number);
            }
            if ( IncludeAccnt()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,11,static_cast<string>(m_accnt));
            }
            if ( IncludeClientFirm()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,12,static_cast<string>(m_client_firm));
            }
            if ( IncludeResponseId()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,14,static_cast<string>(m_response_id));
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
                    case 13: {m_notice_number = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        break;
                    }
                    case 11: {m_accnt = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                    case 12: {m_client_firm = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                    case 14: {m_response_id = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                }
            }
        }

    };
    
    class NoticeResponse_OrderLegs {
        public:
        //using statements for all types used in this class
        using sec_key = spiderrock::protobuf::api::sec_key__OptionKey;
        using sec_type = spiderrock::protobuf::api::sec_type__SpdrKeyType;
        using side = spiderrock::protobuf::api::side;
        using position_type = spiderrock::protobuf::api::position_type__LegPositionType;

        private:
        sec_key m_sec_key{};
        sec_type m_sec_type{};
        side m_side{};
        position_type m_position_type{};

        public:
		sec_key get_sec_key() const {
            return m_sec_key;
        }
        sec_type get_sec_type() const {
            return m_sec_type;
        }
        side get_side() const {
            return m_side;
        }
        position_type get_position_type() const {
            return m_position_type;
        }
        void set_sec_key(const sec_key& value)  {
            m_sec_key = value;
        }
        void set_sec_type(const sec_type& value)  {
            m_sec_type = value;
        }
        void set_side(const side& value)  {
            m_side = value;
        }
        void set_position_type(const position_type& value)  {
            m_position_type = value;
        }
        //templatized getters and setters
        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to NoticeResponse_OrderLegs::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to NoticeResponse_OrderLegs::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const sec_key & value) { set_sec_key(value); }
        void set(const sec_type & value) { set_sec_type(value); }
        void set(const side & value) { set_side(value); }
        void set(const position_type & value) { set_position_type(value); }


        NoticeResponse_OrderLegs() {}

        virtual ~NoticeResponse_OrderLegs() {
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
            SRProtobufCPP::OptionKeyLayout optionKeyLayout_sec_key;
            m_sec_key.setCodecOptionKey(optionKeyLayout_sec_key);
            totalSize += SRProtobufCPP::FieldCodec::OptionKeyFieldSize(114,optionKeyLayout_sec_key);
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(115,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>(m_sec_type)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(116,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>(m_side)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(117,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::LegPositionType>(m_position_type)));
            return totalSize;
        }

        uint8_t* Encode(uint8_t*& dest, uint8_t* max) const {
            SRProtobufCPP::OptionKeyLayout optionKeyLayout_sec_key;
            m_sec_key.setCodecOptionKey(optionKeyLayout_sec_key);
            dest = SRProtobufCPP::FieldCodec::EncodeOptionKey(dest, 114, optionKeyLayout_sec_key);
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,115,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>(m_sec_type)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,116,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>(m_side)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,117,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::LegPositionType>(m_position_type)));
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
                    case 114: {
                        auto optionKey = SRProtobufCPP::FieldCodec::DecodeOptionKey(pos,max);
                        m_sec_key.setFromCodec(optionKey);
                        break;
                    }
                    case 115: {m_sec_type = static_cast<spiderrock::protobuf::api::SpdrKeyType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                    case 116: {m_side = static_cast<spiderrock::protobuf::api::BuySell>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                    case 117: {m_position_type = static_cast<spiderrock::protobuf::api::LegPositionType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                }
            }
        }

    };
    

    class NoticeResponse {
        public:
        //using statements for all types used in this class
    
        using _meta = spiderrock::protobuf::api::_meta;
        using pkey = spiderrock::protobuf::api::NoticeResponse_PKey;
        using ticker = spiderrock::protobuf::api::ticker__TickerKey;
        using trade_date = spiderrock::protobuf::api::trade_date;
        using stage_type = spiderrock::protobuf::api::stage_type;
        using resp_side = spiderrock::protobuf::api::resp_side;
        using resp_size = spiderrock::protobuf::api::resp_size;
        using resp_price = spiderrock::protobuf::api::resp_price;
        using ref_uprc = spiderrock::protobuf::api::ref_uprc__double;
        using ref_de = spiderrock::protobuf::api::ref_de;
        using ref_ga = spiderrock::protobuf::api::ref_ga;
        using min_ubid = spiderrock::protobuf::api::min_ubid;
        using max_uask = spiderrock::protobuf::api::max_uask;
        using risk_group_id = spiderrock::protobuf::api::risk_group_id;
        using strategy = spiderrock::protobuf::api::strategy;
        using user_data1 = spiderrock::protobuf::api::user_data1;
        using timestamp = spiderrock::protobuf::api::timestamp;
        using order_legs = spiderrock::protobuf::api::NoticeResponse_OrderLegs;

        private:
        _meta m__meta{};
        pkey m_pkey{};
        ticker m_ticker{};
        trade_date m_trade_date{};
        stage_type m_stage_type{};
        resp_side m_resp_side{};
        resp_size m_resp_size{};
        resp_price m_resp_price{};
        ref_uprc m_ref_uprc{};
        ref_de m_ref_de{};
        ref_ga m_ref_ga{};
        min_ubid m_min_ubid{};
        max_uask m_max_uask{};
        risk_group_id m_risk_group_id{};
        strategy m_strategy{};
        user_data1 m_user_data1{};
        timestamp m_timestamp{};
        std::vector<order_legs> m_order_legs{};

        static constexpr int _mlinkHeaderLength = 14;

        public:		
        _meta get__meta() const {
            return m__meta;
        }		
        pkey get_pkey() const {
            return m_pkey;
        }		
        ticker get_ticker() const {
            return m_ticker;
        }		
        trade_date get_trade_date() const {
            return m_trade_date;
        }		
        stage_type get_stage_type() const {
            return m_stage_type;
        }		
        resp_side get_resp_side() const {
            return m_resp_side;
        }		
        resp_size get_resp_size() const {
            return m_resp_size;
        }		
        resp_price get_resp_price() const {
            return m_resp_price;
        }		
        ref_uprc get_ref_uprc() const {
            return m_ref_uprc;
        }		
        ref_de get_ref_de() const {
            return m_ref_de;
        }		
        ref_ga get_ref_ga() const {
            return m_ref_ga;
        }		
        min_ubid get_min_ubid() const {
            return m_min_ubid;
        }		
        max_uask get_max_uask() const {
            return m_max_uask;
        }		
        risk_group_id get_risk_group_id() const {
            return m_risk_group_id;
        }		
        strategy get_strategy() const {
            return m_strategy;
        }		
        user_data1 get_user_data1() const {
            return m_user_data1;
        }		
        timestamp get_timestamp() const {
            return m_timestamp;
        }
        const std::vector<order_legs>& get_order_legs_list() const {
            return m_order_legs;
        }
        const order_legs& get_order_legs(const int i) const {
            return m_order_legs.at(i);
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
        void set_ticker(const ticker& value)  {
            m_ticker = value;
        }
        void set_trade_date(const trade_date& value)  {
            m_trade_date = value;
        }
        void set_stage_type(const stage_type& value)  {
            m_stage_type = value;
        }
        void set_resp_side(const resp_side& value)  {
            m_resp_side = value;
        }
        void set_resp_size(const resp_size& value)  {
            m_resp_size = value;
        }
        void set_resp_price(const resp_price& value)  {
            m_resp_price = value;
        }
        void set_ref_uprc(const ref_uprc& value)  {
            m_ref_uprc = value;
        }
        void set_ref_de(const ref_de& value)  {
            m_ref_de = value;
        }
        void set_ref_ga(const ref_ga& value)  {
            m_ref_ga = value;
        }
        void set_min_ubid(const min_ubid& value)  {
            m_min_ubid = value;
        }
        void set_max_uask(const max_uask& value)  {
            m_max_uask = value;
        }
        void set_risk_group_id(const risk_group_id& value)  {
            m_risk_group_id = value;
        }
        void set_strategy(const strategy& value)  {
            m_strategy = value;
        }
        void set_user_data1(const user_data1& value)  {
            m_user_data1 = value;
        }
        void set_timestamp(const timestamp& value)  {
            m_timestamp = value;
        }
        void set_order_legs_list(const std::vector<order_legs>& list)  {
            m_order_legs = list;
        }
        void add_order_legs(const order_legs& item) {
            m_order_legs.emplace_back(item);
        }

        //templatized getters and setters

        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to NoticeResponse::get()"); return T{}; }  // specializations for valid types are listed below the class definition

        template <typename T, size_t S = sizeof(T)>
        const auto get(int i) const { static_assert(sizeof(T) == -1, "Unexpected type in call to NoticeResponse::get(int)"); return T{};}  // specializations for valid types are listed below the class definition

        template <typename T, size_t S = sizeof(T)>
        int count() const { static_assert(sizeof(T) == -1, "Unexpected type in call to NoticeResponse::count()"); return 0;}  // specializations for valid types are listed below the class definition

        //specializations for set functions for the valid types
    
        void set(const _meta & value) {
            set__meta(value);
        }
        void set(const pkey & value) {
            set_pkey(value);
        }
        void set(const ticker & value) {
            set_ticker(value);
        }
        void set(const trade_date & value) {
            set_trade_date(value);
        }
        void set(const stage_type & value) {
            set_stage_type(value);
        }
        void set(const resp_side & value) {
            set_resp_side(value);
        }
        void set(const resp_size & value) {
            set_resp_size(value);
        }
        void set(const resp_price & value) {
            set_resp_price(value);
        }
        void set(const ref_uprc & value) {
            set_ref_uprc(value);
        }
        void set(const ref_de & value) {
            set_ref_de(value);
        }
        void set(const ref_ga & value) {
            set_ref_ga(value);
        }
        void set(const min_ubid & value) {
            set_min_ubid(value);
        }
        void set(const max_uask & value) {
            set_max_uask(value);
        }
        void set(const risk_group_id & value) {
            set_risk_group_id(value);
        }
        void set(const strategy & value) {
            set_strategy(value);
        }
        void set(const user_data1 & value) {
            set_user_data1(value);
        }
        void set(const timestamp & value) {
            set_timestamp(value);
        }
        void set(const order_legs & value) {
            add_order_legs(value);
        }

        void set(const NoticeResponse & value) {
            set(value.m__meta);
            set(value.m_pkey);
            set(value.m_ticker);
            set(value.m_trade_date);
            set(value.m_stage_type);
            set(value.m_resp_side);
            set(value.m_resp_size);
            set(value.m_resp_price);
            set(value.m_ref_uprc);
            set(value.m_ref_de);
            set(value.m_ref_ga);
            set(value.m_min_ubid);
            set(value.m_max_uask);
            set(value.m_risk_group_id);
            set(value.m_strategy);
            set(value.m_user_data1);
            set(value.m_timestamp);set_order_legs_list(value.m_order_legs);
        }

        NoticeResponse() {
            m__meta.set_message_type("NoticeResponse");
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
            std::snprintf(reinterpret_cast<char*>(data), size, "\r\nP%05d%06zd", 2470, length);
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
            std::snprintf(const_cast<char*>(s->data()), s->size(), "\r\nP%05d%06zd", 2470, length);
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
             *this = NoticeResponse{};
        }
        bool IncludeMeta() const {
            return (m__meta.ByteSizeLong() > 0);
        }
        bool IncludePkey() const {
            return (m_pkey.ByteSizeLong() > 0);
        }
        bool IncludeTicker() const {
            return (m_ticker.ByteSizeLong() > 0);
        }
        bool IncludeTradeDate() const {
            return (m_trade_date.ByteSizeLong() > 0);
        }
        bool IncludeRespSize() const {
            return !(m_resp_size == 0);
        }
        bool IncludeRespPrice() const {
            return !(m_resp_price == 0.0);
        }
        bool IncludeRefUprc() const {
            return !(m_ref_uprc == 0.0);
        }
        bool IncludeRefDe() const {
            return !(m_ref_de == 0.0);
        }
        bool IncludeRefGa() const {
            return !(m_ref_ga == 0.0);
        }
        bool IncludeMinUbid() const {
            return !(m_min_ubid == 0.0);
        }
        bool IncludeMaxUask() const {
            return !(m_max_uask == 0.0);
        }
        bool IncludeRiskGroupId() const {
            return !(m_risk_group_id == 0);
        }
        bool IncludeStrategy() const {
            return !(m_strategy.empty());
        }
        bool IncludeUserData1() const {
            return !(m_user_data1.empty());
        }
        bool IncludeTimestamp() const {
            return (m_timestamp.time_since_epoch().count() != 0);
        }
        bool IncludeOrderLegs() const {
            return (!m_order_legs.empty());
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
            if ( IncludeTicker()) {
                SRProtobufCPP::TickerKeyLayout tickerKeyLayout_ticker{};
                m_ticker.setCodecTickerKey(tickerKeyLayout_ticker);
                totalSize += SRProtobufCPP::FieldCodec::TickerKeyFieldSize(119, tickerKeyLayout_ticker);
            }
            if ( IncludeTradeDate()) {
                totalSize += SRProtobufCPP::FieldCodec::DateKeyFieldSize(120, m_trade_date.get_year(), m_trade_date.get_month(), m_trade_date.get_day());
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(101,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrStageType>(m_stage_type)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(102,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>(m_resp_side)));
            if ( IncludeRespSize()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(103,m_resp_size);
            }
            if ( IncludeRespPrice()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(104,m_resp_price);
            }
            if ( IncludeRefUprc()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(105,m_ref_uprc);
            }
            if ( IncludeRefDe()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(106,m_ref_de);
            }
            if ( IncludeRefGa()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(107,m_ref_ga);
            }
            if ( IncludeMinUbid()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(108,m_min_ubid);
            }
            if ( IncludeMaxUask()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(109,m_max_uask);
            }
            if ( IncludeRiskGroupId()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(110,m_risk_group_id);
            }
            if ( IncludeStrategy()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(111,m_strategy);
            }
            if ( IncludeUserData1()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(112,m_user_data1);
            }
            if ( IncludeTimestamp()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(118, m_timestamp);
            }
            if ( IncludeOrderLegs()) {
                for (auto& item : m_order_legs) {
					totalSize += SRProtobufCPP::TagCodec::Size(113, SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited);
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
            if ( IncludeTicker()) {
                SRProtobufCPP::TickerKeyLayout tickerKeyLayout_ticker{};
                m_ticker.setCodecTickerKey(tickerKeyLayout_ticker);
                dest = SRProtobufCPP::FieldCodec::EncodeTickerKey(dest, 119, tickerKeyLayout_ticker);
            }
            if ( IncludeTradeDate()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateKey(dest,120, m_trade_date.get_year(), m_trade_date.get_month(), m_trade_date.get_day());
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,101,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrStageType>(m_stage_type)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,102,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>(m_resp_side)));
            if ( IncludeRespSize()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,103,m_resp_size);
            }
            if ( IncludeRespPrice()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,104,m_resp_price);
            }
            if ( IncludeRefUprc()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,105,m_ref_uprc);
            }
            if ( IncludeRefDe()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,106,m_ref_de);
            }
            if ( IncludeRefGa()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,107,m_ref_ga);
            }
            if ( IncludeMinUbid()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,108,m_min_ubid);
            }
            if ( IncludeMaxUask()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,109,m_max_uask);
            }
            if ( IncludeRiskGroupId()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,110,m_risk_group_id);
            }
            if ( IncludeStrategy()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,111,static_cast<string>(m_strategy));
            }
            if ( IncludeUserData1()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,112,static_cast<string>(m_user_data1));
            }
            if ( IncludeTimestamp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 118, m_timestamp);
            }
            if ( IncludeOrderLegs()) {
                for (auto& item : m_order_legs) {
                    dest = SRProtobufCPP::TagCodec::Encode(dest, 113, SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited);
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
                    case 119: {
                        if (tagType == SRProtobufCPP::TickerKeyCodec::TagType){
                            auto tickerKey = SRProtobufCPP::FieldCodec::DecodeTickerKey(pos,max);
                            m_ticker.setFromCodec(tickerKey);
                        }
                        break;
                    }
                    case 120: {
                        if (tagType == SRProtobufCPP::DateKeyCodec::TagType) {
                            auto dateKey = SRProtobufCPP::FieldCodec::DecodeDateKey(pos,max);
                            m_trade_date.set_year(dateKey.year());
                            m_trade_date.set_month(dateKey.month());
                            m_trade_date.set_day(dateKey.day());
                        }
                        break;
                    }
                    case 101: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_stage_type = static_cast<spiderrock::protobuf::api::SpdrStageType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 102: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_resp_side = static_cast<spiderrock::protobuf::api::BuySell>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 103: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_resp_size = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 104: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_resp_price = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 105: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_ref_uprc = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 106: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_ref_de = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 107: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_ref_ga = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 108: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_min_ubid = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 109: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_max_uask = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 110: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_risk_group_id = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 111: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_strategy = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 112: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_user_data1 = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 118: {
                        if (tagType == SRProtobufCPP::DateKeyCodec::TagType) {
                            m_timestamp = SRProtobufCPP::FieldCodec::DecodeDateTime(pos,max);
                        }
                        break;
                    }
                    case 113: {
                        if (tagType == SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited) {
                            const int length = SRProtobufCPP::LengthCodec::Decode(pos, max);
                            order_legs item_order_legs;
                            item_order_legs.Decode(pos, pos+length);  
                            m_order_legs.emplace_back(item_order_legs);
                        }
                        break;
                    }
                }
            }
        }

    };


    // getter definitions for all classes above, both inner and outer classes

    template<> inline const auto NoticeResponse::get<NoticeResponse::_meta>() const { return NoticeResponse::_meta{ m__meta}; }
    template<> inline const auto NoticeResponse::get<NoticeResponse::pkey>() const { return NoticeResponse::pkey{ m_pkey}; }
    template<> inline const auto NoticeResponse::get<NoticeResponse::ticker>() const { return NoticeResponse::ticker{ m_ticker}; }
    template<> inline const auto NoticeResponse::get<NoticeResponse::trade_date>() const { return NoticeResponse::trade_date{ m_trade_date}; }
    template<> inline const auto NoticeResponse::get<NoticeResponse::stage_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrStageType>( m_stage_type)); }
    template<> inline const auto NoticeResponse::get<NoticeResponse::resp_side>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>( m_resp_side)); }
    template<> inline const auto NoticeResponse::get<NoticeResponse::resp_size>() const { return m_resp_size; }
    template<> inline const auto NoticeResponse::get<NoticeResponse::resp_price>() const { return m_resp_price; }
    template<> inline const auto NoticeResponse::get<NoticeResponse::ref_uprc>() const { return m_ref_uprc; }
    template<> inline const auto NoticeResponse::get<NoticeResponse::ref_de>() const { return m_ref_de; }
    template<> inline const auto NoticeResponse::get<NoticeResponse::ref_ga>() const { return m_ref_ga; }
    template<> inline const auto NoticeResponse::get<NoticeResponse::min_ubid>() const { return m_min_ubid; }
    template<> inline const auto NoticeResponse::get<NoticeResponse::max_uask>() const { return m_max_uask; }
    template<> inline const auto NoticeResponse::get<NoticeResponse::risk_group_id>() const { return m_risk_group_id; }
    template<> inline const auto NoticeResponse::get<NoticeResponse::strategy>() const { return m_strategy; }
    template<> inline const auto NoticeResponse::get<NoticeResponse::user_data1>() const { return m_user_data1; }
    template<> inline const auto NoticeResponse::get<NoticeResponse::timestamp>() const { return m_timestamp; }
    template<> inline const auto NoticeResponse::get<NoticeResponse::order_legs>(int i) const { return NoticeResponse::order_legs{ get_order_legs(i)}; }
    template<> inline int NoticeResponse::count<NoticeResponse::order_legs>() const { return static_cast<int>( m_order_legs.size()); }
    template<> inline const auto NoticeResponse_PKey::get<NoticeResponse_PKey::notice_number>() const { return m_notice_number; }
    template<> inline const auto NoticeResponse_PKey::get<NoticeResponse_PKey::accnt>() const { return m_accnt; }
    template<> inline const auto NoticeResponse_PKey::get<NoticeResponse_PKey::client_firm>() const { return m_client_firm; }
    template<> inline const auto NoticeResponse_PKey::get<NoticeResponse_PKey::response_id>() const { return m_response_id; }
    
    template<> inline const auto NoticeResponse_OrderLegs::get<NoticeResponse_OrderLegs::sec_key>() const { return NoticeResponse_OrderLegs::sec_key{m_sec_key}; }
    template<> inline const auto NoticeResponse_OrderLegs::get<NoticeResponse_OrderLegs::sec_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>(m_sec_type));}
    template<> inline const auto NoticeResponse_OrderLegs::get<NoticeResponse_OrderLegs::side>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>(m_side));}
    template<> inline const auto NoticeResponse_OrderLegs::get<NoticeResponse_OrderLegs::position_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::LegPositionType>(m_position_type));}
    
    // ostream operators for all classes above, output should adhere to a JSON format

    inline std::ostream& operator<<(std::ostream &o, const NoticeResponse_PKey& m) {
        o << "\"notice_number\":" << m.get<NoticeResponse_PKey::notice_number>();
        o << ",\"accnt\":\"" << m.get<NoticeResponse_PKey::accnt>() << "\"";
        o << ",\"client_firm\":\"" << m.get<NoticeResponse_PKey::client_firm>() << "\"";
        o << ",\"response_id\":\"" << m.get<NoticeResponse_PKey::response_id>() << "\"";
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const NoticeResponse_OrderLegs& m) {
        o << "\"sec_key\":{" << m.get<NoticeResponse_OrderLegs::sec_key>() << "}";
        o << ",\"sec_type\":" << (int64_t)m.get<NoticeResponse_OrderLegs::sec_type>();
        o << ",\"side\":" << (int64_t)m.get<NoticeResponse_OrderLegs::side>();
        o << ",\"position_type\":" << (int64_t)m.get<NoticeResponse_OrderLegs::position_type>();
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const NoticeResponse& m) {
        o << "\"_meta\":{" << m.get<NoticeResponse::_meta>() << "}";
        o << ",\"pkey\":{" << m.get<NoticeResponse::pkey>() << "}";
        o << ",\"ticker\":{" << m.get<NoticeResponse::ticker>() << "}";
        o << ",\"trade_date\":{" << m.get<NoticeResponse::trade_date>() << "}";
        o << ",\"stage_type\":" << (int64_t)m.get<NoticeResponse::stage_type>();
        o << ",\"resp_side\":" << (int64_t)m.get<NoticeResponse::resp_side>();
        o << ",\"resp_size\":" << m.get<NoticeResponse::resp_size>();
        o << ",\"resp_price\":" << m.get<NoticeResponse::resp_price>();
        o << ",\"ref_uprc\":" << m.get<NoticeResponse::ref_uprc>();
        o << ",\"ref_de\":" << m.get<NoticeResponse::ref_de>();
        o << ",\"ref_ga\":" << m.get<NoticeResponse::ref_ga>();
        o << ",\"min_ubid\":" << m.get<NoticeResponse::min_ubid>();
        o << ",\"max_uask\":" << m.get<NoticeResponse::max_uask>();
        o << ",\"risk_group_id\":" << m.get<NoticeResponse::risk_group_id>();
        o << ",\"strategy\":\"" << m.get<NoticeResponse::strategy>() << "\"";
        o << ",\"user_data1\":\"" << m.get<NoticeResponse::user_data1>() << "\"";
        {
            std::time_t tt = m.get<NoticeResponse::timestamp>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"timestamp\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        o << ",\"order_legs\":[";
        {
            const char *delim = "{";
            for (int i=0; i<m.count<NoticeResponse::order_legs>(); ++i) {
                o << delim << m.get<NoticeResponse::order_legs>(i) << '}';
                delim = ",{";
            }
        }
        o << "]";
        return o;
    }

}
}
}