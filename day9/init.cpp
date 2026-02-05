#include <iostream>

using namespace std;

class Z
{
    public:
        Z(int g, int h, int i)
            : g(g), h(h), i(i)
        {
            // this->g = g;
            // this->h = h;
            // this->i = i;
        }

        Z() : g(-1), h(-2), i(-3)
        {
            // nothing
        }

        Z(const Z& alex) : g(alex.g), h(alex.h), i(alex.i)
        {
            cout << "Z copy constructor" << endl;
            // Z bad(alex);

            // this->g = other.g;
            // this->h = other.h;
            // this->i = other.i;
        }


    string toString()
    {
        string result = "";
        string other("");

        result += "g: " + to_string(this->g) + " ";
        result += "h: " + to_string(this->h) + " ";
        result += "i: " + to_string(this->i) + " ";

        return result;
    }

    private:
        int g;
        int h;
        int i;
};


int main()
{
    Z* item = new Z(1, 2, 3);
    Z framedZ(4, 5, 6);

    
    cout << "item    " << item->toString() << endl;
    cout << "framed: " << framedZ.toString() << endl;
    
    
    Z initListZ;
    
    cout << "initListZ: " << initListZ.toString() << endl;
    
    delete item;

    Z copy(framedZ);
    Z otherCopy = framedZ;
    
    cout << "copy: " << copy.toString() << endl;
    cout << "otherCopy: " << otherCopy.toString() << endl;
    
    return 0;
}