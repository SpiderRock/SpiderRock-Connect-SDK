#pragma once

#include <cstdint>
#include <string>

namespace spiderrock {
namespace protobuf {
namespace api {

    using int32 = std::int32_t;
    using int64 = std::int64_t;
    using uint32 = std::uint32_t;
    using uint64 = std::uint64_t;
    using string = std::string;

    template <typename T>
    struct wrapped
    {
        wrapped() = default;
        wrapped(const T& v) : _{ v } { }

        operator T& () { return _; }
        operator const T& () const { return _; }

        T _{};
    };

    template <typename T>
    using Strong
        = typename std::conditional<std::is_class<T>::value, T, wrapped<T>>::type;

    #define DECL_STRONG_TYPE(TypeName, ...) \
        struct TypeName : Strong<__VA_ARGS__> \
        { \
            template <typename... Args> \
            TypeName(Args&&... args) : Strong<__VA_ARGS__>(std::forward<Args>(args)...) { } \
        }

}
}
}