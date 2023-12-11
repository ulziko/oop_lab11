#ifndef SQUARE
#define SQUARE
#include "two_d_shape.h"
class Square : public _2D
{
public:
    Square(string name, double l) : _2D(name, l) {}
    double area() { return l * l; }
    double perimeter() { return 4 * l; }
};
#endif