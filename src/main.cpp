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

void printRectangle(const string& nameOfRect, const Rectangle& rect)
{
  cout << "Area of " << nameOfRect << ": " << rect.getArea() << endl;
}

int main()
{
  Rectangle rect1(3,5);
  Rectangle rect2(2,8);

  printRectangle("rect1", rect1);
  printRectangle("rect2", rect2);

  Circle circle(3.5);
  cout << "Area of circle: " << circle.getArea() << endl;

  return Ok;
}