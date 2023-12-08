#ifndef NODE_H
#define NODE_H
#include <iostream>
#include <vector>

using namespace std;
template <class T>
class Node
{
protected:
    T val;
    Node *next;

public:
    Node();
};
#endif