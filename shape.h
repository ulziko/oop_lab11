#ifndef SHAPE
#define SHAPE

class shape // дүрсийг хийсвэрлэх объект
{
public:
    shape();                               // анхдагч байгуулагч
    shape(float length, const char *name); // параметртэй байгуулагч
    virtual ~shape();                      // устгагч
    char *name_getter();

protected:                                               // удамшуулахын  тулд  protected горимоор зарлав
    float length;                                        // дүрсийн өгөгсөн уртыг дүрслэх гишүүн өгөгдөл
    char *name;                                          // дүрсийн уртыг дүрслэх гишүүн өгөгдөл
    void shape_setter(float length1, const char *name1); // гишүүн өгөгдлүүдэд утга оноох функц
};

#endif