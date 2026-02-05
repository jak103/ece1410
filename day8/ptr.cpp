#include <iostream>

using namespace std;

class Stuff 
{

};


int main () 
{
    cout << "Fun with pointers" << endl;

    cout << "size of a pointer " << sizeof(void*) << " bytes" << endl;

    int *a; // Don't do this
    int * b; // Don't do this
    int* c;  // Do this

    int* ptr0 = new int;
    int* ptr = new int[20];
    int* ptr2 = new int[20];

    cout << "ptr0 " << ptr0 << endl;
    cout << "ptr0 at 8 " << ptr0 + 8 << endl;
    cout << "ptr1      " << ptr << endl;
    cout << "ptr2 " << ptr2 << endl;

    

    for (int i = 0; i < 20; ++i)
    {
        ptr[i] = i+100;
    }
    
    // Bad memory access... or is it?
    
    for (int i = 0; i < 20; ++i)
    {
        cout << "Ptr0 at " << i << " is " << ptr0[i] << endl;
    }


    cout << "Value at 4 " << ptr[4] << endl;
    cout << "Value at 4 " << *(ptr + 4) << endl;
    cout << "Ptr at 4 " << ptr + 4 << endl;
    cout << "Ptr at 5 " << ptr + 5 << endl;

    int array[100];
    int array2[1];

    cout << "array is " << array << endl;
    cout << "array2 is " << array2 << endl;
    cout << "array value at 7 " << *(array + 9) << endl;

    return 0;
}