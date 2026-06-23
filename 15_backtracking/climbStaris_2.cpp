#include <iostream>
#include <vector>
using namespace std;

void printPath(vector<int>& path)
{
    for(int x: path) cout << x << " ";
    cout << "\n";
}

void f(int curr, int N, int K,vector<int>& path)
{
    if(curr > N) return;
    if(curr == N) 
    {
        printPath(path);
        return;
    }

    for(int i=1; i<=K; i++)
    {
        path.push_back(i);
        f(curr+i, N, K, path);
        path.pop_back();
    }
    
}

int main()
{
    int N, K;
    cin >> N >> K;
    vector<int> path;
    f(0, N, K, path);
    return 0;
}