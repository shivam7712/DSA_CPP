#include <iostream>
#include <stack>
#include <vector>
using namespace std;


int main()
{
    int n;
    cin >> n;

    vector<int> v(n);

    for(int i=0; i<n; i++)
    {
        cin >> v[i];
    }

    stack<int> st;
    vector<int> ans(n);

    for(int i=n-1; i>=0; i--)
    {
        while(!st.empty() && st.top()<=v[i]) st.pop();
        if(st.empty()) ans[i]=-1;
        else ans[i]=st.top();
        st.push(v[i]);
    }
    for(int i: ans)
    {
        if(i==-1) cout << "X ";
        else cout << i << " ";
    }
    return 0;
}
