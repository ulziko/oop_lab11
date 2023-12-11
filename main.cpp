#include "square.h"
#include "circle.h"
#include "triangle.h"
#include "node.h"
#include "dyn_list.h"
#include "two_d_shape.h"
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <iostream>
using namespace std;

int main()
{
  LinkedList<_2D *> list_of_shapes;
  cout << setprecision(2) << fixed;
  Circle c[10];
  Square s[10];
  Triangle t[10];
  for (int i = 0; i < 30; i++)
  {
    if (i < 10)
    {
      list_of_shapes.add(&c[i]);
      c[i].printer();
    }
    else if (i < 20)
    {
      list_of_shapes.add(&s[i - 10]);
      s[i - 10].printer();
    }
    else
    {
      list_of_shapes.add(&t[i - 20]);
      s[i - 20].printer();
    }
  }
  cout << "Erembelegdeegui ued\n";
  list_of_shapes.print();
  list_of_shapes.sort();
  cout << "Usuhuur erembelsnii daraa\n";
  list_of_shapes.print();
}