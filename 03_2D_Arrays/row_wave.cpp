#include <iostream>
using namespace std;


int main()
{
    int n, m;
    cin >> n >> m;

    int nums[n][m];

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin >> nums[i][j];
        }
    }

    for(int i=0; i<n; i++)
    {
        if(i % 2 == 0)
        {
            for(int j=0; j<m; j++)
            {
                cout << nums[i][j] << " ";
            }
        }
        else {
            for(int j=0; j<m; j++)
            {
                cout << nums[i][m-j-1] << " ";
            }
        }
    }

    return 0;
}

/* 
    You are given a 2D array of size n×m containing integers.
    
    Your task is to print all the 
    elements of the matrix row by row in wave form: 
    Print the first row from left to right, the second row 
    from right to left, and so on...
*/