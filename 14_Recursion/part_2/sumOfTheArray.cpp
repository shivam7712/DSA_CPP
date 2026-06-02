#include <iostream>
using namespace std;

long long f(long long arr[], int n)
{
    if(n == 1) return arr[0];
    long long smaller_input = f(arr, n-1);
    long long sum = smaller_input + arr[n-1];
    return sum;
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