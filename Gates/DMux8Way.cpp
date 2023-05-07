#include "DMux8Way.h"
#include "DMux4Way.h"
#include "DMux.h"

#include <array>

std::array<bool, 8> DMux8Way::out(bool in, std::array<bool,3> sel)
{
    std::array<bool, 8> out;

    std::array<bool, 2> firstout;

    DMux4Way myDMux4Way;
    DMux myDMux;

    firstout = myDMux.out(in, sel.at(2));

    out.at(0) = myDMux4Way.out(firstout.at(0), {sel.at(0), sel.at(1)}).at(0);
    out.at(1) = myDMux4Way.out(firstout.at(0), {sel.at(0), sel.at(1)}).at(1);
    out.at(2) = myDMux4Way.out(firstout.at(0), {sel.at(0), sel.at(1)}).at(2);
    out.at(3) = myDMux4Way.out(firstout.at(0), {sel.at(0), sel.at(1)}).at(3);
    out.at(4) = myDMux4Way.out(firstout.at(1), {sel.at(0), sel.at(1)}).at(0);
    out.at(5) = myDMux4Way.out(firstout.at(1), {sel.at(0), sel.at(1)}).at(1);
    out.at(6) = myDMux4Way.out(firstout.at(1), {sel.at(0), sel.at(1)}).at(2);
    out.at(7) = myDMux4Way.out(firstout.at(1), {sel.at(0), sel.at(1)}).at(3);

    return out;
}