#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;


void printRepeating(vector<int> &v)
{
    unordered_set<int> st;

    int n = v.size();
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(v[i] == v[j])
            {
                if(st.find(v[i]) == st.end())
                {
                    cout << v[i] << " ";
                    st.insert(v[i]);
                }
            }
        }
    }
}

int main()
{
    int n;
    cin >> n;

    vector<int> A(n);

    for(int i=0; i<n; i++)
    {
        cin >> A[i];
    }

    printRepeating(A);
    
}