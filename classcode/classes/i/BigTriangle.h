#pragma once

#include "Triangle.h"

class BigTriangle : public Triangle{
 public:
  BigTriangle(double base, double height);
  double get_area();
};
