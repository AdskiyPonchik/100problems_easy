#include <iostream>

void FillArray(int arr[], int size)
{
    int a = sizeof(arr);
    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % 10;
    }
}

void PrintArray(int arr[], const int size)
{
    for (int i = 0; i < size; i++)
    {
        std::cout << arr[i] << '\n';
    }
}
