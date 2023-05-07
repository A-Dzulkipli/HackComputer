#include "Add16.h"
#include "FullAdder.h"

#include <array>

std::array<bool, 16> Add16::out(std::array<bool, 16> a, std::array<bool, 16> b)
{
    FullAdder myFullAdder;

    std::array<std::array<bool, 2>, 16> bigout;
    std::array<bool, 16> out;

    bigout.at(0) = myFullAdder.out(a.at(0), b.at(0), 0);

    out.at(0) = bigout.at(0).at(0);

    for (int i = 1; i < 16; i++)
    {
        bigout.at(i) = myFullAdder.out(a.at(i), b.at(i), bigout.at(i-1).at(1));
        out.at(i) = bigout.at(i).at(0);
    }

    return out;

}