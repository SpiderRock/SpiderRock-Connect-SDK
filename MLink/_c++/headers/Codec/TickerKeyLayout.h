#pragma once
#include <cstdint>
#include <cstring>
#include <string>
#include "TickerLayout.h"
#include "Enums.h"

namespace SRProtobufCPP {
	
	
	 struct TickerKeyLayout {
				

		AssetType assetType;
		TickerSrc tickerSrc;
		TickerLayout ticker;

        TickerKeyLayout() {}

		TickerKeyLayout(AssetType assetType, TickerSrc tickerSrc, TickerLayout ticker)
			: assetType(assetType), tickerSrc(tickerSrc), ticker(ticker) {}

		bool Equals(const TickerKeyLayout& other) const {
			return ticker == other.ticker &&
				assetType == other.assetType &&
				tickerSrc == other.tickerSrc;
		}

		int CompareTo(const TickerKeyLayout& other) const {
			int order = static_cast<int>(assetType) - static_cast<int>(other.assetType);
			if (order != 0) return order;

			order = static_cast<int>(tickerSrc) - static_cast<int>(other.tickerSrc);
			if (order != 0) return order;

			return ticker.CompareTo(other.ticker);
		}

		bool operator==(const TickerKeyLayout& right) const {
			return Equals(right);
		}

		bool operator!=(const TickerKeyLayout& right) const {
			return !Equals(right);
		}

		bool operator<(const TickerLayout& y) const {
			return ticker.CompareTo(y) < 0;
		}

		bool operator>(const TickerLayout& y) const {
			return ticker.CompareTo(y) > 0;
		}

		bool operator<=(const TickerLayout& y) const {
			return ticker.CompareTo(y) <= 0;
		}

		bool operator>=(const TickerLayout& y) const {
			return ticker.CompareTo(y) >= 0;
		}	

		bool IsEmpty() const {
			return assetType == AssetType::None || tickerSrc == TickerSrc::None;
		}

		
	};

} // namespace SRProtobufCPP 


