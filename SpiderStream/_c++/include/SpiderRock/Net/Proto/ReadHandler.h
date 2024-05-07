#pragma once

#include "stdafx.h"
#include <netinet/in.h>

namespace SpiderRock
{
	namespace Net
	{
		namespace Proto
		{
			template <class _Tcontext>
			class ReadHandler
			{
			public:
				virtual int Handle(uint8_t *buffer, message_length_t length, _Tcontext *context, const sockaddr_in &source) = 0;
			};
		}
	}
}