#include "And16Way.h"
#include "And.h"

#include <array>

bool And16Way::out(std::array<bool, 16> in)
{
    bool out = true;

    And myAnd;

    for (int i = 0; i < 16; i++)
    {
        out = myAnd.out(out, in.at(i));
    }

    return out;
}