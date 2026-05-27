#include <iostream>
#include <vector>
using namespace std;

int main()
{   
    
    int n;
    cin >> n;

    vector<long long> v(n);

    for(int i=0; i<n; i++)
    {
        cin >> v[i];
    }

    long long xor_arr = 0;

    for(int i=0; i<n; i++)
    {
        xor_arr ^= v[i];
    }

    int pos = -1;

    for(int i=0; i<32; i++)
    {
        if(xor_arr & (1LL << i))
        {
            pos = i;
            break;
        }
            
    }

    int num1 = 0;
    int num2 = 0;

    for(int i=0; i<n; i++)
    {
        if ( v[i] & (1LL << pos)) num1^=v[i];
        else num2^= v[i];
    }

    if(num1 > num2) cout << num2 << " " << num1;
    else cout << num1 << " " << num2; 

    return 0;
}