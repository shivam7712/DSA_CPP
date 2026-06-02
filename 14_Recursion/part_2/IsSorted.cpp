#include <iostream>
using namespace std;

bool f(long long arr[], int n)
{
    if(n == 1) return true;
    if(f(arr, n-1))
    {
        if(arr[n-1] >= arr[n-2]) return true;
    }
    return false;
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

    if(f(arr, n))
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}