#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct Temp
{
    int a;
    string b;
    float c;
};

int main()
{
    int* ptr;
    
    Temp t1;
    t1.a = 9;
    
    for (int i = 0; i < 5; i++)
    {
        if (i % 2 == 0)
        {
            string text = "Hello World! " + to_string(i);
            cout << text << endl << t1.a << endl;
            cout << text << endl << t1.a << endl;
            cout << text << endl << t1.a << endl;
            cout << text << endl << t1.a << endl;
            cout << text << endl << t1.a << endl;
            cout << text << endl << t1.a << endl;
            cout << text << endl << t1.a << endl;
            cout << text << endl << t1.a << endl;
            cout << text << endl << t1.a << endl;
            cout << text << endl << t1.a << endl;
        }

    }
    return 0;
}