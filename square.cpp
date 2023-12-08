#include "square.h"
#include <iostream>
using namespace std;

square::square() // анхдагч байгуулагч тодорхойлох
{
    two_d_shape_setter(0, "square", 0, 0); // эх классын setter функцийг дуудан удамшсан өгөгдлүүдэд утга онооно
    coordinate_definer(0, 0, 0);           // бусад цугүүдийн  утгыг тооцож оноох функц
}

square::~square() // анхдагч байгуулагч тодорхойлох
{
    cout << "square destructor called" << endl;
}

square::square(float length, const char *name, int x, int y) : two_d_shape(length, name, x, y) // параметртэй байгуулагч тодорхойлох
{
    cout << "square parametrized constructor called" << endl;
    coordinate_definer(length, x, y);
}

float square::perimeter() // хүрээний уртыг олох функц
{
    return 4 * this->length; // 4 талай учир уртыг нь 4 өөр үржүүлэн гаргана
}

float square::area() // талбайг олох функц
{
    return this->length * this->length; //   эх классынхаа area функцийн пи тоогоор үржүүлэн буцаана
}
void square::coordinate_definer(int length, int x, int y) // бусад цугүүдийн  утгыг тооцож оноох функц
{
    this->right_u.x = x + length; // баруун дээд цэгийг олно
    this->right_u.y = y;          // баруун дээд цэгийг олно
    this->right_d.x = x + length; // баруун доод цэгийг олно
    this->right_d.y = y - length; // баруун доод цэгийг олно
    this->left_d.x = x;           // зүүн доод цэгийг олно
    this->left_d.y = y - length;  // зүүн доод цэгийг олно
}

void square::shower() // өгөгдлүүдийг хэвлэх функц
{
    cout << name << " dorwoljin ni " << length << " taltai " << area() << " talbaitai " << perimeter() << " perimetrtei "
         << " ( " << initial_point.x << ":" << initial_point.y << " ), "
         << " ( " << right_u.x << ":" << right_u.y << " ), "
         << " ( " << right_d.x << ":" << right_d.y << " ), "
         << " ( " << left_d.x << ":" << left_d.y << " ) tseguud deer todorhoilogdson " << endl;
}