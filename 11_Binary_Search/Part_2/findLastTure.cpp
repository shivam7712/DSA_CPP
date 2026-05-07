#include <iostream>
#include <vector>

using namespace std;

// leading true and trailing flase

int findLastTrue(vector<char> &v)
{
    int r = v.size()-1;
    int l = 0;
    int ans = -1;

    while(l<=r)
    {
        int mid = (l+r)/2;

        if(v[mid] == 'T')
        {
            ans = mid;
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    return ans;
}

int main()
{

    int n;
    cin >> n;


    vector<char> A(n);

    for(int i=0; i<n; i++)
    {
        cin >> A[i];
    }  

    cout << findLastTrue(A);
    
}