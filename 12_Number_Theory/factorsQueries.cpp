#include <iostream>
#include <vector>
using namespace std;

int main()
{

    int n;
    cin >> n;

    vector<int> help(1000001, 0);

    for(int i=1; i<=1000000; i++)
    {
        for(int j=i; j<=1000000; j+=i)
        {
            help[j]++;
        }

    }

    while(n--)
    {
        int x;
        cin >> x;
        cout << help[x] << "\n";
    }
    return 0;
}