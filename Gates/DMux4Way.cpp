#include "DMux4Way.h"
#include <array>
#include "DMux.h"

std::array<bool, 4> DMux4Way::out(bool in, std::array<bool,2> sel)
{
    DMux myDMux;

    std::array<bool, 4> out;

    std::array<bool, 2> firstout;

    firstout = myDMux.out(in, sel.at(1));

    out.at(0) = myDMux.out(firstout.at(0), sel.at(0)).at(0);
    out.at(1) = myDMux.out(firstout.at(0), sel.at(0)).at(1);
    out.at(2) = myDMux.out(firstout.at(1), sel.at(0)).at(0);
    out.at(3) = myDMux.out(firstout.at(1), sel.at(0)).at(1);

    return out;
    

}