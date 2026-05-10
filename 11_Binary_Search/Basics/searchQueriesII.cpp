#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int binarySearch(vector<long long> &v, long long target)
{
    long long l = 0;
    long long r = v.size()-1;

    while(l<=r)
    {
        long long mid = (l+r)/2;

        if(v[mid] == target)
        {
            return mid+1;
        }
        else if(v[mid] > target)
        {
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    return -1;
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
        cout << binarySearch(A, ele) << "\n";
        q--;
    }


}