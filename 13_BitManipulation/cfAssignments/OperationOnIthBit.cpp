#include <iostream>
using namespace std;

// Operation on ith bit

long long checkIthBit(long long &n, int i)
{
    long long bitMask = 1LL << i;
    long long result = bitMask & n;

    if(result == 0) return 0;
    return 1;
}

long long setIthBit(long long &n, int i)
{
    long long bitMask = 1LL << i;
    n = bitMask | n;

    return n;
}

long long clearIthBit(long long &n, int i)
{
    long long bitMask = ~(1LL << i);
    n = n & bitMask;

    return n;
}

long long toggleIthBit(long long &n, int i)
{
    long long mask = 1LL << i;
    n = n ^ mask;

    return n;
}

int main()
{

    long long n, q;
    cin >> n >> q;

    while(q--)
    {
        int t, i;
        cin >> t >> i;

        if(t == 1)
        {
            if(checkIthBit(n, i) == 1) cout << "YES\n";
            else cout << "NO\n";
        }
        else if(t == 2)
        {
            cout << setIthBit(n, i) << "\n";
        }
        else if(t == 3)
        {
            cout << clearIthBit(n, i) << "\n";
        }
        else if(t == 4)
        {
            cout << toggleIthBit(n, i) << "\n";
        }
    }

    return 0;
}