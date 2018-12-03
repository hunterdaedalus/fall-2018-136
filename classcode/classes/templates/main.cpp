#include <iostream>

#include "Three.h"
int main()
{
  Three<int> t(5,2,3);
  Three<double> t2(5,2,3);
  Three<std::string> t3("Hello","World","!");
    t.printem();
  t2.printem();
  t3.printem();
return 0;
}
