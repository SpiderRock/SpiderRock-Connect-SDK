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

    #ifndef _stk_enabled__GUARD__
    #define _stk_enabled__GUARD__
    DECL_STRONG_TYPE(stk_enabled, spiderrock::protobuf::api::MarState);
    #endif//_stk_enabled__GUARD__

    #ifndef _fut_enabled__GUARD__
    #define _fut_enabled__GUARD__
    DECL_STRONG_TYPE(fut_enabled, spiderrock::protobuf::api::MarState);
    #endif//_fut_enabled__GUARD__

    #ifndef _opt_enabled__GUARD__
    #define _opt_enabled__GUARD__
    DECL_STRONG_TYPE(opt_enabled, spiderrock::protobuf::api::MarState);
    #endif//_opt_enabled__GUARD__

    #ifndef _order_max_margin__GUARD__
    #define _order_max_margin__GUARD__
    DECL_STRONG_TYPE(order_max_margin, float);
    #endif//_order_max_margin__GUARD__

    #ifndef _order_max_stk_qty__GUARD__
    #define _order_max_stk_qty__GUARD__
    DECL_STRONG_TYPE(order_max_stk_qty, int32);
    #endif//_order_max_stk_qty__GUARD__

    #ifndef _order_max_fut_qty__GUARD__
    #define _order_max_fut_qty__GUARD__
    DECL_STRONG_TYPE(order_max_fut_qty, int32);
    #endif//_order_max_fut_qty__GUARD__

    #ifndef _order_max_opt_qty__GUARD__
    #define _order_max_opt_qty__GUARD__
    DECL_STRONG_TYPE(order_max_opt_qty, int32);
    #endif//_order_max_opt_qty__GUARD__

    #ifndef _order_max_stk_ddelta__GUARD__
    #define _order_max_stk_ddelta__GUARD__
    DECL_STRONG_TYPE(order_max_stk_ddelta, float);
    #endif//_order_max_stk_ddelta__GUARD__

    #ifndef _order_max_fut_ddelta__GUARD__
    #define _order_max_fut_ddelta__GUARD__
    DECL_STRONG_TYPE(order_max_fut_ddelta, float);
    #endif//_order_max_fut_ddelta__GUARD__

    #ifndef _order_max_opt_ddelta__GUARD__
    #define _order_max_opt_ddelta__GUARD__
    DECL_STRONG_TYPE(order_max_opt_ddelta, float);
    #endif//_order_max_opt_ddelta__GUARD__

    #ifndef _stk_collar_pct__GUARD__
    #define _stk_collar_pct__GUARD__
    DECL_STRONG_TYPE(stk_collar_pct, float);
    #endif//_stk_collar_pct__GUARD__

    #ifndef _fut_collar_pct__GUARD__
    #define _fut_collar_pct__GUARD__
    DECL_STRONG_TYPE(fut_collar_pct, float);
    #endif//_fut_collar_pct__GUARD__

    #ifndef _opt_collar_pct__GUARD__
    #define _opt_collar_pct__GUARD__
    DECL_STRONG_TYPE(opt_collar_pct, float);
    #endif//_opt_collar_pct__GUARD__

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

    #ifndef _ticker__TickerKey__GUARD__
    #define _ticker__TickerKey__GUARD__
    DECL_STRONG_TYPE(ticker__TickerKey, TickerKey);
    #endif//_ticker__TickerKey__GUARD__

    
    class GlobalRiskControl_PKey {
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
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to GlobalRiskControl_PKey::get()"); return T{}; }  // specializations for valid types are listed below the outer class definition
        template <typename T, size_t S = sizeof(T)>
        void set(const T& value) { static_assert(sizeof(T) == -1, "Unexpected type in call to GlobalRiskControl_PKey::set()"); }  // specializations for valid types are listed below

        //specializations for set functions for the valid types
        
        void set(const ticker & value) { set_ticker(value); }


        GlobalRiskControl_PKey() {}

        virtual ~GlobalRiskControl_PKey() {
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
                SRProtobufCPP::TickerKeyLayout tickerKeyLayout_ticker;
                m_ticker.setCodecTickerKey(tickerKeyLayout_ticker);
                totalSize += SRProtobufCPP::FieldCodec::TickerKeyFieldSize(10,tickerKeyLayout_ticker);
            }
            return totalSize;
        }

        void Encode(uint8_t*& dest, uint8_t* max) const {
            if ( IncludeTicker()) {
                SRProtobufCPP::TickerKeyLayout tickerKeyLayout_ticker;
                m_ticker.setCodecTickerKey(tickerKeyLayout_ticker);
                dest = SRProtobufCPP::FieldCodec::EncodeTickerKey(dest, 10, tickerKeyLayout_ticker);
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
    

    class GlobalRiskControl {
        public:
        //using statements for all types used in this class
    
        using _meta = spiderrock::protobuf::api::_meta;
        using pkey = spiderrock::protobuf::api::GlobalRiskControl_PKey;
        using stk_enabled = spiderrock::protobuf::api::stk_enabled;
        using fut_enabled = spiderrock::protobuf::api::fut_enabled;
        using opt_enabled = spiderrock::protobuf::api::opt_enabled;
        using order_max_margin = spiderrock::protobuf::api::order_max_margin;
        using order_max_stk_qty = spiderrock::protobuf::api::order_max_stk_qty;
        using order_max_fut_qty = spiderrock::protobuf::api::order_max_fut_qty;
        using order_max_opt_qty = spiderrock::protobuf::api::order_max_opt_qty;
        using order_max_stk_ddelta = spiderrock::protobuf::api::order_max_stk_ddelta;
        using order_max_fut_ddelta = spiderrock::protobuf::api::order_max_fut_ddelta;
        using order_max_opt_ddelta = spiderrock::protobuf::api::order_max_opt_ddelta;
        using stk_collar_pct = spiderrock::protobuf::api::stk_collar_pct;
        using fut_collar_pct = spiderrock::protobuf::api::fut_collar_pct;
        using opt_collar_pct = spiderrock::protobuf::api::opt_collar_pct;
        using modified_by = spiderrock::protobuf::api::modified_by;
        using modified_in = spiderrock::protobuf::api::modified_in;
        using timestamp = spiderrock::protobuf::api::timestamp;

        private:
        _meta m__meta{};
        pkey m_pkey{};
        stk_enabled m_stk_enabled{};
        fut_enabled m_fut_enabled{};
        opt_enabled m_opt_enabled{};
        order_max_margin m_order_max_margin{};
        order_max_stk_qty m_order_max_stk_qty{};
        order_max_fut_qty m_order_max_fut_qty{};
        order_max_opt_qty m_order_max_opt_qty{};
        order_max_stk_ddelta m_order_max_stk_ddelta{};
        order_max_fut_ddelta m_order_max_fut_ddelta{};
        order_max_opt_ddelta m_order_max_opt_ddelta{};
        stk_collar_pct m_stk_collar_pct{};
        fut_collar_pct m_fut_collar_pct{};
        opt_collar_pct m_opt_collar_pct{};
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
        stk_enabled get_stk_enabled() const {
            return m_stk_enabled;
        }		
        fut_enabled get_fut_enabled() const {
            return m_fut_enabled;
        }		
        opt_enabled get_opt_enabled() const {
            return m_opt_enabled;
        }		
        order_max_margin get_order_max_margin() const {
            return m_order_max_margin;
        }		
        order_max_stk_qty get_order_max_stk_qty() const {
            return m_order_max_stk_qty;
        }		
        order_max_fut_qty get_order_max_fut_qty() const {
            return m_order_max_fut_qty;
        }		
        order_max_opt_qty get_order_max_opt_qty() const {
            return m_order_max_opt_qty;
        }		
        order_max_stk_ddelta get_order_max_stk_ddelta() const {
            return m_order_max_stk_ddelta;
        }		
        order_max_fut_ddelta get_order_max_fut_ddelta() const {
            return m_order_max_fut_ddelta;
        }		
        order_max_opt_ddelta get_order_max_opt_ddelta() const {
            return m_order_max_opt_ddelta;
        }		
        stk_collar_pct get_stk_collar_pct() const {
            return m_stk_collar_pct;
        }		
        fut_collar_pct get_fut_collar_pct() const {
            return m_fut_collar_pct;
        }		
        opt_collar_pct get_opt_collar_pct() const {
            return m_opt_collar_pct;
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
        void set_stk_enabled(const stk_enabled& value)  {
            m_stk_enabled = value;
        }
        void set_fut_enabled(const fut_enabled& value)  {
            m_fut_enabled = value;
        }
        void set_opt_enabled(const opt_enabled& value)  {
            m_opt_enabled = value;
        }
        void set_order_max_margin(const order_max_margin& value)  {
            m_order_max_margin = value;
        }
        void set_order_max_stk_qty(const order_max_stk_qty& value)  {
            m_order_max_stk_qty = value;
        }
        void set_order_max_fut_qty(const order_max_fut_qty& value)  {
            m_order_max_fut_qty = value;
        }
        void set_order_max_opt_qty(const order_max_opt_qty& value)  {
            m_order_max_opt_qty = value;
        }
        void set_order_max_stk_ddelta(const order_max_stk_ddelta& value)  {
            m_order_max_stk_ddelta = value;
        }
        void set_order_max_fut_ddelta(const order_max_fut_ddelta& value)  {
            m_order_max_fut_ddelta = value;
        }
        void set_order_max_opt_ddelta(const order_max_opt_ddelta& value)  {
            m_order_max_opt_ddelta = value;
        }
        void set_stk_collar_pct(const stk_collar_pct& value)  {
            m_stk_collar_pct = value;
        }
        void set_fut_collar_pct(const fut_collar_pct& value)  {
            m_fut_collar_pct = value;
        }
        void set_opt_collar_pct(const opt_collar_pct& value)  {
            m_opt_collar_pct = value;
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
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to GlobalRiskControl::get()"); return T{}; }  // specializations for valid types are listed below the class definition

        //specializations for set functions for the valid types
    
        void set(const _meta & value) {
            set__meta(value);
        }
        void set(const pkey & value) {
            set_pkey(value);
        }
        void set(const stk_enabled & value) {
            set_stk_enabled(value);
        }
        void set(const fut_enabled & value) {
            set_fut_enabled(value);
        }
        void set(const opt_enabled & value) {
            set_opt_enabled(value);
        }
        void set(const order_max_margin & value) {
            set_order_max_margin(value);
        }
        void set(const order_max_stk_qty & value) {
            set_order_max_stk_qty(value);
        }
        void set(const order_max_fut_qty & value) {
            set_order_max_fut_qty(value);
        }
        void set(const order_max_opt_qty & value) {
            set_order_max_opt_qty(value);
        }
        void set(const order_max_stk_ddelta & value) {
            set_order_max_stk_ddelta(value);
        }
        void set(const order_max_fut_ddelta & value) {
            set_order_max_fut_ddelta(value);
        }
        void set(const order_max_opt_ddelta & value) {
            set_order_max_opt_ddelta(value);
        }
        void set(const stk_collar_pct & value) {
            set_stk_collar_pct(value);
        }
        void set(const fut_collar_pct & value) {
            set_fut_collar_pct(value);
        }
        void set(const opt_collar_pct & value) {
            set_opt_collar_pct(value);
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

        void set(const GlobalRiskControl & value) {
            set(value.m__meta);
            set(value.m_pkey);
            set(value.m_stk_enabled);
            set(value.m_fut_enabled);
            set(value.m_opt_enabled);
            set(value.m_order_max_margin);
            set(value.m_order_max_stk_qty);
            set(value.m_order_max_fut_qty);
            set(value.m_order_max_opt_qty);
            set(value.m_order_max_stk_ddelta);
            set(value.m_order_max_fut_ddelta);
            set(value.m_order_max_opt_ddelta);
            set(value.m_stk_collar_pct);
            set(value.m_fut_collar_pct);
            set(value.m_opt_collar_pct);
            set(value.m_modified_by);
            set(value.m_modified_in);
            set(value.m_timestamp);
        }

        GlobalRiskControl() {
            m__meta.set_message_type("GlobalRiskControl");
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
            std::snprintf(reinterpret_cast<char*>(data), size, "\r\nP%05d%06zd", 4540, length);
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
            std::snprintf(const_cast<char*>(s->data()), s->size(), "\r\nP%05d%06zd", 4540, length);
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
             *this = GlobalRiskControl{};
        }
        bool IncludeMeta() const {
            return (m__meta.ByteSizeLong() > 0);
        }
        bool IncludePkey() const {
            return (m_pkey.ByteSizeLong() > 0);
        }
        bool IncludeOrderMaxMargin() const {
            return !(m_order_max_margin == 0.0);
        }
        bool IncludeOrderMaxStkQty() const {
            return !(m_order_max_stk_qty == 0);
        }
        bool IncludeOrderMaxFutQty() const {
            return !(m_order_max_fut_qty == 0);
        }
        bool IncludeOrderMaxOptQty() const {
            return !(m_order_max_opt_qty == 0);
        }
        bool IncludeOrderMaxStkDdelta() const {
            return !(m_order_max_stk_ddelta == 0.0);
        }
        bool IncludeOrderMaxFutDdelta() const {
            return !(m_order_max_fut_ddelta == 0.0);
        }
        bool IncludeOrderMaxOptDdelta() const {
            return !(m_order_max_opt_ddelta == 0.0);
        }
        bool IncludeStkCollarPct() const {
            return !(m_stk_collar_pct == 0.0);
        }
        bool IncludeFutCollarPct() const {
            return !(m_fut_collar_pct == 0.0);
        }
        bool IncludeOptCollarPct() const {
            return !(m_opt_collar_pct == 0.0);
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
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(100,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MarState>(m_stk_enabled)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(101,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MarState>(m_fut_enabled)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(102,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MarState>(m_opt_enabled)));
            if ( IncludeOrderMaxMargin()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(103,m_order_max_margin);
            }
            if ( IncludeOrderMaxStkQty()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(104,m_order_max_stk_qty);
            }
            if ( IncludeOrderMaxFutQty()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(105,m_order_max_fut_qty);
            }
            if ( IncludeOrderMaxOptQty()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(106,m_order_max_opt_qty);
            }
            if ( IncludeOrderMaxStkDdelta()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(107,m_order_max_stk_ddelta);
            }
            if ( IncludeOrderMaxFutDdelta()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(108,m_order_max_fut_ddelta);
            }
            if ( IncludeOrderMaxOptDdelta()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(109,m_order_max_opt_ddelta);
            }
            if ( IncludeStkCollarPct()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(110,m_stk_collar_pct);
            }
            if ( IncludeFutCollarPct()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(111,m_fut_collar_pct);
            }
            if ( IncludeOptCollarPct()) {
                totalSize += SRProtobufCPP::FieldCodec::FloatFieldSize(112,m_opt_collar_pct);
            }
            if ( IncludeModifiedBy()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(113,m_modified_by);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(114,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SysEnvironment>(m_modified_in)));
            if ( IncludeTimestamp()) {
                totalSize += SRProtobufCPP::FieldCodec::DateTimeFieldSize(115, m_timestamp);
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
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,100,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MarState>(m_stk_enabled)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,101,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MarState>(m_fut_enabled)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,102,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MarState>(m_opt_enabled)));
            if ( IncludeOrderMaxMargin()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,103,m_order_max_margin);
            }
            if ( IncludeOrderMaxStkQty()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,104,m_order_max_stk_qty);
            }
            if ( IncludeOrderMaxFutQty()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,105,m_order_max_fut_qty);
            }
            if ( IncludeOrderMaxOptQty()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,106,m_order_max_opt_qty);
            }
            if ( IncludeOrderMaxStkDdelta()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,107,m_order_max_stk_ddelta);
            }
            if ( IncludeOrderMaxFutDdelta()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,108,m_order_max_fut_ddelta);
            }
            if ( IncludeOrderMaxOptDdelta()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,109,m_order_max_opt_ddelta);
            }
            if ( IncludeStkCollarPct()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,110,m_stk_collar_pct);
            }
            if ( IncludeFutCollarPct()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,111,m_fut_collar_pct);
            }
            if ( IncludeOptCollarPct()) {
                dest = SRProtobufCPP::FieldCodec::EncodeFloat(dest,112,m_opt_collar_pct);
            }
            if ( IncludeModifiedBy()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,113,static_cast<string>(m_modified_by));
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,114,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SysEnvironment>(m_modified_in)));
            if ( IncludeTimestamp()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateTime(dest, 115, m_timestamp);
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
                            m_stk_enabled = static_cast<spiderrock::protobuf::api::MarState>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 101: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_fut_enabled = static_cast<spiderrock::protobuf::api::MarState>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 102: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_opt_enabled = static_cast<spiderrock::protobuf::api::MarState>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 103: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_order_max_margin = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 104: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_order_max_stk_qty = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 105: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_order_max_fut_qty = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 106: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_order_max_opt_qty = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 107: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_order_max_stk_ddelta = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 108: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_order_max_fut_ddelta = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 109: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_order_max_opt_ddelta = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 110: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_stk_collar_pct = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 111: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_fut_collar_pct = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 112: {
                        if (tagType == SRProtobufCPP::FloatCodec::TagType)  {
                            m_opt_collar_pct = SRProtobufCPP::FieldCodec::DecodeFloat(pos,max);
                        }
                        break;
                    }
                    case 113: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_modified_by = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 114: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_modified_in = static_cast<spiderrock::protobuf::api::SysEnvironment>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 115: {
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

    template<> inline const auto GlobalRiskControl::get<GlobalRiskControl::_meta>() const { return GlobalRiskControl::_meta{ m__meta}; }
    template<> inline const auto GlobalRiskControl::get<GlobalRiskControl::pkey>() const { return GlobalRiskControl::pkey{ m_pkey}; }
    template<> inline const auto GlobalRiskControl::get<GlobalRiskControl::stk_enabled>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MarState>( m_stk_enabled)); }
    template<> inline const auto GlobalRiskControl::get<GlobalRiskControl::fut_enabled>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MarState>( m_fut_enabled)); }
    template<> inline const auto GlobalRiskControl::get<GlobalRiskControl::opt_enabled>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::MarState>( m_opt_enabled)); }
    template<> inline const auto GlobalRiskControl::get<GlobalRiskControl::order_max_margin>() const { return m_order_max_margin; }
    template<> inline const auto GlobalRiskControl::get<GlobalRiskControl::order_max_stk_qty>() const { return m_order_max_stk_qty; }
    template<> inline const auto GlobalRiskControl::get<GlobalRiskControl::order_max_fut_qty>() const { return m_order_max_fut_qty; }
    template<> inline const auto GlobalRiskControl::get<GlobalRiskControl::order_max_opt_qty>() const { return m_order_max_opt_qty; }
    template<> inline const auto GlobalRiskControl::get<GlobalRiskControl::order_max_stk_ddelta>() const { return m_order_max_stk_ddelta; }
    template<> inline const auto GlobalRiskControl::get<GlobalRiskControl::order_max_fut_ddelta>() const { return m_order_max_fut_ddelta; }
    template<> inline const auto GlobalRiskControl::get<GlobalRiskControl::order_max_opt_ddelta>() const { return m_order_max_opt_ddelta; }
    template<> inline const auto GlobalRiskControl::get<GlobalRiskControl::stk_collar_pct>() const { return m_stk_collar_pct; }
    template<> inline const auto GlobalRiskControl::get<GlobalRiskControl::fut_collar_pct>() const { return m_fut_collar_pct; }
    template<> inline const auto GlobalRiskControl::get<GlobalRiskControl::opt_collar_pct>() const { return m_opt_collar_pct; }
    template<> inline const auto GlobalRiskControl::get<GlobalRiskControl::modified_by>() const { return m_modified_by; }
    template<> inline const auto GlobalRiskControl::get<GlobalRiskControl::modified_in>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::SysEnvironment>( m_modified_in)); }
    template<> inline const auto GlobalRiskControl::get<GlobalRiskControl::timestamp>() const { return m_timestamp; }
    template<> inline const auto GlobalRiskControl_PKey::get<GlobalRiskControl_PKey::ticker>() const { return GlobalRiskControl_PKey::ticker{m_ticker}; }
    
    // ostream operators for all classes above, output should adhere to a JSON format

    inline std::ostream& operator<<(std::ostream &o, const GlobalRiskControl_PKey& m) {
        o << "\"ticker\":{" << m.get<GlobalRiskControl_PKey::ticker>() << "}";
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const GlobalRiskControl& m) {
        o << "\"_meta\":{" << m.get<GlobalRiskControl::_meta>() << "}";
        o << ",\"pkey\":{" << m.get<GlobalRiskControl::pkey>() << "}";
        o << ",\"stk_enabled\":" << (int64_t)m.get<GlobalRiskControl::stk_enabled>();
        o << ",\"fut_enabled\":" << (int64_t)m.get<GlobalRiskControl::fut_enabled>();
        o << ",\"opt_enabled\":" << (int64_t)m.get<GlobalRiskControl::opt_enabled>();
        o << ",\"order_max_margin\":" << m.get<GlobalRiskControl::order_max_margin>();
        o << ",\"order_max_stk_qty\":" << m.get<GlobalRiskControl::order_max_stk_qty>();
        o << ",\"order_max_fut_qty\":" << m.get<GlobalRiskControl::order_max_fut_qty>();
        o << ",\"order_max_opt_qty\":" << m.get<GlobalRiskControl::order_max_opt_qty>();
        o << ",\"order_max_stk_ddelta\":" << m.get<GlobalRiskControl::order_max_stk_ddelta>();
        o << ",\"order_max_fut_ddelta\":" << m.get<GlobalRiskControl::order_max_fut_ddelta>();
        o << ",\"order_max_opt_ddelta\":" << m.get<GlobalRiskControl::order_max_opt_ddelta>();
        o << ",\"stk_collar_pct\":" << m.get<GlobalRiskControl::stk_collar_pct>();
        o << ",\"fut_collar_pct\":" << m.get<GlobalRiskControl::fut_collar_pct>();
        o << ",\"opt_collar_pct\":" << m.get<GlobalRiskControl::opt_collar_pct>();
        o << ",\"modified_by\":\"" << m.get<GlobalRiskControl::modified_by>() << "\"";
        o << ",\"modified_in\":" << (int64_t)m.get<GlobalRiskControl::modified_in>();
        {
            std::time_t tt = m.get<GlobalRiskControl::timestamp>().time_since_epoch().count() / 1'000'000'000;
			struct tm tm1{};
			localtime_s(&tm1, &tt);
            o << ",\"timestamp\":\"" << std::put_time(&tm1, "%a %b %e %T %Y") << "\"";
        }
        return o;
    }

}
}
}