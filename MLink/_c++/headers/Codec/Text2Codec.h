#pragma once
#ifndef SRPROTOBUF_TEXT2CODEC_H
#define SRPROTOBUF_TEXT2CODEC_H

#include "VarLengthStringCodec.h"

namespace SRProtobufCPP {

	class Text2String {
	public:
		explicit Text2String(int length) : buffer_(length), length_(0) {}

		int Length() const { return length_; }
		const char* Data() const { return buffer_.data(); }

		void SetLength(int length) { length_ = length; }
		char* MutableData() { return buffer_.data(); }

	private:
		std::vector<char> buffer_;
		int length_;
	};

	class Text2Codec : public VarLengthStringCodec<Text2String, 10000> {
	public:
		Text2Codec() : VarLengthStringCodec<Text2String, 10000>() {}
	};

} // namespace SRProtobufCPP

#endif // SRPROTOBUF_TEXT2CODEC_H
