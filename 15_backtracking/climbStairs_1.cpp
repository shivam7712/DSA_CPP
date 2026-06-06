#include <iostream>
#include <vector>
using namespace std;

void print(vector<int> &v)
{
    for(int i=0; i<v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << "\n";
}

void f(int curr, int n, vector<int> &path)
{

    if(curr == n) 
    {
        print(path);
        return;
    }
    if(curr > n) return;

    path.push_back(1);
    f(curr + 1, n, path);
    path.pop_back();

    path.push_back(2);
    f(curr + 2, n, path);
    path.pop_back();
}


int main()
{
    int n;
    cin >> n;
    vector<int> path;
    f(0, n, path);
    
}