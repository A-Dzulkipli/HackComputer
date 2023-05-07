#include "/home/a/c-projects/HackComputer/Include.h"
#include <array>
#include <iostream>

int main()
{
    ALU myALU;

    std::array<bool, 16> zero = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    std::array<bool, 16> x = {1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    std::array<bool, 16> y = {1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

    std::array<bool, 6> control1 = {0, 1, 1, 1, 1, 1};
    std::array<bool, 6> control2 = {0,0,0,0,1,0};

    ALUComp zeroplusone = myALU.out(zero, x, control1);
    ALUComp xplusy = myALU.out(x, y, control2);

    for (int i = 0; i < 16; i++)
    {
        std::cout << zeroplusone.out().at(i);
    }

    std::cout << std::endl;

    for (int i = 0; i < 16; i++)
    {
        std::cout << xplusy.out().at(i);
    }

    std::cout << std::endl;
}