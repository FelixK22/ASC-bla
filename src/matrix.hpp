#ifndef FILE_MATRIX
#define FILE_MATRIX
#include <iostream>

namespace ASC_bla
{
  
  template <typename T>
  class Matrix
  {
    size_t hight;
    size_t length;

    T* data;

    public:
    Matrix (size_t _hight, size_t _length)
    : hight(_hight), length(_length), data(new T[hight * length]) {;}

  };
  
}

#endif