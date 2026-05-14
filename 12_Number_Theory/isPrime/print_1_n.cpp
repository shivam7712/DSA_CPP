#include <iostream>
#include <vector>
using namespace std;



bool isPrime(int n)
{
    if(n == 0 || n == 1) return false;
    if(n == 2) return true;

    for(int i=2; i*i <= n; i++)
    {
        if(n % i == 0) return false;
    }

    return true;
}

int main()
{

    for(int i=0; i<10; i++)
    {
        if(isPrime(i)) cout << i << "\n";
    }
    
    
   
    return 0;
}