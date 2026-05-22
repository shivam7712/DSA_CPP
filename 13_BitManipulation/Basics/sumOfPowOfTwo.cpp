#include <iostream>
using namespace std;

// represent n as sum of power of 2

int main()
{
    
    int n;
    cin >> n;

    int nearPow = 1;

    while(nearPow <= n)
    {
        nearPow *= 2;
    }

    nearPow /= 2;

    while(n > 0)
    {
        if(nearPow <= n)
        {
            n -= nearPow;
            cout << nearPow << " ";
        }
        nearPow /= 2;
    }

    return 0;
}