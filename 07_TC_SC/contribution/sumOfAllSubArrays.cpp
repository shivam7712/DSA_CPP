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


    long long sum = 0;

    for(int i=0; i<n; i++)
    {
        long long occurrence = (i+1LL) * (n-i);
        sum += (occurrence) * v[i];
    }

    cout << sum;

    return 0;
}
