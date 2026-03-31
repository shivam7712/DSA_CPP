#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    long long n;
    cin >> n;

    vector<long long> small, large;
    
    for(long long i=1; i*i<=n; i++)
    {
        if(n%i == 0)
        {
            
            small.push_back(i);
            if(i != n/i) large.push_back(n/i);
            
        }
    }
    for(long long x: small)
    {
        cout << x << " ";
    }
    
    reverse(large.begin(), large.end());

    for(long long x: large)
    {
        cout << x << " ";
    }
    return 0;
}