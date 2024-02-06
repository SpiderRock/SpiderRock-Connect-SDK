#pragma once
#ifndef SRPROTOBUF_TIMESPAN_H
#define SRPROTOBUF_TIMESPAN_H

#include <cstdint>

namespace SRProtobufCPP {

	class TimeSpan {
	public:
		static const long long TicksPerSecond = 10000000;

		TimeSpan() : ticks_(0) {}
		explicit TimeSpan(long long ticks) : ticks_(ticks) {}

		long long ticks() const { return ticks_; }
		void set_ticks(long long ticks) { ticks_ = ticks; }

		static TimeSpan from_ticks(long long ticks) { return TimeSpan(ticks); }

	private:
		long long ticks_;
	};

} // namespace SRProtobufCPP

#endif // SRPROTOBUF_TIMESPAN_H
