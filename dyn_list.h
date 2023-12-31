#ifndef DYN_LIST_H
#define DYN_LIST_H
#include <iostream>
#include "node.h"
template <typename T>
class LinkedList
{
    node<T> *tail, *head;
    int len;

public:
    LinkedList();
    ~LinkedList();
    void add(T val);
    void insert(T val, int pos);
    T get(int pos);
    void delete1(int pos);
    int length();
    void sort();
    void print();
};
template <typename T>
LinkedList<T>::LinkedList()
{
    tail = head = NULL;
    len = 0;
}

template <typename T>
LinkedList<T>::~LinkedList()
{
    int i = 0;
    while (this->head != NULL)
    {
        delete1(i);
    }
}

template <typename T>
void LinkedList<T>::add(T val)
{
    node<T> *tmp = new node<T>(val);
    if (head == NULL)
    {
        head = tmp;
        tail = head;
        len++;
        return;
    }
    tail->next = tmp;
    tail = tail->next;
    len++;
}
// insert member function
template <typename T>
void LinkedList<T>::insert(T val, int pos)
{
    if (pos == 0) // push_front
    {
        node<T> *e = new node<T>(val); // called constructor
        if (len != 0)
            e->next = head;
        else
        {
            tail = e;
        }
        head = e;
        len++;
    }
    else if (pos + 1 == len) // push_back
    {
        node<T> *e = new node<T>(val);
        if (len == 0)
            head = e;
        else
            tail->next = e;
        tail->next = e;
        len++;
    }
    else if (pos > 0 && pos + 1 < len)
    {
        int i = 0;
        node<T> *tmp2 = head, *tmp1;
        node<T> *e = new node<T>(val);
        while (i < pos)
        {
            tmp1 = tmp2;
            tmp2 = tmp1->next;
            i++;
        }
        e->next = tmp2;
        tmp1->next = e;
        len++;
    }
    else
        cout << "wrong index!" << endl;
}
// get member function
template <typename T>
T LinkedList<T>::get(int pos)
{
    node<T> *tmp = head;
    if (pos >= 0 && pos < len)
    {
        for (int i = 0; i < pos; i++)
        {
            tmp = tmp->next;
        }
        return tmp->val;
    }
    else
        cout << "wrong index!";
    return 0;
}
// delete member function
template <typename T>
void LinkedList<T>::delete1(int pos)
{
    if (pos < 0 || pos >= len)
    {
        return;
    }
    if (pos == 0)
    { // Delete head
        node<T> *tmp = head;
        head = head->next;
        delete tmp;
    }
    else
    {
        node<T> *current = head;
        for (int i = 0; i < pos - 1; i++)
        {
            current = current->next;
        }
        node<T> *tmp = current->next;
        current->next = tmp->next;
        if (pos == len - 1)
        { // delete tail
            tail = current;
        }
        delete tmp;
    }
    len--;
}
// length member function
template <typename T>
int LinkedList<T>::length()
{
    return len;
}
// sort member function
template <typename T>
void LinkedList<T>::sort()
{
    if (!head || !head->next)
    { // hooson esvel neg eseh
        return;
    }
    int swapped;
    node<T> *current, *lastSorted = NULL;
    do
    {
        swapped = 0;
        current = head;
        while (current->next != lastSorted)
        {
            if (current->val->area() > current->next->val->area())
            { // usuhuur erembeleh
                T tmp = current->val;
                current->val = current->next->val;
                current->next->val = tmp;
                swapped = 1;
            }
            current = current->next;
        }
        lastSorted = current;
    } while (swapped);
}

template <typename T>
void LinkedList<T>::print()
{
    node<T> *tmp = head;
    cout << "[ ";
    while (tmp != NULL)
    {
        cout << tmp->val->area() << " ";
        tmp = tmp->next;
    }
    cout << "]" << endl;
}

#endif