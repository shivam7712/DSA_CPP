#include <iostream>
using namespace std;

void f(long long arr[], int n)
{
    if(n==0) return;
    cout << arr[n-1] << " ";
    f(arr, n-1);

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

    f(arr, n);
    
}