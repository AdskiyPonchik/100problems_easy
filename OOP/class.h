#include <iostream>
#include <string>

class Point
{
public:
    int x;
    void Print()
    {
        std::cout << x << '\t';
        PrintZY();
    }

private:
    int y;
    int z;

    void PrintZY()
    {
        std::cout << y << '\t' << z <<'\n';
    }
};