#include <iostream>

using namespace std;

class Stuff 
{
    public:
    int something;
    int another;
    char letter;
    char letter2;
    char letter3;
    char letter4;
    char letter5;
    double number;
    int* ptr;

    int array[100];
};

void func(void)
{
    func();
}

int main ()
{
    cout << "An int is " << sizeof(int) << " bytes" << endl;
    cout << "An char is " << sizeof(char) << " bytes" << endl;
    cout << "An float is " << sizeof(float) << " bytes" << endl;
    cout << "An long int is " << sizeof(long int) << " bytes" << endl;
    cout << "An long long int is " << sizeof(long long int) << " bytes" << endl;
    cout << "An long double is " << sizeof(long double) << " bytes" << endl;
    
    string test = "this is a string there is now more text in here liasjdflkajdgl;adjd;gfkljali;gkjads;ligjs;lidgj;ilsdrjg;liisrjgil;sdjrg;ilsjr;oigjs;digjs;oirgjr;osijrgg;ois";
    cout << "Test is " << sizeof(test) << endl;
    
    cout << "An int* is " << sizeof(int*) << " bytes" << endl;
    cout << "An char* is " << sizeof(char*) << " bytes" << endl;
    cout << "An float* is " << sizeof(float*) << " bytes" << endl;
    cout << "An double* is " << sizeof(double*) << " bytes" << endl;
    cout << "An string* is " << sizeof(string*) << " bytes" << endl;
    
    
    cout << "An Stuff is " << sizeof(Stuff) << " bytes" << endl;
    
    Stuff instance;
    
    cout << "An Stuff instance is " << sizeof(instance) << " bytes" << endl;
    
    instance.ptr = new int[100];
    delete instance.ptr; 
    instance.ptr = NULL;

    instance.ptr = new int[1];
    delete instance.ptr;


    // Danger!! Don't do this!
    // func();

    // while (true)
    // {
         // instance.ptr = new int[100000];
        
    // }
    return 0;
}