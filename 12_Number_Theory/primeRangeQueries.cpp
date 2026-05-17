#include <iostream>
#include <vector>
using namespace std;

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, q;
    if (!(cin >> n)) return 0;
    cin >> q;

    vector<int> factors(n+1, 0);

    for(int i=1; i<=n; i++)
    {
        for(int j=i; j<=n; j+=i)
        {
            factors[j]++;
        }

    }

    int count = 0;
    vector<int> countPrime(n+1, 0);

    for(int i=1; i<=n; i++)
    {
        if(factors[i] == 2) count++;
        countPrime[i] = count;
    }


    while(q--)
    {
        int l, r;
        cin >> l >> r;

        if(l == 0) cout << countPrime[r] << "\n";
        else cout << countPrime[r] - countPrime[l-1] << "\n";
        
    }


    
    return 0;
}