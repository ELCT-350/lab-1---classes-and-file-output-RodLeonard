#include <iostream>
#include <string>
#include "Rectangle.h"
#include "Circle.h"
#include "Vector.h"

using namespace std;
using namespace ELCT350;

enum ErrorCodes
{
  Ok = 0,
  ProblemAccessingArray = 1
};

int main(int argc, char* argv[])
{
  Vector<double> vector(3);
  Vector<double> vector2(3);
  Vector<double> sum = vector + vector2;

  try
  {
    vector[1] = 5.0;
    cout << "vector[0]: " << vector[1] << endl;
  }
  catch(...)
  {
    cerr << "Problem accessing array" << endl;
    return ProblemAccessingArray;
  }

  return Ok;
}