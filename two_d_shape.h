#ifndef TWO_D_SHAPE
#define TWO_D_SHAPE
#include <cstdlib>
#include "shape.h"

class _2D : public Shape
{
public:
    double l;
    _2D();
    _2D(string name, double l) : Shape(name)
    {
        this->l = l;
    }
};
_2D::_2D()
{
    this->l = rand() % 20 + 1;
}
#endif
