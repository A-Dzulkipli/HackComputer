#include "Gates.h"
#include <array>

#include <iostream>

int main()
{
    Nand myNand;
    Not myNot;
    And myAnd;
    Or myOr;
    Xor myXor;
    Mux myMux;
    DMux myDMux;
    Not16 myNot16;
    And16 myAnd16;
    Or16 myOr16;
    Or8Way myOr8Way;
    Mux4Way16 myMux4Way16;
    Mux8Way16 myMux8Way16;
    DMux4Way myDMux4Way;
    DMux8Way myDMux8Way;
    And16Way myAnd16Way;

    //std::cout << myNand.out(true, true) << " " << myNand.out(true, false) << " " << myNand.out(false, true) << " " << myNand.out(false, false) << " " <<  myNand.out(1, 0) << std::endl; 
    //std::cout << myNot.out(1) << myNot.out(0);

    //std::cout << myAnd.out(1,0) << myAnd.out(0,1) << myAnd.out(1,1) << myAnd.out(0,0) << std::endl;

    //std::cout << myOr.out(0,0) << myOr.out(0,1) << myOr.out(1,0) << myOr.out(1,1) << std::endl;

    //std::cout << myXor.out(0,0) << myXor.out(0,1) << myXor.out(1,0) << myXor.out(1,1) << std::endl;

    /*std::cout << myMux.out(0,0,0) << myMux.out(0,0,1) << myMux.out(0,1,0) << myMux.out(0,1,1) << myMux.out(1,0,0) << myMux.out(1,0,1) << myMux.out(1,1,0) << myMux.out(1,1,1) << std::endl;

    std::cout << "00011011" << std::endl;*/

    /*std::cout << myDMux.out(0,0).at(0) << myDMux.out(0,0).at(1) << " " << myDMux.out(0,1).at(0) << myDMux.out(0,1).at(1) << " " << myDMux.out(1,0).at(0) << myDMux.out(1,0).at(1) << " " << myDMux.out(1,1).at(0) << myDMux.out(1,1).at(1) << " " << std::endl;

    std::cout << "00 00 10 01" << std::endl;*/

    /*

    std::array<bool, 16> in = {1, 1, 0, 0, 1, 0, 1, 1, 0, 0, 1, 1, 1, 1, 0, 0};

    std::array<bool, 16> out = myNot16.out(in);

    for (int i = 0; i < 16; i++)
    {
        std::cout << in.at(i);
    }

    std::cout << std::endl;

    for (int i = 0; i < 16; i++)
    {
        std::cout << out.at(i);
    }

    std::cout << std::endl;*/

    /*std::array<bool, 16> a = {1, 1, 0, 0, 1, 0, 1, 1, 0, 0, 1, 1, 1, 1, 0, 0};
    std::array<bool, 16> b = {0, 1, 1, 0, 1, 1, 1, 0, 1, 0, 1, 0, 0, 1, 1, 0};

    std::array<bool, 16> out = myAnd16.out(a,b);

    for (int i = 0; i < 16; i++)
    {
        std::cout << a.at(i);
    }

    std::cout << std::endl;

    for (int i = 0; i < 16; i++)
    {
        std::cout << b.at(i);
    }

    std::cout << std::endl;

    for (int i = 0; i < 16; i++)
    {
        std::cout << out.at(i);
    }

    std::cout << std::endl;*/

    /*std::array<bool, 16> a = {1, 1, 0, 0, 1, 0, 1, 1, 0, 0, 1, 1, 1, 1, 0, 0};
    std::array<bool, 16> b = {0, 1, 1, 0, 1, 1, 1, 0, 1, 0, 1, 0, 0, 1, 1, 0};

    std::array<bool, 16> out = myOr16.out(a,b);

    for (int i = 0; i < 16; i++)
    {
        std::cout << a.at(i);
    }

    std::cout << std::endl;

    for (int i = 0; i < 16; i++)
    {
        std::cout << b.at(i);
    }

    std::cout << std::endl;

    for (int i = 0; i < 16; i++)
    {
        std::cout << out.at(i);
    }<

    std::cout << std::endl;*/

    /*std::array<bool, 8> a = {0, 0, 0, 0, 0, 0, 0, 0};
    std::array<bool, 8> b = {1, 0, 1, 0, 1, 0, 1, 0};

    std::cout << myOr8Way.out(a) << myOr8Way.out(b) << std::endl;*/

    /*std::array<bool, 16> a = {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    std::array<bool, 16> b = {0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    std::array<bool, 16> c = {0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    std::array<bool, 16> d = {0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    std::array<bool, 16> e = {0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    std::array<bool, 16> f = {0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    std::array<bool, 16> g = {0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    std::array<bool, 16> h = {0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0};

    std::array<bool, 3> sel1 = {0,0,0};
    std::array<bool, 3> sel2 = {1,0,0};
    std::array<bool, 3> sel3 = {0,1,0};
    std::array<bool, 3> sel4 = {1,1,0};
    std::array<bool, 3> sel5 = {0,0,1};
    std::array<bool, 3> sel6 = {1,0,1};
    std::array<bool, 3> sel7 = {0,1,1};
    std::array<bool, 3> sel8 = {1,1,1};

    std::array<bool, 16> out1 = myMux8Way16.out(a, b, c, d, e, f, g, h, sel1);
    std::array<bool, 16> out2 = myMux8Way16.out(a, b, c, d, e, f, g, h, sel2);
    std::array<bool, 16> out3 = myMux8Way16.out(a, b, c, d, e, f, g, h, sel3);
    std::array<bool, 16> out4 = myMux8Way16.out(a, b, c, d, e, f, g, h, sel4);
    std::array<bool, 16> out5 = myMux8Way16.out(a, b, c, d, e, f, g, h, sel5);
    std::array<bool, 16> out6 = myMux8Way16.out(a, b, c, d, e, f, g, h, sel6);
    std::array<bool, 16> out7 = myMux8Way16.out(a, b, c, d, e, f, g, h, sel7);
    std::array<bool, 16> out8 = myMux8Way16.out(a, b, c, d, e, f, g, h, sel8);

    for (int i = 0; i < 16; i++)
    {
        std::cout << out1.at(i);
    }

    std::cout << std::endl;
    
    for (int i = 0; i < 16; i++)
    {
        std::cout << out2.at(i);
    }

    std::cout << std::endl;

    for (int i = 0; i < 16; i++)
    {
        std::cout << out3.at(i);
    }

    std::cout << std::endl;

    for (int i = 0; i < 16; i++)
    {
        std::cout << out4.at(i);
    }

    std::cout << std::endl;

    for (int i = 0; i < 16; i++)
    {
        std::cout << out5.at(i);
    }

    std::cout << std::endl;
    
    for (int i = 0; i < 16; i++)
    {
        std::cout << out6.at(i);
    }

    std::cout << std::endl;

    for (int i = 0; i < 16; i++)
    {
        std::cout << out7.at(i);
    }

    std::cout << std::endl;

    for (int i = 0; i < 16; i++)
    {
        std::cout << out8.at(i);
    }

    std::cout << std::endl;*/

    /*std::cout << myDMux4Way.out(1, {0,0}).at(0) << myDMux4Way.out(1, {0,0}).at(1) <<myDMux4Way.out(1, {0,0}).at(2) <<myDMux4Way.out(1, {0,0}).at(3) << std::endl;
    std::cout << myDMux4Way.out(1, {0,1}).at(0) << myDMux4Way.out(1, {0,1}).at(1) <<myDMux4Way.out(1, {0,1}).at(2) <<myDMux4Way.out(1, {0,1}).at(3) << std::endl;
    std::cout << myDMux4Way.out(1, {1,0}).at(0) << myDMux4Way.out(1, {1,0}).at(1) <<myDMux4Way.out(1, {1,0}).at(2) <<myDMux4Way.out(1, {1,0}).at(3) << std::endl;
    std::cout << myDMux4Way.out(1, {1,1}).at(0) << myDMux4Way.out(1, {1,1}).at(1) <<myDMux4Way.out(1, {1,1}).at(2) <<myDMux4Way.out(1, {1,1}).at(3) << std::endl;*/

    //std::cout<< myDMux.out(1,1).at(0) << myDMux.out(1,1).at(1) << std::endl;

    /*std::array<bool, 3> sel1 = {0,0,0};
    std::array<bool, 3> sel2 = {1,0,0};
    std::array<bool, 3> sel3 = {0,1,0};
    std::array<bool, 3> sel4 = {1,1,0};
    std::array<bool, 3> sel5 = {0,0,1};
    std::array<bool, 3> sel6 = {1,0,1};
    std::array<bool, 3> sel7 = {0,1,1};
    std::array<bool, 3> sel8 = {1,1,1};

    std::array<bool, 8> out1;
    std::array<bool, 8> out2;
    std::array<bool, 8> out3;
    std::array<bool, 8> out4;
    std::array<bool, 8> out5;
    std::array<bool, 8> out6;
    std::array<bool, 8> out7;
    std::array<bool, 8> out8;

    out1 = myDMux8Way.out(1, sel1);
    out2 = myDMux8Way.out(1, sel2);
    out3 = myDMux8Way.out(1, sel3);
    out4 = myDMux8Way.out(1, sel4);
    out5 = myDMux8Way.out(1, sel5);
    out6 = myDMux8Way.out(1, sel6);
    out7 = myDMux8Way.out(1, sel7);
    out8 = myDMux8Way.out(1, sel8);

    for (int i = 0; i < 8; i++)
    {
        std::cout << out1.at(i);
    }

    std::cout << std::endl;

    for (int i = 0; i < 8; i++)
    {
        std::cout << out2.at(i);
    }

    std::cout << std::endl;

    for (int i = 0; i < 8; i++)
    {
        std::cout << out3.at(i);
    }

    std::cout << std::endl;

    for (int i = 0; i < 8; i++)
    {
        std::cout << out4.at(i);
    }

    std::cout << std::endl;

    for (int i = 0; i < 8; i++)
    {
        std::cout << out5.at(i);
    }

    std::cout << std::endl;

    for (int i = 0; i < 8; i++)
    {
        std::cout << out6.at(i);
    }

    std::cout << std::endl;

    for (int i = 0; i < 8; i++)
    {
        std::cout << out7.at(i);
    }

    std::cout << std::endl;

    for (int i = 0; i < 8; i++)
    {
        std::cout << out8.at(i);
    }

    std::cout << std::endl;
    */

    std::array<bool, 16> test1 = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    std::array<bool, 16> test2 = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1};
    std::array<bool, 16> test3 = {1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1};
    std::array<bool, 16> test4 = {1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};

    std::cout << myAnd16Way.out(test1) << myAnd16Way.out(test2) << myAnd16Way.out(test3) << myAnd16Way.out(test4) << std::endl;


}
