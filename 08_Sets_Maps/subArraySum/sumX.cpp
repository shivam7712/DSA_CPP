#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;


// this function return trye if the array contains a subarray with sum target

bool sumOfSub(vector<long long>& v, long long target)
{
    long long n = v.size();
    
    unordered_set<long long> st;
    long long pre = 0;

    for(long long i=0; i<n; i++)
    {
        pre+=v[i];
        
        if(pre == target) return true;
        else if(st.find(pre-target) != st.end()) return true;
        st.insert(pre);
    } 
    return false;

}

int main()
{
    long long n, x;
    cin >> n >> x;

    vector<long long> v(n);

    for(long long i=0; i<n; i++)
    {
        cin >> v[i];
    }
    bool result = sumOfSub(v, x);
    
    if(result) cout << "YES";
    else cout << "NO";
    
}

/* 
test case

    5 3
    1 2 3 4 5 
*/