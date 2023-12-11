#ifndef CIRCLE
#define CIRCLE
#include <string.h>
#include "two_d_shape.h"
class Circle : public _2D
{
public:
    Circle(string name, double l) : _2D(name, l){};
    Circle() : _2D(){};
    double area() { return 3.14 * l * l; }
    double perimeter() { return 2 * 3.14 * l; }
    void printer()
    {
        cout << "circle name is " << name << " area  is " << area() << " and perimeter is " << perimeter() << endl;
    }
};
#endif