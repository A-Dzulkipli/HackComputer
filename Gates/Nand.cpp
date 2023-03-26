#include "Nand.h"

bool Nand::out(bool a, bool b)
{
    return !(a and b);
}