#ifndef FULL_ADDER_H
#define FULL_ADDER_H

#include <array>

class FullAdder
{
    public:
        std::array<bool, 2> out(bool a, bool b, bool c);
};

#endif

