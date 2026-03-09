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

// approach

/* 
    objective: to calculate x to the power n

    1. n = 5.  i.e. 1  0  1
                    \  \  \
                    81 9  3
    2. every bit is mapped with 3 to power p and p will be doubled every time 

    3. store result every time the bit is 1 other wise skip. e.g. ans = ans * x;
    4. but every time we need to find sq of x => x = x*x;
*/

