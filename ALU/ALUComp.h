#ifndef ALU_COMP_H
#define ALU_COMP_H

#include <array>

class ALUComp
{
    private:
        std::array<bool, 16> comp;
        bool zero;
        bool negative;
    
    public:
        ALUComp(std::array<bool,16> comp, bool zero, bool negative);
        std::array<bool, 16> out();
        bool zr();
        bool ng();
};

#endif