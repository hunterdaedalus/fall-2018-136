#include <iostream>

/* 

 */
int fact(int n){
  if (n==0) {
    return 1;
  }
}


int main(int argc, char *argv[])
{
  int ans;

  ans = fact(0);
  if (ans==1){
    std::cout << "0!==1 success\n";
  } else {
    std::cout << "0! != 1 failure\n";
  }

ans = fact(5);
  if (ans==120){
    std::cout << "0!==120 success\n";
  } else {
    std::cout << "0! != 120 failure\n";
  }


  return 0;
}
