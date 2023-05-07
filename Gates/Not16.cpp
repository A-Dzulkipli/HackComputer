#include "Not16.h"
#include "Not.h"

#include <array>

std::array<bool, 16> Not16::out(std::array<bool, 16> in)
{
    std::array<bool, 16> out;

    Not myNot;

    for (int i = 0; i < 16; i++)
    {
        out.at(i) = myNot.out(in.at(i));
    }

    return out;
}
