#include <iostream>
#include <vector>
using namespace std;

long long f(long long x, long long n)
{
    if(n==0) return 1;
    long long res = x * f(x, n-1);
    return res;
}

int main()
{
    long long x, n;
    cin >> x >> n;

    cout << f(x, n);
}