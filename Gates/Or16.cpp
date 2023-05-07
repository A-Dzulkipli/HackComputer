#include "Or16.h"
#include "Or.h"

#include <array>

std::array<bool, 16> Or16::out(std::array<bool, 16> a, std::array<bool, 16> b)
{
    std::array<bool, 16> out;

    Or myOr;

    for (int i =0; i < 16; i++)
    {
        out.at(i) = myOr.out(a.at(i), b.at(i));
    }

    return out;
}