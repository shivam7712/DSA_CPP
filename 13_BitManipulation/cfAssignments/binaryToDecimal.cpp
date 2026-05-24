#include <iostream>
#include <string>
using namespace std;

int main()
{

    string binNo;
    cin >> binNo;

    int n = binNo.size();
    long long curr = 1LL << (n-1);

    long long result = 0;

    for(int i=0; i<n; i++)
    {
        if(binNo[i] == '1')
        {
            result += curr;
        }
        curr = curr >> 1;
    }

    cout << result;

    return 0;
}