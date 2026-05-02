#include <iostream>
#include <vector>

using namespace std;

// sort the 0s, 1s and 2s
// in one pass

void sort(vector<int> &v)
{
    int l = 0;
    int i = 0;
    int r = v.size()-1;

    while(i<=r)
    {
        if(v[i] == 0)
        {
            swap(v[i], v[l]);
            l++;
            i++;
        }
        else if(v[i] == 1)
        {
            i++;
        }
        else
        {
            swap(v[i], v[r]);
            r--;
        }
    }
}

int main()
{
    int n;
    cin >> n;

    vector<int> A(n);

    for(int i=0; i<n; i++)
    {
        cin >> A[i];
    }

    sort(A);

    for(int i=0; i<n; i++)
    {
        cout << A[i] << " ";
    }
    cout << "\n";
    
}