#pragma once

#ifndef TAGCODECENUMS_H
#define TAGCODECENUMS_H


namespace SRProtobufCPP {

    namespace TagCodecEnums {

        enum class TagType : uint32_t {
            Varint = 0,
            Fixed64 = 1,
            LengthDelimited = 2,
            StartGroup = 3,
            EndGroup = 4,
            Fixed32 = 5
        };
    }
}


#endif // TAGCODECENUMS_H