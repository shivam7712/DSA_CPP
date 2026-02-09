#include <iostream>
using namespace std;

int main()
{
    int arr[6] = {2, -3, 6, -5, 4, 2};
    int n = sizeof(arr) / sizeof(int);
    
    int result = INT_MIN;
    int sum = 0;

    for(int i=0; i<n; i++)
    {
        sum+=arr[i];
        result = max(sum, result);
        if(sum < 0)
        {
            sum = 0;
        }
    }
    
    cout << result << endl;

    return 0;
}

// max subarray sum
// optimised, TC: O(n)