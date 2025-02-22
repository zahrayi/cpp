#include <iostream>
#include <conio.h>
#include <cstring>
using namespace std;

const int MAX_SIZE = 100;

void add(int a[][MAX_SIZE], int b[][MAX_SIZE], int c[][MAX_SIZE], int rows, int cols)
{
    int i, j;
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    }
}

int main()
{
    int a[MAX_SIZE][MAX_SIZE], b[MAX_SIZE][MAX_SIZE], c[MAX_SIZE][MAX_SIZE];
    int rows, cols, i, j;

    cout << "Enter the number of rows and columns: ";
    cin >> rows >> cols;

    cout << "Enter the elements of matrix A: " << endl;
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            cin >> a[i][j];
        }
    }

    cout << "Enter the elements of matrix B: " << endl;
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            cin >> b[i][j];
        }
    }

    add(a, b, c, rows, cols);

    cout << "The sum of matrices A and B is: " << endl;
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            cout << c[i][j] << " ";
        }
        cout << endl;
    }

    getch();
    return 0;
}