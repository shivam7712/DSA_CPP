#include <iostream>
#include <vector>
#include <set>

using namespace std;

// find the count of good numbers in the every subarray of size k
// in our case we have inserted the good numbers in the set st

int main()
{
    int n, m, k;
    cin >> n >> m >> k;

    vector<int> v(n);

    for(int i=0; i<n; i++)
    {
        cin >> v[i];
    }

    set <long long> st;

    for(int i=0; i<m; i++)
    {
        long long num;
        cin >> num;
        st.insert(num);
    }

    int count = 0;

    for(int i=0; i<k; i++)
    {
        if(st.find(v[i]) != st.end()) count++;
    }

    cout << count << " ";

    for(int i=k; i<n; i++)
    {
        if(st.find(v[i]) != st.end()) count++;
        if(st.find(v[i-k]) != st.end()) count--;
        cout << count << " ";
    }
    
}