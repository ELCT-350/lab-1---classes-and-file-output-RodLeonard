#pragma once

namespace ELCT350
{
  template<typename T>
  class Vector
  {
  public:
    Vector(size_t size)
      : _size(size), _data(new T[size])
    {

    }

    ~Vector()
    {
      delete[] _data;
    }
  private:
    size_t _size;
    T* _data;
  };
}