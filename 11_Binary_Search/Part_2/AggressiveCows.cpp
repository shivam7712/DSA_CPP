#include <iostream>
#include <vector>

using namespace std;

bool isPossible(vector<long long> v, long long k, long long gap)
{
    long long n = v.size();

    long long cowsPlaced = 1;
    long long prev = v[0];

    for(long long i=1; i<n; i++)
    {
        if(v[i] - prev >= gap)
        {
            cowsPlaced++;
            prev = v[i];
        }
    }

    return cowsPlaced >= k;
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

    long long l = 0;
    long long r = A[n-1] - A[0];
    long long ans = -1;
    while(l <= r)
    {
        long long mid = (l+r)/2;

        if(isPossible(A, k, mid))
        {
            ans = mid;
            l = mid + 1;
        }
        else
        {
            r = mid - 1; 
        }
    }

    cout << ans;


}