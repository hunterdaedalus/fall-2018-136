
#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "fact.h"

TEST_CASE("Base Cases"){
  CHECK(fact(0)==1);
  CHECK(fact(1)==1);
}

TEST_CASE("BAD Input"){
  CHECK(fact(-1)==-1);
}

