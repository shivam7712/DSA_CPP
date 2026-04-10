#include <iostream>
#include <vector>
#include <map>

using namespace std;


int main()
{
    int n = 7;
    int A[] = {1, 2, 1, 6, 2, 2, 8};

    map<int, int> mp;

    // to insert data in map like 17 => 1 and 18 => 2
    mp[17] = 1;
    mp[18] = 2;

    // to access

    cout << mp[17] << endl;  // 1
    cout << mp[18] << endl;  // 2

    // to get key value pairs

    auto it = mp.find(17);
    cout << "key: " << it->first << "\nvalue: " << it->second << endl;

    // if you want to check weather it is present in map or not

    if(mp.find(18) != mp.end()) cout << "yes " << 18 << " is present in map";
    
}