#include <iostream>
using namespace std;

int updateIthBit(int n, int i, int bit)
{
    int clearIthBit = ((~(1 << i)) & n);
    return clearIthBit | (bit << i);
}

int main()
{
    cout << updateIthBit(7, 2, 0);
    return 0;
}


// 1st clear the ith bit
// 2nd set the ith bit by input 0 or 1