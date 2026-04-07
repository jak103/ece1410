#include <iostream>

using namespace std;

template <typename T, typename A>
class Stuff
{
    public:
        Stuff(T value);

        void doSomething()
        {
            cout << "internal == " << bob << endl;
        }

        template<typename A>
        void templateizedFunction(A junk)
        {
            cout << junk << endl;
        }

    private:
        T bob;
};

template <typename A, typename B>
class Two : Stuff<A, B>
{

};

template <typename T, typename A>
Stuff<T,A>::Stuff(T value) : bob(value)
{

}


template <typename T, typename K>
K add (T a, K b)
{
    // T temp = a;

    a.doSomething();

    return 0;
}

int main()
{
    cout << "Templates are cool!" << endl;
    string t;
    float c = 1.1;
    float d = 3.6;

    // cout << "add(1,3) == " << add<int,float>(1,3.4) << endl;
    // cout << "add(1.4,3.7) == " << add<float>(c,d) << endl;
    // cout << "add(1.4,3.7) == " << add<int, string>(1,"test") << endl;


    // add(Stuff(), 1);
    // add(Stuff(), "test");


    Stuff<int,float> s(1);
    s.doSomething();
    s.templateizedFunction<int>(5);

    return 0;
}