#include <iostream>
using namespace std;

void f(long long arr[], int n, long long k, bool &found)
{
    
    if(n == 0) return;
    f(arr, n-1, k, found);
    if(found) return;
    if(arr[n-1] == k) 
    {
        cout << n << " ";
        found = true;
    }
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

    long long k;
    cin >> k;

    bool found = false;

    f(arr, n, k, found);

    if(!found) cout << -1;
    
}