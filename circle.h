#ifndef CIRCLE
#define CIRCLE
#include "two_d_shape.h"
class Circle : public _2D
{
public:
    Circle(string name, double l) : _2D(name, l) {}
    double area() { return 3.14 * l * l; }
    double perimeter() { return 2 * 3.14 * l; }
};

#endif