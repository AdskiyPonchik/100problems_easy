#include <iostream>

class Point
{
private:
    int x;
    int y;

public:
    int GetX()
    {
        return x;
    }

    void SetX(int valueX)
    {
        x = valueX;
    }

    void SetY(int valueY)
    {
        y = valueY;
    }

    void Print()
    {
        std::cout << x << '\t' << y << '\n';
    }
};