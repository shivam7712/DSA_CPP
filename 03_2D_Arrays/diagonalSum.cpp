#include <iostream>
using namespace std;

int diagonalSum(int mat[][3], int n)
{
    int sum = 0;

    for(int i=0; i<n; i++)
    {
        sum += mat[i][i];
        if(i == n-i-1) continue;
        sum += mat[i][n-i-1];
    }

    return sum;
}

int main()
{
    int mat[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    int result = diagonalSum(mat, 3);
    cout << "SUM: " << result;

    return 0;
}


// 3x3 (n = m)
// TC O(n)