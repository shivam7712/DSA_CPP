#include <iostream>
using namespace std;

int checkIthBit(int n, int i)
{
    int bitMask = 1 << i;
    int result = bitMask & n;

    if(result == 0) return 0;
    return 1;
}

int main()
{
    // counting the number of set bit in n (for 32 bit integer)

    int n;
    cin >> n;

    int count = 0;

    for(int i=30; i>=0; i--)
    {
        count += checkIthBit(n, i);
    }

    cout << count;

    return 0;
}