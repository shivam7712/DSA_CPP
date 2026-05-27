#include <iostream>
#include <vector>
using namespace std;

void setIthBit(int &n, int i)
{
    n = (n | (1U << i));
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<long long> v(n);

    for(int i=0; i<n; i++)
    {
        cin >> v[i];
    }

    int result = 0;

    for(int i=0; i<32; i++)
    {
        int bit_count = 0;
        for(int j=0; j<n; j++)
        {
            if (((unsigned int)v[j] >> i) & 1) 
            {
                bit_count++;
            }
            
        }
        if(bit_count % 3 != 0) setIthBit(result, i);
    }
    cout << result;
    
    return 0;
}