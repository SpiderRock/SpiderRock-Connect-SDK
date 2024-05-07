#pragma once

#include "SpiderRock/SpiderStream/Fields.h"
#include "SpiderRock/SpiderStream/MessageType.Auto.h"

namespace SpiderRock
{
    namespace SpiderStream
    {
        namespace MLink
        {
#pragma pack(1)
            struct Header
            {
                enum class Protocol : Enum
                {
                    Json = 'J',
                    Protobuf = 'P',
                    Binary = 'B',
                    Mbus = Binary
                };

                inline Header(Protocol protocol, MessageType message_type, uint16_t message_length)
                    : preamble{'\r', '\n'},
                      protocol(protocol)
                {
                    setMessageType(message_type);
                    setMessageLength(message_length);
                }

                inline uint16_t getMessageType() const
                {
                    return ConvertAsciiToNumber(message_type, 5);
                }

                inline void setMessageType(MessageType value)
                {
                    ConvertNumberToAscii(static_cast<uint16_t>(value), message_type, 5);
                }

                inline uint16_t getMessageLength() const
                {
                    return ConvertAsciiToNumber(message_length, 6);
                }

                inline void setMessageLength(uint16_t value)
                {
                    ConvertNumberToAscii(value, message_length, 6);
                }

            private:
                AsciiChar preamble[2];
                Protocol protocol;
                AsciiChar message_type[5];
                AsciiChar message_length[6];

                inline void ConvertNumberToAscii(uint16_t value, AsciiChar *buffer, int size)
                {
                    if (value >= static_cast<uint16_t>(std::pow(10, size)))
                    {
                        throw std::invalid_argument("Value must be less than " + std::to_string(static_cast<int>(std::pow(10, size))));
                    }
                    for (int i = size - 1; i >= 0; --i)
                    {
                        buffer[i] = '0' + (value % 10);
                        value /= 10;
                    }
                }

                inline uint16_t ConvertAsciiToNumber(const Byte *buffer, int size) const
                {
                    uint16_t result = 0;
                    auto factor = static_cast<uint64_t>(std::pow(10, size - 1));
                    for (int i = 0; i < size; ++i)
                    {
                        result += (buffer[i] - '0') * factor;
                        factor /= 10;
                    }
                    return result;
                }
            };
#pragma pack()

            typedef Header MLinkHeader;
        }
    }
}