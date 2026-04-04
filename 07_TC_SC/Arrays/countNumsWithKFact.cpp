#include <iostream>
#include <vector>

using namespace std;

int factors(int n)
{
    int count = 0;
    for(int i=1; i*i<=n; i++)
    {
        if(n%i == 0)
        {
            if(i == n/i) count+=1;
            else count+=2;
        }
        
        
    }
    return count;
}

int main()
{

    int n, q, k;
    cin >> n >> q >> k;

    vector<int> v(n);

    for(int i=0; i<n; i++)
    {
        cin >> v[i];
    }

    vector<int> help(n);
    int count = 0;
    
    for(int i=0; i<n; i++)
    {
        if(factors(v[i]) == k) count++;
        help[i] = count;
    }


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