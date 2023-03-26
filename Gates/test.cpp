#include "Nand.h"
#include "Not.h"
#include "And.h"
#include "Or.h"

#include <iostream>

int main()
{
    Nand myNand;
    Not myNot;
    And myAnd;
    Or myOr;

    //std::cout << myNand.out(true, true) << " " << myNand.out(true, false) << " " << myNand.out(false, true) << " " << myNand.out(false, false) << " " <<  myNand.out(1, 0) << std::endl; 
    //std::cout << myNot.out(1) << myNot.out(0);

    //std::cout << myAnd.out(1,0) << myAnd.out(0,1) << myAnd.out(1,1) << myAnd.out(0,0) << std::endl;

    std::cout << myOr.out(0,0) << myOr.out(0,1) << myOr.out(1,0) << myOr.out(1,1) << std::endl;
}
