#pragma once

#include <cstdint>
#include <cmath>
#include <algorithm>
#include "ExpiryKeyLayout.h"

namespace SRProtobufCPP {

	    struct OptionKeyLayout {
		AssetType assetType;
		TickerSrc tickerSrc;
		TickerLayout ticker;
		int year;
		int  month;
		int  day;
		double Strike;
		CallPut callPut;

        OptionKeyLayout() {}

        OptionKeyLayout(AssetType assetType, TickerSrc tickerSrc, TickerLayout root, int year, int month, int day, double strike, CallPut callPut)
            : assetType(assetType), tickerSrc(tickerSrc), ticker(root), year(year),
            month(static_cast<uint8_t>(month)), day(static_cast<uint8_t>(day)), Strike(std::round(strike * 1e7) / 1e7), callPut(callPut) {}


		int CompareTo(const OptionKeyLayout& other) const {
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

			order = static_cast<int>(day) - static_cast<int>(other.day);
			if (order != 0) return order;

			order = static_cast<int>(std::round(Strike * 1e7)) - static_cast<int>(std::round(other.Strike * 1e7));
			if (order != 0) return order;

			return static_cast<int>(callPut) - static_cast<int>(other.callPut);
		}

		
		explicit operator TickerKeyLayout() const {
			return TickerKeyLayout(assetType, tickerSrc, ticker);
		}

		explicit operator ExpiryKeyLayout() const {
			return ExpiryKeyLayout(assetType, tickerSrc, ticker, year, month, day);
		}

		explicit operator TickerLayout() const {
			return ticker;
		}		

		bool IsEmpty() const {
			return assetType == AssetType::None || tickerSrc == TickerSrc::None;
		}
	};

} 
