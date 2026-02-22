#include <iostream>
using namespace std;

int main()
{
    char ch;
    cin >> ch;

    if( ch >= 'a' && ch<='z')
    {
        cout << ch << endl;
    }
    else {
        ch += 32;
        cout << ch << endl; 
    }
    return 0;
}
