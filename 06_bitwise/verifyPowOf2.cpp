#include <iostream>
using namespace std;

bool powOfTwo(int n)
{
    if(!(n & (n-1))) return true;
    else return false;
}

int main()
{
    int n;
    cout << "enter number" << "\n";
    cin >> n;

    
    bool res = powOfTwo(n);
    cout << res << endl;

    return 0;
}
