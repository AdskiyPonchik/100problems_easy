#include <iostream>

void massiv()
{
    srand(time(NULL));
    int rows = 4;
    int cols = 5;
    int** arr = new int* [rows];

    // Creating array
    for(int i = 0; i < rows; i++)
    {
        arr[i] = new int [cols];
    }

    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            arr[i][j] = rand() % 20;
            std::cout << arr[i][j] << '\t';
        }
        std::cout << '\n';
    }

    // Deleting array
    for(int i = 0; i < rows; i++)
    {
        delete [] arr[i];
    }
    delete [] arr;
}