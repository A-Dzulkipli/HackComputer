#ifndef MUX_8_WAY_16_H
#define MUX_8_WAY_16_H

#include <array>

class Mux8Way16
{
    public:
        std::array<bool,16> out(std::array<bool, 16> a, std::array<bool, 16> b, std::array<bool, 16> c, std::array<bool, 16> d, std::array<bool, 16> e, std::array<bool, 16> f, std::array<bool, 16> g, std::array<bool, 16> h, std::array<bool, 3> sel);
};

#endif