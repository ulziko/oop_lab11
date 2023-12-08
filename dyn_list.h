#ifndef NODE_H
#define NODE_H
#include <iostream>
#include <vector>
#include "node.h"

template <class T>
class List
{
protected:
    Node *head;
    Node *tail;
    int len;

public:
    List();
    void add(T t);
    void insert(T t, int index);
    T get(int index);
    void del(int index);
    int length();
};

#endif