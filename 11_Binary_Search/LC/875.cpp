/* class Solution {
public:
    bool isPossible(vector<int>& piles, int speed, int h)
    {
        long long hourSpend = 0;

        for(int i=0; i<piles.size(); i++)
        {
            hourSpend += (piles[i] + speed - 1) / speed;
        }

        return hourSpend <= h;
    }

    int minEatingSpeed(vector<int>& piles, long long h) {

        int l = 1;
        int r = 0;

        for(int i=0; i<piles.size(); i++)
        {
            r = max(r, piles[i]);
        }
        
        int ans = -1;

        while(l<=r)
        {
            int mid = (l+r)/2;

            if(isPossible(piles, mid, h))
            {
                r = mid - 1;
                ans = mid;
            }
            else
            {
                l = mid + 1;
            }
        }

        return ans;
    }
}; */