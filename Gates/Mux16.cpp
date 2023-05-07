#include "Mux16.h"
#include "Mux.h"

#include <array>

std::array<bool, 16> Mux16::out(std::array<bool, 16> a, std::array<bool, 16> b, bool sel)
{
    std::array<bool, 16> out;

    Mux myMux;

    for (int i =0; i < 16; i++)
    {
        out.at(i) = myMux.out(a.at(i), b.at(i), sel);
    }

    return out;
}