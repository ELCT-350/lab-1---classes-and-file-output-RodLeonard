#include "Circle.h"

using namespace ELCT350;

static const double PI = 3.14159;

Circle::Circle(double radius)
      : _radius(radius)
{
}

double Circle::getArea() const
{
  return PI * _radius * _radius;
}