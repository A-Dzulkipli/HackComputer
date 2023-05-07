#include "/home/a/c-projects/HackComputer/Gates/Gates.h"
#include "HalfAdder.h"

#include <array>

std::array<bool, 2> HalfAdder::out(bool a, bool b)
{
    And myAnd;
    Xor myXor;

    std::array<bool, 2> out;

    out.at(0) = myXor.out(a, b);
    out.at(1) = myAnd.out(a, b);

    return out;
}