#include <iostream>
#include <string>
#include "Rectangle.h"
#include "Circle.h"

using namespace std;
using namespace ELCT350;

enum ErrorCodes
{
  Ok = 0
};

void printArea(const string& name, const Shape& shape)
{
  cout << "Area of " << name << ": " << shape.getArea() << endl;
}

int main()
{
  Rectangle rect1(3,5);
  Rectangle rect2(2,8);

  printArea("rect1", rect1);
  printArea("rect2", rect2);

  Circle circle(3.5);
  printArea("circle", circle);

  return Ok;
}