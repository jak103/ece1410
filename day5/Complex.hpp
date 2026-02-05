#ifndef COMPLEX_HPP
#define COMPLEX_HPP

#include <string>

class Complex
{
  public:
    Complex();
    void readInput(void);
    void printOutput(void);

  private:
    float real;
    float imaginary;
};

#endif // COMPLEX_HPP
