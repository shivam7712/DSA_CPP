#include <iostream>
using namespace std;

int main()
{
    char ch;
    cin >> ch;

    if( ch >= 'A' && ch<='Z')
    {   
        ch += 32;
        cout << ch << endl;
    }
    
    cout << ch << endl; 
    
    return 0;
}

// 'a' - 'A' = 32
