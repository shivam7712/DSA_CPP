#include <iostream>
#include <vector>
#include <string>

using namespace std;

string path = "";
string finalPath = "";
int c = 0;

void findPath(int i, int j, vector<vector<int>> &mat, vector<vector<bool>> &visited, int n)
{

    if(i>=n || i<0 || j>=n || j < 0) return;


    if(mat[i][j] == 0) return;

    if(visited[i][j]) return;

    if(i == n-1 && j == n-1)
    {
        finalPath += path + "\n";
        c++;
        return;
    }

    visited[i][j] = true;

    // down
    path.push_back('D');
    findPath(i+1, j, mat, visited, n);
    path.pop_back();

    // left
    path.push_back('L');
    findPath(i, j-1, mat, visited, n);
    path.pop_back();

    // right
    path.push_back('R');
    findPath(i, j+1, mat, visited, n);
    path.pop_back();


    // up
    path.push_back('U');
    findPath(i-1, j, mat, visited, n);
    path.pop_back();

    visited[i][j] = false;


}

int main()
{

    int n;
    cin >> n;

    vector<vector<int>> mat(n, vector<int>(n, 0));
    vector<vector<bool>> visited(n, vector<bool>(n, false));

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin >> mat[i][j];
        }
    }

    findPath(0, 0, mat, visited, n);
    cout << c << "\n";
    cout << finalPath;

    return 0;
}
