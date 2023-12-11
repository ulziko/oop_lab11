#ifndef TRIANGLE
#define TRIANGLE
#include "two_d_shape.h"
#include <math.h>
class Triangle : public _2D
{
public:
    Triangle(string name, double l) : _2D(name, l) {}
    double area() { return sqrt(3) * l * l / 4; }
    double perimeter() { return 3 * l; }
};
#endif