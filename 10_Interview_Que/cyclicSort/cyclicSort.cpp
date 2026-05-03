#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;


void printRepeating(vector<int> &v)
{
    // cyclic sort

    int n = v.size();

    for(int i=0; i<n; i++)
    {
        int element = v[i];
        if(element != v[element])
        {
            swap(v[i], v[element]);
            i--; // stay on the same index
        }
    }

    for(int i=0; i<n; i++)
    {
        if(v[i] != i)
        {
            // i is missing
            // cout << "missing: " << i << '\n';
            // v[i] is repeating
            cout << "repeating: " << v[i] << '\n';
        }
    }
}

int main()
{
    int n;
    cin >> n;

    vector<int> A(n);

    for(int i=0; i<n; i++)
    {
        cin >> A[i];
    }

    printRepeating(A);
    
}