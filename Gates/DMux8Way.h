#ifndef DMUX_8_WAY_H
#define DMUX_8_WAY_H

#include <array>

class DMux8Way
{
    public:
        std::array<bool, 8> out(bool in, std::array<bool, 3> sel);
};

#endif