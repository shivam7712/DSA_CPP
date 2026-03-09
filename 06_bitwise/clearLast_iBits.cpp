#include <iostream>
using namespace std;

int clearLast_iBits(int n, int i)
{
    int bitMask = ((~0) << i);
    return (bitMask & n);
}

int main()
{
    cout << clearLast_iBits(15, 2);
    return 0;
}

// approach

/* 
    1. need to clear last i bits of n, eg. n = 15 and i = 2 
    2. 15 = 0001111, bitMask should be like 0001100 so that we can perform AND operation.
    3. ~0 = 1111111111
    4. ~0 << i,   in our case i is 2, ( ~0 << 2 ) = 11111100;
    5. bitMask = 11111100
    6. bitMask & n == ans i.e.  0001100
*/
