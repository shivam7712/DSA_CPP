#include <iostream>
using namespace std;

void printBoundary(int mat[4][4], int m, int n)
{
    int sr = 0;
    int sc = 0;
    int ec = 3;
    int er = 3;

    for (int j = sc; j <= ec; j++)
    {
        cout << mat[sr][j] << " ";
    }
    for (int i = sr + 1; i <= er; i++)
    {
        cout << mat[i][ec] << " ";
    }
    if (m > 1)
    {
        for (int j = ec - 1; j >= sc; j--)
        {
            cout << mat[er][j] << " ";
        }
    }
    if (n > 1)
    {
        for (int i = er - 1; i >= sr + 1; i--)
        {
            cout << mat[i][sc] << " ";
        }
    }
}

int main()
{
    int mat[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {10, 11, 12, 13},
        {14, 15, 16, 17}};

    printBoundary(mat, 4, 4);
    return 0;
}

// don't look at the matrix passing part 
// at the time of writing this code, i don't know about passing matrix
// i have hardcoded it