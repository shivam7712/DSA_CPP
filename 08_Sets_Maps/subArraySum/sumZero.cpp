#include <iostream>
#include <vector>
#include <set>

using namespace std;


// this function return trye if the array contains a subarray with sum 0

bool sumOfSub(vector<int> v)
{
    int n = v.size();
    
    set<int> st;
    int pre = 0;

    for(int i=0; i<n; i++)
    {
        pre+=v[i];
        
        if(pre == 0) return true;
        else if(st.find(pre) != st.end()) return true;
        st.insert(pre);
    } 
    return false;

}

int main()
{
    vector<int> v = {7, 3, 4, 6, -10, -10, 7, 8, 1, -16};

    bool result = sumOfSub(v);
    
    if(result) cout << "YES";
    else cout << "NO";
    
}