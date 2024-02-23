#include <iostream>

int8_t Foo(int* pa, int* pb, int* pc)
{
    (*pa) = 555;
    (*pb)++;
    (*pc) = -20;
    return 0;
}

//hometask

void hometask(int* a, int* b)
{
    int poof = *a;
    *a = *b;
    *b = poof;
}