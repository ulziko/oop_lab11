// two_d_shape.h
#ifndef TWO_D_SHAPE
#define TWO_D_SHAPE
#include "point.h"
#include "shape.h"

class two_d_shape : public shape // shape классаас удамших хүүхэд  класс
{
public:
    two_d_shape();
    ~two_d_shape();
    two_d_shape(float length1, const char *name1, int x, int y);

public:                  // удамшуулахын  тулд  protected горимоор зарлав
    point initial_point; // дүрс нь ямар нэгэн эхлэлийн цэтгэй байна.
    virtual float area();
    void two_d_shape_setter(float length1, const char *name1, int x, int y); // гишүүн өгөгдлүүдэд утга оноох функ
};                                                                           // талбайг олох функц
#endif
