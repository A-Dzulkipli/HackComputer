#include "Mux4Way16.h"
#include "Mux16.h"

#include <array>

std::array<bool, 16> Mux4Way16::out(std::array<bool, 16> a, std::array<bool, 16> b, std::array<bool, 16> c, std::array<bool, 16> d, std::array<bool, 2> sel)
{
    Mux16 myMux16;

    std::array<bool, 16> ab = myMux16.out(a, b, sel.at(0));
    std::array<bool, 16> cd = myMux16.out(c, d, sel.at(0));

    return myMux16.out(ab, cd, sel.at(1));
}