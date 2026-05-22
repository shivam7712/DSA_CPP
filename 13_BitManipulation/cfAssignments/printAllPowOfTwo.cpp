#include <iostream>
using namespace std;

int main()
{

    long long n;
    cin >> n;

    long long nearPow = 1;
    while(nearPow <= n)
    {
        cout << nearPow << " ";
        nearPow = nearPow << 1;
        
    }



    return 0;
}