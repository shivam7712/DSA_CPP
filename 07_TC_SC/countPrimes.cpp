#include <iostream>

using namespace std;

bool isPrime(long long n)
{
    if(n == 2) return true;
    if(n <= 1 || n%2 == 0) return false;

    for(long long i=3; i*i<=n; i+=2)
    {
        if(n%i == 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    long long n;
    cin >> n;

    int count = 0;
    if(n >=2) count ++;
    for(int i=3; i<=n; i+=2)
    {
       if(isPrime(i))
       {
        count++;
       }
    }
    cout << count;
}