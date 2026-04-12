#include <iostream>
#include <set>

using namespace std;

int main()
{
    set<long long> st;
    set<long long> res;
    
    int n1; 
    cin >> n1;

    for(int i=0; i<n1; i++)
    {
        int num;
        cin >> num;
        st.insert(num);
    }

    int n2;
    cin >> n2;

    for(int i=0; i<n2; i++)
    {
        int num;
        cin >> num;
        if(st.find(num) != st.end()) res.insert(num);
    }
    cout << res.size() << "\n";
    for(int i: res)
    {
        cout << i << " ";
    }
}