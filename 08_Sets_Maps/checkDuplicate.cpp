#include <iostream>
#include <vector>
#include <set>

using namespace std;


bool checkDuplicate(vector<int> v)
{
    set<int> st;
    
    int n = v.size();

    for(int i=0; i<n; i++)
    {
        if(st.find(v[i]) != st.end()) return true;
        st.insert(v[i]);
    }
    return false;
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
    if(checkDuplicate(v)) cout << "duplicate found";
    else cout << "no duplicate";
    return 0;
}