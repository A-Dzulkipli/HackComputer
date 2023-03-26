#include "Or.h"
#include "Nand.h"
#include "Not.h"

bool Or::out(bool a, bool b)
{
    Nand myNand;
    Not myNot;

    return (myNand.out(myNot.out(a), myNot.out(b)));
}