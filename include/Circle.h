#pragma once

namespace ELCT350
{
  class Circle
  {
  public:
    Circle(double radius);

    double getArea() const;
  private:
    double _radius;
  };
}