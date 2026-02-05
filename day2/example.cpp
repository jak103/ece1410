#include <iostream>



namespace MyNamespace
{
  void MyFunction()
  {
    std::cout << "Inside MyNamespace" << std::endl;
  }
}

namespace OtherNamespace
{
  void MyFunction()
  {
    std::cout << "Inside OtherNamespace" << std::endl;
  }
}

using namespace std;
using namespace MyNamespace;

int main()
{
  cout << "Hello World!" << std::endl;
  
  OtherNamespace::MyFunction();
  int a = 5+7;
  
  return 0;
}
