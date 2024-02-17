#include <iostream>


//successfully completed)
template <class T>
void swap(T &a, T &b)
{
    T something = a;
    a = b;
    b = something;
}