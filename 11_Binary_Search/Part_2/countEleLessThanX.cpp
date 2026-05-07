#include <iostream>
#include <vector>

using namespace std;

// find the no of elements that are <= x

int count(vector<int> &v, int x)
{
    int r = v.size()-1;
    int l = 0;
    int ans = -1;

    while(l<=r)
    {
        int mid = (l+r)/2;

        if(v[mid] <= x)
        {
            ans = mid;
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    
    return ans + 1;
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

    cout << count(A, 4);
    
}