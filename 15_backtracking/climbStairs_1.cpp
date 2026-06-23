#include <iostream>
#include <vector>
using namespace std;

void printPath(vector<int>& path)
{
    for(int i=0; i<path.size(); i++)
    {
        cout << path[i] << " ";
    }
    cout << "\n";
}

void f(int curr, int N, vector<int>& path)
{
    if(curr > N) return;
    if(curr == N) 
    {
        printPath(path);
        return;
    }

    // make jump of 1

    path.push_back(1);
    f(curr+1, N, path);
    path.pop_back();

    // make jump of 2
    path.push_back(2);
    f(curr+2, N, path);
    path.pop_back();
}

int main()
{
    int N;
    cin >> N;
    vector<int> path;
    f(0, N, path);
    return 0;
}