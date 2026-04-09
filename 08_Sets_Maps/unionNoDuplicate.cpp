#include <iostream>
#include <vector>
#include <set>

using namespace std;


int main()
{
    int n = 7;
    int m = 8;

    int A[] = {1, 2, 1, 6, 2, 2, 8};
    int B[] = {2, 1, 1, 1, 5, 8, 8, 9};

    set<int> ans;

    for(int i=0; i<n; i++)
    {
        ans.insert(A[i]);
    }

    for(int i=0; i<m; i++)
    {
        ans.insert(B[i]);
    }

    for(auto x: ans)
    {
        cout << x << " ";
    }

}