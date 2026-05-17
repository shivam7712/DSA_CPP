#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<bool> isPrime(1000001, true);

    isPrime[0] = false;
    isPrime[1] = false;

    for(int i=2; i*i<=1000000; i++)
    {
        if(isPrime[i])
        {
            for(int j=i*i; j<=1000000; j+=i)
            {
                isPrime[j] = false;
            }
        }
    }

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int q;
    cin >> q;

    while(q--)
    {
        int x;
        cin >> x;

        if(isPrime[x])
        {
            cout << "YES" << "\n";
        }
        else
        {
            cout << "NO" << "\n";
        }
    }
    return 0;


}