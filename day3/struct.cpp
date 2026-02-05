#include <iostream>

using namespace std;

class MyClass
{
  private:
    int aNumber;
    char bChar;
    float cFloat;

  public:
    MyClass(int a, char b, float c)
    {
       aNumber = a;
       bChar = b;
       cFloat = c;
       cout << "Parameterized constructor called" << endl;
    }

    MyClass()
    {
       aNumber = 0;
       bChar = 'a';
       cFloat = 0.0;
       cout << "Default constructor called" << endl;
    }

    ~MyClass()
    {
      cout << "Destructor called" << endl;
    }

    ostream& operator<<(ostream& os)
    {
      os << aNumber << ", " << bChar << ", " << cFloat;
      return os;
    }


    string print()
    {
      string output;

      output = to_string(aNumber) + ", " + to_string(bChar) + ", " + to_string(cFloat);

      return output;
    }


};



int main(void)
{
  MyClass quip(9, 'd', 3.14);
  MyClass a;
//  quip.aNumber = 9;
//  quip.bChar = 'd';
//  quip.cFloat = 3.14;

  cout << "quip: " << quip.print() << endl;




  return 0;
}
