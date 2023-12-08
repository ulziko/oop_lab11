#include "dyn_list.h"
#include "iostream"
using namespace std;

template <class T>
void List<T>::add(T t) // Листийн сүүлийн байрлалруу загвар нэмэх  гишүүн функц
{
    Node *nd;
    nd = new Node;
    nd->val = t;
    if (this->len == 0)
    {
        this->head = nd;
        this->tail = nd;
        nd->next = NULL;
    }
    else
    {
        this->tail->next = nd;
        nd->next = NULL;
        this->tail = nd;
    }
    -> len++;
}

template <class T>
void List<T>::insert(T t, int index) // Листийн index байрлалруу элемент нэмэх гишүүн функц
{
    if (pos > p->len - 1 || p->len == 0 || pos == 0)
    {
        l_push_back(p, x);
    }
    else
    {
        Node *nd, *nd1, *nd2;
        nd = new Node;
        nd->val = t;
        nd1 = this->head;
        while (index > 1)
        {
            nd1 = nd1->next;
            index--;
        }
        nd2 = nd2->next;
        nd1->next = nd;
        nd->next = nd2;
        this->len++;
    }
}

template <class T>
T List<T>::get(int index) // Листийн index байрлалын мэдээллийг авах гишүүн функц
{
    Node *itr;
    itr = this->head;
    for (int i = 0; i < this->len; i++)
    {
        if (index == i)
        {
            return itr->val;
        }
        itr = itr->next;
    }
}