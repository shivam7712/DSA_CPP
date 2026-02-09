#include <iostream>
using namespace std;

int main()
{
    int arr[6] = {2, -3, 6, -5, 4, 2};
    int n = sizeof(arr) / sizeof(int);
    
    int maxSum = INT_MIN;

    for(int i=0; i<n; i++)
    {
        for(int j=i; j<n; j++)
        {
            int sum = 0;

            for(int k=i; k<=j; k++)
            {
                sum+=arr[k];
            }

            maxSum = max(maxSum, sum);
        }
    }
    
    cout << maxSum << endl;

    return 0;
}

// max subarray sum
// brute force, TC: O(n3)