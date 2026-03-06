#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    getline(cin, s); // you can also pass a third argument that is delimiter

    cout << s.substr(6, 3) << endl; // (startIdx, length)

    int idx = s.find("is");  // return first index of the found substring
    cout << idx;
    return 0;
}