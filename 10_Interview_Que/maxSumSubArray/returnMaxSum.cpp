#include <iostream>
#include <vector>

using namespace std;


int maxSum(vector<int> &v)
{
    int sum = 0;
    int ans = INT_MIN;

    for(int i=0; i<v.size(); i++)
    {
        if(sum<0) sum = 0;
        sum += v[i];
        ans = max(ans, sum);
    }

    return ans;
}

int main()
{
    int n;
    cin >> n;

    vector<int> A(n);

    for(int i=0; i<n; i++)
    {
        cin >> A[i];
    }
    
    cout << maxSum(A);
}