#include <iostream>
#include <vector>

using namespace std;

// longest subarray with sum < k;

int main()
{
    long long n, k;
    cin >> n >> k;

    vector<long long> v(n);

    for(int i=0; i<n; i++)
    {
        cin >> v[i];
    }

    long long sum = 0;
    int ans = 0;
    int l = 0;

    for(int r=0; r<n; r++)
    {
        sum+=v[r];
        while(sum >= k)
        {
            sum-=v[l];
            l++;
        }
        ans = max(ans, r-l+1);
    }

    cout << ans;

    
    
}