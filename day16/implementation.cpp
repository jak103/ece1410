#include "header.hpp"


template <typename T>
Stuff<T>::Stuff(T value) : bob(value)
{

}

template <typename T>
void Stuff<T>::templateizedFunction(T junk)
{
    cout << "junk == " << junk << endl;
}

template <typename T>
void Stuff<T>::doSomething()
{
    cout << "internal == " << bob << endl;
}