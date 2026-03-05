#include <iostream>
using namespace std;

bool diagonalSum(int mat[][4], int n, int key)
{
    int i = 0;
    int j = n - 1;

    while (i < n && j >= 0)
    {
        if (mat[i][j] == key){
            cout << i << " " << j << endl;
            return true;
        }
            
        else if (mat[i][j] > key)
        {
            j--;
        }
        else
        {
            i++;
        }
    }

    cout << "key not found";
    return false;
}

int main()
{
    int mat[4][4] = {
        {10, 20, 30, 40},
        {15, 25, 35, 45},
        {27, 29, 37, 48},
        {32, 33, 39, 50}};

    bool result = diagonalSum(mat, 4, 33);

    return 0;
}

// TC O(n+m)  SC O(1)
// if n >>>> m or m >>>> n TC: O(n) or  O(m)
// staircase search
