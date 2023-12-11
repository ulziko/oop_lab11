#ifndef TWO_D_SHAPE
#define TWO_D_SHAPE
#include "shape.h"

class _2D : public Shape
{
public:
    double l;
    _2D(string name, double l) : Shape(name)
    {
        this->l = l;
    }
};
#endif
