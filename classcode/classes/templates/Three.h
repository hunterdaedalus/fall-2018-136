#pragma once


#include <iostream>
template <class T>
class Three{
public:
  Three(T a, T b, T c);
  void printem();
private:
  T data[3];
  
  
};


#include "Three.hxx"
