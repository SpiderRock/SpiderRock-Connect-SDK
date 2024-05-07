#pragma once

#include <string>
#include <stdexcept>

namespace SpiderRock
{
    namespace SpiderStream
    {
        namespace MLink
        {
            class CacheClientException : public std::runtime_error
            {
            public:
                CacheClientException(const std::string &message) : std::runtime_error(message) {}
                ~CacheClientException() {}
            };
        }
    }
}