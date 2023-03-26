#include "Not.h"
#include "Nand.h"

bool Not::out(bool in)
{
    Nand myNand;
    return myNand.out(in, in);
}