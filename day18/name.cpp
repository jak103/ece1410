#include <iostream>

using namespace std;

namespace Jacob
{

    template<typename T>
    class MyClass
    {
        public:
        MyClass(T value) : data(value)
        {
            // empty
        }
        
        void print(T a)
        {
            cout << data << endl;
            cout << a << endl;
        }
        
        private:
        T data;
    };
}
    
int main()
{
    Jacob::MyClass<int> stuff(1);
    stuff.print(1);

    Jacob::MyClass<float> junk(3.14);
    junk.print(1.0);

    Jacob::MyClass<string> another("stuff");
    another.print("1");

    Jacob::MyClass<int> b(4);
    b.print(4);
}