#pragma once

namespace ELCT350
{
  class Rectangle
  {
  public:
    Rectangle(double length, double width);

    void setLength(double length);
    void setWidth(double width);

    double getLength() const;
    double getWidth() const;

    double getArea() const;
  private:
    double _length;
    double _width;
  };
}