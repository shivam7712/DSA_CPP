#include <iostream>
#include <vector>
using namespace std;

void fDec(int n)
{
    if(n == 0) return;
    cout << n << "\n";
    fDec(n-1);
}

void fInc(int n)
{
    if(n==1) return;
    fInc(n-1);
    cout << n << "\n";
}

int main()
{
    int n;
    cin >> n;

    fDec(n);
    fInc(n);

    return 0;
}