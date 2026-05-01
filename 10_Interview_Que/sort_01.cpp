#include <iostream>
#include <vector>

using namespace std;

// sort the 0 and 1


// in one pass
void sort(vector<int> &v)
{
    int l = 0;
    int r = v.size()-1;

    while(l<=r)
    {
        if(v[l] == 0) l++;
        else 
        {
            swap(v[l], v[r]);
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

    /* int countZero = 0;
    int countOne = 0;

    for(int i=0; i<n; i++)
    {
        if(A[i] == 0) countZero++;
        else countOne++;
    }

    int i = 0;

    while(countZero > 0)
    {
        A[i++] = 0;
        countZero--;
    }
    while(countOne > 0)
    {
        A[i++] = 1;
        countOne--;
    } */

    sort(A);

    for(int i=0; i<n; i++)
    {
        cout << A[i] << " ";
    }
    cout << "\n";
    
}