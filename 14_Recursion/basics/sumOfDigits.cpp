#include <iostream>
#include <vector>
using namespace std;

long long f(long long n)
{
    if(n == 0) return 0;
    long long res = n%10 + f(n/10);
    return res;
}

int main()
{
    long long n;
    cin >> n;

    cout << f(n);
}