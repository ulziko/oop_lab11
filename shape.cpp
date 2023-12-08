#include "shape.h"
#include <iostream>
#include <string.h>
using namespace std;

shape::shape() // анхдагч байгуулагч
{
    name = NULL;                                 // нэр заах хаяган хувьсагчид нул утга оноох
    cout << " shape constructor called" << endl; // дуудагдах үед хэвлэх
    shape_setter(0, "default");                  // shape_setter  функцаар дамжуулан анхны утга оноох
};

shape::shape(float length1, const char *name1) // параметртэй байгуулагч
{
    cout << "shape parametrized constructer called" << endl; //
    shape_setter(length1, name1);
}

shape::~shape() // устгагч
{
    cout << "shape destructer called" << endl; // дуудагдах үед хэвлэх
    if (name != nullptr)
    {
        delete name; // ойг чөлөөлөх
    }
    else
    {
        name = nullptr;
    }
}

void shape::shape_setter(float length1, const char *name1) // гишүүн өгөгдлүүдэд утга оноох функц
{
    length = length1;                   // өөрийн length утганд параметрийн length онооно.
    name = new char[strlen(name1) + 1]; // хаяган хувьсагчид шинээр ой нөөцлөх
    strcpy(name, name1);                // өөрийн name утганд параметрийн name утгыг  хуулна
}

char *shape::name_getter() // гишүүн өгөгдлүүдэд утга оноох функц
{
    return name; // өөрийн name утганд параметрийн name утгыг  хуулна
}
