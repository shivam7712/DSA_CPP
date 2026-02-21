#include <iostream>
using namespace std;

int main()
{
    int m, n;
    cin >> m >> n;

    int nums[m][n];

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> nums[i][j];
        }
    }

    for (int j = 0; j < n; j++)
    {
        cout << nums[0][j] << " ";
    }

    for (int i = 1; i < m; i++)
    {
        cout << nums[i][n - 1] << " ";
    }

    if (m > 1)
    {
        for (int j = n-2; j >=0; j--)
        {
            cout << nums[m-1][j] << " ";
        }
    }
    if(n > 1)
    {
        for(int i = m-2; i>0; i--)
        {
            cout << nums[i][0] <<  " ";
        }
    }
    return 0;
}


// print boundary
