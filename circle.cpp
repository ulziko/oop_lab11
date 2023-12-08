#include "circle.h"
#include <iostream>
using namespace std;

#define pi 3.14 // пи тоог тодорхойох

circle::circle() // анхдагч байгуулагч тодорхойлох
{
    two_d_shape_setter(0, "circle", 0, 0); // эх классын setter функцийг дуудан удамшсан өгөгдлүүдэд утга онооно
}

circle::~circle() // анхдагч байгуулагч тодорхойлох
{
    cout << "circle destructor called" << endl;
}
circle::circle(float length, const char *name, int x, int y) : two_d_shape(length, name, x, y) // параметртэй байгуулагч тодорхойлох
{
    cout << "circle parametrized constructor called" << endl;
}

void circle::shower() // өгөгдлүүдийг хэвлэх функц
{
    cout << this->name << " toirog ni " << this->length << " radiustai " << area() << " talbaitai " << circumference() << " toirgiin urttai "
         << " ( " << this->initial_point.x << ":" << this->initial_point.y << " ) tseg deer  tovtei " << endl;
}

float circle::circumference() // тойргийн хүрээний урт олох функц
{
    return this->length * 2 * pi; // радиусыг 2 пигээр үржүүлэн буцаана
}

float circle::area() // талбайг олох функц
{
    return pi * this->length * this->length; //   эх классынхаа area функцийн пи тоогоор үржүүлэн буцаана
}
