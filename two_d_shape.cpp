#include <iostream>
#include "two_d_shape.h"
using namespace std;

two_d_shape::two_d_shape()
{
    this->initial_point.x = 0;
    this->initial_point.y = 0;
}
two_d_shape::two_d_shape(float length, const char *name, int x, int y) : shape(length, name)
{
    cout << "two_d_shape  parametrized constructor called" << endl;
    this->initial_point.x = x; // өөрийн x цэгт параметрээр орж ирсэн x утгыг онооно
    this->initial_point.y = y; // өөрийн y цэгт параметрээр орж ирсэн y утгыг онооно
}

two_d_shape::~two_d_shape()
{
    cout << "two_d_shape destructor called" << endl;
}
float two_d_shape::area()
{
    return length;
}

void two_d_shape::two_d_shape_setter(float length1, const char *name1, int x, int y) // гишүүн өгөгдлүүдэд утга оноох функц
{
    shape_setter(length, name); // эх классын setter функцийг дуудан удамшсан өгөгдлүүдэд утга онооно
    this->initial_point.x = x;  // өөрийн x цэгт параметрээр орж ирсэн x утгыг онооно
    this->initial_point.y = y;  // өөрийн y цэгт параметрээр орж ирсэн y утгыг онооно
}
