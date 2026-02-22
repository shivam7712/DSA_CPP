#include <iostream>
using namespace std;

int main()
{
    
    string n1, s1;
    cin >> n1 >> s1;
    string n2, s2;
    cin >> n2 >> s2;

    if(s1 == s2)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }


    return 0;
}

// Input will consistes of two input names, if there surname is same they are brothers
// if brothers print "YES" else "NO"