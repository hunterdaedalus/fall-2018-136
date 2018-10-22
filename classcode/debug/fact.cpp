#include <iostream>

int fact(int n){
  int i = n;
  if (i==10)
    return i;
  else
    return i * fact(i-1);

}
int main()
{
  int j;
  j=fact(25);
  std::cout << j << std::endl;
  j=fact(5);
  std::cout << j << std::endl;
  return 0;
}
