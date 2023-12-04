//my branch111
const size_t STACK_SIZE=100;
template<class T>
class TStack{
    protected:
        int numItems;
        T *items;
    public:
    TStack(size_t size=STACK_SIZE){
        // printf("\nsize: %d",size);
        numItems=-1;
        items=new T[size];
    }
    ~TStack(){delete[] items;}
    void push(T t);
    T pop();
    int stackEmpty();
    int stackFull();
    void print();
};
template<class T>
void TStack<T>::push(T t)
{
    if(!stackFull()) items[++numItems]=t;
}
template<class T>
T TStack<T>::pop()
{
    if(!stackEmpty()) return items[numItems--];
    return 0;
}
template<class T>
int TStack<T>::stackEmpty()
{
    return numItems==-1;
}
template<class T>
int TStack<T>::stackFull()
{
    return numItems==STACK_SIZE;
}
template<class T>
void TStack<T>::print()
{
    int i=numItems;
    while(i>=0)
    {
        cout<<items[i--]<<endl;
    }
}

int main(){
  printf("hello world!");
  return 0;
}
