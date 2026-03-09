#include <iostream>
using namespace std;

int countSetBits(int n)
{
    int count = 0;

    while(n > 0)
    {
        count += 1 & n;
        n = n >> 1;
    }
    return count;
}

int main()
{
    cout << countSetBits(7);
    return 0;
}

// approach

/* 
    1. extract last bit from n and add it to the count. (1 & n)
    2. rightShift n by 1.   (n >> 1)
    do these until n becomes 0
    
*/


