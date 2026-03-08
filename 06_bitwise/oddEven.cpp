#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    if(!(n & 1)) cout << "even";
    else cout << "odd";

    return 0;
}


// even odd using bitwise.
// & with 1 gives rmb and if rmb is 0 even or if rmb is 1 then odd