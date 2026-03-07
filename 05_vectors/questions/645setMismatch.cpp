#include <iostream>
using namespace std;

int main()
{
    vector<int> nums = {1,2,2,4};
    vector<int> freq(nums.size() + 1, 0);

    for (int i = 0; i < nums.size(); i++)
    {
        freq[nums[i]]++;
    }

    int twice = 0;
    int missing = 0;
    for (int i = 0; i < freq.size(); i++)
    {
        if (freq[i] == 0)
            missing = i;
        if (freq[i] == 2)
            twice = i;
    }
    cout << "twice: " << twice << endl << "missing: " << missing;
}
