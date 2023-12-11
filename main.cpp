#include "square.h"
#include "circle.h"
#include "triangle.h"
#include "node.h"
#include "dyn_list.h"
#include "two_d_shape.h"
#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;

int main()
{
  LinkedList<_2D *> list_of_shapes;
  srand(static_cast<unsigned int>(time(0)));
  int objNumber;
  objNumber = rand() % 10 + 1;
  cout << "objNumber: " << objNumber << endl;
  for (int i = 1; i <= objNumber; i++)
  {
    string ShapeName = "sq" + to_string(i);
    double side_l = static_cast<double>(rand()) / RAND_MAX * 20;
    Square *sq = new Square(ShapeName, side_l);
    list_of_shapes.add(sq);
  }
  objNumber = rand() % 10 + 1;
  cout << "objNumber: " << objNumber << endl;
  for (int i = 1; i <= objNumber; i++)
  {
    string ShapeName = "tr" + to_string(i);
    double side_l = static_cast<double>(rand()) / RAND_MAX * 20;
    Triangle *tr = new Triangle(ShapeName, side_l);
    list_of_shapes.add(tr);
  }
  objNumber = rand() % 10 + 1;
  cout << "objNumber: " << objNumber << endl;
  for (int i = 1; i <= objNumber; i++)
  {
    string ShapeName = "tr" + to_string(i);
    double side_l = static_cast<double>(rand()) / RAND_MAX * 20;
    Circle *cc = new Circle(ShapeName, side_l);
    list_of_shapes.add(cc);
  }
  cout << "Erembelegdeegui ued\n";
  list_of_shapes.print();
  list_of_shapes.sort();
  cout << "\nUsuhuur erembelsnii daraa\n";
  list_of_shapes.print();
}