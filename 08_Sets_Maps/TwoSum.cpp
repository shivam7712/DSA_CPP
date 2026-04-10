#include <iostream>
#include <vector>
#include <map>

using namespace std;


int main()
{
    int nums[] = {2,7,11,15};

    map<int, int> mp;
    int target = 9;

    for(int i=0; i<4; i++)
    {
        int req = target - nums[i];
        if(mp.find(req) != mp.end()) {
             cout << mp[req] << " " << i;
             return 0;
        }
        mp[nums[i]] = i;

    }
    cout << "no pair found";
    
}