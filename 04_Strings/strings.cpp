#include <iostream>
using namespace std;

int main()
{
    
    string s;
    // cin >> s;  if type "Hello world" it will only take Hello

    getline(cin, s);
    int n = s.size();

    cout << "string is " << s << endl;
    cout << "size of string " << n << endl;

    return 0;
}

