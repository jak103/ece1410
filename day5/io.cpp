#include <iostream>


using namespace std;


int main()
{
    string name;
    int number;

    cout << "What's your name and favorite number?" << endl;

    cin >> name  >> number;

    cout << "Hello " << name << endl;
    // cout << "What's your favorite number?" << endl;

    // cin >> number;

    cout << number << " is a good number" << endl;

    return 0;
}