#pragma once
#include <stdexcept>

namespace ELCT350
{
  template<typename T>
  class Vector
  {
  public:
    #pragma region Constructors and Destructors
    Vector(size_t size)
      : _size(size), _data(new T[size])
    {
      for(size_t i = 0; i < _size; ++i)
        _data[i] = T{};
    }

    ~Vector()
    {
      delete[] _data;
    }
    #pragma endregion

    #pragma region Operators
    T& operator[](size_t index)
    {
      checkIndex(index);

      return _data[index];
    }

    Vector<T> operator+(const Vector<T>& rhs) const
    {
      if(_size != rhs._size)
        throw std::out_of_range("rhs");

      Vector<T> sum(_size);
      for(size_t i = 0; i < _size; ++i)
        sum[i] = _data[i] + rhs._data[i];

      return sum;
    }
    #pragma endregion
  private:
    #pragma region Variables
    size_t _size;
    T* _data;
    #pragma endregion

    #pragma region Observers
    void checkIndex(size_t index) const
    {
      if(index >= _size)
        throw std::out_of_range("index");
    }
    #pragma endregion
  };
}