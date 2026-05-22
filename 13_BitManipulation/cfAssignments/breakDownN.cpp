#include <iostream>
using namespace std;

// break down n
/*  
    Your task is to represent 𝑁
    as a sum of distinct powers of 2
    Each power of 2
    can be used at most once. 
*/

// 31 (input)
// 16 8 4 2 1 (output)

int main()
{

    long long n;
    cin >> n;

    long long nearPow = 1;
    while(nearPow <= n)
    {
        nearPow = nearPow << 1;
    }
    nearPow = nearPow >> 1;

    while(n > 0)
    {
        if(nearPow <= n)
        {
            cout << nearPow << " ";
            n -= nearPow;
        }
        nearPow = nearPow >>  1;
    }

    return 0;
}