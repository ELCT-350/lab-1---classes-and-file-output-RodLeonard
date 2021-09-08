#pragma once
#include "Shape.h"

namespace ELCT350
{
  class Circle final : public Shape
  {
  public:
    Circle(double radius);

    double getArea() const;
  private:
    double _radius;
  };
}