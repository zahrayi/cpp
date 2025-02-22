#include <iostream>
#include <cstring>

using namespace std;

void add(int a[][3], int b[][2], int c[][2])
{
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            c[i][j] = a[i][j] + b[i][j];
        }
    }
}

int main()
{
    int a[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int b[2][2] = {{7, 8}, {9, 10}};
    int c[2][2];

    add(a, b, c);

    // Output the result
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << c[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}