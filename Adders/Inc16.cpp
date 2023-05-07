#include "Inc16.h"
#include "Add16.h"

#include <array>

std::array<bool, 16> Inc16::out(std::array<bool, 16> in)
{
    Add16 myAdd16;

    std::array<bool, 16> one = {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,0};

    return myAdd16.out(in, one);
}