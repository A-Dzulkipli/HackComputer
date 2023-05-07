#include "And16.h"
#include "And.h"

#include <array>

std::array<bool, 16> And16::out(std::array<bool, 16> a, std::array<bool, 16> b)
{
    std::array<bool, 16> out;

    And myAnd;

    for (int i =0; i < 16; i++)
    {
        out.at(i) = myAnd.out(a.at(i), b.at(i));
    }

    return out;
}