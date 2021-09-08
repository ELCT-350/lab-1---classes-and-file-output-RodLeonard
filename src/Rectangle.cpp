#include "Rectangle.h"

using namespace ELCT350;

static const double DEFAULT_LENGTH = 1.0;
static const double DEFAULT_WIDTH = 2.0;

Rectangle::Rectangle(double length, double width)
         : _length(DEFAULT_LENGTH), _width(DEFAULT_WIDTH)
{
  setLength(length);
  setWidth(width);
}

void Rectangle::setLength(double length)
{
  if(length > 0.0)
    _length = length;
}

void Rectangle::setWidth(double width)
{
  if(width > 0.0)
    _width = width;
}

double Rectangle::getLength() const
{
  return _length;
}

double Rectangle::getWidth() const
{
  return _width;
}

double Rectangle::getArea() const
{
  return _length * _width;
}