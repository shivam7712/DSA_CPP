// findPeakElement

/* class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n = nums.size();
        int l = 0;
        int r = n-1;

        while(l<=r)
        {
            int mid = (l+r)/2;
            if(l == r) return l;
            if(mid == 0)
            {
                if(nums[mid] < nums[mid+1])
                {
                    l = mid+1;
                    continue;
                }
                else
                {
                    return mid;
                }
            }
            if(mid == n-1)
            {
                if(nums[mid-1] > nums[mid])
                {
                    r = mid - 1;
                    continue;
                }
                else
                {
                    return mid;
                }
            }
            if(nums[mid] < nums[mid+1])
            {
                l = mid+1;
            }
            else if(nums[mid-1] >  nums[mid]){
                r = mid-1;
            } 
            else{
                return mid;
            } 
        }

        return l;
    
    }
}; */