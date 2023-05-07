#include "ALUComp.h"

#include <array>

ALUComp::ALUComp(std::array<bool, 16> comp, bool zero, bool negative)
{
    this->comp = comp;
    this->zero = zero;
    this->negative = negative;
}

std::array<bool, 16> ALUComp::out()
{
    return comp;
}

bool ALUComp::zr()
{
    return zero;
}

bool ALUComp::ng()
{
    return negative;
}