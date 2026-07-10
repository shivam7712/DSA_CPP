#include <iostream>
#include <vector>

using namespace std;

vector<int> path;
vector<vector<int>> res;
int sum = 0;

void printPath()
{
    cout << res.size() << "\n";
    for(int i = 0; i<res.size(); i++)
    {
        cout << res[i].size() << " ";
        for(int j = 0; j<res[i].size(); j++)
        {
            cout << res[i][j] << " ";
        }
        cout << "\n";
    }
    cout << "\n";
}

void f(vector<int> &arr, int i, int n, int k)
{

    if(sum == k)
    {
        res.push_back(path);
        return;
    }

    if(i == n || sum > k)
    {
        return;
    }

    // take
    path.push_back(arr[i]);
    sum += arr[i];
    f(arr, i, n, k);
    sum -= arr[i];
    path.pop_back();

    // not take
    f(arr, i+1, n, k);
}

int main()
{


    int n, k;

    cin >> n >> k;
    vector<int> arr(n);

    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }

    f(arr, 0, n, k);
    printPath();

    return 0;
}
