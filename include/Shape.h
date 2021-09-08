#pragma once

namespace ELCT350
{
  class Shape
  {
  public:
    virtual double getArea() const = 0;
  protected:
    double _area;
  };
}