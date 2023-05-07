#include "Adders.h"

#include <array>
#include <iostream>

int main()
{
    HalfAdder myHalfAdder;
    FullAdder myFullAdder;
    Add16 myAdd16;
    Inc16 myInc16;

    /*std::cout << myHalfAdder.out(0,0).at(0) << myHalfAdder.out(0,0).at(1) << std::endl;
    std::cout << myHalfAdder.out(0,1).at(0) << myHalfAdder.out(0,1).at(1) << std::endl;
    std::cout << myHalfAdder.out(1,0).at(0) << myHalfAdder.out(1,0).at(1) << std::endl;
    std::cout << myHalfAdder.out(1,1).at(0) << myHalfAdder.out(1,1).at(1) << std::endl;*/

    /*std::cout << myFullAdder.out(0, 0, 0).at(0) << myFullAdder.out(0, 0, 0).at(1) << std::endl;
    std::cout << myFullAdder.out(0, 0, 1).at(0) << myFullAdder.out(0, 0, 1).at(1) << std::endl;
    std::cout << myFullAdder.out(0, 1, 0).at(0) << myFullAdder.out(0, 1, 0).at(1) << std::endl;
    std::cout << myFullAdder.out(0, 1, 1).at(0) << myFullAdder.out(0, 1, 1).at(1) << std::endl;
    std::cout << myFullAdder.out(1, 0, 0).at(0) << myFullAdder.out(1, 0, 0).at(1) << std::endl;
    std::cout << myFullAdder.out(1, 0, 1).at(0) << myFullAdder.out(1, 0, 1).at(1) << std::endl;
    std::cout << myFullAdder.out(1, 1, 0).at(0) << myFullAdder.out(1, 1, 0).at(1) << std::endl;
    std::cout << myFullAdder.out(1, 1, 1).at(0) << myFullAdder.out(1, 1, 1).at(1) << std::endl;*/

    /*std::array<bool, 16> a = {0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1};
    std::array<bool, 16> b = {1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0};

    std::array<bool, 16> c = {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

    std::array<bool, 16> ab = myAdd16.out(a,b);

    for(int i  = 0; i < 16; i++)
    {
        std::cout << ab.at(i);
    } 

    std::cout << std::endl;

    std::array<bool, 16> d = myAdd16.out(c, c);

    for(int i  = 0; i < 16; i++)
    {
        std::cout << d.at(i);
    } 

    std::cout << std::endl;

    std::array<bool, 16> e = myAdd16.out(c, d);

    for(int i  = 0; i < 16; i++)
    {
        std::cout << e.at(i);
    } 

    std::cout << std::endl;

    std::array<bool, 16> f = myAdd16.out(c, e);

    for(int i  = 0; i < 16; i++)
    {
        std::cout << f.at(i);
    } 

    std::cout << std::endl;

    std::array<bool, 16> g = myAdd16.out(f, c);

    for(int i  = 0; i < 16; i++)
    {
        std::cout << g.at(i);
    } 

    std::cout << std::endl;

    std::array<bool, 16> h = myAdd16.out(g, c);

    for(int i  = 0; i < 16; i++)
    {
        std::cout << h.at(i);
    } 

    std::cout << std::endl;

    std::array<bool, 16> j = myAdd16.out(h, c);

    for(int i  = 0; i < 16; i++)
    {
        std::cout << j.at(i);
    } 

    std::cout << std::endl;

    std::array<bool, 16> k = myAdd16.out(j, c);

    for(int i  = 0; i < 16; i++)
    {
        std::cout << k.at(i);
    } 

    std::cout << std::endl;

    std::array<bool, 16> l = myAdd16.out(k, c);

    for(int i  = 0; i < 16; i++)
    {
        std::cout << l.at(i);
    } 

    std::cout << std::endl;

    std::array<bool, 16> m = myAdd16.out(l, c);

    for(int i  = 0; i < 16; i++)
    {
        std::cout << m.at(i);
    } 

    std::cout << std::endl;

    std::array<bool, 16> n = myAdd16.out(m, c);

    for(int i  = 0; i < 16; i++)
    {
        std::cout << n.at(i);
    } 

    std::cout << std::endl;

    std::array<bool, 16> o = myAdd16.out(n, c);

    for(int i  = 0; i < 16; i++)
    {
        std::cout << o.at(i);
    } 

    std::cout << std::endl;

    std::array<bool, 16> p = myAdd16.out(o, c);

    for(int i  = 0; i < 16; i++)
    {
        std::cout << p.at(i);
    } 

    std::cout << std::endl;

    std::array<bool, 16> q = myAdd16.out(p, c);

    for(int i  = 0; i < 16; i++)
    {
        std::cout << q.at(i);
    } 

    std::cout << std::endl;*/

    std::array<bool, 16> in = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

    for(int i = 0; i < 16; i++)
    {
        in  = myInc16.out(in);

        for (int i = 0; i < 16; i++)
        {
            std::cout << in.at(i);
        }

        std::cout << std::endl;
    }

        
}