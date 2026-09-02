#include <iostream>
#include <vector>

using namespace std;

int main()
{

    int n;
    cin >> n;

    vector<int> v(n);

    for(int i=0; i<n; i++)
    {
        cin >> v[i];
    }

    vector<int> prefix;

    int sum = 0;

    for(int i: v)
    {
        sum+=i;
        prefix.push_back(sum);
    }

    for(int i=0; i<n; i++)
    {
        for(int j=i; j<n; j++)
        {
            if(i==0) cout << prefix[j];
            else cout << prefix[j] - prefix[i-1];
            cout << "\n";
        }
    }



    return 0;
}
