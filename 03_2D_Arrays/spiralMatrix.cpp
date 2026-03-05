#include <iostream>
using namespace std;

void spiralMatrix(int mat[4][4], int m, int n)
{
    int sr = 0;
    int sc = 0;
    int ec = n - 1;
    int er = m - 1;

    while (sr <= er && sc <= ec)
    {
        // top
        for (int j = sc; j <= ec; j++)
        {
            cout << mat[sr][j] << " ";
        }

        // right
        for (int i = sr + 1; i <= er; i++)
        {
            cout << mat[i][ec] << " ";
        }

        // bottom
        for (int j = ec - 1; j >= sc; j--)
        {
            if(sr == er) break;
            cout << mat[er][j] << " ";
        }

        // left
        for (int i = er - 1; i >= sr + 1; i--)
        {
            if(sc == ec) break;
            cout << mat[i][sc] << " ";
        }
        sr++;
        sc++;
        er--;
        ec--;
    }
}

int main()
{
    int mat[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {10, 11, 12, 13},
        {14, 15, 16, 17}};

    spiralMatrix(mat, 4, 4);
    return 0;
}


// to prevent duplicate printing of row and coloumns we can also use 
// if (sr < er) for bottom part
// if (sc < ec) for left part