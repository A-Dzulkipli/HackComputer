#ifndef DMUX_4_WAY_H
#define DMUX_4_WAY_H

#include <array>

class DMux4Way
{   
    public:
        std::array<bool, 4> out(bool in, std::array<bool, 2> sel);
};

#endif