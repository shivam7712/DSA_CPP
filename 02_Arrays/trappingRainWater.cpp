#include <iostream>
using namespace std;

int trappedWater(int *height, int n)
{
    int leftMax[n];
    int rightMax[n];

    leftMax[0] = height[0];
    rightMax[n-1] = height[n-1];

    for(int i=1; i<n; i++)
    {
        leftMax[i] = max(height[i-1], leftMax[i-1]);
        rightMax[n-i-1] = max(height[n-i], rightMax[n-i]);
    }

    int TTW = 0;

    for(int i=1; i<n-1; i++)
    {
        int minHeight = min(leftMax[i], rightMax[i]);
        int TW = minHeight - height[i];
        
        if(TW > 0)
        {
            TTW+=TW;
        }
    }

    return TTW;
}

int main()
{
    int height[] = {4, 2, 0, 6, 3, 2, 5};
    int n = sizeof(height) / sizeof(int);

    int result = trappedWater(height, n);
    cout << result << endl;

    return 0;
}

// Trapping rain water
// TC, O(n+n) =  O(2n)
// ignore constant TC: O(n)