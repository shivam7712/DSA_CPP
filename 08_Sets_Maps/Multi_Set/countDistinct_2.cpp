#include <iostream>
#include <map>

using namespace std;

int main()
{
    int n;
    cin >> n;

    map <long long, int> ms;

    for(int i=1; i<=n; i++)
    {
        int q;
        cin >> q;

        if(q == 1)
        {
            long long x;
            cin >> x;
            ms[x]++;
        }
        else if(q == 2)
        {
            long long x;
            cin >> x;
            if(ms.find(x) != ms.end())
            {
                ms[x]--;
                if(ms[x] == 0) ms.erase(x);
            }
        }
        else if(q == 3)
        {
            cout << ms.size() << "\n";
        }
        else if(q == 4)
        {
            long long x;
            cin >> x;
            if(ms.find(x) != ms.end()) cout << "YES" << "\n";
            else cout << "NO" << "\n";
        }

    }

    
}