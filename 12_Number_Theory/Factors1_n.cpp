#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> arr[n+1];

    for(int i=1; i<=n; i++)
    {
        for(int j=i; j<=n; j+=i)
        {
            arr[j].push_back(i);
        }
    }

    for(int i=1; i<=n; i++)
    {
        cout << i << "-> ";
        for(int j=0; j<arr[i].size(); j++)
        {
            cout <<  arr[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}
