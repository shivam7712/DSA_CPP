#include <iostream>
#include <vector>
using namespace std;

// printing prime factors of n

int main()
{

    long long n;
    cin >> n;

    for(long long i=2; i*i<=n; i++)
    {
        if(n%i == 0)
        {
            long long count = 0;
            while(n%i == 0)
            {
                count++;
                n/=i;
            }
            cout << i << "^" << count << " ";
        }
    }

    if(n > 1)
    {
        cout << n << "^1";
    }
   
    return 0;
}