#ifndef HALF_ADDER_H
#define HALF_ADDER_H

#include <array>

class HalfAdder
{
    public:
        std::array<bool, 2> out(bool a, bool b);
};

#endif