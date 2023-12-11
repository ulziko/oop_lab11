#ifndef TRIANGLE
#define TRIANGLE
#include "two_d_shape.h"
#include <math.h>
class Triangle : public _2D
{
public:
    Triangle() : _2D(){};
    Triangle(string name, double l) : _2D(name, l) {}
    double area() { return sqrt(3) * l * l / 4; }
    double perimeter() { return 3 * l; }
    void printer()
    {
        cout << "triangle  name is " << name << " area  is " << area() << " and perimeter is " << perimeter() << endl;
    }
};
#endif