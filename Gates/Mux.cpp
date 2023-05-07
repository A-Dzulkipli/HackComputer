#include "And.h"
#include "Not.h"
#include "Or.h"
#include "Mux.h"

bool Mux::out(bool a, bool b, bool sel)
{
    And myAnd;
    Not myNot;
    Or myOr;

    bool notSel = myNot.out(sel);
    bool sel0 = myAnd.out(a, notSel);
    bool sel1 = myAnd.out(b, sel);

    return myOr.out(sel0, sel1);
}