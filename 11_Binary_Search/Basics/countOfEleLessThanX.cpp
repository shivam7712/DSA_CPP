#include <iostream>
#include <vector>

using namespace std;

int find(vector<int> &v, int t)
{
    int r = v.size()-1;
    int l = 0;
    int ans = -1;

    while(l<=r)
    {
        int mid = (l+r)/2;
        
        if(v[mid] <= t)
        {
            ans = mid;
            l = mid + 1;
        }
        else r = mid - 1;
    }
    return ans + 1;
}

int main()
{

    int n, q;
    cin >> n >> q;


    vector<int> A(n);

    for(int i=0; i<n; i++)
    {
        cin >> A[i];
    }


    for(int i=1; i<=q; i++)
    {
        int x;
        cin >> x;

        int ans = find(A, x);
        cout << ans << '\n';
    }   

    
}