#include <iostream>
using namespace std;

long int factorial(int n)
{
    if(n == 1 || n == 0){
        return n;
    }
    return  n * factorial(n-1);
}