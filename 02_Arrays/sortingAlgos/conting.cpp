#include <iostream>
using namespace std;

void countingSort(int *nums, int n)
{
    int freq[100000];
    int start = INT_MAX;
    int end = INT_MIN;

    for(int i=0; i<n; i++)
    {
        start = min(start, nums[i]);
        end = max(end, nums[i]);
        freq[nums[i]]++;
    }

    for(int i=start, j=0; i<=end; i++)
    {
        while(freq[i] > 0){
            nums[j++] = i;
            freq[i]--;
        }
    }


}

int main()
{
    int nums[] = {1, 4, 1, 3, 2, 4, 3, 7};
    int n = sizeof(nums) / sizeof(int);

    countingSort(nums, n);

    for(int i=0; i<n; i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;
}

