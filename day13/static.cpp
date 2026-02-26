#include <iostream>

using namespace std;


class Item
{
    public:
        Item() : value(0)
        {
            // empty
        }

        int getValue()
        {
            return value;
        }

        int getSValue()
        {
            return sValue;
        }

        void setValue(int v)
        {
            value = v;
        }

        void setSValue(int v)
        {
            sValue = v;
        }

        static int sValue;

    private:
        int value;
};

// Define the static member variable
int Item::sValue = 0;

int main()
{
    Item one;
    Item two;

    one.setValue(1);
    two.setValue(2);

    cout << "one value: " << one.getValue() << endl;
    cout << "two value: " << two.getValue() << endl;
    
    
    one.setSValue(10);
    
    cout << "one svalue: " << one.getSValue() << endl;
    
    two.setSValue(20);
    
    cout << "one svalue: " << one.getSValue() << endl;
    cout << "two svalue: " << two.getSValue() << endl;
    
    Item::sValue = 0;
    cout << "one svalue: " << one.getSValue() << endl;
    cout << "two svalue: " << two.getSValue() << endl;
    
    return 0;
}