/* class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n = nums.size();
        for(int i=0; i<n; i++)
        {
            int e = nums[i];
            if(e <=0 || e > n) continue;
            if(e != nums[e-1])
            {
                swap(nums[i], nums[e-1]);
                i--;
            }
        }

        for(int i=0; i<n; i++)
        {
            if(nums[i] != i+1) return i+1;
        }
        return n+1;
    }
};
 */
// this the soultion of leetcode 41 do not try to run this on your local machine