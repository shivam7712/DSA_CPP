#include <iostream>
#include <vector>
#include <map>

using namespace std;

int countPairSum(vector<int> v, int target)
{
    int n = v.size();
    map<int, int> mp;

    int count = 0;

    for(int i=0; i<n; i++)
    {
        int req = target - v[i];
        if(mp.find(req) != mp.end())
        {
            count+=mp[req];
        }
        mp[v[i]]++;
    }
    return count;

}

int main()
{
    vector<int> v = {1, 7, 6, 5, 2, 9, 11, 6, 5};

    int result = countPairSum(v, 11);
    cout << result;
    
}