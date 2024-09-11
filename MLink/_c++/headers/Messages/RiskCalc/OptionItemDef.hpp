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

    #ifndef _ex_type__GUARD__
    #define _ex_type__GUARD__
    DECL_STRONG_TYPE(ex_type, spiderrock::protobuf::api::ExerciseType);
    #endif//_ex_type__GUARD__

    #ifndef _ex_time__GUARD__
    #define _ex_time__GUARD__
    DECL_STRONG_TYPE(ex_time, spiderrock::protobuf::api::ExerciseTime);
    #endif//_ex_time__GUARD__

    #ifndef _time_metric__GUARD__
    #define _time_metric__GUARD__
    DECL_STRONG_TYPE(time_metric, spiderrock::protobuf::api::TimeMetric);
    #endif//_time_metric__GUARD__

    #ifndef _price_type__CalcPriceType__GUARD__
    #define _price_type__CalcPriceType__GUARD__
    DECL_STRONG_TYPE(price_type__CalcPriceType, spiderrock::protobuf::api::CalcPriceType);
    #endif//_price_type__CalcPriceType__GUARD__

    #ifndef _model_type__GUARD__
    #define _model_type__GUARD__
    DECL_STRONG_TYPE(model_type, spiderrock::protobuf::api::CalcModelType);
    #endif//_model_type__GUARD__

    #ifndef _inc_greeks__GUARD__
    #define _inc_greeks__GUARD__
    DECL_STRONG_TYPE(inc_greeks, spiderrock::protobuf::api::YesNo);
    #endif//_inc_greeks__GUARD__

    #ifndef _vol__GUARD__
    #define _vol__GUARD__
    DECL_STRONG_TYPE(vol, double);
    #endif//_vol__GUARD__

    #ifndef _u_prc__double__GUARD__
    #define _u_prc__double__GUARD__
    DECL_STRONG_TYPE(u_prc__double, double);
    #endif//_u_prc__double__GUARD__

    #ifndef _years__double__GUARD__
    #define _years__double__GUARD__
    DECL_STRONG_TYPE(years__double, double);
    #endif//_years__double__GUARD__

    #ifndef _sdiv__double__GUARD__
    #define _sdiv__double__GUARD__
    DECL_STRONG_TYPE(sdiv__double, double);
    #endif//_sdiv__double__GUARD__

    #ifndef _rate__double__GUARD__
    #define _rate__double__GUARD__
    DECL_STRONG_TYPE(rate__double, double);
    #endif//_rate__double__GUARD__

    #ifndef _timestamp__GUARD__
    #define _timestamp__GUARD__
    DECL_STRONG_TYPE(timestamp, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_timestamp__GUARD__

    #ifndef _okey__GUARD__
    #define _okey__GUARD__
    DECL_STRONG_TYPE(okey, OptionKey);
    #endif//_okey__GUARD__

    #ifndef _basket_number__GUARD__
    #define _basket_number__GUARD__
    DECL_STRONG_TYPE(basket_number, int64);
    #endif//_basket_number__GUARD__

    #ifndef _user_name__GUARD__
    #define _user_name__GUARD__
    DECL_STRONG_TYPE(user_name, string);
    #endif//_user_name__GUARD__

    #ifndef _date__timestamp__GUARD__
    #define _date__timestamp__GUARD__
    DECL_STRONG_TYPE(date__timestamp, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_date__timestamp__GUARD__

    #ifndef _amount__GUARD__
    #define _amount__GUARD__
    DECL_STRONG_TYPE(amount, float);
    #endif//_amount__GUARD__

    
    class OptionItemDef_PKey {
        public:
        //using statements for all types used in this class
        using okey = spiderrock::protobuf::api::okey;
        using basket_number = spiderrock::protobuf::api::basket_number;
        using user_name = spiderrock::protobuf::api::user_name;

        private:
        okey m_okey{};
        basket_number m_basket_number{};
        user_name m_user_name{};

        public:
		okey get_okey() const {
            return m_okey;
        }
        basket_number get_basket_number() const {
            return m_basket_number;
        }
        user_name get_user_name() const {
            return m_user_name;
        }
        void set_okey(const okey& value)  {
            m_okey = value;
        }
        void set_basket_number(const basket_number& value)  {
            m_basket_number = value;
        }
        void set_user_name(const user_name& value)  {
            m_user_name = value;
        }
        //templatized getters and setters
        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to OptionItemDef_PKey::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to OptionItemDef_PKey::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const okey & value) { set_okey(value); }
        void set(const basket_number & value) { set_basket_number(value); }
        void set(const user_name & value) { set_user_name(value); }


        OptionItemDef_PKey() {}

        virtual ~OptionItemDef_PKey() {
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
        bool IncludeOkey() const {
            return (m_okey.ByteSizeLong() > 0);
        }
        bool IncludeBasketNumber() const {
            return !(m_basket_number == 0);
        }
        bool IncludeUserName() const {
            return !(m_user_name.empty());
        }


        size_t ByteSizeLong() const {
            size_t totalSize = 0;
            if ( IncludeOkey()) {
                SRProtobufCPP::OptionKeyLayout optionKeyLayout;
                m_okey.setCodecOptionKey(optionKeyLayout);
                totalSize += SRProtobufCPP::FieldCodec::OptionKeyFieldSize(10,optionKeyLayout);
            }
            if ( IncludeBasketNumber()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(11,m_basket_number);
            }
            if ( IncludeUserName()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(12,m_user_name);
            }
            return totalSize;
        }

        void Encode(uint8_t*& dest, uint8_t* max) const {
            if ( IncludeOkey()) {
                SRProtobufCPP::OptionKeyLayout optionKeyLayout;
                m_okey.setCodecOptionKey(optionKeyLayout);
                dest = SRProtobufCPP::FieldCodec::EncodeOptionKey(dest, 10, optionKeyLayout);
            }
            if ( IncludeBasketNumber()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,11,m_basket_number);
            }
            if ( IncludeUserName()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,12,static_cast<string>(m_user_name));
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
                        auto optionKey = SRProtobufCPP::FieldCodec::DecodeOptionKey(pos,max);
                        m_okey.setFromCodec(optionKey);
                        break;
                    }
                    case 11: {m_basket_number = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        break;
                    }
                    case 12: {m_user_name = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                }
            }
        }

    };
    
    class OptionItemDef_DiscreteDividend {
        public:
        //using statements for all types used in this class
        using date = spiderrock::protobuf::api::date__timestamp;
        using amount = spiderrock::protobuf::api::amount;

        private:
        date m_date{};
        amount m_amount{};

        public:
        date get_date() const {
            return m_date;
        }
        amount get_amount() const {
            return m_amount;
        }
        void set_date(const date& value)  {
            m_date = value;
        }
        void set_amount(const amount& value)  {
            m_amount = value;
        }
        //templatized getters and setters
        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to OptionItemDef_DiscreteDividend::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to OptionItemDef_DiscreteDividend::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const date & value) { set_date(value); }
        void set(const amount & value) { set_amount(value); }


        OptionItemDef_DiscreteDividend() {}

        virtual ~OptionItemDef_DiscreteDividend() {
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
            totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(136, m_date);
            totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(139,m_amount);
            return totalSize;
        }

        uint8_t* Encode(uint8_t*& dest, uint8_t* max) const {
            dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 136, m_date);
            dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,139,m_amount);
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
                    case 136: {
                        m_date = SRProtobufCPP::FieldCodec::DecodeDateTime(pos,max);
                        break;
                    }
                    case 139: {m_amount = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        break;
                    }
                }
            }
        }

    };
    

    class OptionItemDef {
        public:
        //using statements for all types used in this class
    
        using _meta = spiderrock::protobuf::api::_meta;
        using pkey = spiderrock::protobuf::api::OptionItemDef_PKey;
        using ex_type = spiderrock::protobuf::api::ex_type;
        using ex_time = spiderrock::protobuf::api::ex_time;
        using time_metric = spiderrock::protobuf::api::time_metric;
        using price_type = spiderrock::protobuf::api::price_type__CalcPriceType;
        using model_type = spiderrock::protobuf::api::model_type;
        using inc_greeks = spiderrock::protobuf::api::inc_greeks;
        using vol = spiderrock::protobuf::api::vol;
        using u_prc = spiderrock::protobuf::api::u_prc__double;
        using years = spiderrock::protobuf::api::years__double;
        using sdiv = spiderrock::protobuf::api::sdiv__double;
        using rate = spiderrock::protobuf::api::rate__double;
        using timestamp = spiderrock::protobuf::api::timestamp;
        using discrete_dividend = spiderrock::protobuf::api::OptionItemDef_DiscreteDividend;

        private:
        _meta m__meta{};
        pkey m_pkey{};
        ex_type m_ex_type{};
        ex_time m_ex_time{};
        time_metric m_time_metric{};
        price_type m_price_type{};
        model_type m_model_type{};
        inc_greeks m_inc_greeks{};
        vol m_vol{};
        u_prc m_u_prc{};
        years m_years{};
        sdiv m_sdiv{};
        rate m_rate{};
        timestamp m_timestamp{};
        std::vector<discrete_dividend> m_discrete_dividend{};

        static constexpr int _mlinkHeaderLength = 14;

        public:		
        _meta get__meta() const {
            return m__meta;
        }		
        pkey get_pkey() const {
            return m_pkey;
        }		
        ex_type get_ex_type() const {
            return m_ex_type;
        }		
        ex_time get_ex_time() const {
            return m_ex_time;
        }		
        time_metric get_time_metric() const {
            return m_time_metric;
        }		
        price_type get_price_type() const {
            return m_price_type;
        }		
        model_type get_model_type() const {
            return m_model_type;
        }		
        inc_greeks get_inc_greeks() const {
            return m_inc_greeks;
        }		
        vol get_vol() const {
            return m_vol;
        }		
        u_prc get_u_prc() const {
            return m_u_prc;
        }		
        years get_years() const {
            return m_years;
        }		
        sdiv get_sdiv() const {
            return m_sdiv;
        }		
        rate get_rate() const {
            return m_rate;
        }		
        timestamp get_timestamp() const {
            return m_timestamp;
        }
        const std::vector<discrete_dividend>& get_discrete_dividend_list() const {
            return m_discrete_dividend;
        }
        const discrete_dividend& get_discrete_dividend(const int i) const {
            return m_discrete_dividend.at(i);
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
        void set_ex_type(const ex_type& value)  {
            m_ex_type = value;
        }
        void set_ex_time(const ex_time& value)  {
            m_ex_time = value;
        }
        void set_time_metric(const time_metric& value)  {
            m_time_metric = value;
        }
        void set_price_type(const price_type& value)  {
            m_price_type = value;
        }
        void set_model_type(const model_type& value)  {
            m_model_type = value;
        }
        void set_inc_greeks(const inc_greeks& value)  {
            m_inc_greeks = value;
        }
        void set_vol(const vol& value)  {
            m_vol = value;
        }
        void set_u_prc(const u_prc& value)  {
            m_u_prc = value;
        }
        void set_years(const years& value)  {
            m_years = value;
        }
        void set_sdiv(const sdiv& value)  {
            m_sdiv = value;
        }
        void set_rate(const rate& value)  {
            m_rate = value;
        }
        void set_timestamp(const timestamp& value)  {
            m_timestamp = value;
        }
        void set_discrete_dividend_list(const std::vector<discrete_dividend>& list)  {
            m_discrete_dividend = list;
        }
        void add_discrete_dividend(const discrete_dividend& item) {
            m_discrete_dividend.emplace_back(item);
        }

        //templatized getters and setters

        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to OptionItemDef::get()"); return T{}; }  // specializations for valid types are listed below the class definition

        template <typename T, size_t S = sizeof(T)>
        const auto get(int i) const { static_assert(sizeof(T) == -1, "Unexpected type in call to OptionItemDef::get(int)"); return T{};}  // specializations for valid types are listed below the class definition

        template <typename T, size_t S = sizeof(T)>
        int count() const { static_assert(sizeof(T) == -1, "Unexpected type in call to OptionItemDef::count()"); return 0;}  // specializations for valid types are listed below the class definition

        //specializations for set functions for the valid types
    
        void set(const _meta & value) {
            set__meta(value);
        }
        void set(const pkey & value) {
            set_pkey(value);
        }
        void set(const ex_type & value) {
            set_ex_type(value);
        }
        void set(const ex_time & value) {
            set_ex_time(value);
        }
        void set(const time_metric & value) {
            set_time_metric(value);
        }
        void set(const price_type & value) {
            set_price_type(value);
        }
        void set(const model_type & value) {
            set_model_type(value);
        }
        void set(const inc_greeks & value) {
            set_inc_greeks(value);
        }
        void set(const vol & value) {
            set_vol(value);
        }
        void set(const u_prc & value) {
            set_u_prc(value);
        }
        void set(const years & value) {
            set_years(value);
        }
        void set(const sdiv & value) {
            set_sdiv(value);
        }
        void set(const rate & value) {
            set_rate(value);
        }
        void set(const timestamp & value) {
            set_timestamp(value);
        }
        void set(const discrete_dividend & value) {
            add_discrete_dividend(value);
        }

        void set(const OptionItemDef & value) {
            set(value.m__meta);
            set(value.m_pkey);
            set(value.m_ex_type);
            set(value.m_ex_time);
            set(value.m_time_metric);
            set(value.m_price_type);
            set(value.m_model_type);
            set(value.m_inc_greeks);
            set(value.m_vol);
            set(value.m_u_prc);
            set(value.m_years);
            set(value.m_sdiv);
            set(value.m_rate);
            set(value.m_timestamp);set_discrete_dividend_list(value.m_discrete_dividend);
        }

        OptionItemDef() {
            m__meta.set_message_type("OptionItemDef");
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
            std::snprintf(reinterpret_cast<char*>(data), size, "\r\nP%05d%06zd", 3486, length);
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
            std::snprintf(const_cast<char*>(s->data()), s->size(), "\r\nP%05d%06zd", 3486, length);
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
             *this = OptionItemDef{};
        }
        bool IncludeMeta() const {
            return (m__meta.ByteSizeLong() > 0);
        }
        bool IncludePkey() const {
            return (m_pkey.ByteSizeLong() > 0);
        }
        bool IncludeVol() const {
            return !(m_vol == 0.0);
        }
        bool IncludeUPrc() const {
            return !(m_u_prc == 0.0);
        }
        bool IncludeYears() const {
            return !(m_years == 0.0);
        }
        bool IncludeSdiv() const {
            return !(m_sdiv == 0.0);
        }
        bool IncludeRate() const {
            return !(m_rate == 0.0);
        }
        bool IncludeTimestamp() const {
            return (m_timestamp.time_since_epoch().count() != 0);
        }
        bool IncludeDiscreteDividend() const {
            return (!m_discrete_dividend.empty());
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
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(100,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ExerciseType>(m_ex_type)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(103,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ExerciseTime>(m_ex_time)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(106,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::TimeMetric>(m_time_metric)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(109,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::CalcPriceType>(m_price_type)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(112,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::CalcModelType>(m_model_type)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(115,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_inc_greeks)));
            if ( IncludeVol()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(118,m_vol);
            }
            if ( IncludeUPrc()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(121,m_u_prc);
            }
            if ( IncludeYears()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(124,m_years);
            }
            if ( IncludeSdiv()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(127,m_sdiv);
            }
            if ( IncludeRate()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(130,m_rate);
            }
            if ( IncludeTimestamp()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(142, m_timestamp);
            }
            if ( IncludeDiscreteDividend()) {
                for (auto& item : m_discrete_dividend) {
					totalSize += SRProtobufCPP::TagCodec::Size(133, SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited);
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
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,100,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ExerciseType>(m_ex_type)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,103,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ExerciseTime>(m_ex_time)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,106,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::TimeMetric>(m_time_metric)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,109,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::CalcPriceType>(m_price_type)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,112,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::CalcModelType>(m_model_type)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,115,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>(m_inc_greeks)));
            if ( IncludeVol()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,118,m_vol);
            }
            if ( IncludeUPrc()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,121,m_u_prc);
            }
            if ( IncludeYears()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,124,m_years);
            }
            if ( IncludeSdiv()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,127,m_sdiv);
            }
            if ( IncludeRate()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,130,m_rate);
            }
            if ( IncludeTimestamp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 142, m_timestamp);
            }
            if ( IncludeDiscreteDividend()) {
                for (auto& item : m_discrete_dividend) {
                    dest = SRProtobufCPP::TagCodec::Encode(dest, 133, SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited);
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
                            m_ex_type = static_cast<spiderrock::protobuf::api::ExerciseType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 103: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_ex_time = static_cast<spiderrock::protobuf::api::ExerciseTime>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 106: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_time_metric = static_cast<spiderrock::protobuf::api::TimeMetric>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 109: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_price_type = static_cast<spiderrock::protobuf::api::CalcPriceType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 112: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_model_type = static_cast<spiderrock::protobuf::api::CalcModelType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 115: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_inc_greeks = static_cast<spiderrock::protobuf::api::YesNo>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 118: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_vol = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 121: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_u_prc = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 124: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_years = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 127: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_sdiv = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 130: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_rate = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 142: {
                        if (tagType == SRProtobufCPP::DateKeyCodec::TagType) {
                            m_timestamp = SRProtobufCPP::FieldCodec::DecodeDateTime(pos,max);
                        }
                        break;
                    }
                    case 133: {
                        if (tagType == SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited) {
                            const int length = SRProtobufCPP::LengthCodec::Decode(pos, max);
                            discrete_dividend item_discrete_dividend;
                            item_discrete_dividend.Decode(pos, pos+length);  
                            m_discrete_dividend.emplace_back(item_discrete_dividend);
                        }
                        break;
                    }
                }
            }
        }

    };


    // getter definitions for all classes above, both inner and outer classes

    template<> inline const auto OptionItemDef::get<OptionItemDef::_meta>() const { return OptionItemDef::_meta{ m__meta}; }
    template<> inline const auto OptionItemDef::get<OptionItemDef::pkey>() const { return OptionItemDef::pkey{ m_pkey}; }
    template<> inline const auto OptionItemDef::get<OptionItemDef::ex_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ExerciseType>( m_ex_type)); }
    template<> inline const auto OptionItemDef::get<OptionItemDef::ex_time>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::ExerciseTime>( m_ex_time)); }
    template<> inline const auto OptionItemDef::get<OptionItemDef::time_metric>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::TimeMetric>( m_time_metric)); }
    template<> inline const auto OptionItemDef::get<OptionItemDef::price_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::CalcPriceType>( m_price_type)); }
    template<> inline const auto OptionItemDef::get<OptionItemDef::model_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::CalcModelType>( m_model_type)); }
    template<> inline const auto OptionItemDef::get<OptionItemDef::inc_greeks>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::YesNo>( m_inc_greeks)); }
    template<> inline const auto OptionItemDef::get<OptionItemDef::vol>() const { return m_vol; }
    template<> inline const auto OptionItemDef::get<OptionItemDef::u_prc>() const { return m_u_prc; }
    template<> inline const auto OptionItemDef::get<OptionItemDef::years>() const { return m_years; }
    template<> inline const auto OptionItemDef::get<OptionItemDef::sdiv>() const { return m_sdiv; }
    template<> inline const auto OptionItemDef::get<OptionItemDef::rate>() const { return m_rate; }
    template<> inline const auto OptionItemDef::get<OptionItemDef::timestamp>() const { return m_timestamp; }
    template<> inline const auto OptionItemDef::get<OptionItemDef::discrete_dividend>(int i) const { return OptionItemDef::discrete_dividend{ get_discrete_dividend(i)}; }
    template<> inline int OptionItemDef::count<OptionItemDef::discrete_dividend>() const { return static_cast<int>( m_discrete_dividend.size()); }
    template<> inline const auto OptionItemDef_PKey::get<OptionItemDef_PKey::okey>() const { return OptionItemDef_PKey::okey{m_okey}; }
    template<> inline const auto OptionItemDef_PKey::get<OptionItemDef_PKey::basket_number>() const { return m_basket_number; }
    template<> inline const auto OptionItemDef_PKey::get<OptionItemDef_PKey::user_name>() const { return m_user_name; }
    
    template<> inline const auto OptionItemDef_DiscreteDividend::get<OptionItemDef_DiscreteDividend::date>() const { return m_date; }
    template<> inline const auto OptionItemDef_DiscreteDividend::get<OptionItemDef_DiscreteDividend::amount>() const { return m_amount; }
    
    // ostream operators for all classes above, output should adhere to a JSON format

    inline std::ostream& operator<<(std::ostream &o, const OptionItemDef_PKey& m) {
        o << "\"okey\":{" << m.get<OptionItemDef_PKey::okey>() << "}";
        o << ",\"basket_number\":" << m.get<OptionItemDef_PKey::basket_number>();
        o << ",\"user_name\":\"" << m.get<OptionItemDef_PKey::user_name>() << "\"";
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const OptionItemDef_DiscreteDividend& m) {
        {
            std::time_t tt = m.get<OptionItemDef_DiscreteDividend::date>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << "\"date\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        o << ",\"amount\":" << m.get<OptionItemDef_DiscreteDividend::amount>();
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const OptionItemDef& m) {
        o << "\"_meta\":{" << m.get<OptionItemDef::_meta>() << "}";
        o << ",\"pkey\":{" << m.get<OptionItemDef::pkey>() << "}";
        o << ",\"ex_type\":" << (int64_t)m.get<OptionItemDef::ex_type>();
        o << ",\"ex_time\":" << (int64_t)m.get<OptionItemDef::ex_time>();
        o << ",\"time_metric\":" << (int64_t)m.get<OptionItemDef::time_metric>();
        o << ",\"price_type\":" << (int64_t)m.get<OptionItemDef::price_type>();
        o << ",\"model_type\":" << (int64_t)m.get<OptionItemDef::model_type>();
        o << ",\"inc_greeks\":" << (int64_t)m.get<OptionItemDef::inc_greeks>();
        o << ",\"vol\":" << m.get<OptionItemDef::vol>();
        o << ",\"u_prc\":" << m.get<OptionItemDef::u_prc>();
        o << ",\"years\":" << m.get<OptionItemDef::years>();
        o << ",\"sdiv\":" << m.get<OptionItemDef::sdiv>();
        o << ",\"rate\":" << m.get<OptionItemDef::rate>();
        {
            std::time_t tt = m.get<OptionItemDef::timestamp>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"timestamp\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        o << ",\"discrete_dividend\":[";
        {
            const char *delim = "{";
            for (int i=0; i<m.count<OptionItemDef::discrete_dividend>(); ++i) {
                o << delim << m.get<OptionItemDef::discrete_dividend>(i) << '}';
                delim = ",{";
            }
        }
        o << "]";
        return o;
    }

}
}
}