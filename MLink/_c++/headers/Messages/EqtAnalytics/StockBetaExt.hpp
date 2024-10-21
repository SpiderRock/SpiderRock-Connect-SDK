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

    #ifndef _status__BetaStatus__GUARD__
    #define _status__BetaStatus__GUARD__
    DECL_STRONG_TYPE(status__BetaStatus, spiderrock::protobuf::api::BetaStatus);
    #endif//_status__BetaStatus__GUARD__

    #ifndef _beta_ind__GUARD__
    #define _beta_ind__GUARD__
    DECL_STRONG_TYPE(beta_ind, float);
    #endif//_beta_ind__GUARD__

    #ifndef _beta_sub__GUARD__
    #define _beta_sub__GUARD__
    DECL_STRONG_TYPE(beta_sub, float);
    #endif//_beta_sub__GUARD__

    #ifndef _beta_grp__GUARD__
    #define _beta_grp__GUARD__
    DECL_STRONG_TYPE(beta_grp, float);
    #endif//_beta_grp__GUARD__

    #ifndef _beta_nbr__GUARD__
    #define _beta_nbr__GUARD__
    DECL_STRONG_TYPE(beta_nbr, float);
    #endif//_beta_nbr__GUARD__

    #ifndef _beta_spy__GUARD__
    #define _beta_spy__GUARD__
    DECL_STRONG_TYPE(beta_spy, float);
    #endif//_beta_spy__GUARD__

    #ifndef _beta_spy__r2__GUARD__
    #define _beta_spy__r2__GUARD__
    DECL_STRONG_TYPE(beta_spy__r2, float);
    #endif//_beta_spy__r2__GUARD__

    #ifndef _beta_qqq__GUARD__
    #define _beta_qqq__GUARD__
    DECL_STRONG_TYPE(beta_qqq, float);
    #endif//_beta_qqq__GUARD__

    #ifndef _beta_qqq__r2__GUARD__
    #define _beta_qqq__r2__GUARD__
    DECL_STRONG_TYPE(beta_qqq__r2, float);
    #endif//_beta_qqq__r2__GUARD__

    #ifndef _beta_iwm__GUARD__
    #define _beta_iwm__GUARD__
    DECL_STRONG_TYPE(beta_iwm, float);
    #endif//_beta_iwm__GUARD__

    #ifndef _beta_iwm__r2__GUARD__
    #define _beta_iwm__r2__GUARD__
    DECL_STRONG_TYPE(beta_iwm__r2, float);
    #endif//_beta_iwm__r2__GUARD__

    #ifndef _beta_eem__GUARD__
    #define _beta_eem__GUARD__
    DECL_STRONG_TYPE(beta_eem, float);
    #endif//_beta_eem__GUARD__

    #ifndef _beta_eem__r2__GUARD__
    #define _beta_eem__r2__GUARD__
    DECL_STRONG_TYPE(beta_eem__r2, float);
    #endif//_beta_eem__r2__GUARD__

    #ifndef _beta_efa__GUARD__
    #define _beta_efa__GUARD__
    DECL_STRONG_TYPE(beta_efa, float);
    #endif//_beta_efa__GUARD__

    #ifndef _beta_efa__r2__GUARD__
    #define _beta_efa__r2__GUARD__
    DECL_STRONG_TYPE(beta_efa__r2, float);
    #endif//_beta_efa__r2__GUARD__

    #ifndef _beta_ticker__GUARD__
    #define _beta_ticker__GUARD__
    DECL_STRONG_TYPE(beta_ticker, TickerKey);
    #endif//_beta_ticker__GUARD__

    #ifndef _beta_value__GUARD__
    #define _beta_value__GUARD__
    DECL_STRONG_TYPE(beta_value, float);
    #endif//_beta_value__GUARD__

    #ifndef _beta_r2__GUARD__
    #define _beta_r2__GUARD__
    DECL_STRONG_TYPE(beta_r2, float);
    #endif//_beta_r2__GUARD__

    #ifndef _beta_ticker_a__GUARD__
    #define _beta_ticker_a__GUARD__
    DECL_STRONG_TYPE(beta_ticker_a, TickerKey);
    #endif//_beta_ticker_a__GUARD__

    #ifndef _beta_ticker_b__GUARD__
    #define _beta_ticker_b__GUARD__
    DECL_STRONG_TYPE(beta_ticker_b, TickerKey);
    #endif//_beta_ticker_b__GUARD__

    #ifndef _beta_value_a__GUARD__
    #define _beta_value_a__GUARD__
    DECL_STRONG_TYPE(beta_value_a, float);
    #endif//_beta_value_a__GUARD__

    #ifndef _beta_value_b__GUARD__
    #define _beta_value_b__GUARD__
    DECL_STRONG_TYPE(beta_value_b, float);
    #endif//_beta_value_b__GUARD__

    #ifndef _beta_r2_b__GUARD__
    #define _beta_r2_b__GUARD__
    DECL_STRONG_TYPE(beta_r2_b, float);
    #endif//_beta_r2_b__GUARD__

    #ifndef _beta_spy1y__GUARD__
    #define _beta_spy1y__GUARD__
    DECL_STRONG_TYPE(beta_spy1y, float);
    #endif//_beta_spy1y__GUARD__

    #ifndef _beta_spy1y__r2__GUARD__
    #define _beta_spy1y__r2__GUARD__
    DECL_STRONG_TYPE(beta_spy1y__r2, float);
    #endif//_beta_spy1y__r2__GUARD__

    #ifndef _timestamp__GUARD__
    #define _timestamp__GUARD__
    DECL_STRONG_TYPE(timestamp, std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds>);
    #endif//_timestamp__GUARD__

    #ifndef _ticker__TickerKey__GUARD__
    #define _ticker__TickerKey__GUARD__
    DECL_STRONG_TYPE(ticker__TickerKey, TickerKey);
    #endif//_ticker__TickerKey__GUARD__

    
    class StockBetaExt_PKey {
        public:
        //using statements for all types used in this class
        using ticker = spiderrock::protobuf::api::ticker__TickerKey;

        private:
        ticker m_ticker{};

        public:
		ticker get_ticker() const {
            return m_ticker;
        }
        void set_ticker(const ticker& value)  {
            m_ticker = value;
        }
        //templatized getters and setters
        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to StockBetaExt_PKey::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to StockBetaExt_PKey::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const ticker & value) { set_ticker(value); }


        StockBetaExt_PKey() {}

        virtual ~StockBetaExt_PKey() {
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
            return totalSize;
        }

        void Encode(uint8_t*& dest, uint8_t* max) const {
            if ( IncludeTicker()) {
                SRProtobufCPP::TickerKeyLayout tickerKeyLayout;
                m_ticker.setCodecTickerKey(tickerKeyLayout);
                dest = SRProtobufCPP::FieldCodec::EncodeTickerKey(dest, 10, tickerKeyLayout);
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
                }
            }
        }

    };
    

    class StockBetaExt {
        public:
        //using statements for all types used in this class
    
        using _meta = spiderrock::protobuf::api::_meta;
        using pkey = spiderrock::protobuf::api::StockBetaExt_PKey;
        using status = spiderrock::protobuf::api::status__BetaStatus;
        using beta_ind = spiderrock::protobuf::api::beta_ind;
        using beta_sub = spiderrock::protobuf::api::beta_sub;
        using beta_grp = spiderrock::protobuf::api::beta_grp;
        using beta_nbr = spiderrock::protobuf::api::beta_nbr;
        using beta_spy = spiderrock::protobuf::api::beta_spy;
        using beta_spy__r2 = spiderrock::protobuf::api::beta_spy__r2;
        using beta_qqq = spiderrock::protobuf::api::beta_qqq;
        using beta_qqq__r2 = spiderrock::protobuf::api::beta_qqq__r2;
        using beta_iwm = spiderrock::protobuf::api::beta_iwm;
        using beta_iwm__r2 = spiderrock::protobuf::api::beta_iwm__r2;
        using beta_eem = spiderrock::protobuf::api::beta_eem;
        using beta_eem__r2 = spiderrock::protobuf::api::beta_eem__r2;
        using beta_efa = spiderrock::protobuf::api::beta_efa;
        using beta_efa__r2 = spiderrock::protobuf::api::beta_efa__r2;
        using beta_ticker = spiderrock::protobuf::api::beta_ticker;
        using beta_value = spiderrock::protobuf::api::beta_value;
        using beta_r2 = spiderrock::protobuf::api::beta_r2;
        using beta_ticker_a = spiderrock::protobuf::api::beta_ticker_a;
        using beta_ticker_b = spiderrock::protobuf::api::beta_ticker_b;
        using beta_value_a = spiderrock::protobuf::api::beta_value_a;
        using beta_value_b = spiderrock::protobuf::api::beta_value_b;
        using beta_r2_b = spiderrock::protobuf::api::beta_r2_b;
        using beta_spy1y = spiderrock::protobuf::api::beta_spy1y;
        using beta_spy1y__r2 = spiderrock::protobuf::api::beta_spy1y__r2;
        using timestamp = spiderrock::protobuf::api::timestamp;

        private:
        _meta m__meta{};
        pkey m_pkey{};
        status m_status{};
        beta_ind m_beta_ind{};
        beta_sub m_beta_sub{};
        beta_grp m_beta_grp{};
        beta_nbr m_beta_nbr{};
        beta_spy m_beta_spy{};
        beta_spy__r2 m_beta_spy__r2{};
        beta_qqq m_beta_qqq{};
        beta_qqq__r2 m_beta_qqq__r2{};
        beta_iwm m_beta_iwm{};
        beta_iwm__r2 m_beta_iwm__r2{};
        beta_eem m_beta_eem{};
        beta_eem__r2 m_beta_eem__r2{};
        beta_efa m_beta_efa{};
        beta_efa__r2 m_beta_efa__r2{};
        beta_ticker m_beta_ticker{};
        beta_value m_beta_value{};
        beta_r2 m_beta_r2{};
        beta_ticker_a m_beta_ticker_a{};
        beta_ticker_b m_beta_ticker_b{};
        beta_value_a m_beta_value_a{};
        beta_value_b m_beta_value_b{};
        beta_r2_b m_beta_r2_b{};
        beta_spy1y m_beta_spy1y{};
        beta_spy1y__r2 m_beta_spy1y__r2{};
        timestamp m_timestamp{};

        static constexpr int _mlinkHeaderLength = 14;

        public:		
        _meta get__meta() const {
            return m__meta;
        }		
        pkey get_pkey() const {
            return m_pkey;
        }		
        status get_status() const {
            return m_status;
        }		
        beta_ind get_beta_ind() const {
            return m_beta_ind;
        }		
        beta_sub get_beta_sub() const {
            return m_beta_sub;
        }		
        beta_grp get_beta_grp() const {
            return m_beta_grp;
        }		
        beta_nbr get_beta_nbr() const {
            return m_beta_nbr;
        }		
        beta_spy get_beta_spy() const {
            return m_beta_spy;
        }		
        beta_spy__r2 get_beta_spy__r2() const {
            return m_beta_spy__r2;
        }		
        beta_qqq get_beta_qqq() const {
            return m_beta_qqq;
        }		
        beta_qqq__r2 get_beta_qqq__r2() const {
            return m_beta_qqq__r2;
        }		
        beta_iwm get_beta_iwm() const {
            return m_beta_iwm;
        }		
        beta_iwm__r2 get_beta_iwm__r2() const {
            return m_beta_iwm__r2;
        }		
        beta_eem get_beta_eem() const {
            return m_beta_eem;
        }		
        beta_eem__r2 get_beta_eem__r2() const {
            return m_beta_eem__r2;
        }		
        beta_efa get_beta_efa() const {
            return m_beta_efa;
        }		
        beta_efa__r2 get_beta_efa__r2() const {
            return m_beta_efa__r2;
        }		
        beta_ticker get_beta_ticker() const {
            return m_beta_ticker;
        }		
        beta_value get_beta_value() const {
            return m_beta_value;
        }		
        beta_r2 get_beta_r2() const {
            return m_beta_r2;
        }		
        beta_ticker_a get_beta_ticker_a() const {
            return m_beta_ticker_a;
        }		
        beta_ticker_b get_beta_ticker_b() const {
            return m_beta_ticker_b;
        }		
        beta_value_a get_beta_value_a() const {
            return m_beta_value_a;
        }		
        beta_value_b get_beta_value_b() const {
            return m_beta_value_b;
        }		
        beta_r2_b get_beta_r2_b() const {
            return m_beta_r2_b;
        }		
        beta_spy1y get_beta_spy1y() const {
            return m_beta_spy1y;
        }		
        beta_spy1y__r2 get_beta_spy1y__r2() const {
            return m_beta_spy1y__r2;
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
        void set_status(const status& value)  {
            m_status = value;
        }
        void set_beta_ind(const beta_ind& value)  {
            m_beta_ind = value;
        }
        void set_beta_sub(const beta_sub& value)  {
            m_beta_sub = value;
        }
        void set_beta_grp(const beta_grp& value)  {
            m_beta_grp = value;
        }
        void set_beta_nbr(const beta_nbr& value)  {
            m_beta_nbr = value;
        }
        void set_beta_spy(const beta_spy& value)  {
            m_beta_spy = value;
        }
        void set_beta_spy__r2(const beta_spy__r2& value)  {
            m_beta_spy__r2 = value;
        }
        void set_beta_qqq(const beta_qqq& value)  {
            m_beta_qqq = value;
        }
        void set_beta_qqq__r2(const beta_qqq__r2& value)  {
            m_beta_qqq__r2 = value;
        }
        void set_beta_iwm(const beta_iwm& value)  {
            m_beta_iwm = value;
        }
        void set_beta_iwm__r2(const beta_iwm__r2& value)  {
            m_beta_iwm__r2 = value;
        }
        void set_beta_eem(const beta_eem& value)  {
            m_beta_eem = value;
        }
        void set_beta_eem__r2(const beta_eem__r2& value)  {
            m_beta_eem__r2 = value;
        }
        void set_beta_efa(const beta_efa& value)  {
            m_beta_efa = value;
        }
        void set_beta_efa__r2(const beta_efa__r2& value)  {
            m_beta_efa__r2 = value;
        }
        void set_beta_ticker(const beta_ticker& value)  {
            m_beta_ticker = value;
        }
        void set_beta_value(const beta_value& value)  {
            m_beta_value = value;
        }
        void set_beta_r2(const beta_r2& value)  {
            m_beta_r2 = value;
        }
        void set_beta_ticker_a(const beta_ticker_a& value)  {
            m_beta_ticker_a = value;
        }
        void set_beta_ticker_b(const beta_ticker_b& value)  {
            m_beta_ticker_b = value;
        }
        void set_beta_value_a(const beta_value_a& value)  {
            m_beta_value_a = value;
        }
        void set_beta_value_b(const beta_value_b& value)  {
            m_beta_value_b = value;
        }
        void set_beta_r2_b(const beta_r2_b& value)  {
            m_beta_r2_b = value;
        }
        void set_beta_spy1y(const beta_spy1y& value)  {
            m_beta_spy1y = value;
        }
        void set_beta_spy1y__r2(const beta_spy1y__r2& value)  {
            m_beta_spy1y__r2 = value;
        }
        void set_timestamp(const timestamp& value)  {
            m_timestamp = value;
        }

        //templatized getters and setters

        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to StockBetaExt::get()"); return T{}; }  // specializations for valid types are listed below the class definition

        //specializations for set functions for the valid types
    
        void set(const _meta & value) {
            set__meta(value);
        }
        void set(const pkey & value) {
            set_pkey(value);
        }
        void set(const status & value) {
            set_status(value);
        }
        void set(const beta_ind & value) {
            set_beta_ind(value);
        }
        void set(const beta_sub & value) {
            set_beta_sub(value);
        }
        void set(const beta_grp & value) {
            set_beta_grp(value);
        }
        void set(const beta_nbr & value) {
            set_beta_nbr(value);
        }
        void set(const beta_spy & value) {
            set_beta_spy(value);
        }
        void set(const beta_spy__r2 & value) {
            set_beta_spy__r2(value);
        }
        void set(const beta_qqq & value) {
            set_beta_qqq(value);
        }
        void set(const beta_qqq__r2 & value) {
            set_beta_qqq__r2(value);
        }
        void set(const beta_iwm & value) {
            set_beta_iwm(value);
        }
        void set(const beta_iwm__r2 & value) {
            set_beta_iwm__r2(value);
        }
        void set(const beta_eem & value) {
            set_beta_eem(value);
        }
        void set(const beta_eem__r2 & value) {
            set_beta_eem__r2(value);
        }
        void set(const beta_efa & value) {
            set_beta_efa(value);
        }
        void set(const beta_efa__r2 & value) {
            set_beta_efa__r2(value);
        }
        void set(const beta_ticker & value) {
            set_beta_ticker(value);
        }
        void set(const beta_value & value) {
            set_beta_value(value);
        }
        void set(const beta_r2 & value) {
            set_beta_r2(value);
        }
        void set(const beta_ticker_a & value) {
            set_beta_ticker_a(value);
        }
        void set(const beta_ticker_b & value) {
            set_beta_ticker_b(value);
        }
        void set(const beta_value_a & value) {
            set_beta_value_a(value);
        }
        void set(const beta_value_b & value) {
            set_beta_value_b(value);
        }
        void set(const beta_r2_b & value) {
            set_beta_r2_b(value);
        }
        void set(const beta_spy1y & value) {
            set_beta_spy1y(value);
        }
        void set(const beta_spy1y__r2 & value) {
            set_beta_spy1y__r2(value);
        }
        void set(const timestamp & value) {
            set_timestamp(value);
        }

        void set(const StockBetaExt & value) {
            set(value.m__meta);
            set(value.m_pkey);
            set(value.m_status);
            set(value.m_beta_ind);
            set(value.m_beta_sub);
            set(value.m_beta_grp);
            set(value.m_beta_nbr);
            set(value.m_beta_spy);
            set(value.m_beta_spy__r2);
            set(value.m_beta_qqq);
            set(value.m_beta_qqq__r2);
            set(value.m_beta_iwm);
            set(value.m_beta_iwm__r2);
            set(value.m_beta_eem);
            set(value.m_beta_eem__r2);
            set(value.m_beta_efa);
            set(value.m_beta_efa__r2);
            set(value.m_beta_ticker);
            set(value.m_beta_value);
            set(value.m_beta_r2);
            set(value.m_beta_ticker_a);
            set(value.m_beta_ticker_b);
            set(value.m_beta_value_a);
            set(value.m_beta_value_b);
            set(value.m_beta_r2_b);
            set(value.m_beta_spy1y);
            set(value.m_beta_spy1y__r2);
            set(value.m_timestamp);
        }

        StockBetaExt() {
            m__meta.set_message_type("StockBetaExt");
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
            std::snprintf(reinterpret_cast<char*>(data), size, "\r\nP%05d%06zd", 3245, length);
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
            std::snprintf(const_cast<char*>(s->data()), s->size(), "\r\nP%05d%06zd", 3245, length);
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
             *this = StockBetaExt{};
        }
        bool IncludeMeta() const {
            return (m__meta.ByteSizeLong() > 0);
        }
        bool IncludePkey() const {
            return (m_pkey.ByteSizeLong() > 0);
        }
        bool IncludeBetaInd() const {
            return !(m_beta_ind == 0.0);
        }
        bool IncludeBetaSub() const {
            return !(m_beta_sub == 0.0);
        }
        bool IncludeBetaGrp() const {
            return !(m_beta_grp == 0.0);
        }
        bool IncludeBetaNbr() const {
            return !(m_beta_nbr == 0.0);
        }
        bool IncludeBetaSpy() const {
            return !(m_beta_spy == 0.0);
        }
        bool IncludeBetaSpyR2() const {
            return !(m_beta_spy__r2 == 0.0);
        }
        bool IncludeBetaQqq() const {
            return !(m_beta_qqq == 0.0);
        }
        bool IncludeBetaQqqR2() const {
            return !(m_beta_qqq__r2 == 0.0);
        }
        bool IncludeBetaIwm() const {
            return !(m_beta_iwm == 0.0);
        }
        bool IncludeBetaIwmR2() const {
            return !(m_beta_iwm__r2 == 0.0);
        }
        bool IncludeBetaEem() const {
            return !(m_beta_eem == 0.0);
        }
        bool IncludeBetaEemR2() const {
            return !(m_beta_eem__r2 == 0.0);
        }
        bool IncludeBetaEfa() const {
            return !(m_beta_efa == 0.0);
        }
        bool IncludeBetaEfaR2() const {
            return !(m_beta_efa__r2 == 0.0);
        }
        bool IncludeBetaTicker() const {
            return (m_beta_ticker.ByteSizeLong() > 0);
        }
        bool IncludeBetaValue() const {
            return !(m_beta_value == 0.0);
        }
        bool IncludeBetaR2() const {
            return !(m_beta_r2 == 0.0);
        }
        bool IncludeBetaTickerA() const {
            return (m_beta_ticker_a.ByteSizeLong() > 0);
        }
        bool IncludeBetaTickerB() const {
            return (m_beta_ticker_b.ByteSizeLong() > 0);
        }
        bool IncludeBetaValueA() const {
            return !(m_beta_value_a == 0.0);
        }
        bool IncludeBetaValueB() const {
            return !(m_beta_value_b == 0.0);
        }
        bool IncludeBetaR2B() const {
            return !(m_beta_r2_b == 0.0);
        }
        bool IncludeBetaSpy1y() const {
            return !(m_beta_spy1y == 0.0);
        }
        bool IncludeBetaSpy1yR2() const {
            return !(m_beta_spy1y__r2 == 0.0);
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
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(100,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BetaStatus>(m_status)));
            if ( IncludeBetaInd()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(103,m_beta_ind);
            }
            if ( IncludeBetaSub()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(106,m_beta_sub);
            }
            if ( IncludeBetaGrp()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(109,m_beta_grp);
            }
            if ( IncludeBetaNbr()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(112,m_beta_nbr);
            }
            if ( IncludeBetaSpy()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(115,m_beta_spy);
            }
            if ( IncludeBetaSpyR2()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(118,m_beta_spy__r2);
            }
            if ( IncludeBetaQqq()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(121,m_beta_qqq);
            }
            if ( IncludeBetaQqqR2()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(124,m_beta_qqq__r2);
            }
            if ( IncludeBetaIwm()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(127,m_beta_iwm);
            }
            if ( IncludeBetaIwmR2()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(130,m_beta_iwm__r2);
            }
            if ( IncludeBetaEem()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(133,m_beta_eem);
            }
            if ( IncludeBetaEemR2()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(136,m_beta_eem__r2);
            }
            if ( IncludeBetaEfa()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(139,m_beta_efa);
            }
            if ( IncludeBetaEfaR2()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(142,m_beta_efa__r2);
            }
            if ( IncludeBetaTicker()) {
                SRProtobufCPP::TickerKeyLayout tickerKeyLayout{};
                m_beta_ticker.setCodecTickerKey(tickerKeyLayout);
                totalSize += SRProtobufCPP::FieldCodec::TickerKeyFieldSize(145, tickerKeyLayout);
            }
            if ( IncludeBetaValue()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(148,m_beta_value);
            }
            if ( IncludeBetaR2()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(151,m_beta_r2);
            }
            if ( IncludeBetaTickerA()) {
                SRProtobufCPP::TickerKeyLayout tickerKeyLayout{};
                m_beta_ticker_a.setCodecTickerKey(tickerKeyLayout);
                totalSize += SRProtobufCPP::FieldCodec::TickerKeyFieldSize(154, tickerKeyLayout);
            }
            if ( IncludeBetaTickerB()) {
                SRProtobufCPP::TickerKeyLayout tickerKeyLayout{};
                m_beta_ticker_b.setCodecTickerKey(tickerKeyLayout);
                totalSize += SRProtobufCPP::FieldCodec::TickerKeyFieldSize(157, tickerKeyLayout);
            }
            if ( IncludeBetaValueA()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(160,m_beta_value_a);
            }
            if ( IncludeBetaValueB()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(163,m_beta_value_b);
            }
            if ( IncludeBetaR2B()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(166,m_beta_r2_b);
            }
            if ( IncludeBetaSpy1y()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(169,m_beta_spy1y);
            }
            if ( IncludeBetaSpy1yR2()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(172,m_beta_spy1y__r2);
            }
            if ( IncludeTimestamp()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(175, m_timestamp);
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
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,100,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BetaStatus>(m_status)));
            if ( IncludeBetaInd()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,103,m_beta_ind);
            }
            if ( IncludeBetaSub()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,106,m_beta_sub);
            }
            if ( IncludeBetaGrp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,109,m_beta_grp);
            }
            if ( IncludeBetaNbr()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,112,m_beta_nbr);
            }
            if ( IncludeBetaSpy()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,115,m_beta_spy);
            }
            if ( IncludeBetaSpyR2()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,118,m_beta_spy__r2);
            }
            if ( IncludeBetaQqq()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,121,m_beta_qqq);
            }
            if ( IncludeBetaQqqR2()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,124,m_beta_qqq__r2);
            }
            if ( IncludeBetaIwm()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,127,m_beta_iwm);
            }
            if ( IncludeBetaIwmR2()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,130,m_beta_iwm__r2);
            }
            if ( IncludeBetaEem()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,133,m_beta_eem);
            }
            if ( IncludeBetaEemR2()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,136,m_beta_eem__r2);
            }
            if ( IncludeBetaEfa()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,139,m_beta_efa);
            }
            if ( IncludeBetaEfaR2()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,142,m_beta_efa__r2);
            }
            if ( IncludeBetaTicker()) {
                SRProtobufCPP::TickerKeyLayout tickerKeyLayout{};
                m_beta_ticker.setCodecTickerKey(tickerKeyLayout);
                dest = SRProtobufCPP::FieldCodec::EncodeTickerKey(dest, 145, tickerKeyLayout);
            }
            if ( IncludeBetaValue()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,148,m_beta_value);
            }
            if ( IncludeBetaR2()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,151,m_beta_r2);
            }
            if ( IncludeBetaTickerA()) {
                SRProtobufCPP::TickerKeyLayout tickerKeyLayout{};
                m_beta_ticker_a.setCodecTickerKey(tickerKeyLayout);
                dest = SRProtobufCPP::FieldCodec::EncodeTickerKey(dest, 154, tickerKeyLayout);
            }
            if ( IncludeBetaTickerB()) {
                SRProtobufCPP::TickerKeyLayout tickerKeyLayout{};
                m_beta_ticker_b.setCodecTickerKey(tickerKeyLayout);
                dest = SRProtobufCPP::FieldCodec::EncodeTickerKey(dest, 157, tickerKeyLayout);
            }
            if ( IncludeBetaValueA()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,160,m_beta_value_a);
            }
            if ( IncludeBetaValueB()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,163,m_beta_value_b);
            }
            if ( IncludeBetaR2B()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,166,m_beta_r2_b);
            }
            if ( IncludeBetaSpy1y()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,169,m_beta_spy1y);
            }
            if ( IncludeBetaSpy1yR2()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,172,m_beta_spy1y__r2);
            }
            if ( IncludeTimestamp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 175, m_timestamp);
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
                            m_status = static_cast<spiderrock::protobuf::api::BetaStatus>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 103: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_beta_ind = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 106: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_beta_sub = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 109: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_beta_grp = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 112: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_beta_nbr = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 115: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_beta_spy = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 118: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_beta_spy__r2 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 121: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_beta_qqq = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 124: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_beta_qqq__r2 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 127: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_beta_iwm = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 130: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_beta_iwm__r2 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 133: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_beta_eem = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 136: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_beta_eem__r2 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 139: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_beta_efa = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 142: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_beta_efa__r2 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 145: {
                        if (tagType == SRProtobufCPP::TickerKeyCodec::TagType){
                            auto tickerKey = SRProtobufCPP::FieldCodec::DecodeTickerKey(pos,max);
                            m_beta_ticker.setFromCodec(tickerKey);
                        }
                        break;
                    }
                    case 148: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_beta_value = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 151: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_beta_r2 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 154: {
                        if (tagType == SRProtobufCPP::TickerKeyCodec::TagType){
                            auto tickerKey = SRProtobufCPP::FieldCodec::DecodeTickerKey(pos,max);
                            m_beta_ticker_a.setFromCodec(tickerKey);
                        }
                        break;
                    }
                    case 157: {
                        if (tagType == SRProtobufCPP::TickerKeyCodec::TagType){
                            auto tickerKey = SRProtobufCPP::FieldCodec::DecodeTickerKey(pos,max);
                            m_beta_ticker_b.setFromCodec(tickerKey);
                        }
                        break;
                    }
                    case 160: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_beta_value_a = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 163: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_beta_value_b = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 166: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_beta_r2_b = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 169: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_beta_spy1y = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 172: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_beta_spy1y__r2 = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 175: {
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

    template<> inline const auto StockBetaExt::get<StockBetaExt::_meta>() const { return StockBetaExt::_meta{ m__meta}; }
    template<> inline const auto StockBetaExt::get<StockBetaExt::pkey>() const { return StockBetaExt::pkey{ m_pkey}; }
    template<> inline const auto StockBetaExt::get<StockBetaExt::status>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::BetaStatus>( m_status)); }
    template<> inline const auto StockBetaExt::get<StockBetaExt::beta_ind>() const { return m_beta_ind; }
    template<> inline const auto StockBetaExt::get<StockBetaExt::beta_sub>() const { return m_beta_sub; }
    template<> inline const auto StockBetaExt::get<StockBetaExt::beta_grp>() const { return m_beta_grp; }
    template<> inline const auto StockBetaExt::get<StockBetaExt::beta_nbr>() const { return m_beta_nbr; }
    template<> inline const auto StockBetaExt::get<StockBetaExt::beta_spy>() const { return m_beta_spy; }
    template<> inline const auto StockBetaExt::get<StockBetaExt::beta_spy__r2>() const { return m_beta_spy__r2; }
    template<> inline const auto StockBetaExt::get<StockBetaExt::beta_qqq>() const { return m_beta_qqq; }
    template<> inline const auto StockBetaExt::get<StockBetaExt::beta_qqq__r2>() const { return m_beta_qqq__r2; }
    template<> inline const auto StockBetaExt::get<StockBetaExt::beta_iwm>() const { return m_beta_iwm; }
    template<> inline const auto StockBetaExt::get<StockBetaExt::beta_iwm__r2>() const { return m_beta_iwm__r2; }
    template<> inline const auto StockBetaExt::get<StockBetaExt::beta_eem>() const { return m_beta_eem; }
    template<> inline const auto StockBetaExt::get<StockBetaExt::beta_eem__r2>() const { return m_beta_eem__r2; }
    template<> inline const auto StockBetaExt::get<StockBetaExt::beta_efa>() const { return m_beta_efa; }
    template<> inline const auto StockBetaExt::get<StockBetaExt::beta_efa__r2>() const { return m_beta_efa__r2; }
    template<> inline const auto StockBetaExt::get<StockBetaExt::beta_ticker>() const { return StockBetaExt::beta_ticker{ m_beta_ticker}; }
    template<> inline const auto StockBetaExt::get<StockBetaExt::beta_value>() const { return m_beta_value; }
    template<> inline const auto StockBetaExt::get<StockBetaExt::beta_r2>() const { return m_beta_r2; }
    template<> inline const auto StockBetaExt::get<StockBetaExt::beta_ticker_a>() const { return StockBetaExt::beta_ticker_a{ m_beta_ticker_a}; }
    template<> inline const auto StockBetaExt::get<StockBetaExt::beta_ticker_b>() const { return StockBetaExt::beta_ticker_b{ m_beta_ticker_b}; }
    template<> inline const auto StockBetaExt::get<StockBetaExt::beta_value_a>() const { return m_beta_value_a; }
    template<> inline const auto StockBetaExt::get<StockBetaExt::beta_value_b>() const { return m_beta_value_b; }
    template<> inline const auto StockBetaExt::get<StockBetaExt::beta_r2_b>() const { return m_beta_r2_b; }
    template<> inline const auto StockBetaExt::get<StockBetaExt::beta_spy1y>() const { return m_beta_spy1y; }
    template<> inline const auto StockBetaExt::get<StockBetaExt::beta_spy1y__r2>() const { return m_beta_spy1y__r2; }
    template<> inline const auto StockBetaExt::get<StockBetaExt::timestamp>() const { return m_timestamp; }
    template<> inline const auto StockBetaExt_PKey::get<StockBetaExt_PKey::ticker>() const { return StockBetaExt_PKey::ticker{m_ticker}; }
    
    // ostream operators for all classes above, output should adhere to a JSON format

    inline std::ostream& operator<<(std::ostream &o, const StockBetaExt_PKey& m) {
        o << "\"ticker\":{" << m.get<StockBetaExt_PKey::ticker>() << "}";
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const StockBetaExt& m) {
        o << "\"_meta\":{" << m.get<StockBetaExt::_meta>() << "}";
        o << ",\"pkey\":{" << m.get<StockBetaExt::pkey>() << "}";
        o << ",\"status\":" << (int64_t)m.get<StockBetaExt::status>();
        o << ",\"beta_ind\":" << m.get<StockBetaExt::beta_ind>();
        o << ",\"beta_sub\":" << m.get<StockBetaExt::beta_sub>();
        o << ",\"beta_grp\":" << m.get<StockBetaExt::beta_grp>();
        o << ",\"beta_nbr\":" << m.get<StockBetaExt::beta_nbr>();
        o << ",\"beta_spy\":" << m.get<StockBetaExt::beta_spy>();
        o << ",\"beta_spy__r2\":" << m.get<StockBetaExt::beta_spy__r2>();
        o << ",\"beta_qqq\":" << m.get<StockBetaExt::beta_qqq>();
        o << ",\"beta_qqq__r2\":" << m.get<StockBetaExt::beta_qqq__r2>();
        o << ",\"beta_iwm\":" << m.get<StockBetaExt::beta_iwm>();
        o << ",\"beta_iwm__r2\":" << m.get<StockBetaExt::beta_iwm__r2>();
        o << ",\"beta_eem\":" << m.get<StockBetaExt::beta_eem>();
        o << ",\"beta_eem__r2\":" << m.get<StockBetaExt::beta_eem__r2>();
        o << ",\"beta_efa\":" << m.get<StockBetaExt::beta_efa>();
        o << ",\"beta_efa__r2\":" << m.get<StockBetaExt::beta_efa__r2>();
        o << ",\"beta_ticker\":{" << m.get<StockBetaExt::beta_ticker>() << "}";
        o << ",\"beta_value\":" << m.get<StockBetaExt::beta_value>();
        o << ",\"beta_r2\":" << m.get<StockBetaExt::beta_r2>();
        o << ",\"beta_ticker_a\":{" << m.get<StockBetaExt::beta_ticker_a>() << "}";
        o << ",\"beta_ticker_b\":{" << m.get<StockBetaExt::beta_ticker_b>() << "}";
        o << ",\"beta_value_a\":" << m.get<StockBetaExt::beta_value_a>();
        o << ",\"beta_value_b\":" << m.get<StockBetaExt::beta_value_b>();
        o << ",\"beta_r2_b\":" << m.get<StockBetaExt::beta_r2_b>();
        o << ",\"beta_spy1y\":" << m.get<StockBetaExt::beta_spy1y>();
        o << ",\"beta_spy1y__r2\":" << m.get<StockBetaExt::beta_spy1y__r2>();
        {
            std::time_t tt = m.get<StockBetaExt::timestamp>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"timestamp\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        return o;
    }

}
}
}