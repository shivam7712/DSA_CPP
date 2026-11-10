#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> v(n);
    for(int i=0; i<n; i++) cin >> v[i];

    vector<int> ans(n);
    stack<int> st;

    for(int i=0; i<n; i++)
    {
        while(!st.empty() && v[st.top()] <= v[i]) st.pop();
        if(st.empty()) ans[i] = i+1;
        else ans[i] = i-st.top();
        st.push(i);
    }

    for(int i: ans) cout << i << " ";


    return 0;
}
