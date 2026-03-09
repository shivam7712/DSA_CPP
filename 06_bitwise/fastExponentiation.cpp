#include <iostream>
using namespace std;

int fastExpo(int x, int n)
{
    int ans = 1;
    
    while(n > 0)
    {
        
        int lastBit = 1 & n;
        
        if(lastBit)
        {
            ans*=x;
        }
        n  = n >> 1;
        x = x * x;

    }

    return ans;
}

int main()
{
    cout << fastExpo(3, 5);
    return 0;
}

// approach - pending

/* 
    objective: to calculate x to the power n
    
*/

