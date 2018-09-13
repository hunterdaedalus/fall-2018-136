#include <iostream>
#define CATCH_CONFIG_MAIN
#include "catch.hpp"

int fact(int n){
  if (n<0)
    return -1;
  if (n == 0 || n == 1)
    return 1;
  
}


TEST_CASE("Base Cases"){
  CHECK(fact(0)==1);
  CHECK(fact(1)==1);
}

TEST_CASE("BAD Input"){
  CHECK(fact(-1)==-1);
}
  
