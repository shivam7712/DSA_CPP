#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int main()
{

    int n, x;
    cin >> n >> x;


    vector<int> v(n);
    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    unordered_map<int, int> mp;

    for(int i=0; i<n; i++)
    {
        int need = x - v[i];
        if(mp.find(need) != mp.end())
        {
            cout << mp[need]+1 << " " << i+1;
            return 0;
        }
        mp[v[i]] = i;
    }

    cout << -1;

    return 0;
}
