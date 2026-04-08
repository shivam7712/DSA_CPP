#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);

    for(int i=0; i<n; i++)
    {
        cin >> v[i];
    }

    map<int, int> freq;

    for(int i=0; i<n; i++)
    {
        freq[v[i]]++;
    }

    for(auto i: freq)
    {
        cout << i.first << " => " << i.second << endl;
    }
    
    return 0;
}