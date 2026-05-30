#include <iostream>
#include <vector>
using namespace std;

long long f(long long n)
{
    if(n == 1) return 0;
    if(n == 2) return 1;
    long long res = f(n-1) + f(n-2);
    return res;
    
}

int main()
{
    long long n;
    cin >> n;

    cout << f(n);
}