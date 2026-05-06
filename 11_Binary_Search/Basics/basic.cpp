#include <iostream>
#include <vector>

using namespace std;

int find(vector<int> v, int t)
{
    int l = 0;
    int r = v.size() - 1;

    while (l<=r)
    {
        int mid = (r+l) / 2;

        if(v[mid] == t) return mid;
        else if(v[mid] > t) r = mid - 1;
        else l = mid + 1;
    }

    return -1;
}

int main()
{
    int n, t;
    cin >> n >> t;

    vector<int> A(n);

    for(int i=0; i<n; i++)
    {
        cin >> A[i];
    }

    cout << find(A, t);
    
}