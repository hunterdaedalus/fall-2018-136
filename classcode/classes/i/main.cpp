#include <iostream>

#include "Triangle.h"
#include "BigTriangle.h"
int main()
{
  Triangle t = Triangle();
  Triangle t2(50,100);
  BigTriangle t3(50,100);
  std::cout << t.get_area() << "\n";
  std::cout << t2.get_area() << "\n";
  std::cout << t3.get_area() << "\n";
  return 0;
}
