#include <iostream>
#include <vector>
#include <map>

using namespace std;


// this function returns the count of subarray sum = target

long long count(vector<long long>& v, long long target)
{
    long long n = v.size();
    
    map<long long, long long> mp;
    long long pre = 0;
    long long count = 0;
    for(long long i=0; i<n; i++)
    {
        pre+=v[i];
        
        if(pre == target)
        {
            count++;
        }
        if(mp.find(pre-target) != mp.end())
        {
            count+=mp[pre-target];
        }
        mp[pre]+=1;
    } 
    return count;

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
    long long result = count(v, x);
    cout << result;
    
}