#include <iostream>
#include <vector>
using namespace std;

void f(int curr, int n, int k, vector<int> &path)
{
    if(curr == n)
    {
        for(int x : path) cout << x << " ";
        cout << "\n";
        return;
    }

    for(int i = 1; i <= k; i++)
    {
        if(curr + i > n) break;

        path.push_back(i);
        f(curr + i, n, k, path);
        path.pop_back();
    }
}

int main()
{
    
    int n, k;
    cin >> n >> k;

    vector<int> path;
    f(0, n, k, path);

    return 0;
}