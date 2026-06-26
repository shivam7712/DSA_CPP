#include <iostream>
#include <vector>
#include <string>
using namespace std;

void printPath(string res)
{
    cout << res;
    cout << "\n";
}

void f(int i, int j, int n, int m, vector<vector<int>> path, string res)
{
    if(i >= n || j >= m) return;
    if(path[i][j] == 1) return;
    if(i == n-1 && j== m-1) 
    {
        printPath(res);
        return;
    }

    // right
    res.push_back('R');
    f(i, j+1, n, m, path, res);
    res.pop_back();

    // down
    res.push_back('D');
    f(i+1, j, n, m, path, res);
    res.pop_back();

}

int main()
{
    int n, m;
    cin >> n >> m;

    vector<vector<int>> path(n, vector<int>(m, 0));
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin >> path[i][j];
        }
    }

    f(0, 0, n, m, path, "");
    
}