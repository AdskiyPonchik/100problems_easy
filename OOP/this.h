#include <iostream>

class Point
{
private:
    int x;
    int y;

public:

    Point()
    {
        x = 0;
        y = 0;
        std::cout << this << " constructor" << '\n';
    }

    Point(int valueX, int valueY)
    {
        x = valueX;
        y = valueY;
        std::cout << this << " constructor" << '\n';
    }

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