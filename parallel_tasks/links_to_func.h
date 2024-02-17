#include <iostream>

void Foo(int a)
{
    a = 1;
}

void Foo2(int& a)
{
    a = 2;
}

void Foo3(int* a)
{
    *a = 3;
}