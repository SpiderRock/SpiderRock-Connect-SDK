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

#include "spiderrock_protobuf_base.hpp"
#include "spiderrock_enum.hpp"

namespace spiderrock {
namespace protobuf {
namespace api {

    //declare statements for all types utilized by this message (#ifdef guards protect in case they have been previously defined)

    #ifndef _year__GUARD__
    #define _year__GUARD__
    DECL_STRONG_TYPE(year, int32);
    #endif//_year__GUARD__

    #ifndef _month__GUARD__
    #define _month__GUARD__
    DECL_STRONG_TYPE(month, int32);
    #endif//_month__GUARD__

    #ifndef _day__GUARD__
    #define _day__GUARD__
    DECL_STRONG_TYPE(day, int32);
    #endif//_day__GUARD__

    

    class DateKey {
        public:
        //using statements for all types used in this class
    
        using year = spiderrock::protobuf::api::year;
        using month = spiderrock::protobuf::api::month;
        using day = spiderrock::protobuf::api::day;

        private:
        year m_year{};
        month m_month{};
        day m_day{};

        static constexpr int _mlinkHeaderLength = 14;

        public:		
        year get_year() const {
            return m_year;
        }		
        month get_month() const {
            return m_month;
        }		
        day get_day() const {
            return m_day;
        }
        size_t getMLinkHeaderLength() const
        {
            return _mlinkHeaderLength;
        }
        void set_year(const year& value)  {
            m_year = value;
        }
        void set_month(const month& value)  {
            m_month = value;
        }
        void set_day(const day& value)  {
            m_day = value;
        }

        //templatized getters and setters

        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to DateKey::get()"); return T{}; }  // specializations for valid types are listed below the class definition

        //specializations for set functions for the valid types
    
        void set(const year & value) {
            set_year(value);
        }
        void set(const month & value) {
            set_month(value);
        }
        void set(const day & value) {
            set_day(value);
        }

        void set(const DateKey & value) {
            set(value.m_year);
            set(value.m_month);
            set(value.m_day);
        }

        DateKey() {
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
            
            return false;
        }

        bool SerializeToString(std::string *s) const {
            
            return false;
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
             *this = DateKey{};
        }
        bool IncludeYear() const {
            return !(m_year == 0);
        }
        bool IncludeMonth() const {
            return !(m_month == 0);
        }
        bool IncludeDay() const {
            return !(m_day == 0);
        }

        size_t ByteSizeLong() const {
            size_t totalSize = 0;
            if ( IncludeYear()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(1,m_year);
            }
            if ( IncludeMonth()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(2,m_month);
            }
            if ( IncludeDay()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(3,m_day);
            }
            return totalSize;
        }

        void Encode(uint8_t*& dest, uint8_t* max) const {
            if ( IncludeYear()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,1,m_year);
            }
            if ( IncludeMonth()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,2,m_month);
            }
            if ( IncludeDay()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,3,m_day);
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
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_year = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 2: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_month = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 3: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_day = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                }
            }
        }

    };


    // getter definitions for all classes above, both inner and outer classes

    template<> inline const auto DateKey::get<DateKey::year>() const { return m_year; }
    template<> inline const auto DateKey::get<DateKey::month>() const { return m_month; }
    template<> inline const auto DateKey::get<DateKey::day>() const { return m_day; }
    
    
    
    
    

    //declare statements for all types utilized by this message (#ifdef guards protect in case they have been previously defined)

    #ifndef _asset_type__GUARD__
    #define _asset_type__GUARD__
    DECL_STRONG_TYPE(asset_type, spiderrock::protobuf::api::AssetType);
    #endif//_asset_type__GUARD__

    #ifndef _ticker_src__GUARD__
    #define _ticker_src__GUARD__
    DECL_STRONG_TYPE(ticker_src, spiderrock::protobuf::api::TickerSrc);
    #endif//_ticker_src__GUARD__

    #ifndef _ticker__string__GUARD__
    #define _ticker__string__GUARD__
    DECL_STRONG_TYPE(ticker__string, string);
    #endif//_ticker__string__GUARD__

    

    class TickerKey {
        public:
        //using statements for all types used in this class
    
        using asset_type = spiderrock::protobuf::api::asset_type;
        using ticker_src = spiderrock::protobuf::api::ticker_src;
        using ticker = spiderrock::protobuf::api::ticker__string;

        private:
        asset_type m_asset_type{};
        ticker_src m_ticker_src{};
        ticker m_ticker{};

        static constexpr int _mlinkHeaderLength = 14;

        public:		
        asset_type get_asset_type() const {
            return m_asset_type;
        }		
        ticker_src get_ticker_src() const {
            return m_ticker_src;
        }		
        ticker get_ticker() const {
            return m_ticker;
        }
        size_t getMLinkHeaderLength() const
        {
            return _mlinkHeaderLength;
        }
        void set_asset_type(const asset_type& value)  {
            m_asset_type = value;
        }
        void set_ticker_src(const ticker_src& value)  {
            m_ticker_src = value;
        }
        void set_ticker(const ticker& value)  {
            m_ticker = value;
        }
        void setCodecTickerKey(SRProtobufCPP::TickerKeyLayout &tickerKeyLayout) const {
            tickerKeyLayout.assetType = static_cast<SRProtobufCPP::AssetType>(static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AssetType>(m_asset_type)));
            tickerKeyLayout.tickerSrc = static_cast<SRProtobufCPP::TickerSrc>(static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::TickerSrc>(m_ticker_src)));
            tickerKeyLayout.ticker = m_ticker;
        }

        void setFromCodec(const SRProtobufCPP::TickerKeyLayout &value) {
            set_asset_type(static_cast<spiderrock::protobuf::api::AssetType>(static_cast<int>(value.assetType)));
            set_ticker(value.ticker.toString());
            set_ticker_src(static_cast<spiderrock::protobuf::api::TickerSrc>(static_cast<int>(value.tickerSrc)));
        }

        //templatized getters and setters

        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to TickerKey::get()"); return T{}; }  // specializations for valid types are listed below the class definition

        //specializations for set functions for the valid types
    
        void set(const asset_type & value) {
            set_asset_type(value);
        }
        void set(const ticker_src & value) {
            set_ticker_src(value);
        }
        void set(const ticker & value) {
            set_ticker(value);
        }

        void set(const TickerKey & value) {
            set(value.m_asset_type);
            set(value.m_ticker_src);
            set(value.m_ticker);
        }

        TickerKey() {
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
            
            return false;
        }

        bool SerializeToString(std::string *s) const {
            
            return false;
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
             *this = TickerKey{};
        }
        bool IncludeTicker() const {
            return !(m_ticker.empty());
        }

        size_t ByteSizeLong() const {
            size_t totalSize = 0;
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(1,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AssetType>(m_asset_type)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(2,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::TickerSrc>(m_ticker_src)));
            if ( IncludeTicker()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(3,m_ticker);
            }
            return totalSize;
        }

        void Encode(uint8_t*& dest, uint8_t* max) const {
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,1,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AssetType>(m_asset_type)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,2,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::TickerSrc>(m_ticker_src)));
            if ( IncludeTicker()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,3,static_cast<string>(m_ticker));
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
                    case 1: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_asset_type = static_cast<spiderrock::protobuf::api::AssetType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 2: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_ticker_src = static_cast<spiderrock::protobuf::api::TickerSrc>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 3: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_ticker = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                }
            }
        }

    };


    // getter definitions for all classes above, both inner and outer classes

    template<> inline const auto TickerKey::get<TickerKey::asset_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AssetType>( m_asset_type)); }
    template<> inline const auto TickerKey::get<TickerKey::ticker_src>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::TickerSrc>( m_ticker_src)); }
    template<> inline const auto TickerKey::get<TickerKey::ticker>() const { return m_ticker; }
    
    
    
    
    

    //declare statements for all types utilized by this message (#ifdef guards protect in case they have been previously defined)

    #ifndef _asset_type__GUARD__
    #define _asset_type__GUARD__
    DECL_STRONG_TYPE(asset_type, spiderrock::protobuf::api::AssetType);
    #endif//_asset_type__GUARD__

    #ifndef _ticker_src__GUARD__
    #define _ticker_src__GUARD__
    DECL_STRONG_TYPE(ticker_src, spiderrock::protobuf::api::TickerSrc);
    #endif//_ticker_src__GUARD__

    #ifndef _ticker__string__GUARD__
    #define _ticker__string__GUARD__
    DECL_STRONG_TYPE(ticker__string, string);
    #endif//_ticker__string__GUARD__

    #ifndef _expiration__DateKey__GUARD__
    #define _expiration__DateKey__GUARD__
    DECL_STRONG_TYPE(expiration__DateKey, DateKey);
    #endif//_expiration__DateKey__GUARD__

    

    class ExpiryKey {
        public:
        //using statements for all types used in this class
    
        using asset_type = spiderrock::protobuf::api::asset_type;
        using ticker_src = spiderrock::protobuf::api::ticker_src;
        using ticker = spiderrock::protobuf::api::ticker__string;
        using expiration = spiderrock::protobuf::api::expiration__DateKey;

        private:
        asset_type m_asset_type{};
        ticker_src m_ticker_src{};
        ticker m_ticker{};
        expiration m_expiration{};

        static constexpr int _mlinkHeaderLength = 14;

        public:		
        asset_type get_asset_type() const {
            return m_asset_type;
        }		
        ticker_src get_ticker_src() const {
            return m_ticker_src;
        }		
        ticker get_ticker() const {
            return m_ticker;
        }		
        expiration get_expiration() const {
            return m_expiration;
        }
        size_t getMLinkHeaderLength() const
        {
            return _mlinkHeaderLength;
        }
        void set_asset_type(const asset_type& value)  {
            m_asset_type = value;
        }
        void set_ticker_src(const ticker_src& value)  {
            m_ticker_src = value;
        }
        void set_ticker(const ticker& value)  {
            m_ticker = value;
        }
        void set_expiration(const expiration& value)  {
            m_expiration = value;
        }
        void setCodecExpiryKey(SRProtobufCPP::ExpiryKeyLayout &expiryKeyLayout) const {
            expiryKeyLayout.assetType = static_cast<SRProtobufCPP::AssetType>(static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AssetType>(m_asset_type)));
            expiryKeyLayout.tickerSrc = static_cast<SRProtobufCPP::TickerSrc>(static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::TickerSrc>(m_ticker_src)));
            expiryKeyLayout.day = m_expiration.get_day();
            expiryKeyLayout.month = m_expiration.get_month();
            expiryKeyLayout.year = m_expiration.get_year();
            expiryKeyLayout.ticker = m_ticker;
        }

        void setFromCodec(const SRProtobufCPP::ExpiryKeyLayout &value) {
            m_expiration.set_day(value.day);
            m_expiration.set_month(value.month);
            m_expiration.set_year(value.year);
            set_asset_type(static_cast<spiderrock::protobuf::api::AssetType>(static_cast<int>(value.assetType)));
            set_ticker(value.ticker.toString());
            set_ticker_src(static_cast<spiderrock::protobuf::api::TickerSrc>(static_cast<int>(value.tickerSrc)));
            set_expiration(m_expiration);
        }

        //templatized getters and setters

        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to ExpiryKey::get()"); return T{}; }  // specializations for valid types are listed below the class definition

        //specializations for set functions for the valid types
    
        void set(const asset_type & value) {
            set_asset_type(value);
        }
        void set(const ticker_src & value) {
            set_ticker_src(value);
        }
        void set(const ticker & value) {
            set_ticker(value);
        }
        void set(const expiration & value) {
            set_expiration(value);
        }

        void set(const ExpiryKey & value) {
            set(value.m_asset_type);
            set(value.m_ticker_src);
            set(value.m_ticker);
            set(value.m_expiration);
        }

        ExpiryKey() {
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
            
            return false;
        }

        bool SerializeToString(std::string *s) const {
            
            return false;
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
             *this = ExpiryKey{};
        }
        bool IncludeTicker() const {
            return !(m_ticker.empty());
        }
        bool IncludeExpiration() const {
            return (m_expiration.ByteSizeLong() > 0);
        }

        size_t ByteSizeLong() const {
            size_t totalSize = 0;
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(1,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AssetType>(m_asset_type)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(2,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::TickerSrc>(m_ticker_src)));
            if ( IncludeTicker()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(3,m_ticker);
            }
            if ( IncludeExpiration()) {
                totalSize += SRProtobufCPP::FieldCodec::DateKeyFieldSize(4, m_expiration.get_year(), m_expiration.get_month(), m_expiration.get_day());
            }
            return totalSize;
        }

        void Encode(uint8_t*& dest, uint8_t* max) const {
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,1,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AssetType>(m_asset_type)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,2,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::TickerSrc>(m_ticker_src)));
            if ( IncludeTicker()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,3,static_cast<string>(m_ticker));
            }
            if ( IncludeExpiration()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateKey(dest,4, m_expiration.get_year(), m_expiration.get_month(), m_expiration.get_day());
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
                    case 1: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_asset_type = static_cast<spiderrock::protobuf::api::AssetType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 2: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_ticker_src = static_cast<spiderrock::protobuf::api::TickerSrc>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 3: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_ticker = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 4: {
                        if (tagType == SRProtobufCPP::DateKeyCodec::TagType) {
                            auto dateKey = SRProtobufCPP::FieldCodec::DecodeDateKey(pos,max);
                            m_expiration.set_year(dateKey.year());
                            m_expiration.set_month(dateKey.month());
                            m_expiration.set_day(dateKey.day());
                        }
                        break;
                    }
                }
            }
        }

    };


    // getter definitions for all classes above, both inner and outer classes

    template<> inline const auto ExpiryKey::get<ExpiryKey::asset_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AssetType>( m_asset_type)); }
    template<> inline const auto ExpiryKey::get<ExpiryKey::ticker_src>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::TickerSrc>( m_ticker_src)); }
    template<> inline const auto ExpiryKey::get<ExpiryKey::ticker>() const { return m_ticker; }
    template<> inline const auto ExpiryKey::get<ExpiryKey::expiration>() const { return ExpiryKey::expiration{ m_expiration}; }
    
    
    
    
    

    //declare statements for all types utilized by this message (#ifdef guards protect in case they have been previously defined)

    #ifndef _asset_type__GUARD__
    #define _asset_type__GUARD__
    DECL_STRONG_TYPE(asset_type, spiderrock::protobuf::api::AssetType);
    #endif//_asset_type__GUARD__

    #ifndef _ticker_src__GUARD__
    #define _ticker_src__GUARD__
    DECL_STRONG_TYPE(ticker_src, spiderrock::protobuf::api::TickerSrc);
    #endif//_ticker_src__GUARD__

    #ifndef _ticker__string__GUARD__
    #define _ticker__string__GUARD__
    DECL_STRONG_TYPE(ticker__string, string);
    #endif//_ticker__string__GUARD__

    #ifndef _expiration__DateKey__GUARD__
    #define _expiration__DateKey__GUARD__
    DECL_STRONG_TYPE(expiration__DateKey, DateKey);
    #endif//_expiration__DateKey__GUARD__

    #ifndef _strike__double__GUARD__
    #define _strike__double__GUARD__
    DECL_STRONG_TYPE(strike__double, double);
    #endif//_strike__double__GUARD__

    #ifndef _call_put__GUARD__
    #define _call_put__GUARD__
    DECL_STRONG_TYPE(call_put, spiderrock::protobuf::api::CallPut);
    #endif//_call_put__GUARD__

    

    class OptionKey {
        public:
        //using statements for all types used in this class
    
        using asset_type = spiderrock::protobuf::api::asset_type;
        using ticker_src = spiderrock::protobuf::api::ticker_src;
        using ticker = spiderrock::protobuf::api::ticker__string;
        using expiration = spiderrock::protobuf::api::expiration__DateKey;
        using strike = spiderrock::protobuf::api::strike__double;
        using call_put = spiderrock::protobuf::api::call_put;

        private:
        asset_type m_asset_type{};
        ticker_src m_ticker_src{};
        ticker m_ticker{};
        expiration m_expiration{};
        strike m_strike{};
        call_put m_call_put{};

        static constexpr int _mlinkHeaderLength = 14;

        public:		
        asset_type get_asset_type() const {
            return m_asset_type;
        }		
        ticker_src get_ticker_src() const {
            return m_ticker_src;
        }		
        ticker get_ticker() const {
            return m_ticker;
        }		
        expiration get_expiration() const {
            return m_expiration;
        }		
        strike get_strike() const {
            return m_strike;
        }		
        call_put get_call_put() const {
            return m_call_put;
        }
        size_t getMLinkHeaderLength() const
        {
            return _mlinkHeaderLength;
        }
        void set_asset_type(const asset_type& value)  {
            m_asset_type = value;
        }
        void set_ticker_src(const ticker_src& value)  {
            m_ticker_src = value;
        }
        void set_ticker(const ticker& value)  {
            m_ticker = value;
        }
        void set_expiration(const expiration& value)  {
            m_expiration = value;
        }
        void set_strike(const strike& value)  {
            m_strike = value;
        }
        void set_call_put(const call_put& value)  {
            m_call_put = value;
        }
        void setCodecOptionKey(SRProtobufCPP::OptionKeyLayout &optionKeyLayout) const {
            optionKeyLayout.assetType = static_cast<SRProtobufCPP::AssetType>(static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AssetType>(m_asset_type)));
            optionKeyLayout.tickerSrc = static_cast<SRProtobufCPP::TickerSrc>(static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::TickerSrc>(m_ticker_src)));
            optionKeyLayout.callPut = static_cast<SRProtobufCPP::CallPut>(static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::CallPut>(m_call_put)));
            optionKeyLayout.day = m_expiration.get_day();
            optionKeyLayout.month = m_expiration.get_month();
            optionKeyLayout.year = m_expiration.get_year();
            optionKeyLayout.ticker = m_ticker;
            optionKeyLayout.day = m_expiration.get_day();
            optionKeyLayout.Strike = m_strike;
        }

        void setFromCodec(const SRProtobufCPP::OptionKeyLayout &value) {
            m_expiration.set_day(value.day);
            m_expiration.set_month(value.month);
            m_expiration.set_year(value.year);
            set_asset_type(static_cast<spiderrock::protobuf::api::AssetType>(static_cast<int>(value.assetType)));
            set_ticker(value.ticker.toString());
            set_ticker_src(static_cast<spiderrock::protobuf::api::TickerSrc>(static_cast<int>(value.tickerSrc)));
            set_expiration(m_expiration);
            set_strike(value.Strike);
            set_call_put(static_cast<spiderrock::protobuf::api::CallPut>(static_cast<int>(value.callPut)));
        }

        //templatized getters and setters

        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to OptionKey::get()"); return T{}; }  // specializations for valid types are listed below the class definition

        //specializations for set functions for the valid types
    
        void set(const asset_type & value) {
            set_asset_type(value);
        }
        void set(const ticker_src & value) {
            set_ticker_src(value);
        }
        void set(const ticker & value) {
            set_ticker(value);
        }
        void set(const expiration & value) {
            set_expiration(value);
        }
        void set(const strike & value) {
            set_strike(value);
        }
        void set(const call_put & value) {
            set_call_put(value);
        }

        void set(const OptionKey & value) {
            set(value.m_asset_type);
            set(value.m_ticker_src);
            set(value.m_ticker);
            set(value.m_expiration);
            set(value.m_strike);
            set(value.m_call_put);
        }

        OptionKey() {
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
            
            return false;
        }

        bool SerializeToString(std::string *s) const {
            
            return false;
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
             *this = OptionKey{};
        }
        bool IncludeTicker() const {
            return !(m_ticker.empty());
        }
        bool IncludeExpiration() const {
            return (m_expiration.ByteSizeLong() > 0);
        }
        bool IncludeStrike() const {
            return !(m_strike == 0.0);
        }

        size_t ByteSizeLong() const {
            size_t totalSize = 0;
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(1,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AssetType>(m_asset_type)));
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(2,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::TickerSrc>(m_ticker_src)));
            if ( IncludeTicker()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(3,m_ticker);
            }
            if ( IncludeExpiration()) {
                totalSize += SRProtobufCPP::FieldCodec::DateKeyFieldSize(4, m_expiration.get_year(), m_expiration.get_month(), m_expiration.get_day());
            }
            if ( IncludeStrike()) {
                totalSize += SRProtobufCPP::FieldCodec::DoubleFieldSize(5,m_strike);
            }
            totalSize += SRProtobufCPP::FieldCodec::EnumFieldSize(6,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::CallPut>(m_call_put)));
            return totalSize;
        }

        void Encode(uint8_t*& dest, uint8_t* max) const {
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,1,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AssetType>(m_asset_type)));
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,2,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::TickerSrc>(m_ticker_src)));
            if ( IncludeTicker()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,3,static_cast<string>(m_ticker));
            }
            if ( IncludeExpiration()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDateKey(dest,4, m_expiration.get_year(), m_expiration.get_month(), m_expiration.get_day());
            }
            if ( IncludeStrike()) {
                dest = SRProtobufCPP::FieldCodec::EncodeDouble(dest,5,m_strike);
            }
            dest = SRProtobufCPP::FieldCodec::EncodeEnum(dest,6,static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::CallPut>(m_call_put)));
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
                    case 1: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_asset_type = static_cast<spiderrock::protobuf::api::AssetType>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 2: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_ticker_src = static_cast<spiderrock::protobuf::api::TickerSrc>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                    case 3: {
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_ticker = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 4: {
                        if (tagType == SRProtobufCPP::DateKeyCodec::TagType) {
                            auto dateKey = SRProtobufCPP::FieldCodec::DecodeDateKey(pos,max);
                            m_expiration.set_year(dateKey.year());
                            m_expiration.set_month(dateKey.month());
                            m_expiration.set_day(dateKey.day());
                        }
                        break;
                    }
                    case 5: {
                        if (tagType == SRProtobufCPP::DoubleCodec::TagType) {
                            m_strike = SRProtobufCPP::FieldCodec::DecodeDouble(pos,max);
                        }
                        break;
                    }
                    case 6: {if (tagType == SRProtobufCPP::EnumCodec::TagType) {
                            m_call_put = static_cast<spiderrock::protobuf::api::CallPut>(SRProtobufCPP::FieldCodec::DecodeEnum(pos,max));
                        }
                        break;
                    }
                }
            }
        }

    };


    // getter definitions for all classes above, both inner and outer classes

    template<> inline const auto OptionKey::get<OptionKey::asset_type>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::AssetType>( m_asset_type)); }
    template<> inline const auto OptionKey::get<OptionKey::ticker_src>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::TickerSrc>( m_ticker_src)); }
    template<> inline const auto OptionKey::get<OptionKey::ticker>() const { return m_ticker; }
    template<> inline const auto OptionKey::get<OptionKey::expiration>() const { return OptionKey::expiration{ m_expiration}; }
    template<> inline const auto OptionKey::get<OptionKey::strike>() const { return m_strike; }
    template<> inline const auto OptionKey::get<OptionKey::call_put>() const { return static_cast<uint8_t>(static_cast<spiderrock::protobuf::api::CallPut>( m_call_put)); }
    
    
    
    
    

    //declare statements for all types utilized by this message (#ifdef guards protect in case they have been previously defined)

    #ifndef _message_type__GUARD__
    #define _message_type__GUARD__
    DECL_STRONG_TYPE(message_type, string);
    #endif//_message_type__GUARD__

    #ifndef _is_deleted__GUARD__
    #define _is_deleted__GUARD__
    DECL_STRONG_TYPE(is_deleted, bool);
    #endif//_is_deleted__GUARD__

    #ifndef _time_sent__GUARD__
    #define _time_sent__GUARD__
    DECL_STRONG_TYPE(time_sent, int64);
    #endif//_time_sent__GUARD__

    #ifndef _sender_id__GUARD__
    #define _sender_id__GUARD__
    DECL_STRONG_TYPE(sender_id, int32);
    #endif//_sender_id__GUARD__

    #ifndef _from_bridge__GUARD__
    #define _from_bridge__GUARD__
    DECL_STRONG_TYPE(from_bridge, bool);
    #endif//_from_bridge__GUARD__

    #ifndef _from_cache__GUARD__
    #define _from_cache__GUARD__
    DECL_STRONG_TYPE(from_cache, bool);
    #endif//_from_cache__GUARD__

    #ifndef _encoded_time__GUARD__
    #define _encoded_time__GUARD__
    DECL_STRONG_TYPE(encoded_time, int64);
    #endif//_encoded_time__GUARD__

    #ifndef _server_rcvd_time__GUARD__
    #define _server_rcvd_time__GUARD__
    DECL_STRONG_TYPE(server_rcvd_time, int64);
    #endif//_server_rcvd_time__GUARD__

    

    class MessageMetadata {
        public:
        //using statements for all types used in this class
    
        using message_type = spiderrock::protobuf::api::message_type;
        using is_deleted = spiderrock::protobuf::api::is_deleted;
        using time_sent = spiderrock::protobuf::api::time_sent;
        using sender_id = spiderrock::protobuf::api::sender_id;
        using from_bridge = spiderrock::protobuf::api::from_bridge;
        using from_cache = spiderrock::protobuf::api::from_cache;
        using encoded_time = spiderrock::protobuf::api::encoded_time;
        using server_rcvd_time = spiderrock::protobuf::api::server_rcvd_time;

        private:
        message_type m_message_type{};
        is_deleted m_is_deleted{};
        time_sent m_time_sent{};
        sender_id m_sender_id{};
        from_bridge m_from_bridge{};
        from_cache m_from_cache{};
        encoded_time m_encoded_time{};
        server_rcvd_time m_server_rcvd_time{};

        static constexpr int _mlinkHeaderLength = 14;

        public:		
        message_type get_message_type() const {
            return m_message_type;
        }		
        is_deleted get_is_deleted() const {
            return m_is_deleted;
        }		
        time_sent get_time_sent() const {
            return m_time_sent;
        }		
        sender_id get_sender_id() const {
            return m_sender_id;
        }		
        from_bridge get_from_bridge() const {
            return m_from_bridge;
        }		
        from_cache get_from_cache() const {
            return m_from_cache;
        }		
        encoded_time get_encoded_time() const {
            return m_encoded_time;
        }		
        server_rcvd_time get_server_rcvd_time() const {
            return m_server_rcvd_time;
        }
        size_t getMLinkHeaderLength() const
        {
            return _mlinkHeaderLength;
        }
        void set_message_type(const message_type& value)  {
            m_message_type = value;
        }
        void set_is_deleted(const is_deleted& value)  {
            m_is_deleted = value;
        }
        void set_time_sent(const time_sent& value)  {
            m_time_sent = value;
        }
        void set_sender_id(const sender_id& value)  {
            m_sender_id = value;
        }
        void set_from_bridge(const from_bridge& value)  {
            m_from_bridge = value;
        }
        void set_from_cache(const from_cache& value)  {
            m_from_cache = value;
        }
        void set_encoded_time(const encoded_time& value)  {
            m_encoded_time = value;
        }
        void set_server_rcvd_time(const server_rcvd_time& value)  {
            m_server_rcvd_time = value;
        }
        void setCodecMessageMetadata(SRProtobufCPP::MessageMetadata &messageMetadata) const
        {
            messageMetadata.MessageType = m_message_type;
            messageMetadata.IsDeleted = m_is_deleted;
            messageMetadata.TimeSent = m_time_sent;
            messageMetadata.SenderId = m_sender_id;
            messageMetadata.FromBridge = m_from_bridge;
            messageMetadata.FromCache = m_from_cache;
            messageMetadata.EncodedTime = m_encoded_time;
            messageMetadata.ServerRcvdTime = m_server_rcvd_time;
        }
        void setMessageMetadataFromCodec(const SRProtobufCPP::MessageMetadata &msgMetaData)
        {
            m_message_type = msgMetaData.MessageType;
            m_is_deleted = msgMetaData.IsDeleted;
            m_time_sent = msgMetaData.TimeSent;
            m_sender_id = msgMetaData.SenderId;
            m_from_bridge = msgMetaData.FromBridge;
            m_from_cache = msgMetaData.FromCache;
            m_encoded_time = msgMetaData.EncodedTime;
            m_server_rcvd_time = msgMetaData.ServerRcvdTime;
        }

        //templatized getters and setters

        template <typename T, size_t S = sizeof(T)>
        const auto get() const { static_assert(sizeof(T) == -1, "Unexpected type in call to MessageMetadata::get()"); return T{}; }  // specializations for valid types are listed below the class definition

        //specializations for set functions for the valid types
    
        void set(const message_type & value) {
            set_message_type(value);
        }
        void set(const is_deleted & value) {
            set_is_deleted(value);
        }
        void set(const time_sent & value) {
            set_time_sent(value);
        }
        void set(const sender_id & value) {
            set_sender_id(value);
        }
        void set(const from_bridge & value) {
            set_from_bridge(value);
        }
        void set(const from_cache & value) {
            set_from_cache(value);
        }
        void set(const encoded_time & value) {
            set_encoded_time(value);
        }
        void set(const server_rcvd_time & value) {
            set_server_rcvd_time(value);
        }

        void set(const MessageMetadata & value) {
            set(value.m_message_type);
            set(value.m_is_deleted);
            set(value.m_time_sent);
            set(value.m_sender_id);
            set(value.m_from_bridge);
            set(value.m_from_cache);
            set(value.m_encoded_time);
            set(value.m_server_rcvd_time);
        }

        MessageMetadata() {
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
            
            return false;
        }

        bool SerializeToString(std::string *s) const {
            
            return false;
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
             *this = MessageMetadata{};
        }
        bool IncludeMessageType() const {
            return !(m_message_type.empty());
        }
        bool IncludeTimeSent() const {
            return !(m_time_sent == 0);
        }
        bool IncludeSenderId() const {
            return !(m_sender_id == 0);
        }
        bool IncludeEncodedTime() const {
            return !(m_encoded_time == 0);
        }
        bool IncludeServerRcvdTime() const {
            return !(m_server_rcvd_time == 0);
        }

        size_t ByteSizeLong() const {
            size_t totalSize = 0;
            if ( IncludeMessageType()) {
                totalSize += SRProtobufCPP::FieldCodec::StringFieldSize(1,m_message_type);
            }
            totalSize += SRProtobufCPP::FieldCodec::BoolFieldSize(2,m_is_deleted);
            if ( IncludeTimeSent()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(3,m_time_sent);
            }
            if ( IncludeSenderId()) {
                totalSize += SRProtobufCPP::FieldCodec::IntFieldSize(4,m_sender_id);
            }
            totalSize += SRProtobufCPP::FieldCodec::BoolFieldSize(5,m_from_bridge);
            totalSize += SRProtobufCPP::FieldCodec::BoolFieldSize(6,m_from_cache);
            if ( IncludeEncodedTime()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(7,m_encoded_time);
            }
            if ( IncludeServerRcvdTime()) {
                totalSize += SRProtobufCPP::FieldCodec::LongFieldSize(8,m_server_rcvd_time);
            }
            return totalSize;
        }

        void Encode(uint8_t*& dest, uint8_t* max) const {
            if ( IncludeMessageType()) {
                dest = SRProtobufCPP::FieldCodec::EncodeString(dest,1,static_cast<string>(m_message_type));
            }dest = SRProtobufCPP::FieldCodec::EncodeBool(dest,2,m_is_deleted);
            if ( IncludeTimeSent()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,3,m_time_sent);
            }
            if ( IncludeSenderId()) {
                dest = SRProtobufCPP::FieldCodec::EncodeInt(dest,4,m_sender_id);
            }dest = SRProtobufCPP::FieldCodec::EncodeBool(dest,5,m_from_bridge);dest = SRProtobufCPP::FieldCodec::EncodeBool(dest,6,m_from_cache);
            if ( IncludeEncodedTime()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,7,m_encoded_time);
            }
            if ( IncludeServerRcvdTime()) {
                dest = SRProtobufCPP::FieldCodec::EncodeLong(dest,8,m_server_rcvd_time);
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
                        if (tagType == SRProtobufCPP::StringCodec::TagType) {
                            m_message_type = SRProtobufCPP::FieldCodec::DecodeString(pos,max);
                        }
                        break;
                    }
                    case 2: {
                        if (tagType == SRProtobufCPP::BoolCodec::TagType) {
                            m_is_deleted = SRProtobufCPP::FieldCodec::DecodeBool(pos, max);
                        }
                        break;
                    }
                    case 3: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_time_sent = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 4: {
                        if (tagType == SRProtobufCPP::IntCodec::TagType) {
                            m_sender_id = SRProtobufCPP::FieldCodec::DecodeInt(pos,max);
                        }
                        break;
                    }
                    case 5: {
                        if (tagType == SRProtobufCPP::BoolCodec::TagType) {
                            m_from_bridge = SRProtobufCPP::FieldCodec::DecodeBool(pos, max);
                        }
                        break;
                    }
                    case 6: {
                        if (tagType == SRProtobufCPP::BoolCodec::TagType) {
                            m_from_cache = SRProtobufCPP::FieldCodec::DecodeBool(pos, max);
                        }
                        break;
                    }
                    case 7: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_encoded_time = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                    case 8: {
                        if (tagType == SRProtobufCPP::LongCodec::TagType) {
                            m_server_rcvd_time = SRProtobufCPP::FieldCodec::DecodeLong(pos,max);
                        }
                        break;
                    }
                }
            }
        }

    };


    // getter definitions for all classes above, both inner and outer classes

    template<> inline const auto MessageMetadata::get<MessageMetadata::message_type>() const { return m_message_type; }
    template<> inline const auto MessageMetadata::get<MessageMetadata::is_deleted>() const { return m_is_deleted; }
    template<> inline const auto MessageMetadata::get<MessageMetadata::time_sent>() const { return m_time_sent; }
    template<> inline const auto MessageMetadata::get<MessageMetadata::sender_id>() const { return m_sender_id; }
    template<> inline const auto MessageMetadata::get<MessageMetadata::from_bridge>() const { return m_from_bridge; }
    template<> inline const auto MessageMetadata::get<MessageMetadata::from_cache>() const { return m_from_cache; }
    template<> inline const auto MessageMetadata::get<MessageMetadata::encoded_time>() const { return m_encoded_time; }
    template<> inline const auto MessageMetadata::get<MessageMetadata::server_rcvd_time>() const { return m_server_rcvd_time; }
    
    
    
    
    // ostream operators for all classes above, output should adhere to a JSON format

    inline std::ostream& operator<<(std::ostream &o, const DateKey& m) {
        o << "\"year\":" << m.get<DateKey::year>();
        o << ",\"month\":" << m.get<DateKey::month>();
        o << ",\"day\":" << m.get<DateKey::day>();
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const TickerKey& m) {
        o << "\"asset_type\":" << (int64_t)m.get<TickerKey::asset_type>();
        o << ",\"ticker_src\":" << (int64_t)m.get<TickerKey::ticker_src>();
        o << ",\"ticker\":\"" << m.get<TickerKey::ticker>() << "\"";
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const ExpiryKey& m) {
        o << "\"asset_type\":" << (int64_t)m.get<ExpiryKey::asset_type>();
        o << ",\"ticker_src\":" << (int64_t)m.get<ExpiryKey::ticker_src>();
        o << ",\"ticker\":\"" << m.get<ExpiryKey::ticker>() << "\"";
        o << ",\"expiration\":{" << m.get<ExpiryKey::expiration>() << "}";
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const OptionKey& m) {
        o << "\"asset_type\":" << (int64_t)m.get<OptionKey::asset_type>();
        o << ",\"ticker_src\":" << (int64_t)m.get<OptionKey::ticker_src>();
        o << ",\"ticker\":\"" << m.get<OptionKey::ticker>() << "\"";
        o << ",\"expiration\":{" << m.get<OptionKey::expiration>() << "}";
        o << ",\"strike\":" << m.get<OptionKey::strike>();
        o << ",\"call_put\":" << (int64_t)m.get<OptionKey::call_put>();
        return o;
    }

    inline std::ostream& operator<<(std::ostream &o, const MessageMetadata& m) {
        o << "\"message_type\":\"" << m.get<MessageMetadata::message_type>() << "\"";
        o << ",\"is_deleted\":" << m.get<MessageMetadata::is_deleted>();
        o << ",\"time_sent\":" << m.get<MessageMetadata::time_sent>();
        o << ",\"sender_id\":" << m.get<MessageMetadata::sender_id>();
        o << ",\"from_bridge\":" << m.get<MessageMetadata::from_bridge>();
        o << ",\"from_cache\":" << m.get<MessageMetadata::from_cache>();
        o << ",\"encoded_time\":" << m.get<MessageMetadata::encoded_time>();
        o << ",\"server_rcvd_time\":" << m.get<MessageMetadata::server_rcvd_time>();
        return o;
    }

}
}
}