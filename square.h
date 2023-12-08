#ifndef SQUARE
#define SQUARE
#include "two_d_shape.h"

class square : public two_d_shape // two_d_shape классаас удамших хүүхэд  класс
{
public:
    square(); // анхдагч байгуулагч
    ~square();
    square(float length1, const char *name1, int x1, int y1); // параметртэй байгуулагч
    void shower();                                            // өгөгдлүүдийг хэвлэх функц
    float area();                                             // талбайг олох функц

protected:                                                // удамшуулахын  тулд  protected горимоор зарлав
    point right_u, right_d, left_d;                       // өгөгдсөн цэгээс хөрвөн гарах баруун дээд, баруун доод , зүүн доод цэгүүд
    float perimeter();                                    // хүрээний уртыг олох функц
    void coordinate_definer(int length1, int x1, int y1); // бусад цугүүдийн  утгыг тооцож оноох функц
};

#endif