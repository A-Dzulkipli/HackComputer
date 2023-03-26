#include "And.h"
#include "Nand.h"
#include "Not.h"

bool And::out(bool a, bool b)
{
    Nand myNand;
    Not myNot;

    return myNot.out(myNand.out(a,b));
}