#include <iostream>
#include <string>
#include <stack>
using namespace std;

bool isOpening(char ch)
{
    if(ch=='(' || ch=='{' || ch=='[') return true;
    return false;
}

bool isPair(char top, char close)
{
    if(top=='(' && close==')') return true;
    if(top=='{' && close=='}') return true;
    if(top=='[' && close==']') return true;
    return false;
}

bool isBalanced(string s)
{
    // in cpp char to ASCII and ASCII to char is done automatically so this works
    stack <int> st;
    for(char ch: s)
    {
        if(isOpening(ch))
        {
            st.push(ch);
        }
        else
        {
            if(st.empty()) return false;
            char top = st.top();
            if(isPair(top, ch))
            {
                st.pop();
            }
            else return false;
        }
    }
    return st.size() == 0;
}

int main()
{
    int q;
    cin >> q;
    cin.ignore();

    while(q--)
    {
        string s;
        getline(cin, s);

        if(isBalanced(s)) cout << "Yes\n";
        else cout << "No\n";
    }
    return 0;
}
