#include <iostream>

void FillArray(int* const arr, const int size)
{
    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % 10;
    }
}

void push_back(int*& arr, int &size, int value)
{
    int* newarr = new int [size+1];
    for(int i = 0; i < size; i++)
    {
        newarr[i] = arr[i];
    }
    newarr[size++] = value;  
    delete[] arr;
    arr = newarr;
}

void ShowArray(const int *const arr, const int size)
{
    for (int i = 0; i < size; i++)
    {
        std::cout << arr[i] << '\t';
    }
    std:: cout << '\n';
}

void pop_back(int*& arr, int& size)
{
    size--;
    int* newarr = new int [size-1];
    for(int i = 0; i < size; i++)
    {
        newarr[i] = arr[i];
    }
    delete[] arr;
    arr=newarr;
}

void push_front(int*& arr, int& size, int value)
{
    int* newarr = new int [++size];
    newarr[0] = value;
    for(int i = 1; i < size; i++)
    {
        newarr[i] = arr[i-1];
    }
    delete[] arr;
    arr = newarr;
}

void pop_front(int*& arr, int& size)
{
    size--;
    int* newarr = new int[size];
    for(int i = 1; i < size; i++)
    {
        newarr[i-1] = arr[i];
    }
    delete[] arr;
    arr = newarr;
}

void insert(int*& arr, int& size, const int value, const int position)
{
    int* newarr = new int [++size];
    for(int i = 0; i < position; i++)
    {
        newarr[i] = arr[i];
    }
    newarr[position] = value;
    for(int i = position+1; i < size; i++)
    {
        newarr[i] = arr[i-1];
    }
    delete[] arr;
    arr = newarr;
}

void remove(int*& arr, int& size, const int position)
{
    int* newarr = new int[--size];
    for(int i = 0; i < position; i++)
    {
        newarr[i] = arr[i];
    }
    for(int i = position+1; i < size; i++)
    {
        newarr[i-1] = arr[i];
    }
    delete[] arr;
    arr = newarr;
}
