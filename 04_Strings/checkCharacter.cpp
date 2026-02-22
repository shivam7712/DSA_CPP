#include <iostream>
using namespace std;

int main()
{
    char ch;
    cin >> ch;

    if( ch >= 'A' && ch<='Z')
    {   
        cout << "upperCase" << endl;
    }
    else if ( ch >= 'a' && ch <= 'z')
    {
        cout << "lowerCase" << endl;
    }
    else if( ch >= '0' && ch <= '9')
    {
        cout << "digit" << endl;
    }
    else 
    {
        cout << "special character" << endl;
    }
    
    return 0;
}

