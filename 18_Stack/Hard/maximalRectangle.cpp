#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> getLeftSmaller(const vector<int> &v)
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

vector<int> getRightSmaller(const vector<int> &v)
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

long long LargestArea(const vector<int> &v)
{
    int n = v.size();
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

    return ans;
}


int main()
{
    int n, m;
    cin >> n >> m;

    vector<string> s(n);

    for(int i=0; i<n; i++)
    {
        cin >> s[i];
    }

    long long res = 0;

    vector<int> h(m);
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(s[i][j]=='0') h[j] = 0;
            else h[j] += 1;
        }

        long long currLargest = LargestArea(h);
        res = max(currLargest, res);
    }

    cout << res;



    return 0;
}
