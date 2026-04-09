#include <iostream>
#include <vector>
#include <set>

using namespace std;


int main()
{
    int n = 7;

    int A[] = {1, 2, 1, 6, 2, 2, 8};

    set<int> dist;

    for(int i=0; i<n; i++)
    {
        dist.insert(A[i]);
    }

    for(auto x: dist)
    {
        cout << x << " ";
    }

}