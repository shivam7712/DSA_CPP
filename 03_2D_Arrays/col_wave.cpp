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

    for(int j=0; j<m; j++)
    {
        if(j % 2 == 0)
        {
            for(int i=0; i<n; i++)
            {
                cout << nums[i][j] << " ";
            }
        }
        else {
            for(int i=0; i<n; i++)
            {
                cout << nums[n-i-1][j] << " ";
            }
        }
    }

    return 0;
}


/*
Your task is to print all the elements of the matrix column by column in wave form: Print the first column from top to bottom, the second column from bottom to top, and so on... 
 */