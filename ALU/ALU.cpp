#include "ALU.h"
#include "ALUComp.h"
#include "/home/a/c-projects/HackComputer/Include.h"

#include <array>

ALUComp ALU::out(std::array<bool, 16> x, std::array<bool, 16> y, std::array<bool, 6> control)
{
    Mux16 myMux16;
    Not16 myNot16;
    And16 myAnd16;
    Add16 myAdd16;
    And16Way myAnd16Way;

    std::array<bool, 16> zero = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

    std::array<bool, 16> zxout = myMux16.out(x, zero, control.at(0));
    std::array<bool, 16> zyout = myMux16.out(y, zero, control.at(2));

    std::array<bool, 16> notzxout = myNot16.out(zxout);
    std::array<bool, 16> notzyout = myNot16.out(zyout);

    std::array<bool, 16> nxout = myMux16.out(zxout, notzxout, control.at(1));
    std::array<bool, 16> nyout = myMux16.out(zyout, notzyout, control.at(3));

    std::array<bool, 16> xandy = myAnd16.out(nxout, nyout);
    std::array<bool, 16> xplusy = myAdd16.out(nxout, nyout);

    std::array<bool, 16> fout = myMux16.out(xandy, xplusy, control.at(4));

    std::array<bool, 16> notfout = myNot16.out(fout);

    std::array<bool, 16> ALUout = myMux16.out(fout, notfout, control.at(5));

    bool ALUzero = myAnd16Way.out(ALUout);
    bool ALUnegative = ALUout.at(15);

    ALUComp ALUreturn = ALUComp(ALUout, ALUzero, ALUnegative);

    return ALUreturn;
}