#include <iostream>
#include <vector>
using namespace std;

// print every subset

int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;

    vector<long long> v(n);

    for(int i=0; i<n; i++)
    {
        cin >> v[i];
    }

    for(int mask = 1; mask < (1 << n); mask++)
    {
        for(int i=0; i<n; i++)
        {
            if(mask & (1 << i))
            {
                cout << v[i] << " ";
            }
        }
        cout << "\n";
    }

    return 0;
}