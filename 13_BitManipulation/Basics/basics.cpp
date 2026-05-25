#include <iostream>
using namespace std;

// find all powers of two


int powOfTwo(int n)
{
    int ans = 1;

    for(int i=1; i<=n; i++)
    {
        ans *= 2;
    }
    return ans;
}

int main()
{
    int n;
    cin >> n;

    int curr = powOfTwo(0);
    int i = 1;

    while(curr <= n)
    {
        cout << curr << "\n";
        curr = powOfTwo(i);
        i++;
    }
    
    return 0;
}