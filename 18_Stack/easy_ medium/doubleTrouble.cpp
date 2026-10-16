#include <iostream>
#include <stack>
#include <string>
#include <algorithm>
using namespace std;

string doubleTrouble(string s)
{
    stack<char> st;
    for(char ch: s)
    {
        if(st.empty() || st.top()!=ch)
        {
            st.push(ch);
        }
        else st.pop();
    }
    string ans;
    while(!st.empty())
    {
        ans+=st.top();
        st.pop();
    }
    reverse(ans.begin(), ans.end());

    return ans;
}



int main()
{
    string s;
    cin >> s;

    cout << doubleTrouble(s);

    return 0;
}
