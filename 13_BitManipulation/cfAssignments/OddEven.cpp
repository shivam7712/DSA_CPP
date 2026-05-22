#include <iostream>
using namespace std;

int main()
{
    // odd even without modulo operator

    long long n;
    cin >> n;

    long long res = n & 1;
    if(res == 1) cout << "Odd";
    else cout << "Even";

    return 0;
}