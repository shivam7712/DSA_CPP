#include <iostream>
#include <vector>

using namespace std;

//Count Subarrays with Sum < K

int main()
{
    long long n, k;
    cin >> n >> k;

    vector<long long> A(n);

    for(int i=0; i<n; i++)
    {
        cin >> A[i];
    }

    long long sum = 0;
    long long count = 0;

    int l = 0;

    for(int r=0; r<n; r++)
    {
        sum+=A[r];
        while(sum >= k)
        {
            sum-=A[l];
            l++;
        }
        count += r-l+1;

    }

    cout << count;
    
    
    
}