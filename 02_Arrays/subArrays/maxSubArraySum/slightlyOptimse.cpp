#include <iostream>
using namespace std;

int main()
{
    int arr[6] = {2, -3, 6, -5, 4, 2};
    int n = sizeof(arr) / sizeof(int);
    
    int result = INT_MIN;

    for(int i=0; i<n; i++)
    {

        int sum = 0;

        for(int j=i; j<n; j++)
        {
            sum+=arr[j];
            result = max(sum, result);
        }

    }
    
    cout << result << endl;

    return 0;
}

// max subarray sum
// slightly optimised approach, TC: O(n2)