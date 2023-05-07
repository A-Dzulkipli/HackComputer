#include "Or8Way.h"
#include "Or.h"

#include <array>

bool Or8Way::out(std::array<bool, 8> in)
{
    bool out = false;

    Or myOr;

    for (int i = 0; i < 8; i++)
    {
        out = myOr.out(out, in.at(i));
    }

    return out;
}