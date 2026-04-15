#include <iostream>
#include <vector>
#include <map>

using namespace std;


// this function prints index of subarray containing sum == target

void sumOfSub(vector<long long>& v, long long target)
{
    long long n = v.size();
    
    map<long long, long long> mp;
    long long pre = 0;

    for(long long i=0; i<n; i++)
    {
        pre+=v[i];
        
        if(pre == target)
        {
            cout << 1 << " " << i + 1;
            return;
        }
        else if(mp.find(pre-target) != mp.end())
        {
            cout << mp[pre-target] + 1 << " " << i + 1;
            return;
        }
        mp[v[i]] = i;
    } 
    cout << -1;

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
    sumOfSub(v, x);
    
}