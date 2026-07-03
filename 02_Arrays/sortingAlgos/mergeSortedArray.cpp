#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    vector<int> arr(n);
    vector<int> brr(m);

    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }

    for(int i=0; i<m; i++)
    {
        cin >> brr[i];
    }

    int i = 0, j = 0;

    while(i < n && j < m)
    {
        if(arr[i] < brr[j])
        {
            cout << arr[i] << " ";
            i++;
        }
        else
        {
            cout << brr[j] << " ";
            j++;
        }
    }
    while(i < n)
    {
        cout << arr[i] << " ";
        i++;
    }
    while(j < m)
    {
        cout << brr[j] << " ";
        j++;
    }
}
