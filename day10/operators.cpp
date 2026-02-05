#include <iostream>

using namespace std;

class Number
{
    public:
        Number(int value) : number(value)
        {
            // nothing
        }

        Number(const Number& value) : number(value.number)
        {
            cout << "copy ctor" << endl;
        }

        Number add(Number &num)
        {
            Number result(this->number + num.getValue());

            return result;
        }

        int getValue() const
        {
            return number;
        }
        
        Number operator + (const Number& right)
        {
            // right.number = -100;
            cout << "this->number" << this->number << endl;
            Number result(this->number + right.number);
        
            return result;
        }

        // friend ostream& operator<<(ostream& out, const Number& num);

    private:
        int number;
};

ostream& operator<<(ostream& out, const Number& num)
{
    out << num.getValue();

    return out;
}


int main() 
{
    Number a(4);
    Number b(5);

    // Number c = a.add(b);
    Number c = a + b;
    Number d = a.operator+(b);

    // int r = 2 + "test";

    
    cout << "value of b is " << b.getValue() << endl;
    cout << "value of c is " << c.getValue() << endl;
    cout << "value of d is " << d << endl;
    // cout << "value of r is " << r << endl;

    return 0;
}