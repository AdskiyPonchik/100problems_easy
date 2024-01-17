#include <iostream>
#include <cmath>
bool palindrome(int x)
{
    int num = x;
    int result = 0;
    while (num)
    {
        int remainder = num % 10;
        result = result * 10 + remainder;
        num = round(num / 10);
    }
    return (x == result);
}