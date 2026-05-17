#include <iostream>
#include <vector>
using namespace std;

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    if (!(cin >> n)) return 0;

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