#ifndef NODE_H
#define NODE_H
template <typename T>
class node
{
public:
    node *next;
    T val;
    node(T val);
};
template <typename T>
node<T>::node(T val)
{
    next = NULL;
    this->val = val;
}

#endif
