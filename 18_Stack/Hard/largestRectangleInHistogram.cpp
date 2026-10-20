#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> getLeftSmaller(vector<int> &v)
{
    int n = v.size();
    stack<int> st;
    vector<int> ans(n);

    for(int i=0; i<n; i++)
    {
        while(!st.empty() && v[st.top()] >= v[i]) st.pop();
        if(st.empty()) ans[i]=-1;
        else ans[i]=st.top();
        st.push(i);
    }
    return ans;
}

vector<int> getRightSmaller(vector<int> &v)
{
    int n = v.size();
    stack<int> st;
    vector<int> ans(n);

    for(int i=n-1; i>=0; i--)
    {
        while(!st.empty() && v[st.top()] >= v[i]) st.pop();
        if(st.empty()) ans[i]=n;
        else ans[i]=st.top();
        st.push(i);
    }
    return ans;
}

int main()
{
    int n;
    cin >> n;

    vector<int> v(n);

    for(int i=0; i<n; i++)
    {
        cin >> v[i];
    }

    vector<int> left = getLeftSmaller(v);
    vector<int> right = getRightSmaller(v);

    long long ans = 0;

    for(int i=0; i<n; i++)
    {
        int h = v[i];
        int w = 1;

        int l = left[i];
        int r = right[i];
        w = r-l-1;
        long long curr = 1LL * h * w;
        ans = max(ans, curr);
    }

    cout << ans;


    return 0;
}
