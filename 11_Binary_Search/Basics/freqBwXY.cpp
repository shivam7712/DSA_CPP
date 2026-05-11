#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>

using namespace std;

int find_x(vector<long long> &v, long long x)
{
    int l = 0;
    int r = v.size() - 1;
    int ans = -1;

    while(l<=r)
    {
        int mid = (l+r)/2;

        if(v[mid] >= x)
        {
            ans = mid;
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }

    return ans;
}
int find_y(vector<long long> &v, long long y)
{
    int l = 0;
    int r = v.size() - 1;
    int ans = -1;

    while(l<=r)
    {
        int mid = (l+r)/2;

        if(v[mid] <= y)
        {
            ans = mid;
            l = mid+1;
        }
        else r = mid - 1;
    }

    return ans;
}


int main()
{

    long long n, q;
    cin >> n >> q;

    
    vector<long long> A(n);

    for(long long i=0; i<n; i++)
    {
        cin >> A[i];
    }  

    sort(A.begin(), A.end());

    while(q > 0)
    {
        long long x, y;
        cin >> x >> y;

        if(y < x) 
        {
            cout << 0 << "\n";
            q--;
            continue;
        } 

        long long left = find_x(A, x);
        long long right = find_y(A, y);

        if(left == -1 || right == -1) 
        {
            cout << 0 << "\n";
            q--;
            continue;
        }
        cout << right - left + 1 << "\n";
        
        q--;
    }


}