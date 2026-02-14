#include <iostream>
using namespace std;

void insertionSort(int *nums, int n)
{
    for(int i=1; i<n; i++)
    {  
        int curr = nums[i];
        int prev = i-1;

        // this loop is for shifting larger element to the right
        while(prev >= 0 && curr < nums[prev]) 
        {
            nums[prev+1] = nums[prev];
            prev --;
        }
        nums[prev+1] = curr;

    }
}

int main()
{
    int nums[] = {5, 4, 1, 3, 2};
    int n = sizeof(nums) / sizeof(int);

    insertionSort(nums, n);

    for(int i=0; i<n; i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;
}

