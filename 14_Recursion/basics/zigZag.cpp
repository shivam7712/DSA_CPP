#include <iostream>
#include <vector>
using namespace std;

void f(int n)
{
    if(n==1) 
    {
        cout << n << "\n";
        return;
    }
    cout << n << "\n";
    f(n-1);
    cout << n << "\n";
}

int main()
{
    int n;
    cin >> n;

    f(n);

    return 0;
}