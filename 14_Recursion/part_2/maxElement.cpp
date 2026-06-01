#include <iostream>
using namespace std;

long long f(long long arr[], int n)
{

    if(n == 1) return arr[0];
    
    long long MX = f(arr, n-1);
    long long ans = max(MX, arr[n-1]);

    return ans;
}

int main()
{
    int n;
    cin >> n;

    long long arr[n];

    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }

    cout << f(arr, n);
}