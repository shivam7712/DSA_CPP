#include <iostream>
using namespace std;

void transpose (int mat[][4], int m, int n)
{
    

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cout << *(*(mat+j)+i) << " ";
            // cout << mat[j][i] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int mat[4][4] = {
        {10, 20, 30, 40},
        {15, 25, 35, 45},
        {27, 29, 37, 48},
        {32, 33, 39, 50}};

    transpose(mat, 4, 4);

    return 0;
}

