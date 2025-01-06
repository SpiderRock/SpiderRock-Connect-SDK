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

    #ifndef _corp_action_text__GUARD__
    #define _corp_action_text__GUARD__
    DECL_STRONG_TYPE(corp_action_text, string);
    #endif//_corp_action_text__GUARD__

    #ifndef _timestamp__GUARD__
    #define _timestamp__GUARD__
    DECL_STRONG_TYPE(timestamp, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_timestamp__GUARD__

    #ifndef _ticker__TickerKey__GUARD__
    #define _ticker__TickerKey__GUARD__
    DECL_STRONG_TYPE(ticker__TickerKey, TickerKey);
    #endif//_ticker__TickerKey__GUARD__

    #ifndef _ex_date__GUARD__
    #define _ex_date__GUARD__
    DECL_STRONG_TYPE(ex_date, DateKey);
    #endif//_ex_date__GUARD__

    #ifndef _amount__double__GUARD__
    #define _amount__double__GUARD__
    DECL_STRONG_TYPE(amount__double, double);
    #endif//_amount__double__GUARD__

    #ifndef _currency__GUARD__
    #define _currency__GUARD__
    DECL_STRONG_TYPE(currency, spiderrock::protobuf::api::Currency);
    #endif//_currency__GUARD__

    #ifndef _cash_type__GUARD__
    #define _cash_type__GUARD__
    DECL_STRONG_TYPE(cash_type, spiderrock::protobuf::api::CorpActionCash);
    #endif//_cash_type__GUARD__

    #ifndef _description__GUARD__
    #define _description__GUARD__
    DECL_STRONG_TYPE(description, string);
    #endif//_description__GUARD__

    #ifndef _ticker_sod__GUARD__
    #define _ticker_sod__GUARD__
    DECL_STRONG_TYPE(ticker_sod, TickerKey);
    #endif//_ticker_sod__GUARD__

    #ifndef _component_ratio__GUARD__
    #define _component_ratio__GUARD__
    DECL_STRONG_TYPE(component_ratio, double);
    #endif//_component_ratio__GUARD__

    #ifndef _component_fraction__GUARD__
    #define _component_fraction__GUARD__
    DECL_STRONG_TYPE(component_fraction, double);
    #endif//_component_fraction__GUARD__

    #ifndef _component_mark__GUARD__
    #define _component_mark__GUARD__
    DECL_STRONG_TYPE(component_mark, double);
    #endif//_component_mark__GUARD__

    #ifndef _component_type__GUARD__
    #define _component_type__GUARD__
    DECL_STRONG_TYPE(component_type, spiderrock::protobuf::api::CorpActionComponent);
    #endif//_component_type__GUARD__

    
    class EquityCorpActionRecordV5_PKey {
        public:
        //using statements for all types used in this class
        using ticker = spiderrock::protobuf::api::ticker__TickerKey;
        using ex_date = spiderrock::protobuf::api::ex_date;

        private:
        ticker m_ticker{};
        ex_date m_ex_date{};

        public:
		ticker get_ticker() const {
            return m_ticker;
        }
		ex_date get_ex_date() const {
            return m_ex_date;
        }
        void set_ticker(const ticker& value)  {
            m_ticker = value;
        }
        void set_ex_date(const ex_date& value)  {
            m_ex_date = value;
        }
        //templatized getters and setters
        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to EquityCorpActionRecordV5_PKey::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to EquityCorpActionRecordV5_PKey::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const ticker & value) { set_ticker(value); }
        void set(const ex_date & value) { set_ex_date(value); }


        EquityCorpActionRecordV5_PKey() {}

        virtual ~EquityCorpActionRecordV5_PKey() {
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
        bool IncludeExDate() const {
            return (m_ex_date.ByteSizeLong() > 0);
        }


        size_t ByteSizeLong() const {
            size_t totalSize = 0;
            if ( IncludeTicker()) {
                SRProtobufCPP::TickerKeyLayout tickerKeyLayout_ticker;
                m_ticker.setCodecTickerKey(tickerKeyLayout_ticker);
                totalSize += SRProtobufCPP::FieldCodec::TickerKeyFieldSize(10,tickerKeyLayout_ticker);
            }
            if ( IncludeExDate()) {
                totalSize += SRProtobufCPP::FieldCodec::DateKeyFieldSize(11, m_ex_date.get_year(), m_ex_date.get_month(), m_ex_date.get_day());
            }
            return totalSize;
        }

        void Encode(uint8_t*& dest, uint8_t* max) const {
            if ( IncludeTicker()) {
                SRProtobufCPP::TickerKeyLayout tickerKeyLayout_ticker;
                m_ticker.setCodecTickerKey(tickerKeyLayout_ticker);
                dest = SRProtobufCPP::FieldCodec::EncodeTickerKey(dest, 10, tickerKeyLayout_ticker);
            }
            if ( IncludeExDate()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateKey(dest,11, m_ex_date.get_year(), m_ex_date.get_month(), m_ex_date.get_day());
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
                    case 11: {
                        auto dateKey = SRProtobufCPP::FieldCodec::DecodeDateKey(pos,max);
                        m_ex_date.set_year(dateKey.year());
                        m_ex_date.set_month(dateKey.month());
                        m_ex_date.set_day(dateKey.day());
                        break;
                    }
                }
            }
        }

    };
    
    class EquityCorpActionRecordV5_Cash {
        public:
        //using statements for all types used in this class
        using amount = spiderrock::protobuf::api::amount__double;
        using currency = spiderrock::protobuf::api::currency;
        using cash_type = spiderrock::protobuf::api::cash_type;
        using description = spiderrock::protobuf::api::description;

        private:
        amount m_amount{};
        currency m_currency{};
        cash_type m_cash_type{};
        description m_description{};

        public:
        amount get_amount() const {
            return m_amount;
        }
        currency get_currency() const {
            return m_currency;
        }
        cash_type get_cash_type() const {
            return m_cash_type;
        }
        description get_description() const {
            return m_description;
        }
        void set_amount(const amount& value)  {
            m_amount = value;
        }
        void set_currency(const currency& value)  {
            m_currency = value;
        }
        void set_cash_type(const cash_type& value)  {
            m_cash_type = value;
        }
        void set_description(const description& value)  {
            m_description = value;
        }
        //templatized getters and setters
        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to EquityCorpActionRecordV5_Cash::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to EquityCorpActionRecordV5_Cash::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const amount & value) { set_amount(value); }
        void set(const currency & value) { set_currency(value); }
        void set(const cash_type & value) { set_cash_type(value); }
        void set(const description & value) { set_description(value); }


        EquityCorpActionRecordV5_Cash() {}

        virtual ~EquityCorpActionRecordV5_Cash() {
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
            totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(103,m_amount);
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(106,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::Currency>(m_currency)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(109,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::CorpActionCash>(m_cash_type)));
            totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(112,m_description);
            return totalSize;
        }

        uint8_t* Encode(uint8_t*& dest, uint8_t* max) const {
            dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,103,m_amount);
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,106,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::Currency>(m_currency)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,109,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::CorpActionCash>(m_cash_type)));
            dest = SRProtobufCPP::FieldCodec::EncodeString(dest,112,static_cast<string>(m_description));
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
                    case 103: {m_amount = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        break;
                    }
                    case 106: {m_currency = static_cast<spiderrock::protobuf::api::Currency>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                    case 109: {m_cash_type = static_cast<spiderrock::protobuf::api::CorpActionCash>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                    case 112: {m_description = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        break;
                    }
                }
            }
        }

    };
    
    class EquityCorpActionRecordV5_Component {
        public:
        //using statements for all types used in this class
        using ticker_sod = spiderrock::protobuf::api::ticker_sod;
        using component_ratio = spiderrock::protobuf::api::component_ratio;
        using component_fraction = spiderrock::protobuf::api::component_fraction;
        using component_mark = spiderrock::protobuf::api::component_mark;
        using component_type = spiderrock::protobuf::api::component_type;

        private:
        ticker_sod m_ticker_sod{};
        component_ratio m_component_ratio{};
        component_fraction m_component_fraction{};
        component_mark m_component_mark{};
        component_type m_component_type{};

        public:
		ticker_sod get_ticker_sod() const {
            return m_ticker_sod;
        }
        component_ratio get_component_ratio() const {
            return m_component_ratio;
        }
        component_fraction get_component_fraction() const {
            return m_component_fraction;
        }
        component_mark get_component_mark() const {
            return m_component_mark;
        }
        component_type get_component_type() const {
            return m_component_type;
        }
        void set_ticker_sod(const ticker_sod& value)  {
            m_ticker_sod = value;
        }
        void set_component_ratio(const component_ratio& value)  {
            m_component_ratio = value;
        }
        void set_component_fraction(const component_fraction& value)  {
            m_component_fraction = value;
        }
        void set_component_mark(const component_mark& value)  {
            m_component_mark = value;
        }
        void set_component_type(const component_type& value)  {
            m_component_type = value;
        }
        //templatized getters and setters
        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to EquityCorpActionRecordV5_Component::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to EquityCorpActionRecordV5_Component::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const ticker_sod & value) { set_ticker_sod(value); }
        void set(const component_ratio & value) { set_component_ratio(value); }
        void set(const component_fraction & value) { set_component_fraction(value); }
        void set(const component_mark & value) { set_component_mark(value); }
        void set(const component_type & value) { set_component_type(value); }


        EquityCorpActionRecordV5_Component() {}

        virtual ~EquityCorpActionRecordV5_Component() {
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
            SRProtobufCPP::TickerKeyLayout tickerKeyLayout;
            m_ticker_sod.setCodecTickerKey(tickerKeyLayout);
            totalSize += SRProtobufCPP::FieldCodec::TickerKeyFieldSize(118,tickerKeyLayout);
            totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(121,m_component_ratio);
            totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(124,m_component_fraction);
            totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(127,m_component_mark);
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(130,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::CorpActionComponent>(m_component_type)));
            return totalSize;
        }

        uint8_t* Encode(uint8_t*& dest, uint8_t* max) const {
            SRProtobufCPP::TickerKeyLayout tickerKeyLayout_ticker_sod;
            m_ticker_sod.setCodecTickerKey(tickerKeyLayout_ticker_sod);
            dest = SRProtobufCPP::FieldCodec::EncodeTickerKey(dest, 118, tickerKeyLayout_ticker_sod);
            dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,121,m_component_ratio);
            dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,124,m_component_fraction);
            dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,127,m_component_mark);
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,130,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::CorpActionComponent>(m_component_type)));
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
                    case 118: {
                        auto tickerKey = SRProtobufCPP::FieldCodec::DecodeTickerKey(pos,max);
                        m_ticker_sod.setFromCodec(tickerKey);
                        break;
                    }
                    case 121: {m_component_ratio = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        break;
                    }
                    case 124: {m_component_fraction = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        break;
                    }
                    case 127: {m_component_mark = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        break;
                    }
                    case 130: {m_component_type = static_cast<spiderrock::protobuf::api::CorpActionComponent>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        break;
                    }
                }
            }
        }

    };
    

    class EquityCorpActionRecordV5 {
        public:
        //using statements for all types used in this class
    
        using _meta = spiderrock::protobuf::api::_meta;
        using pkey = spiderrock::protobuf::api::EquityCorpActionRecordV5_PKey;
        using corp_action_text = spiderrock::protobuf::api::corp_action_text;
        using timestamp = spiderrock::protobuf::api::timestamp;
        using cash = spiderrock::protobuf::api::EquityCorpActionRecordV5_Cash;
        using component = spiderrock::protobuf::api::EquityCorpActionRecordV5_Component;

        private:
        _meta m__meta{};
        pkey m_pkey{};
        corp_action_text m_corp_action_text{};
        timestamp m_timestamp{};
        std::vector<cash> m_cash{};
        std::vector<component> m_component{};

        static constexpr int _mlinkHeaderLength = 14;

        public:		
        _meta get__meta() const {
            return m__meta;
        }		
        pkey get_pkey() const {
            return m_pkey;
        }		
        corp_action_text get_corp_action_text() const {
            return m_corp_action_text;
        }		
        timestamp get_timestamp() const {
            return m_timestamp;
        }
        const std::vector<cash>& get_cash_list() const {
            return m_cash;
        }
        const cash& get_cash(const int i) const {
            return m_cash.at(i);
        }
        const std::vector<component>& get_component_list() const {
            return m_component;
        }
        const component& get_component(const int i) const {
            return m_component.at(i);
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
        void set_corp_action_text(const corp_action_text& value)  {
            m_corp_action_text = value;
        }
        void set_timestamp(const timestamp& value)  {
            m_timestamp = value;
        }
        void set_cash_list(const std::vector<cash>& list)  {
            m_cash = list;
        }
        void add_cash(const cash& item) {
            m_cash.emplace_back(item);
        }
        void set_component_list(const std::vector<component>& list)  {
            m_component = list;
        }
        void add_component(const component& item) {
            m_component.emplace_back(item);
        }

        //templatized getters and setters

        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to EquityCorpActionRecordV5::get()"); return T{}; }  // specializations for valid types are listed below the class definition

        template <typename T, size_t S = sizeof(T)>
        const auto get(int i) const { static_assert(sizeof(T) == -1, "Unexpected type in call to EquityCorpActionRecordV5::get(int)"); return T{};}  // specializations for valid types are listed below the class definition

        template <typename T, size_t S = sizeof(T)>
        int count() const { static_assert(sizeof(T) == -1, "Unexpected type in call to EquityCorpActionRecordV5::count()"); return 0;}  // specializations for valid types are listed below the class definition

        //specializations for set functions for the valid types
    
        void set(const _meta & value) {
            set__meta(value);
        }
        void set(const pkey & value) {
            set_pkey(value);
        }
        void set(const corp_action_text & value) {
            set_corp_action_text(value);
        }
        void set(const timestamp & value) {
            set_timestamp(value);
        }
        void set(const cash & value) {
            add_cash(value);
        }
        void set(const component & value) {
            add_component(value);
        }

        void set(const EquityCorpActionRecordV5 & value) {
            set(value.m__meta);
            set(value.m_pkey);
            set(value.m_corp_action_text);
            set(value.m_timestamp);set_cash_list(value.m_cash);set_component_list(value.m_component);
        }

        EquityCorpActionRecordV5() {
            m__meta.set_message_type("EquityCorpActionRecordV5");
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
            std::snprintf(reinterpret_cast<char*>(data), size, "\r\nP%05d%06zd", 4760, length);
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
            std::snprintf(const_cast<char*>(s->data()), s->size(), "\r\nP%05d%06zd", 4760, length);
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
             *this = EquityCorpActionRecordV5{};
        }
        bool IncludeMeta() const {
            return (m__meta.ByteSizeLong() > 0);
        }
        bool IncludePkey() const {
            return (m_pkey.ByteSizeLong() > 0);
        }
        bool IncludeCorpActionText() const {
            return !(m_corp_action_text.empty());
        }
        bool IncludeTimestamp() const {
            return (m_timestamp.time_since_epoch().count() != 0);
        }
        bool IncludeCash() const {
            return (!m_cash.empty());
        }
        bool IncludeComponent() const {
            return (!m_component.empty());
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
            if ( IncludeCorpActionText()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(133,m_corp_action_text);
            }
            if ( IncludeTimestamp()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(136, m_timestamp);
            }
            if ( IncludeCash()) {
                for (auto& item : m_cash) {
					totalSize += SRProtobufCPP::TagCodec::Size(100, SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited);
                    totalSize += SRProtobufCPP::LengthCodec::Size((int)item.ByteSizeLong());
                    totalSize += item.ByteSizeLong();
                }
            }
            if ( IncludeComponent()) {
                for (auto& item : m_component) {
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
            if ( IncludePkey()) {
                dest = SRProtobufCPP::TagCodec::Encode(dest,2, SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited);
                dest = SRProtobufCPP::LengthCodec::Encode(dest,static_cast<int>(m_pkey.ByteSizeLong()));
                m_pkey.Encode(dest,max);
            }
            if ( IncludeCorpActionText()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,133,static_cast<string>(m_corp_action_text));
            }
            if ( IncludeTimestamp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 136, m_timestamp);
            }
            if ( IncludeCash()) {
                for (auto& item : m_cash) {
                    dest = SRProtobufCPP::TagCodec::Encode(dest, 100, SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited);
                    dest = SRProtobufCPP::LengthCodec::Encode(dest,static_cast<int>(item.ByteSizeLong()));
                    item.Encode(dest, max);
                }
            }
            if ( IncludeComponent()) {
                for (auto& item : m_component) {
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
                    case 2: {
                        if (tagType == SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited) {
                            const int length = SRProtobufCPP::LengthCodec::Decode(pos, max);
                            m_pkey.Decode(pos, pos + std::min(max - pos, static_cast<std::ptrdiff_t>(length)));
                        }
                        break;
                    }
                    case 133: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_corp_action_text = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 136: {
                        if (tagType == SRProtobufCPP::DateKeyCodec::TagType) {
                            m_timestamp = SRProtobufCPP::FieldCodec::DecodeDateTime(pos,max);
                        }
                        break;
                    }
                    case 100: {
                        if (tagType == SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited) {
                            const int length = SRProtobufCPP::LengthCodec::Decode(pos, max);
                            cash item_cash;
                            item_cash.Decode(pos, pos+length);  
                            m_cash.emplace_back(item_cash);
                        }
                        break;
                    }
                    case 115: {
                        if (tagType == SRProtobufCPP::TagCodecEnums::TagType::LengthDelimited) {
                            const int length = SRProtobufCPP::LengthCodec::Decode(pos, max);
                            component item_component;
                            item_component.Decode(pos, pos+length);  
                            m_component.emplace_back(item_component);
                        }
                        break;
                    }
                }
            }
        }

    };


    // getter definitions for all classes above, both inner and outer classes

    template<> inline const auto EquityCorpActionRecordV5::get<EquityCorpActionRecordV5::_meta>() const { return EquityCorpActionRecordV5::_meta{ m__meta}; }
    template<> inline const auto EquityCorpActionRecordV5::get<EquityCorpActionRecordV5::pkey>() const { return EquityCorpActionRecordV5::pkey{ m_pkey}; }
    template<> inline const auto EquityCorpActionRecordV5::get<EquityCorpActionRecordV5::corp_action_text>() const { return m_corp_action_text; }
    template<> inline const auto EquityCorpActionRecordV5::get<EquityCorpActionRecordV5::timestamp>() const { return m_timestamp; }
    template<> inline const auto EquityCorpActionRecordV5::get<EquityCorpActionRecordV5::cash>(int i) const { return EquityCorpActionRecordV5::cash{ get_cash(i)}; }
    template<> inline int EquityCorpActionRecordV5::count<EquityCorpActionRecordV5::cash>() const { return static_cast<int>( m_cash.size()); }
    template<> inline const auto EquityCorpActionRecordV5::get<EquityCorpActionRecordV5::component>(int i) const { return EquityCorpActionRecordV5::component{ get_component(i)}; }
    template<> inline int EquityCorpActionRecordV5::count<EquityCorpActionRecordV5::component>() const { return static_cast<int>( m_component.size()); }
    template<> inline const auto EquityCorpActionRecordV5_PKey::get<EquityCorpActionRecordV5_PKey::ticker>() const { return EquityCorpActionRecordV5_PKey::ticker{m_ticker}; }
    template<> inline const auto EquityCorpActionRecordV5_PKey::get<EquityCorpActionRecordV5_PKey::ex_date>() const { return EquityCorpActionRecordV5_PKey::ex_date{m_ex_date}; }
    
    template<> inline const auto EquityCorpActionRecordV5_Cash::get<EquityCorpActionRecordV5_Cash::amount>() const { return m_amount; }
    template<> inline const auto EquityCorpActionRecordV5_Cash::get<EquityCorpActionRecordV5_Cash::currency>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::Currency>(m_currency));}
    template<> inline const auto EquityCorpActionRecordV5_Cash::get<EquityCorpActionRecordV5_Cash::cash_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::CorpActionCash>(m_cash_type));}
    template<> inline const auto EquityCorpActionRecordV5_Cash::get<EquityCorpActionRecordV5_Cash::description>() const { return m_description; }
    
    template<> inline const auto EquityCorpActionRecordV5_Component::get<EquityCorpActionRecordV5_Component::ticker_sod>() const { return EquityCorpActionRecordV5_Component::ticker_sod{m_ticker_sod}; }
    template<> inline const auto EquityCorpActionRecordV5_Component::get<EquityCorpActionRecordV5_Component::component_ratio>() const { return m_component_ratio; }
    template<> inline const auto EquityCorpActionRecordV5_Component::get<EquityCorpActionRecordV5_Component::component_fraction>() const { return m_component_fraction; }
    template<> inline const auto EquityCorpActionRecordV5_Component::get<EquityCorpActionRecordV5_Component::component_mark>() const { return m_component_mark; }
    template<> inline const auto EquityCorpActionRecordV5_Component::get<EquityCorpActionRecordV5_Component::component_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::CorpActionComponent>(m_component_type));}
    
    // ostream operators for all classes above, output should adhere to a JSON format

    inline std::ostream& operator<<(std::ostream &o, const EquityCorpActionRecordV5_PKey& m) {
        o << "\"ticker\":{" << m.get<EquityCorpActionRecordV5_PKey::ticker>() << "}";
        o << ",\"ex_date\":{" << m.get<EquityCorpActionRecordV5_PKey::ex_date>() << "}";
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const EquityCorpActionRecordV5_Cash& m) {
        o << "\"amount\":" << m.get<EquityCorpActionRecordV5_Cash::amount>();
        o << ",\"currency\":" << (int64_t)m.get<EquityCorpActionRecordV5_Cash::currency>();
        o << ",\"cash_type\":" << (int64_t)m.get<EquityCorpActionRecordV5_Cash::cash_type>();
        o << ",\"description\":\"" << m.get<EquityCorpActionRecordV5_Cash::description>() << "\"";
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const EquityCorpActionRecordV5_Component& m) {
        o << "\"ticker_sod\":{" << m.get<EquityCorpActionRecordV5_Component::ticker_sod>() << "}";
        o << ",\"component_ratio\":" << m.get<EquityCorpActionRecordV5_Component::component_ratio>();
        o << ",\"component_fraction\":" << m.get<EquityCorpActionRecordV5_Component::component_fraction>();
        o << ",\"component_mark\":" << m.get<EquityCorpActionRecordV5_Component::component_mark>();
        o << ",\"component_type\":" << (int64_t)m.get<EquityCorpActionRecordV5_Component::component_type>();
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const EquityCorpActionRecordV5& m) {
        o << "\"_meta\":{" << m.get<EquityCorpActionRecordV5::_meta>() << "}";
        o << ",\"pkey\":{" << m.get<EquityCorpActionRecordV5::pkey>() << "}";
        o << ",\"corp_action_text\":\"" << m.get<EquityCorpActionRecordV5::corp_action_text>() << "\"";
        {
            std::time_t tt = m.get<EquityCorpActionRecordV5::timestamp>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"timestamp\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        o << ",\"cash\":[";
        {
            const char *delim = "{";
            for (int i=0; i<m.count<EquityCorpActionRecordV5::cash>(); ++i) {
                o << delim << m.get<EquityCorpActionRecordV5::cash>(i) << '}';
                delim = ",{";
            }
        }
        o << "]";
        o << ",\"component\":[";
        {
            const char *delim = "{";
            for (int i=0; i<m.count<EquityCorpActionRecordV5::component>(); ++i) {
                o << delim << m.get<EquityCorpActionRecordV5::component>(i) << '}';
                delim = ",{";
            }
        }
        o << "]";
        return o;
    }

}
}
}