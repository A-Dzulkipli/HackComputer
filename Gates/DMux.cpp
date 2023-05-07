#include "Not.h"
#include "And.h"
#include "DMux.h"
#include <array>

std::array<bool, 2> DMux::out(bool in, bool sel)
{
    std::array<bool, 2> out;
    Not myNot;
    And myAnd;

    bool notSel = myNot.out(sel);

    out.at(0) = myAnd.out(in, notSel);
    out.at(1) = myAnd.out(in, sel);

    return out;
}