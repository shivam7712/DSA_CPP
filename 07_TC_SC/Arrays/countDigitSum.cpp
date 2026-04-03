#include <iostream>
#include <vector>

using namespace std;

int main()
{

    int n, q, k;
    cin >> n >> q >> k;

    vector<long long> v(n);

    for(long long i=0; i<n; i++)
    {
        cin >> v[i];
    }

    vector<long long> help(n);
    long long count = 0;
    
    for(long long i=0; i<n; i++)
    {
        long long digit = v[i];
        long long sum = 0;
        while (digit > 0)
        {
            int ld = digit%10;
            sum +=ld;
            digit/=10;
        }
        if(sum == k) count+=1;
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