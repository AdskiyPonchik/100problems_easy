#include <iostream>
#include <string>
struct Student
{
    std::string name;
    int age;
    double gpa;
};

int main()
{
    const int studentscount = 5;
    Student student[studentscount] = {
        {"Alice", 20, 3.5},
        {"Bob", 21, 3.2},
        {"Charlie", 19, 3.8},
        {"David", 22, 3.6},
        {"Eve", 20, 3.9}};
    for (int i = 0; i < studentscount; i++)
    {
        std::cout << student[i].name << '\t' << student[i].age << '\t' << student[i].gpa << '\n';
    }
    return 0;
}