#pragma once

#include <cstdint>
#include "TickerKeyLayout.h"

namespace SRProtobufCPP {

	struct ExpiryKeyLayout {
    
    	AssetType assetType;
		TickerSrc tickerSrc;
		TickerLayout ticker;
		int year;
        int month;
        int day;

        ExpiryKeyLayout() {}
		ExpiryKeyLayout(AssetType assetType, TickerSrc tickerSrc, TickerLayout ccode, int year, int month, int day)
			: assetType(assetType), tickerSrc(tickerSrc), ticker(ccode), year(year),
			month(static_cast<uint8_t>(month)), day(static_cast<uint8_t>(day)) {}

		int CompareTo(const ExpiryKeyLayout& other) const {
			int order = static_cast<int>(assetType) - static_cast<int>(other.assetType);
			if (order != 0) return order;

			order = static_cast<int>(tickerSrc) - static_cast<int>(other.tickerSrc);
			if (order != 0) return order;

			order = ticker.CompareTo(other.ticker);
			if (order != 0) return order;

			order = static_cast<int>(year) - static_cast<int>(other.year);
			if (order != 0) return order;

			order = static_cast<int>(month) - static_cast<int>(other.month);
			if (order != 0) return order;

			return static_cast<int>(day) - static_cast<int>(other.day);
		}

		

		explicit operator TickerKeyLayout() const {
			return TickerKeyLayout(assetType, tickerSrc, ticker);
		}

		explicit operator TickerLayout() const {
			return ticker;
		}        

		bool IsEmpty() const {
			return assetType == AssetType::None || tickerSrc == TickerSrc::None;
		}

    };

} // namespace SRMsgBase::Mbus::Layouts
