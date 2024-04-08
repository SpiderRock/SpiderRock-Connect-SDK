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

    #ifndef _response_id__GUARD__
    #define _response_id__GUARD__
    DECL_STRONG_TYPE(response_id, string);
    #endif//_response_id__GUARD__

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

    #ifndef _resp_active_size__GUARD__
    #define _resp_active_size__GUARD__
    DECL_STRONG_TYPE(resp_active_size, int32);
    #endif//_resp_active_size__GUARD__

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

    #ifndef _resp_status__GUARD__
    #define _resp_status__GUARD__
    DECL_STRONG_TYPE(resp_status, spiderrock::protobuf::api::SpdrOrderStatus);
    #endif//_resp_status__GUARD__

    #ifndef _resp_detail__GUARD__
    #define _resp_detail__GUARD__
    DECL_STRONG_TYPE(resp_detail, string);
    #endif//_resp_detail__GUARD__

    #ifndef _pkg_cum_fill_qty__GUARD__
    #define _pkg_cum_fill_qty__GUARD__
    DECL_STRONG_TYPE(pkg_cum_fill_qty, int32);
    #endif//_pkg_cum_fill_qty__GUARD__

    #ifndef _pkg_avg_fill_price__GUARD__
    #define _pkg_avg_fill_price__GUARD__
    DECL_STRONG_TYPE(pkg_avg_fill_price, double);
    #endif//_pkg_avg_fill_price__GUARD__

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

    #ifndef _sec_key__GUARD__
    #define _sec_key__GUARD__
    DECL_STRONG_TYPE(sec_key, OptionKey);
    #endif//_sec_key__GUARD__

    #ifndef _sec_type__GUARD__
    #define _sec_type__GUARD__
    DECL_STRONG_TYPE(sec_type, spiderrock::protobuf::api::SpdrKeyType);
    #endif//_sec_type__GUARD__

    #ifndef _side__GUARD__
    #define _side__GUARD__
    DECL_STRONG_TYPE(side, spiderrock::protobuf::api::BuySell);
    #endif//_side__GUARD__

    #ifndef _ratio__int32__GUARD__
    #define _ratio__int32__GUARD__
    DECL_STRONG_TYPE(ratio__int32, int32);
    #endif//_ratio__int32__GUARD__

    #ifndef _position_type__GUARD__
    #define _position_type__GUARD__
    DECL_STRONG_TYPE(position_type, spiderrock::protobuf::api::LegPositionType);
    #endif//_position_type__GUARD__

    #ifndef _leg_cum_fill_qty__GUARD__
    #define _leg_cum_fill_qty__GUARD__
    DECL_STRONG_TYPE(leg_cum_fill_qty, int32);
    #endif//_leg_cum_fill_qty__GUARD__

    #ifndef _leg_avg_fill_price__GUARD__
    #define _leg_avg_fill_price__GUARD__
    DECL_STRONG_TYPE(leg_avg_fill_price, double);
    #endif//_leg_avg_fill_price__GUARD__

    
    class NoticeExecReport_PKey {
        public:
        //using statements for all types used in this class
        using notice_number = spiderrock::protobuf::api::notice_number;
        using accnt = spiderrock::protobuf::api::accnt;
        using client_firm = spiderrock::protobuf::api::client_firm;

        private:
        notice_number m_notice_number{};
        accnt m_accnt{};
        client_firm m_client_firm{};

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
        void set_notice_number(const notice_number& value)  {
            m_notice_number = value;
        }
        void set_accnt(const accnt& value)  {
            m_accnt = value;
        }
        void set_client_firm(const client_firm& value)  {
            m_client_firm = value;
        }
        //templatized getters and setters
        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to NoticeExecReport_PKey::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to NoticeExecReport_PKey::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const notice_number & value) { set_notice_number(value); }
        void set(const accnt & value) { set_accnt(value); }
        void set(const client_firm & value) { set_client_firm(value); }


        NoticeExecReport_PKey() {}

        virtual ~NoticeExecReport_PKey() {
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


        size_t ByteSizeLong() const {
            size_t totalSize = 0;
            if ( IncludeNoticeNumber()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(10,m_notice_number);
            }
            if ( IncludeAccnt()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(11,m_accnt);
            }
            if ( IncludeClientFirm()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(12,m_client_firm);
            }
            return totalSize;
        }

        void Encode(uint8_t*& dest, uint8_t* max) const {
            if ( IncludeNoticeNumber()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,10,m_notice_number);
            }
            if ( IncludeAccnt()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,11,static_cast<string>(m_accnt));
            }
            if ( IncludeClientFirm()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,12,static_cast<string>(m_client_firm));
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
                    case 10: {m_notice_number = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        break;
                    }
                    case 11: {m_accnt = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                    case 12: {m_client_firm = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                }
            }
        }

    };
    
    class NoticeExecReport_OrderLegs {
        public:
        //using statements for all types used in this class
        using sec_key = spiderrock::protobuf::api::sec_key;
        using sec_type = spiderrock::protobuf::api::sec_type;
        using side = spiderrock::protobuf::api::side;
        using ratio = spiderrock::protobuf::api::ratio__int32;
        using position_type = spiderrock::protobuf::api::position_type;
        using leg_cum_fill_qty = spiderrock::protobuf::api::leg_cum_fill_qty;
        using leg_avg_fill_price = spiderrock::protobuf::api::leg_avg_fill_price;

        private:
        sec_key m_sec_key{};
        sec_type m_sec_type{};
        side m_side{};
        ratio m_ratio{};
        position_type m_position_type{};
        leg_cum_fill_qty m_leg_cum_fill_qty{};
        leg_avg_fill_price m_leg_avg_fill_price{};

        public:
        sec_type get_sec_type() const {
            return m_sec_type;
        }
        side get_side() const {
            return m_side;
        }
        ratio get_ratio() const {
            return m_ratio;
        }
        position_type get_position_type() const {
            return m_position_type;
        }
        leg_cum_fill_qty get_leg_cum_fill_qty() const {
            return m_leg_cum_fill_qty;
        }
        leg_avg_fill_price get_leg_avg_fill_price() const {
            return m_leg_avg_fill_price;
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
        void set_ratio(const ratio& value)  {
            m_ratio = value;
        }
        void set_position_type(const position_type& value)  {
            m_position_type = value;
        }
        void set_leg_cum_fill_qty(const leg_cum_fill_qty& value)  {
            m_leg_cum_fill_qty = value;
        }
        void set_leg_avg_fill_price(const leg_avg_fill_price& value)  {
            m_leg_avg_fill_price = value;
        }
        //templatized getters and setters
        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to NoticeExecReport_OrderLegs::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to NoticeExecReport_OrderLegs::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const sec_key & value) { set_sec_key(value); }
        void set(const sec_type & value) { set_sec_type(value); }
        void set(const side & value) { set_side(value); }
        void set(const ratio & value) { set_ratio(value); }
        void set(const position_type & value) { set_position_type(value); }
        void set(const leg_cum_fill_qty & value) { set_leg_cum_fill_qty(value); }
        void set(const leg_avg_fill_price & value) { set_leg_avg_fill_price(value); }


        NoticeExecReport_OrderLegs() {}

        virtual ~NoticeExecReport_OrderLegs() {
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
            SRProtobufCPP::OptionKeyLayout optionKeyLayout;
            m_sec_key.setCodecOptionKey(optionKeyLayout);
            totalSize += SRProtobufCPP::FieldCodec::OptionKeyFieldSize(117,optionKeyLayout);
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(118,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>(m_sec_type)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(119,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>(m_side)));
            totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(120,m_ratio);
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(121,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::LegPositionType>(m_position_type)));
            totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(122,m_leg_cum_fill_qty);
            totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(123,m_leg_avg_fill_price);
            return totalSize;
        }

        uint8_t* Encode(uint8_t*& dest, uint8_t* max) const {
            SRProtobufCPP::OptionKeyLayout optionKeyLayout;
            m_sec_key.setCodecOptionKey(optionKeyLayout);
            dest = SRProtobufCPP::FieldCodec::EncodeOptionKey(dest, 117, optionKeyLayout);
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,118,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>(m_sec_type)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,119,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>(m_side)));
            dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,120,m_ratio);
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,121,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::LegPositionType>(m_position_type)));
            dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,122,m_leg_cum_fill_qty);
            dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,123,m_leg_avg_fill_price);
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
                    case 117: {
                        auto optionKey = SRProtobufCPP::FieldCodec::DecodeOptionKey(pos,max);
                        m_sec_key.setFromCodec(optionKey);
                        break;
                    }
                    case 118: {m_sec_type = static_cast<spiderrock::protobuf::api::SpdrKeyType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                    case 119: {m_side = static_cast<spiderrock::protobuf::api::BuySell>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                    case 120: {m_ratio = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        break;
                    }
                    case 121: {m_position_type = static_cast<spiderrock::protobuf::api::LegPositionType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                    case 122: {m_leg_cum_fill_qty = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        break;
                    }
                    case 123: {m_leg_avg_fill_price = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        break;
                    }
                }
            }
        }

    };
    

    class NoticeExecReport {
        public:
        //using statements for all types used in this class
    
        using _meta = spiderrock::protobuf::api::_meta;
        using pkey = spiderrock::protobuf::api::NoticeExecReport_PKey;
        using response_id = spiderrock::protobuf::api::response_id;
        using stage_type = spiderrock::protobuf::api::stage_type;
        using resp_side = spiderrock::protobuf::api::resp_side;
        using resp_size = spiderrock::protobuf::api::resp_size;
        using resp_active_size = spiderrock::protobuf::api::resp_active_size;
        using resp_price = spiderrock::protobuf::api::resp_price;
        using ref_uprc = spiderrock::protobuf::api::ref_uprc__double;
        using ref_de = spiderrock::protobuf::api::ref_de;
        using ref_ga = spiderrock::protobuf::api::ref_ga;
        using risk_group_id = spiderrock::protobuf::api::risk_group_id;
        using strategy = spiderrock::protobuf::api::strategy;
        using user_data1 = spiderrock::protobuf::api::user_data1;
        using resp_status = spiderrock::protobuf::api::resp_status;
        using resp_detail = spiderrock::protobuf::api::resp_detail;
        using pkg_cum_fill_qty = spiderrock::protobuf::api::pkg_cum_fill_qty;
        using pkg_avg_fill_price = spiderrock::protobuf::api::pkg_avg_fill_price;
        using timestamp = spiderrock::protobuf::api::timestamp;
        using order_legs = spiderrock::protobuf::api::NoticeExecReport_OrderLegs;

        private:
        _meta m__meta{};
        pkey m_pkey{};
        response_id m_response_id{};
        stage_type m_stage_type{};
        resp_side m_resp_side{};
        resp_size m_resp_size{};
        resp_active_size m_resp_active_size{};
        resp_price m_resp_price{};
        ref_uprc m_ref_uprc{};
        ref_de m_ref_de{};
        ref_ga m_ref_ga{};
        risk_group_id m_risk_group_id{};
        strategy m_strategy{};
        user_data1 m_user_data1{};
        resp_status m_resp_status{};
        resp_detail m_resp_detail{};
        pkg_cum_fill_qty m_pkg_cum_fill_qty{};
        pkg_avg_fill_price m_pkg_avg_fill_price{};
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
        response_id get_response_id() const {
            return m_response_id;
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
        resp_active_size get_resp_active_size() const {
            return m_resp_active_size;
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
        risk_group_id get_risk_group_id() const {
            return m_risk_group_id;
        }		
        strategy get_strategy() const {
            return m_strategy;
        }		
        user_data1 get_user_data1() const {
            return m_user_data1;
        }		
        resp_status get_resp_status() const {
            return m_resp_status;
        }		
        resp_detail get_resp_detail() const {
            return m_resp_detail;
        }		
        pkg_cum_fill_qty get_pkg_cum_fill_qty() const {
            return m_pkg_cum_fill_qty;
        }		
        pkg_avg_fill_price get_pkg_avg_fill_price() const {
            return m_pkg_avg_fill_price;
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
        void set_response_id(const response_id& value)  {
            m_response_id = value;
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
        void set_resp_active_size(const resp_active_size& value)  {
            m_resp_active_size = value;
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
        void set_risk_group_id(const risk_group_id& value)  {
            m_risk_group_id = value;
        }
        void set_strategy(const strategy& value)  {
            m_strategy = value;
        }
        void set_user_data1(const user_data1& value)  {
            m_user_data1 = value;
        }
        void set_resp_status(const resp_status& value)  {
            m_resp_status = value;
        }
        void set_resp_detail(const resp_detail& value)  {
            m_resp_detail = value;
        }
        void set_pkg_cum_fill_qty(const pkg_cum_fill_qty& value)  {
            m_pkg_cum_fill_qty = value;
        }
        void set_pkg_avg_fill_price(const pkg_avg_fill_price& value)  {
            m_pkg_avg_fill_price = value;
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
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to NoticeExecReport::get()"); return T{}; }  // specializations for valid types are listed below the class definition

        template <typename T, size_t S = sizeof(T)>
        const auto get(int i) const { static_assert(sizeof(T) == -1, "Unexpected type in call to NoticeExecReport::get(int)"); return T{};}  // specializations for valid types are listed below the class definition

        template <typename T, size_t S = sizeof(T)>
        int count() const { static_assert(sizeof(T) == -1, "Unexpected type in call to NoticeExecReport::count()"); return 0;}  // specializations for valid types are listed below the class definition

        //specializations for set functions for the valid types
    
        void set(const _meta & value) {
            set__meta(value);
        }
        void set(const pkey & value) {
            set_pkey(value);
        }
        void set(const response_id & value) {
            set_response_id(value);
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
        void set(const resp_active_size & value) {
            set_resp_active_size(value);
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
        void set(const risk_group_id & value) {
            set_risk_group_id(value);
        }
        void set(const strategy & value) {
            set_strategy(value);
        }
        void set(const user_data1 & value) {
            set_user_data1(value);
        }
        void set(const resp_status & value) {
            set_resp_status(value);
        }
        void set(const resp_detail & value) {
            set_resp_detail(value);
        }
        void set(const pkg_cum_fill_qty & value) {
            set_pkg_cum_fill_qty(value);
        }
        void set(const pkg_avg_fill_price & value) {
            set_pkg_avg_fill_price(value);
        }
        void set(const timestamp & value) {
            set_timestamp(value);
        }
        void set(const order_legs & value) {
            add_order_legs(value);
        }

        void set(const NoticeExecReport & value) {
            set(value.m__meta);
            set(value.m_pkey);
            set(value.m_response_id);
            set(value.m_stage_type);
            set(value.m_resp_side);
            set(value.m_resp_size);
            set(value.m_resp_active_size);
            set(value.m_resp_price);
            set(value.m_ref_uprc);
            set(value.m_ref_de);
            set(value.m_ref_ga);
            set(value.m_risk_group_id);
            set(value.m_strategy);
            set(value.m_user_data1);
            set(value.m_resp_status);
            set(value.m_resp_detail);
            set(value.m_pkg_cum_fill_qty);
            set(value.m_pkg_avg_fill_price);
            set(value.m_timestamp);set_order_legs_list(value.m_order_legs);
        }

        NoticeExecReport() {
            m__meta.set_message_type("NoticeExecReport");
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
            std::snprintf(reinterpret_cast<char*>(data), size, "\r\nP%05d%06zd", 2475, length);
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
            std::snprintf(const_cast<char*>(s->data()), s->size(), "\r\nP%05d%06zd", 2475, length);
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
             *this = NoticeExecReport{};
        }
        bool IncludeMeta() const {
            return (m__meta.ByteSizeLong() > 0);
        }
        bool IncludePkey() const {
            return (m_pkey.ByteSizeLong() > 0);
        }
        bool IncludeResponseId() const {
            return !(m_response_id.empty());
        }
        bool IncludeRespSize() const {
            return !(m_resp_size == 0);
        }
        bool IncludeRespActiveSize() const {
            return !(m_resp_active_size == 0);
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
        bool IncludeRiskGroupId() const {
            return !(m_risk_group_id == 0);
        }
        bool IncludeStrategy() const {
            return !(m_strategy.empty());
        }
        bool IncludeUserData1() const {
            return !(m_user_data1.empty());
        }
        bool IncludeRespDetail() const {
            return !(m_resp_detail.empty());
        }
        bool IncludePkgCumFillQty() const {
            return !(m_pkg_cum_fill_qty == 0);
        }
        bool IncludePkgAvgFillPrice() const {
            return !(m_pkg_avg_fill_price == 0.0);
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
            if ( IncludeResponseId()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(100,m_response_id);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(101,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrStageType>(m_stage_type)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(102,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>(m_resp_side)));
            if ( IncludeRespSize()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(103,m_resp_size);
            }
            if ( IncludeRespActiveSize()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(104,m_resp_active_size);
            }
            if ( IncludeRespPrice()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(105,m_resp_price);
            }
            if ( IncludeRefUprc()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(106,m_ref_uprc);
            }
            if ( IncludeRefDe()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(107,m_ref_de);
            }
            if ( IncludeRefGa()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(108,m_ref_ga);
            }
            if ( IncludeRiskGroupId()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(109,m_risk_group_id);
            }
            if ( IncludeStrategy()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(110,m_strategy);
            }
            if ( IncludeUserData1()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(111,m_user_data1);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(112,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrOrderStatus>(m_resp_status)));
            if ( IncludeRespDetail()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(113,m_resp_detail);
            }
            if ( IncludePkgCumFillQty()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(114,m_pkg_cum_fill_qty);
            }
            if ( IncludePkgAvgFillPrice()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(115,m_pkg_avg_fill_price);
            }
            if ( IncludeTimestamp()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(124, m_timestamp);
            }
            if ( IncludeOrderLegs()) {
                for (auto& item : m_order_legs) {
					totalSize += SRProtobufCPP::TagCodec::Size(116, SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited);
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
            if ( IncludeResponseId()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,100,static_cast<string>(m_response_id));
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,101,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrStageType>(m_stage_type)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,102,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>(m_resp_side)));
            if ( IncludeRespSize()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,103,m_resp_size);
            }
            if ( IncludeRespActiveSize()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,104,m_resp_active_size);
            }
            if ( IncludeRespPrice()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,105,m_resp_price);
            }
            if ( IncludeRefUprc()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,106,m_ref_uprc);
            }
            if ( IncludeRefDe()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,107,m_ref_de);
            }
            if ( IncludeRefGa()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,108,m_ref_ga);
            }
            if ( IncludeRiskGroupId()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,109,m_risk_group_id);
            }
            if ( IncludeStrategy()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,110,static_cast<string>(m_strategy));
            }
            if ( IncludeUserData1()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,111,static_cast<string>(m_user_data1));
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,112,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrOrderStatus>(m_resp_status)));
            if ( IncludeRespDetail()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,113,static_cast<string>(m_resp_detail));
            }
            if ( IncludePkgCumFillQty()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,114,m_pkg_cum_fill_qty);
            }
            if ( IncludePkgAvgFillPrice()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,115,m_pkg_avg_fill_price);
            }
            if ( IncludeTimestamp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 124, m_timestamp);
            }
            if ( IncludeOrderLegs()) {
                for (auto& item : m_order_legs) {
                    dest = SRProtobufCPP::TagCodec::Encode(dest, 116, SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited);
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
                    case 100: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_response_id = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
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
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_resp_active_size = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 105: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_resp_price = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 106: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_ref_uprc = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 107: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_ref_de = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 108: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_ref_ga = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
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
                            m_strategy = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 111: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_user_data1 = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 112: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_resp_status = static_cast<spiderrock::protobuf::api::SpdrOrderStatus>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 113: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_resp_detail = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 114: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_pkg_cum_fill_qty = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 115: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_pkg_avg_fill_price = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 124: {
                        if (tagType == SRProtobufCPP::DateKeyCodec::TagType) {
                            m_timestamp = SRProtobufCPP::FieldCodec::DecodeDateTime(pos,max);
                        }
                        break;
                    }
                    case 116: {
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

    template<> inline const auto NoticeExecReport::get<NoticeExecReport::_meta>() const { return NoticeExecReport::_meta{ m__meta}; }
    template<> inline const auto NoticeExecReport::get<NoticeExecReport::pkey>() const { return NoticeExecReport::pkey{ m_pkey}; }
    template<> inline const auto NoticeExecReport::get<NoticeExecReport::response_id>() const { return m_response_id; }
    template<> inline const auto NoticeExecReport::get<NoticeExecReport::stage_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrStageType>( m_stage_type)); }
    template<> inline const auto NoticeExecReport::get<NoticeExecReport::resp_side>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>( m_resp_side)); }
    template<> inline const auto NoticeExecReport::get<NoticeExecReport::resp_size>() const { return m_resp_size; }
    template<> inline const auto NoticeExecReport::get<NoticeExecReport::resp_active_size>() const { return m_resp_active_size; }
    template<> inline const auto NoticeExecReport::get<NoticeExecReport::resp_price>() const { return m_resp_price; }
    template<> inline const auto NoticeExecReport::get<NoticeExecReport::ref_uprc>() const { return m_ref_uprc; }
    template<> inline const auto NoticeExecReport::get<NoticeExecReport::ref_de>() const { return m_ref_de; }
    template<> inline const auto NoticeExecReport::get<NoticeExecReport::ref_ga>() const { return m_ref_ga; }
    template<> inline const auto NoticeExecReport::get<NoticeExecReport::risk_group_id>() const { return m_risk_group_id; }
    template<> inline const auto NoticeExecReport::get<NoticeExecReport::strategy>() const { return m_strategy; }
    template<> inline const auto NoticeExecReport::get<NoticeExecReport::user_data1>() const { return m_user_data1; }
    template<> inline const auto NoticeExecReport::get<NoticeExecReport::resp_status>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrOrderStatus>( m_resp_status)); }
    template<> inline const auto NoticeExecReport::get<NoticeExecReport::resp_detail>() const { return m_resp_detail; }
    template<> inline const auto NoticeExecReport::get<NoticeExecReport::pkg_cum_fill_qty>() const { return m_pkg_cum_fill_qty; }
    template<> inline const auto NoticeExecReport::get<NoticeExecReport::pkg_avg_fill_price>() const { return m_pkg_avg_fill_price; }
    template<> inline const auto NoticeExecReport::get<NoticeExecReport::timestamp>() const { return m_timestamp; }
    template<> inline const auto NoticeExecReport::get<NoticeExecReport::order_legs>(int i) const { return NoticeExecReport::order_legs{ get_order_legs(i)}; }
    template<> inline int NoticeExecReport::count<NoticeExecReport::order_legs>() const { return static_cast<int>( m_order_legs.size()); }
    template<> inline const auto NoticeExecReport_PKey::get<NoticeExecReport_PKey::notice_number>() const { return m_notice_number; }
    template<> inline const auto NoticeExecReport_PKey::get<NoticeExecReport_PKey::accnt>() const { return m_accnt; }
    template<> inline const auto NoticeExecReport_PKey::get<NoticeExecReport_PKey::client_firm>() const { return m_client_firm; }
    
    template<> inline const auto NoticeExecReport_OrderLegs::get<NoticeExecReport_OrderLegs::sec_key>() const { return NoticeExecReport_OrderLegs::sec_key{m_sec_key}; }
    template<> inline const auto NoticeExecReport_OrderLegs::get<NoticeExecReport_OrderLegs::sec_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SpdrKeyType>(m_sec_type));}
    template<> inline const auto NoticeExecReport_OrderLegs::get<NoticeExecReport_OrderLegs::side>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BuySell>(m_side));}
    template<> inline const auto NoticeExecReport_OrderLegs::get<NoticeExecReport_OrderLegs::ratio>() const { return m_ratio; }
    template<> inline const auto NoticeExecReport_OrderLegs::get<NoticeExecReport_OrderLegs::position_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::LegPositionType>(m_position_type));}
    template<> inline const auto NoticeExecReport_OrderLegs::get<NoticeExecReport_OrderLegs::leg_cum_fill_qty>() const { return m_leg_cum_fill_qty; }
    template<> inline const auto NoticeExecReport_OrderLegs::get<NoticeExecReport_OrderLegs::leg_avg_fill_price>() const { return m_leg_avg_fill_price; }
    
    // ostream operators for all classes above, output should adhere to a JSON format

    inline std::ostream& operator<<(std::ostream &o, const NoticeExecReport_PKey& m) {
        o << "\"notice_number\":" << m.get<NoticeExecReport_PKey::notice_number>();
        o << ",\"accnt\":\"" << m.get<NoticeExecReport_PKey::accnt>() << "\"";
        o << ",\"client_firm\":\"" << m.get<NoticeExecReport_PKey::client_firm>() << "\"";
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const NoticeExecReport_OrderLegs& m) {
        o << "\"sec_key\":{" << m.get<NoticeExecReport_OrderLegs::sec_key>() << "}";
        o << ",\"sec_type\":" << (int64_t)m.get<NoticeExecReport_OrderLegs::sec_type>();
        o << ",\"side\":" << (int64_t)m.get<NoticeExecReport_OrderLegs::side>();
        o << ",\"ratio\":" << m.get<NoticeExecReport_OrderLegs::ratio>();
        o << ",\"position_type\":" << (int64_t)m.get<NoticeExecReport_OrderLegs::position_type>();
        o << ",\"leg_cum_fill_qty\":" << m.get<NoticeExecReport_OrderLegs::leg_cum_fill_qty>();
        o << ",\"leg_avg_fill_price\":" << m.get<NoticeExecReport_OrderLegs::leg_avg_fill_price>();
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const NoticeExecReport& m) {
        o << "\"_meta\":{" << m.get<NoticeExecReport::_meta>() << "}";
        o << ",\"pkey\":{" << m.get<NoticeExecReport::pkey>() << "}";
        o << ",\"response_id\":\"" << m.get<NoticeExecReport::response_id>() << "\"";
        o << ",\"stage_type\":" << (int64_t)m.get<NoticeExecReport::stage_type>();
        o << ",\"resp_side\":" << (int64_t)m.get<NoticeExecReport::resp_side>();
        o << ",\"resp_size\":" << m.get<NoticeExecReport::resp_size>();
        o << ",\"resp_active_size\":" << m.get<NoticeExecReport::resp_active_size>();
        o << ",\"resp_price\":" << m.get<NoticeExecReport::resp_price>();
        o << ",\"ref_uprc\":" << m.get<NoticeExecReport::ref_uprc>();
        o << ",\"ref_de\":" << m.get<NoticeExecReport::ref_de>();
        o << ",\"ref_ga\":" << m.get<NoticeExecReport::ref_ga>();
        o << ",\"risk_group_id\":" << m.get<NoticeExecReport::risk_group_id>();
        o << ",\"strategy\":\"" << m.get<NoticeExecReport::strategy>() << "\"";
        o << ",\"user_data1\":\"" << m.get<NoticeExecReport::user_data1>() << "\"";
        o << ",\"resp_status\":" << (int64_t)m.get<NoticeExecReport::resp_status>();
        o << ",\"resp_detail\":\"" << m.get<NoticeExecReport::resp_detail>() << "\"";
        o << ",\"pkg_cum_fill_qty\":" << m.get<NoticeExecReport::pkg_cum_fill_qty>();
        o << ",\"pkg_avg_fill_price\":" << m.get<NoticeExecReport::pkg_avg_fill_price>();
        {
            std::time_t tt = m.get<NoticeExecReport::timestamp>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"timestamp\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        o << ",\"order_legs\":[";
        {
            const char *delim = "{";
            for (int i=0; i<m.count<NoticeExecReport::order_legs>(); ++i) {
                o << delim << m.get<NoticeExecReport::order_legs>(i) << '}';
                delim = ",{";
            }
        }
        o << "]";
        return o;
    }

}
}
}