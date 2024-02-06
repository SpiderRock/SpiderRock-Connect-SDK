#pragma once
#ifndef SRPROTOBUF_TEXT1CODEC_H
#define SRPROTOBUF_TEXT1CODEC_H

#include <cstdint>
#include <cstring>

#include "VarLengthStringCodec.h"


namespace SRProtobufCPP {

	class Text1String {
	public:
		explicit Text1String(int length) : buffer_(length), length_(0) {}

		int Length() const { return length_; }
		const char* Data() const { return buffer_.data(); }

		void SetLength(int length) { length_ = length; }
		char* MutableData() { return buffer_.data(); }

	private:
		std::vector<char> buffer_;
		int length_;
	};

	class Text1Codec : public VarLengthStringCodec<Text1String, 255> {
	public:
		Text1Codec() : VarLengthStringCodec<Text1String, 255>() {}
	};

} // namespace SRProtobufCPP

#endif // SRPROTOBUF_TEXT1CODEC_H
