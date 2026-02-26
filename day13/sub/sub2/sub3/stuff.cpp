#include "stuff.hpp"

namespace mine
{
    // Default ctor
    Stuff::Stuff()
    : value(0), text("")
    {
        // empty
    }
    
    void Stuff::doSomething()
    {
        std::cout << "did something" << std::endl;
    }
    
    // TODO Implement operator<<
}


