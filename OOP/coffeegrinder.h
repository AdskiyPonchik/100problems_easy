#include <iostream>

class CoffeeGrinder
{
private:
    bool CheckPower()
    {
        return false;
    }

public:
    void Start()
    {

        if (CheckPower())
        {
            std::cout << "Vzhuhhh!" << '\n';
        }
        else
        {
            std::cout << "Need more power!" << '\n';
        }
    }
};