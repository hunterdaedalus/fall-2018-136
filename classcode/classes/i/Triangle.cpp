
#include "Triangle.h"

Triangle::Triangle(){
    base = 10;
    height = 10;
  }

Triangle::Triangle(double b, double h){
    base = b;
    height = h;
}
double Triangle::get_base(){
    return base;
}

double Triangle::get_area(){
  return (base*height)/2;
}
