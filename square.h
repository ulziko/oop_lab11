#ifndef SQUARE
#define SQUARE
#include "two_d_shape.h"
class Square : public _2D
{
public:
    Square(string name, double l) : _2D(name, l) {}
    Square() : _2D(){};
    double area() { return l * l; }
    double perimeter() { return 4 * l; }
    void printer()
    {
        cout << "square name is " << name << " area  is " << area() << " and perimeter is " << perimeter() << endl;
    }
};
#endif