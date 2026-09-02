#include <iostream>
#include <vector>

using namespace std;

// this question can be done by sliding window but we will use prefix sum :)


long long printMaxSumOfSizeK(vector<long long> v, int k, int n)
{
    vector<long long> prefix;
    long long sum = 0;

    for(int i: v)
    {
        sum+=i;
        prefix.push_back(sum);
    }

    int l = 0;
    k--;

    long long result = LLONG_MIN;

    while(k<n)
    {
        long long currSum = 0;

        if(l==0) currSum = prefix[k];
        else
        {
            currSum = prefix[k]-prefix[l-1];
        }

        if(currSum > result) result = currSum;

        l++;
        k++;
    }

    return result;
}

int main()
{

    int n, k;
    cin >> n >> k;

    vector<long long> v(n);

    for(int i=0; i<n; i++)
    {
        cin >> v[i];
    }

    cout << printMaxSumOfSizeK(v, k, n);

    return 0;
}
