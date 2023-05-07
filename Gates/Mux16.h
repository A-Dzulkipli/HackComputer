#ifndef Mux_16_H
#define Mux_16_H

#include <array>

class Mux16
{
    public:
        std::array<bool, 16> out(std::array<bool, 16> a, std::array<bool, 16> b, bool sel);
};

#endif

