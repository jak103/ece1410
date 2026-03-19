#include <iostream>
#include <sstream>

using namespace std;


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


    return 0;
}