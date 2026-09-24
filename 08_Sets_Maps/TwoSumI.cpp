#include <iostream>
#include <unordered_set>
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

    unordered_set<int> s;

    for(int i=0; i<n; i++)
    {
        int need = x - v[i];
        if(s.find(need) != s.end())
        {
            cout << "TRUE";
            return 0;
        }
        s.insert(v[i]);
    }

    cout << "FALSE";

    return 0;
}
