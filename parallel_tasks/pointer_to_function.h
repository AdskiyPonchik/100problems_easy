#include <iostream>
#include <string>

void Foo1(int a)
{
    std::cout << "void Foo1()" << a << '\n';
}

void Foo2()
{
    std::cout << "void Foo2()" << '\n';
}

std::string DataFromWebServer()
{
    return "Data From WebServer";
}

std::string DataFromDB()
{
    return "Data From DB";
}

void ShowInfo(std::string (*foo)())
{
    std::cout << foo() << '\n';
}