#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>

using namespace std;

int findLargestElement(vector<long long> &v, long long x)
{
    int l = 0;
    int r = v.size() - 1;
    int ans = -1;

    while(l<=r)
    {
        int mid = (l+r)/2;

        if(v[mid] <= x)
        {
            l = mid + 1;
            ans = mid;
        }
        else
        {
            r = mid - 1;
        }
    }

    if(ans == -1) return ans;
    return v[ans];
}


int main()
{

    long long n, q;
    cin >> n >> q;

    
    vector<long long> A(n);

    for(long long i=0; i<n; i++)
    {
        cin >> A[i];
    }  

    sort(A.begin(), A.end());

    while(q > 0)
    {
        long long x;
        cin >> x;

        cout << findLargestElement(A, x) << "\n";
        q--;
    }


}