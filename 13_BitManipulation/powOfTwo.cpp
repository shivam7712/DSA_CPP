#include <iostream>
using namespace std;

// find all powers of two

int main()
{
    int n;
    cin >> n;

    int ans = 1;

    while(ans <= n)
    {
        cout << ans << "\n";
        ans *= 2;
    }
    
    return 0;
}