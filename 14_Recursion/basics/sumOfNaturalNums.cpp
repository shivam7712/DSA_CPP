#include <iostream>
#include <vector>
using namespace std;

long long f(long long n)
{
    if(n==1) return 1;
    long long res = n + f(n-1);
    return res;
}

int main()
{
    long long n;
    cin >> n;

    cout << f(n);
}