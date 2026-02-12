#include <iostream>
using namespace std;

void bubbleSort(int *nums, int n)    // TC: O(n2)
{
    for(int i=0; i<n-1; i++)
    {
        bool isSwap = false;

        for(int j=0; j<n-i-1; j++)
        {
            if(nums[j] > nums[j+1]) // just invert this > to < for decending
            {
                swap(nums[j], nums[j+1]);
                isSwap = true;
            }
        }

        if(!isSwap) // this will be true if array is sorted
        {
            return;
        }
    }
}

int main()
{
    int nums[] = {5, 4, 1, 3, 2};
    int n = sizeof(nums) / sizeof(int);

    bubbleSort(nums, n);

    for(int i=0; i<n; i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;
}

// stockBuySell
// TC, O(n+n) =  O(2n)
// ignore constant TC: O(n)