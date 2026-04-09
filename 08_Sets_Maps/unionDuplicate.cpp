#include <iostream>
#include <vector>
#include <map>

using namespace std;


int main()
{
    int n = 7;
    int m = 8;

    int A[] = {1, 2, 1, 6, 2, 2, 8};
    int B[] = {2, 1, 1, 1, 5, 8, 8, 9};

    map <int, int> mb;
    map <int, int> ans;

    for(int i=0; i<m; i++)
    {
        mb[B[i]]++;
    }

    for(int i=0; i<n; i++)
    {
        ans[A[i]]++;
    }

    for(int i=0; i<m; i++)
    {
        if(mb[B[i]] > ans[B[i]]) ans[B[i]] = mb[B[i]];
    }

    for(auto x: ans)
    {
        for(int i=1; i <= x.second; i++)
        {
            cout << x.first << " ";
        }
    }


}