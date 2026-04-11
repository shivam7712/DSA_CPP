#include <iostream>
#include <vector>

using namespace std;


void printMaxSum(vector<long long>& v, long long n, long long k)
{

    vector<long long> pre(n);

    long long preSum = 0;

    for(int i=0; i<n; i++)
    {
        preSum+=v[i];
        pre[i] = preSum;
    }

    long long l = 0;
    k--;
    long long sum = LLONG_MIN;

    while(k<n)
    {
        long long currSum = 0;
        if(l == 0) currSum = pre[k];
        else currSum = pre[k] - pre[l-1];

        if(currSum > sum) sum = currSum;
        l++;
        k++;
        
    }

    cout << sum;
    
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
    printMaxSum(v, n, k);
    return 0;
}