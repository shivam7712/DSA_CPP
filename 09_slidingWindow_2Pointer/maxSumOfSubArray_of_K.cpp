#include <iostream>
#include <vector>
#include <map>

using namespace std;


long long find(vector<long long> &v, long long k)
{
    int n = v.size();

    long long sum = 0;

    for(int i=0; i<k; i++)
    {
        sum += v[i];
    }

    long long ans = sum;

    for(int i=k; i<n; i++)
    {
        sum+=v[i];
        sum-=v[i-k];
        ans = max(sum, ans);
    }

    return ans;

}



int main()
{
    long long n, k;
    cin >> n >> k;

    vector<long long> v(n);

    for(long long i=0; i<n; i++)
    {
        cin >> v[i];
    }
    long long maxSum = find(v, k);
    cout << maxSum;
    
}