#include <iostream>
#include <vector>

using namespace std;

void printMaxSumArray(vector<int> &v)
{
    int sum = 0;
    int sp = 0;
    int r = -1;
    int l = -1;
    int ans = INT_MIN;

    for(int i=0; i<v.size(); i++)
    {
        if(sum<0)
        {
            sum = 0;
            sp = i;
        }
            
        sum += v[i];
        if(sum > ans)
        {
            ans = sum;
            l = sp;
            r = i;
        }
    }

    for(int i=l; i<=r; i++)
    {
        cout << v[i] << " ";
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
    
    printMaxSumArray(A);
}