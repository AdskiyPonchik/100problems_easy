#include <iostream>

class MyClass
{
    int* data;
public:
    MyClass(int size)
    {
        data = new int[size];
        for(int i = 0; i < size; i++)
        {
            data[i] = i;
        }
        std::cout << "Object " << data << "initializer was called" << '\n';
    }

    ~MyClass()
    {
        delete[] data;
        std::cout << "Destructor was called" << '\n';
    }
};