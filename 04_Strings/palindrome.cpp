#include <iostream>
using namespace std;
 
int main() {
    string s;
    getline(cin, s);

    int n = s.size();

    for(int i=0; i<n; i++)
    {
        if(i <= n-i-1) {
            if(s[i] != s[n-i-1])
            {
                cout << "NO";
                return 0;
            }
        }
        else {
            break;
        }

    }
    cout << "YES";
    
    return 0;
}