#pragma once
#include "Shape.h"

namespace ELCT350
{
  class Rectangle : public Shape
  {
  public:
    Rectangle(double length, double width);

    void setLength(double length);
    void setWidth(double width);

    double getLength() const;
    double getWidth() const;

    virtual double getArea() const override;
  private:
    double _length;
    double _width;
  };
}