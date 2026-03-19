#ifndef HEADER_HPP
#define HEADER_HPP


template <typename T>
class Stuff
{
    public:
        Stuff(T value);

        void doSomething()
        {
            cout << "internal == " << bob << endl;
        }

        void templateizedFunction(T junk)
        {

        }

    private:
        T bob;
};


#endif 
