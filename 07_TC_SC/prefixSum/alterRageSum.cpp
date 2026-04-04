#include <iostream>
#include <vector>

using namespace std;


int main()
{

    long long n, q;
    cin >> n >> q;

    vector<long long> v(n);

    for(int i=0; i<n; i++)
    {
        cin >> v[i];
    }

    vector<long long> help(n);
    
    long long sum = 0;

    for(int i=0; i<n; i++)
    {
        if(i%2 == 0) sum+=v[i];
        else sum-=v[i];
        help[i] = sum;
    }

    for(int i=1; i<=q; i++)
    {
        int l, r;
        cin >> l >> r;

        l--;
        r--;

        if(l == 0) cout << help[r] << endl;
        else {
            
            if(l%2 == 0) cout << help[r]-help[l-1] << endl;
            else cout << -(help[r]-help[l-1]) << endl;
        }
    }

    
    return 0;
}