#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

vector<int> permutations;
vector<vector<int>> finalPermutations;
int count_of_Permutations = 0;
unordered_set<int> used;

void findPermutation(vector<int> &arr, int n)
{

    if(n == used.size())
    {
        count_of_Permutations ++;
        finalPermutations.push_back(permutations);
        return;
    }

    for(int i: arr)
    {
        if(used.find(i) == used.end())
        {
            used.insert(i);
            permutations.push_back(i);
            findPermutation(arr, n);
            permutations.pop_back();
            used.erase(i);
        }
    }
}

int main()
{

    int n;
    cin >> n;

    vector<int> arr(n);

    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }

    findPermutation(arr, n);
    cout << count_of_Permutations << "\n";
    for(vector<int> i: finalPermutations)
    {
        for(int j: i)
        {
            cout << j << " ";
        }
        cout << "\n";
    }


    return 0;
}
