#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

//  Smallest Subarray with Sum > K

int main()
{
    long long n, k;
    cin >> n >> k;

    vector<long long> A(n);

    for(int i=0; i<n; i++)
    {
        cin >> A[i];
    }

    long long ans = LLONG_MAX;
    long long sum = 0;
    long long l = 0;

    for(long long r=0; r<n; r++)
    {
        sum+=A[r];
        while(sum > k)
        {
            ans = min(ans, r-l+1);
            sum-=A[l];
            l++;
        }
    }

    if (ans == LLONG_MAX) {
        cout << -1;
    } else {
        cout << ans;
    }


    
}