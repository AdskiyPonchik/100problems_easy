#include <iostream>
#include <string>
#include "OOP/class.h"
using namespace std;




int main(int argc, char* argv)
{
    Human firstHuman;
    firstHuman.age = 32;
    firstHuman.name = "Ivan";
    std::cout << firstHuman.age << '\n';
    std::cout << firstHuman.name << '\n';
    return 0;
}