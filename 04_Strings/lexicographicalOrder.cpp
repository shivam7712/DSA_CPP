#include <iostream>
using namespace std;

int main()
{
    
    string a, b;
    cin >> a >> b;

    if( a < b )
    {
        cout << "A";
    }
    else if(a == b)
    {
        cout << "Equal";
    }
    else
    {
        cout << "B";
    }

    return 0;
}

// lexixographical order: which word comes first 
// que: input two strings a and b, Print "A" if a comes first or "B" if b comes first
// or if a == b print "Equal"

// we can do this by loops but c++ does it comparison operator