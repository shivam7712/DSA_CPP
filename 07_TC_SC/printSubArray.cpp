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

    for(int i=0; i<n; i++)
    {
        for(int j=i; j<n; j++)
        {
            
            for(int l=i; l<=j; l++)
            {
                cout << v[l] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}