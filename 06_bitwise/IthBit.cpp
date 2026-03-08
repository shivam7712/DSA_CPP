#include <iostream>
using namespace std;

int setIthBit(int n, int i)
{
    int bitmask =  1 << i;
    return (bitmask | n);
}

int getIthBit(int n, int i)
{
    int bitmask = 1 << i;
    if(!(bitmask & n)) return 0;
    else return 1;
}

int clearIthBit(int n, int i)
{
    int bitmask = ~(1 << i);
    return (bitmask & n);
}

int main()
{
    int num, i;
    cout << "enter number then ith bit position" << endl;
    cin >> num >> i;

    int result = getIthBit(num, i);
    int result2 = setIthBit(num, i);
    int result3 = clearIthBit(num, i);
    cout << result << endl;
    cout << result2 << endl;
    cout << result3 << endl;

    return 0;
}


/* 
    get ith Bit
    bitmask = 1 << i 
    rusult = (bitmask & number) 
    if (result > 0) the bit is 1, else it will be 0. 
*/

/* 
    set ith Bit 
    same bitmake used to getIthBit just return (bitmask | n); 
*/

/* 
    clear ith Bit
    same bitmask just do ~(bitmask)
    result = bitmask & result
*/