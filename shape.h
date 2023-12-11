#ifndef SHAPE
#define SHAPE
#include <iostream>
using namespace std;
class Shape
{
public:
    string name;
    Shape(string name)
    {
        this->name = name;
    }
    // Pure virtual functions
    virtual double area() = 0;
    virtual double perimeter() = 0;
};
#endif