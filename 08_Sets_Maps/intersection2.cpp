#include <iostream>
#include <map>

using namespace std;

int main()
{
    map<long long, long long> mp;
    map<long long, long long> mp1;
    
    int n1; 
    cin >> n1;

    for(int i=0; i<n1; i++)
    {
        int num;
        cin >> num;
        mp[num]++;
    }

    int n2;
    cin >> n2;

    for(int i=0; i<n2; i++)
    {
        int num;
        cin >> num;
        mp1[num]++;
    }
    map<long long, long long> res;
    
    int minSize = 0;
    if(mp.size() >= mp1.size())
    {
        for (auto const& [key, val] : mp) {
            if(mp1.find(key) != mp1.end()) 
            {
                long long minimum = min(val, mp1[key]);
                minSize+=minimum;
                res[key] = minimum;
            }
        }
    }
    else
    {
        for (auto const& [key, val] : mp1) {
            if(mp.find(key) != mp.end()) 
            {
                long long minimum = min(val, mp[key]);
                minSize+=minimum;
                res[key] = minimum;
            }
        }
    }

    cout << minSize << "\n";
    
    for (auto const& [key, val] : res) {
        for(int i=0; i<val; i++)
        {
            cout << key << " ";
        }
    }
    
}

