#include "Xor.h"
#include "And.h"
#include "Not.h"
#include "Or.h"

bool Xor::out(bool a, bool b)
{
    And myAnd;
    Not myNot;
    Or myOr;

    return myOr.out(myAnd.out(a, myNot.out(b)), myAnd.out(myNot.out(a), b));
}