#ifndef ALU_H
#define ALU_H

#include "ALUComp.h"

#include <array>

class ALU
{
    public:
        ALUComp out(std::array<bool, 16> x, std::array<bool, 16> y, std::array<bool, 6> control);
};

#endif

