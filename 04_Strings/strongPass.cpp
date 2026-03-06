#include <iostream>
using namespace std;
 
int main() {
    string s;
    getline(cin, s);

    int n = s.size();

    if(n != 10) {
        cout << "Weak" ;
        return 0;
    }

    bool isLower = false; 
    bool isUpper = false;
    bool isDigit = false;
    bool isSpecial = false;

    for(int i=0; i<n; i++)

    {
        char cur = s[i];
        if(cur >= 'a' && cur <= 'z')
        {
            isLower = true;
        }
        else if(cur >= 'A' && cur <= 'Z')
        {
            isUpper = true;
        }
        else if(cur >= '0' && cur <= '9')
        {
            isDigit = true;
        }
        else {
            isSpecial = true;
        }
    }

    if(isDigit && isSpecial && isLower && isUpper)
    {
        cout << "Strong";
    }
    else 
    {
        cout << "Weak";
    }
    
    return 0;
}
