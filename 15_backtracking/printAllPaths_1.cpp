#include <iostream>
#include <vector>
using namespace std;

void printPath(vector<char> path)
{
    for(char i: path) cout << i;
    cout << "\n";
}

void f(int i, int j, int n, int m, vector<char> path)
{
    if(i >= n || j >= m) return;
    if(i == n-1 && j== m-1) 
    {
        printPath(path);
        return;
    }

    // right
    path.push_back('R');
    f(i, j+1, n, m, path);
    path.pop_back();

    // down
    path.push_back('D');
    f(i+1, j, n, m, path);
    path.pop_back();

}

int main()
{
    int n, m;
    cin >> n >> m;

    vector<char> path;

    f(0, 0, n, m, path);
    
}