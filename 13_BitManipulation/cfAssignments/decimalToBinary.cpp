#include <iostream>
using namespace std;

int main()
{

    long long n;
    cin >> n;

    if(n == 0)
    {
        cout << 0;
        return 0;
    }

    long long nearPow = 1;
    while(nearPow <= n)
    {
        nearPow = nearPow << 1;
    }
    nearPow = nearPow >> 1;

    while(nearPow > 0)
    {
        if(nearPow <= n)
        {
            cout << "1";
            n-=nearPow;
        }
        else
        {
            cout << "0";
        }
        nearPow = nearPow >> 1;
        

    }

    return 0;
}