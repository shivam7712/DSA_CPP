#include <iostream>
#include <stack>
#include <string>
#include <algorithm>
using namespace std;

string kTrouble(string s, int k)
{
    stack<pair<char, int>> st;
    for(char ch: s)
    {
        if(st.empty() || st.top().first!=ch)
        {
            st.push({ch, 1});
        }
        else
        {
            st.top().second++;
            if(st.top().second==k) st.pop();
        }
    }
    string ans;
    while(!st.empty())
    {
        for(int i=1; i<=st.top().second; i++)
        {
            ans+=st.top().first;
        }
        st.pop();
    }
    reverse(ans.begin(), ans.end());

    return ans;
}



int main()
{
    string s;
    cin >> s;
    int k;
    cin >> k;

    cout << kTrouble(s, k);

    return 0;
}
