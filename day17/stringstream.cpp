#include <iostream>
#include <sstream>

using namespace std;

class Stuff
{
    public:
        ~Stuff()
        {
            cout << "stuff dtor" << endl;
        }

};

int main()
{
    int value = 9;
    string something = "text";

    stringstream path;
    path << "Hello, World!" << 8 << " " << endl << value << something << endl;
    
    stringstream final;

    if (value > 10)
    {
        final << "Big!" << path.str();
        // Big! ss.str()
    }
    else
    {
        // Small! ss.str()
    }


    {
        int here = 100;
        Stuff s;
    }
    
    cout << "after anonymouse scope" << endl;
    // cout << here << endl;

    return 0;
}