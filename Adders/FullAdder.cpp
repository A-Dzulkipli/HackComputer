#include "FullAdder.h"
#include "HalfAdder.h"
#include "/home/a/c-projects/HackComputer/Gates/Gates.h"

#include <array>

std::array<bool, 2> FullAdder::out(bool a, bool b, bool c)
{
    HalfAdder myHalfAdder;
    Or myOr;

    std::array<bool, 2> firstout = myHalfAdder.out(a, b);
    std::array<bool, 2> secondout = myHalfAdder.out(firstout.at(0), c);

    std::array<bool, 2> out;

    out.at(0) = secondout.at(0);
    out.at(1) = myOr.out(firstout.at(1), secondout.at(1));
    
    return out;
}