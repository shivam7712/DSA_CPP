#include <iostream>
#include <vector>

using namespace std;

int findFirst(vector<int> &v, int t)
{
    int n = v.size();
    int r = n-1;
    int l = 0;
    int ans = -1;

    while(l<=r)
    {
        int mid = (l+r)/2;
        
        if(v[mid] == t)
        {
            ans = mid;
            r = mid-1;
        }
        else if(v[mid] < t) l = mid+1;
        else r = mid - 1;
    }
    return ans;
}

int findLast(vector<int> &v, int t)
{
    int l = 0;
    int r = v.size() - 1;
    int ans = -1;

    while (l<=r)
    {
        int mid = (r+l) / 2;

        if(v[mid] == t)
        {
            ans = mid;
            l = mid + 1;
        }
        else if(v[mid] > t) r = mid - 1;
        else l = mid + 1;
    }

    return ans;
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

    int first = findFirst(A, t);
    int last = findLast(A, t);

    if(first == -1) cout << 0;
    else cout << last - first + 1;
    
}