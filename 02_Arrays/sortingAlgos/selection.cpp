#include <iostream>
using namespace std;

void selectionSort(int *nums, int n)    // TC: O(n2)
{
    for(int i=0; i<n-1; i++)
    {
        int mi = i;  // mi = index of smallest element in nums
        for(int j=i+1; j<n; j++)
        {
            if(nums[mi] > nums[j])
            {
                mi = j;
            }
        }
        swap(nums[i], nums[mi]);
    }
}

int main()
{
    int nums[] = {5, 4, 1, 3, 2};
    int n = sizeof(nums) / sizeof(int);

    selectionSort(nums, n);

    for(int i=0; i<n; i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;
}

