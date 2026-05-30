#include <iostream>
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