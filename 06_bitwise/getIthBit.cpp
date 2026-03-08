#include <iostream>
using namespace std;

int getIthBit(int n, int i)
{
    int bitmask = 1 << i;
    if(!(bitmask & n)) return 0;
    else return 1;
}

int main()
{
    int num, i;
    cout << "enter number then ith bit position" << endl;
    cin >> num >> i;

    int result = getIthBit(num, i);
    cout << result;

    return 0;
}


// get ith bit
// bitmask = 1 << i 
// rusult = (bitmask & number) 
// if (result > 0) the bit is 1, else it will be 0.