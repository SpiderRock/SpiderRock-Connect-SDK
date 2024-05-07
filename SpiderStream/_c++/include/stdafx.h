#pragma once

#include <iostream>
#include <chrono>
#include <iomanip>
#include <sstream>

typedef uint16_t app_id_t;
typedef uint16_t message_length_t;

namespace SpiderRock
{
	inline std::string GetCurrentTime()
	{
		auto now = std::chrono::system_clock::now();
		auto time = std::chrono::system_clock::to_time_t(now);
		std::tm tm{};
		localtime_r(&time, &tm);
		auto milliseconds = std::chrono::duration_cast<std::chrono::milliseconds>(now.time_since_epoch()) % 1000;

		std::stringstream ss;

		ss
			<< "["
			<< std::put_time(&tm, "%Y-%m-%d %H:%M:%S")
			<< '.' << std::setfill('0') << std::setw(3) << milliseconds.count()
			<< "]";

		return ss.str();
	}

	template <typename TF>
	inline void Trace(std::ostream &out, TF const &f)
	{
		out << f << std::endl;
	}

	template <typename TF, typename... TR>
	inline void Trace(std::ostream &out, TF const &f, TR const &...rest)
	{
		out << f << " ";
		Trace(out, rest...);
	}
}

#ifdef __GNUC__
#define __SR_FUNC__ __PRETTY_FUNCTION__
#else
#define __SR_FUNC__ __func__
#endif

#ifndef SR_TRACE_INFO
#define SR_TRACE_INFO(...) SpiderRock::Trace(std::cout, GetCurrentTime(), __SR_FUNC__, ":", __VA_ARGS__)
#endif

#ifndef SR_TRACE_WARNING
#define SR_TRACE_WARNING(...) SpiderRock::Trace(std::cerr, GetCurrentTime(), __SR_FUNC__, ":", __VA_ARGS__)
#endif

#ifndef SR_TRACE_ERROR
#define SR_TRACE_ERROR(...) SpiderRock::Trace(std::cerr, GetCurrentTime(), __SR_FUNC__, ":", __VA_ARGS__)
#endif

#include <string>
#include <cstring>
#include <cerrno>

namespace SpiderRock
{
	inline int GetLastError() { return errno; }

	template <typename T>
	inline void ThrowLastErrorAs() { throw T(std::string(strerror(GetLastError()))); }
}
