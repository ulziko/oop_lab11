#ifndef CIRCLE
#define CIRCLE
#include "two_d_shape.h"

class circle : public two_d_shape // two_d_shape классаас удамших хүүхэд  класс
{
public:
    circle(); // анхдагч байгуулагч
    ~circle();
    circle(float length1, const char *name1, int x1, int y1); // параметртэй байгуулагч
    void shower();                                            // өгөгдлүүдийг хэвлэх функц
    float area();                                             // талбайг олох функц

protected:                 // удамшуулахын  тулд  protected горимоор зарлав
    float circumference(); // тойргийн хүрээний урт олох функц
};

#endif