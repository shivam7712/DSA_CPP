#include <iostream>
using namespace std;

void f(int n, char src, char aux, char dest)
{
    if(n == 0) return;
    f(n-1, src, dest, aux);
    cout << "Move " << src << " to " << dest << "\n";
    f(n-1, aux, src, dest);
}

int main()
{
    int n;
    cin >> n;

    f(n, 'A', 'B', 'C');
    
}