#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{

    int n;
    cin >> n;

    vector<long long> v(n);

    for(long long i=0; i<n; i++)
    {
        cin >> v[i];  
        if(i % 2 == 0) v[i] = 0;  // just putting 0 at odd index (1 based index) 
    }

    vector<long long> help(n);
    long long sum = 0;

    for(long long i=0; i<n; i++)
    {
        sum+=v[i];
        help[i] = sum;
    }

    int q;
    cin >> q;

    for(int i=1; i<=q; i++)
    {
        int l, r;
        cin >> l >> r;

        l--;
        r--;

        if(l == 0) cout << help[r] << endl;
        else cout << help[r] - help[l-1] << endl;
    }

    
    return 0;
}