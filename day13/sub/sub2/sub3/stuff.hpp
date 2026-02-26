#ifndef _STUFF_HPP
#define _STUFF_HPP

#include <string>
#include <iostream>

namespace mine
{
    class Stuff
    {
        public:
            Stuff();
            void doSomething();

        protected:

        private:
            int value;
            std::string text;
    };


    std::ostream& operator<<(std::ostream& out, const Stuff& s);
}
#endif