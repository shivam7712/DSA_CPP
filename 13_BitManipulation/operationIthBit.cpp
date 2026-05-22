#include <iostream>
using namespace std;

// Operation on ith bit

int checkIthBit(int n, int i)
{
    int bitMask = 1 << i;
    int result = bitMask & n;

    if(result == 0) return 0;
    return 1;
}

int setIthBit(int n, int i)
{
    int bitMask = 1 << i;
    int result = bitMask | n;

    return result;
}

int clearIthBit(int n, int i)
{
    int bitMask = ~(1 << i);
    int result = n & bitMask;

    return result;
}

int toggleIthBit(int n, int i)
{
    int mask = 1 << i;
    int result = n ^ mask;

    return result;
}

int main()
{
    
    // cout << checkIthBit(9, 2);
    // cout << setIthBit(9, 3);
    // cout << clearIthBit(9, 3);
    // cout << toggleIthBit(9, 3);

    return 0;
}