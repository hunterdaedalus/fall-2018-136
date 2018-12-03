#include "BigTriangle.h"

BigTriangle::BigTriangle(double base, double height){
  this->base = base;
  this->height = height;

}

double BigTriangle::get_area(){
  return Triangle::get_area()*2.0;
}
