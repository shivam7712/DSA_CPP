#include <iostream>
#include <vector>

using namespace std;

int n;
long long k;
vector<long long> input;
vector<long long> path;
vector<vector<long long>> ans;


void print(vector<vector<long long>>& ans)
{
    cout << ans.size() << "\n";

    for(int i=0; i<ans.size(); i++)
    {
        for(int e: ans[i]) cout << e << " ";
        cout << "\n";
    }

}

void f(int i, long long sum)
{

    if(i == n)
    {
        if(sum == k) ans.push_back(path);
        return;
    }
    
    //take
    path.push_back(input[i]);
    f(i+1, sum + input[i]);
    path.pop_back();

    //not take

    f(i+1, sum);
    

}

int main()
{
    
    cin >> n >> k;

    input.resize(n);

    for(int i=0; i<n; i++)
    {
        cin >> input[i];
    }

    f(0, 0);

    print(ans);
    
}