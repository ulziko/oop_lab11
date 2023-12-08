#ifndef HEADER_H
#define HEADER_H

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