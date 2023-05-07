#ifndef NOT_16_H
#define NOT_16_H

#include "Not.h"
#include <array>

class Not16
{
    public:
        std::array<bool, 16> out(std::array<bool, 16> in);
};

#endif