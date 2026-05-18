#include <iostream>
#include <vector>
using namespace std;

int main()
{

    int n;
    cin >> n;

    vector<int> countPrime(n+1, 0);

    for(int i=2; i<=n; i++)
    {
        if(countPrime[i] == 0)
        {
            for(int j=2*i; j<=n; j+=i)
            {
                countPrime[j]+=1;
            }
        }
    }

    int count = 0;

    for(int i=2; i<=n; i++)
    {
        if(countPrime[i] == 2)
        {
            count ++;
        }
    }

    cout << count;

    return 0;
}