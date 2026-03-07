#include <iostream>
#include <vector>
using namespace std;

vector<int> pairSum (vector <int> &nums, int target)
{
    int n = nums.size();
    int s = 0;
    int e = n-1;

    while(s < e)
    {
        if(nums[s]+nums[e] == target) return {s, e};
        else if(nums[s]+nums[e] > target) e--;
        else s++;
    }
    return {};
}

int main()
{
    vector <int> nums = {2,7,11,15};
    int target = 9;
    
    vector <int> result = pairSum(nums, target);

    cout << result[0] << " " << result[1] << endl;

    return 0;
}

// pair sum;
// leetcode 167



