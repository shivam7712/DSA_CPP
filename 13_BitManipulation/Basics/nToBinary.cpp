#include <iostream>
using namespace std;

// Convert n into its binary form

int main()
{
    
    int n;
    cin >> n;

    if(n == 0)
    {
        cout << 0;
        return 0;
    }
    
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
            cout << "1";
        }
        else
        {
            cout << "0";
        }
        nearPow /= 2;
        
        
    }

    return 0;
}