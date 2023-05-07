#ifndef MUX_4_WAY_16_H
#define MUX_4_WAY_16_H

#include <array>

class Mux4Way16
{
    public:
        std::array<bool, 16> out(std::array<bool, 16> a, std::array<bool, 16> g, std::array<bool, 16> c, std::array<bool, 16> d, std::array<bool, 2> sel);
};

#endif