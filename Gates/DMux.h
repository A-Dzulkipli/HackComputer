#ifndef DMUX_H
#define DMUX_H

#include <array>

class DMux
{
    public:
        std::array<bool, 2> out(bool in, bool sel);
};

#endif