#pragma once

class Triangle
{
 public:
  Triangle();

  Triangle(double b, double h);
  double get_base();
  double get_area();
  
 protected:
  double base;
  double height;
};
