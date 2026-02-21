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

    int idx = -1;

    int prev = 0;

    for(int i=0; i<n; i++)
    {
        int sum = 0;
        for(int j=0; j<m; j++)
        {
            sum += nums[i][j];
        }
        
        if(sum > 0 && sum > prev) {
            prev = sum;
            idx = i;
        }
    }

    cout << idx;
    return 0;
}

// Print a single integer: the index of the first row with 
// the maximum number of 1s, or −1 if no such row exists. 