#include <iostream>
using namespace std;


void insertionSort(char *nums, int n)
{
    for(int i=1; i<n; i++)
    {
        int prev = i-1;
        char curr = nums[i];

        while(prev >=0 && nums[prev] > curr)
        {
            nums[prev+1] = nums[prev];
            prev --;
        }
        nums[prev+1] = curr;
    }
}

void printArray(char *nums, int n)
{
    for(int i=0; i<n; i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl;
}

int main()
{
    char nums[] = {'f', 'b', 'a', 'e', 'c', 'd'};
    int n = sizeof(nums) / sizeof(nums[0]);  // works for every data type
    printArray(nums, n);
    insertionSort(nums, n);
    printArray(nums, n);
    return 0;
}

