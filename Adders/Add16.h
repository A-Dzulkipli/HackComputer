#ifndef ADD_16_H
#define ADD_16_H

#include <array>

class Add16
{
    public:
        std::array<bool, 16> out(std::array<bool, 16> a, std::array<bool, 16> b);
};

#endif