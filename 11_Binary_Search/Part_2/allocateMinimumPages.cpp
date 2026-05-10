#include <iostream>
#include <vector>
#include <climits>

using namespace std;

bool isPossible(vector<long long> &v, long long k, long long pageLimit)
{
    long long n = v.size();

    long long student = 1;
    long long pages = 0;

    for(long long i=0; i<n; i++)
    {
        if(pages + v[i] <= pageLimit)
        {
            pages += v[i];
        }
        else
        {
            pages = v[i];
            student++;
        }
    }

    return student <= k;
}

int main()
{

    long long n, k;
    cin >> n >> k;

    
    vector<long long> A(n);

    for(long long i=0; i<n; i++)
    {
        cin >> A[i];
    }  

    if(k > n)
    {
        cout << -1;
        return 0;
    }


    long long l = LLONG_MIN;
    long long r = 0;
    long long ans = -1;

    for(long long i=0; i<n; i++)
    {
        l = max(l, A[i]);
        r += A[i];
    }

    while(l <= r)
    {
        long long mid = (l+r)/2;

        if(isPossible(A, k, mid))
        {
            ans = mid;
            r = mid - 1;
        }
        else
        {
            l = mid + 1; 
        }
    }

    cout << ans;


}