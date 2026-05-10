#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int firstOcc(vector<long long> &v, long long target)
{
    int l = 0;
    int r = v.size() - 1;
    int ans = -1;

    while(l<=r)
    {
        int mid = (l+r)/2;

        if(v[mid] == target)
        {
            ans = mid;
            r = mid - 1;
        }
        else if(v[mid] > target)
        {
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    if(ans == -1) return -1;
    return ans+1;
}
int lastOcc(vector<long long> &v, long long target)
{
    int l = 0;
    int r = v.size() - 1;
    int ans = -1;

    while(l<=r)
    {
        int mid = (l+r)/2;

        if(v[mid] == target)
        {
            ans = mid;
            l = mid + 1;
        }
        else if(v[mid] > target)
        {
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    if(ans == -1) return -1;
    return ans+1;
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

    while(q > 0)
    {
        long long ele;
        cin >> ele;
        long long first = firstOcc(A, ele);
        long long last = lastOcc(A, ele);

        if(first == -1)
        {
            cout << -1 << "\n";
        }
        else
        {
            cout << first << " " << last << "\n";
        }
        
        
        q--;
    }


}