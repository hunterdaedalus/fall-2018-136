#include <iostream>
#include <stdlib.h>
#include <unistd.h>
using std::cout;
using std::endl;
using std::cerr;

int f2(int x) {
  int z;
  z = x * 2;
  return z+1;
  
}

int f1(int x) {

  x = x + 1;
  x = f2(x);
  return x;
}
int main()
{
  int a;
  int b;
  int i;
  a = 20;
  b = a + 10;

  for (i = 0; i < 200; ++i) {
    a = a + b+f1(i)+f2(i);
    sleep(1);
    cout << i << endl;
    // cerr << "DEBUG: a = " << a << "b = " << b << " i = " << i ;
    // abort();
  }
  std::cout << "a = " << a << std::endl;
  
  
  
  return 0;
}
