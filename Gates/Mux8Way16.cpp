#include "Mux8Way16.h"
#include "Mux4Way16.h"
#include "Mux16.h"

#include <array>

std::array<bool,16> Mux8Way16::out(std::array<bool, 16> a, std::array<bool, 16> b, std::array<bool, 16> c, std::array<bool, 16> d, std::array<bool, 16> e, std::array<bool, 16> f, std::array<bool, 16> g, std::array<bool, 16> h, std::array<bool, 3> sel)
{
    Mux4Way16 myMux4Way16;
    Mux16 myMux16;
    std::array<bool, 2> sel01;
    for (int i = 0; i < 2; i++)
    {
        sel01.at(i) = sel.at(i);
    }
    std::array<bool, 16> abcd = myMux4Way16.out(a, b, c, d, sel01);
    std::array<bool, 16> efgh = myMux4Way16.out(e, f, g, h, sel01);

    return myMux16.out(abcd, efgh, sel.at(2));
}