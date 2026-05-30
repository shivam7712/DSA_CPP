#include <iostream>
#include <vector>
using namespace std;

long long f(long long n)
{
    if(n == 1 || n == 0) return 1;
    return n * f(n-1);
}

int main()
{
    long long n;
    cin >> n; 
    cout << f(n);

    return 0;
}#include <iostream>
#include <vector>
using namespace std;

int f(int n)
{
    if(n==0) return 1;
    int res = n * f(n-1);
    return res;
}

int main()
{
    cout << f(5);
    return 0;
}