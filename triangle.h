#include "triangle.h"
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

triangle::triangle() // анхдагч байгуулагч тодорхойлох
{
    two_d_shape_setter(0, "triangle", 0, 0); // эх классын setter функцийг дуудан удамшсан өгөгдлүүдэд утга онооно
    coordinate_definer(0, 0, 0);             // бусад цугүүдийн  утгыг тооцож оноох функц
}

triangle::~triangle() // анхдагч байгуулагч тодорхойлох
{
    cout << "triangle destructor called" << endl;
}

triangle::triangle(float length, const char *name, int x, int y) : two_d_shape(length, name, x, y) // параметртэй байгуулагч тодорхойлох
{
    cout << "trianle parametrized  constructor called" << endl;

    coordinate_definer(length, x, y);
}

void triangle::shower() // өгөгдлүүдийг хэвлэх функц
{
    cout << setprecision(2) << name << " gurvaljin ni " << length << " taltai " << area() << " talbaitai " << perimeter() << " perimetrtei "
         << " ( " << initial_point.x << ":" << initial_point.y << " ), "
         << " ( " << right.x << ":" << right.y << " ), "
         << " ( " << left.x << ":" << left.y << " ) tseguud deer todorhoilogdson " << endl;
}

void triangle::coordinate_definer(int length1, int x1, int y1) // бусад цугүүдийн  утгыг тооцож оноох функц
{
    float h;                                                   // гурвалжны өндөр
    h = sqrt((length * length) - (length / 2) * (length / 2)); // гурвалжны өндөрийг пифагорын теоремоор олох
    right.x = initial_point.x - length / 2;                    // гурвалжны баруун цэгийг олох
    right.y = initial_point.y - h;                             // гурвалжны баруун цэгийг олох
    left.x = initial_point.x + length / 2;                     // гурвалжны зүүн цэгийг олох
    left.y = initial_point.y - h;                              // гурвалжны зүүн цэгийг олох
}

float triangle::area() // талбайг олох функц
{
    return length * length / 2; // гурвалжны талбайг эх классын функцийн талбайг 2т хуваан олно
}

float triangle::perimeter() // хүрээний уртыг олох функц
{
    return 3 * length; // 3 талай учир уртыг нь 3 өөр үржүүлэн гаргана
}
