#include <iostream>
#include <vector>
#include <set>

using namespace std;

bool sumOfSub(vector<int> v, int target)
{
    int n = v.size();
    
    set<int> pre;
    
    int sum = 0;
    for(int i=0; i<n; i++)
    {
        sum+=v[i];

        if(sum == 0) return true;
        else if(pre.find(sum) != pre.end())
        {
            return true;
        }
        pre.insert(sum);
    }
    return false;

}

int main()
{
    vector<int> v = {7, 3, 4, 6, -10, -10, 7, 8, 1, -16};

    bool result = sumOfSub(v, 0);
    
    if(result) cout << "YES";
    else cout << "NO";
    
}