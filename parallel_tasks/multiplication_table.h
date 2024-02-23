#include <iostream>

void table(int rows, int cols)
{
    rows++; cols++;
    int** table = new int* [rows];
    //filling the array
    for(int i = 1; i < rows; i++)
    {
        table[i] = new int [cols];
        for(int j = 1; j < cols; j++)
        {
            table[i][j] = i * j;
        }
    
    }
    // printing the array
    for(int i = 1; i < rows; i++)
    {
        for(int j = 1; j < cols; j++)
        {
            std::cout << table[i][j] << '\t';
        }
        std::cout << '\n';
    }
    // deleting the array
    for(int i = 0; i < rows; i++)
    {
        delete[] table[i];
    }
    delete[] table;
}